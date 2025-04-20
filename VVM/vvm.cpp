#include "vvm.h"
#include "ui_vvm.h"
#include "loginsystem.h"

#include <QCloseEvent>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QRadioButton>
#include <QCheckBox>
#include <QFont>
#include <QDate>

vvm::vvm(QSqlDatabase &database, const QString& voterId, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::vvm)
    , loginWindow(nullptr)
    , db(database)
    , currentVoterId(voterId)
{
    ui->setupUi(this);
    displayCandidates();

    QString currentDate = QDate::currentDate().toString("MMM dd, yyyy");
    ui->label_date->setText(currentDate);

    connect(ui->submitButton, &QPushButton::clicked, this, &vvm::submitVote);
}

vvm::~vvm()
{
    delete ui;
}

void vvm::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Logout Confirmation", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        if (loginWindow) {
            delete loginWindow;
        }

        loginWindow = new loginsystem(db, nullptr);
        this->close();
        loginWindow->exec();
        event->accept();
    } else {
        event->ignore();
    }
}

void vvm::displayCandidates()
{
    QSqlQuery getCandidate(db);
    getCandidate.prepare("SELECT first_name || ' ' || last_name AS full_name, position, party FROM candidates_info");

    if (!getCandidate.exec()) {
        qDebug() << "Query failed:" << getCandidate.lastError().text();
        return;
    }

    QFont font("Segoe UI", 12);
    font.setBold(false);

    while (getCandidate.next()) {
        QString fullName = getCandidate.value("full_name").toString();
        QString position = getCandidate.value("position").toString();
        QString party = getCandidate.value("party").toString();

        QString displayText = fullName + " - " + party;

        if (position == "Barangay Captain") {
            QRadioButton* radio = new QRadioButton(displayText);
            radio->setFont(font);
            radio->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
            ui->captainLayout->addWidget(radio);
            ui->captainLayout->setAlignment(Qt::AlignLeft);
        }
        else if (position == "Barangay Councilor") {
            QCheckBox* checkbox = new QCheckBox(displayText);
            checkbox->setFont(font);
            checkbox->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
            ui->bCouncilorsLayout->addWidget(checkbox);
            ui->bCouncilorsLayout->setAlignment(Qt::AlignLeft);
        }
        else if (position == "SK Chairman") {
            QRadioButton* radio = new QRadioButton(displayText);
            radio->setFont(font);
            radio->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
            ui->skChairmanLayout->addWidget(radio);
            ui->skChairmanLayout->setAlignment(Qt::AlignLeft);
        }
        else if (position == "SK Councilor") {
            QCheckBox* checkbox = new QCheckBox(displayText);
            checkbox->setFont(font);
            checkbox->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
            ui->skCouncilorsLayout->addWidget(checkbox);
            ui->skCouncilorsLayout->setAlignment(Qt::AlignLeft);
        }
    }
}

void vvm::submitVote()
{
    QStringList votedCandidates;

    auto collectRadioVote = [&](QLayout* layout) -> QString {
        for (int i = 0; i < layout->count(); ++i) {
            QRadioButton* radio = qobject_cast<QRadioButton*>(layout->itemAt(i)->widget());
            if (radio && radio->isChecked()) {
                return radio->text();
            }
        }
        return "";
    };

    auto collectCheckboxVotes = [&](QLayout* layout, int maxVotes, const QString& title) -> QStringList {
        QStringList selected;
        for (int i = 0; i < layout->count(); ++i) {
            QCheckBox* checkbox = qobject_cast<QCheckBox*>(layout->itemAt(i)->widget());
            if (checkbox && checkbox->isChecked()) {
                selected << checkbox->text();
            }
        }

        if (selected.size() > maxVotes) {
            QMessageBox::warning(this, "Vote Limit Reached",
                                 QString("You can vote for up to %1 %2 only.").arg(maxVotes).arg(title));
            return {};
        }

        return selected;
    };

    QString captainVote = collectRadioVote(ui->captainLayout);
    QString skChairVote = collectRadioVote(ui->skChairmanLayout);
    QStringList bCouncilorVotes = collectCheckboxVotes(ui->bCouncilorsLayout, 7, "Barangay Councilors");
    if (bCouncilorVotes.isEmpty() && ui->bCouncilorsLayout->count() > 0) return;

    QStringList skCouncilorVotes = collectCheckboxVotes(ui->skCouncilorsLayout, 7, "SK Councilors");
    if (skCouncilorVotes.isEmpty() && ui->skCouncilorsLayout->count() > 0) return;

    QString summary;
    if (!captainVote.isEmpty()) { votedCandidates << captainVote; summary += "Barangay Captain: " + captainVote + "\n"; }
    if (!skChairVote.isEmpty()) { votedCandidates << skChairVote; summary += "SK Chairman: " + skChairVote + "\n"; }
    for (const QString& c : bCouncilorVotes) { votedCandidates << c; summary += "Barangay Councilor: " + c + "\n"; }
    for (const QString& c : skCouncilorVotes) { votedCandidates << c; summary += "SK Councilor: " + c + "\n"; }


    QSqlQuery checkVote(db);
    checkVote.prepare("SELECT has_voted FROM voter_info WHERE voter_id = :voter_id");
    checkVote.bindValue(":voter_id", currentVoterId);
    if (checkVote.exec() && checkVote.next() && checkVote.value(0).toBool()) {
        QMessageBox::warning(this, "Already Voted", "You have already voted. Multiple voting is not allowed.");
        return;
    }

    QMessageBox::StandardButton confirm = QMessageBox::question(this, "Confirm Vote",
                                     "You selected:\n\n" + summary + "\nSubmit your vote?",
                                     QMessageBox::Yes | QMessageBox::No);
    if (confirm != QMessageBox::Yes) return;

    for (const QString& displayText : votedCandidates) {
        QStringList parts = displayText.split(" - ");
        if (parts.isEmpty()) continue;

        QStringList nameParts = parts[0].split(" ");
        if (nameParts.size() < 2) continue;

        QString firstName = nameParts.first();
        QString lastName = nameParts.last();

        QSqlQuery query(db);
        query.prepare(R"(
            UPDATE candidates_info
            SET vote_count = COALESCE(vote_count, 0) + 1
            WHERE first_name = :first AND last_name = :last
        )");
        query.bindValue(":first", firstName);
        query.bindValue(":last", lastName);

        if (!query.exec()) {
            qDebug() << "Failed to update vote_count for:" << firstName << lastName << "-" << query.lastError().text();
        }
    }

    QSqlQuery updateVoter(db);
    updateVoter.prepare("UPDATE voter_info SET has_voted = 1 WHERE voter_id = :voter_id");
    updateVoter.bindValue(":voter_id", currentVoterId);
    updateVoter.exec();

    QMessageBox::information(this, "Success", "Your vote has been submitted. Thank you!");
    this->close();
}
