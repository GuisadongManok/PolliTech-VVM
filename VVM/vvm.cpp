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
    if (closingAfterVote) {
        event->accept();
        return;
    }

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
            connect(checkbox, &QCheckBox::toggled, this, &vvm::updateBCouncilorLimit);
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
            connect(checkbox, &QCheckBox::toggled, this, &vvm::updateSKCouncilorLimit);
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

    auto collectCheckboxVotes = [&](QLayout* layout) -> QStringList {
        QStringList selected;
        for (int i = 0; i < layout->count(); ++i) {
            QCheckBox* checkbox = qobject_cast<QCheckBox*>(layout->itemAt(i)->widget());
            if (checkbox && checkbox->isChecked()) {
                selected << checkbox->text();
            }
        }
        return selected;
    };

    bool showCaptain = ui->frame_cap && ui->frame_cap->isVisible();
    bool showBCouncilors = ui->frame_councilors && ui->frame_councilors->isVisible();
    bool showSKChair = ui->frame_skchair && ui->frame_skchair->isVisible();
    bool showSKCouncilors = ui->frame_skcouncilors && ui->frame_skcouncilors->isVisible();

    QString captainVote = collectRadioVote(ui->captainLayout);
    QString skChairVote = collectRadioVote(ui->skChairmanLayout);

    QStringList bCouncilorVotes = collectCheckboxVotes(ui->bCouncilorsLayout);
    QStringList skCouncilorVotes = collectCheckboxVotes(ui->skCouncilorsLayout);

    if (showCaptain && captainVote.isEmpty()) {
        QMessageBox::warning(this, "Incomplete Vote", "You must vote for 1 Barangay Captain.");
        return;
    }

    if (showSKChair && skChairVote.isEmpty()) {
        QMessageBox::warning(this, "Incomplete Vote", "You must vote for 1 SK Chairman.");
        return;
    }

    if (showBCouncilors && bCouncilorVotes.size() != 7) {
        QMessageBox::warning(this, "Incomplete Vote", "You must vote for exactly 7 Barangay Councilors.");
        return;
    }

    if (showSKCouncilors && skCouncilorVotes.size() != 7) {
        QMessageBox::warning(this, "Incomplete Vote", "You must vote for exactly 7 SK Councilors.");
        return;
    }

    if (captainVote.isEmpty() && skChairVote.isEmpty()) {
        QMessageBox::warning(this, "Missing Vote", "Please select at least one candidate for Barangay Captain or SK Chairman.");
        return;
    }

    if (!captainVote.isEmpty()) votedCandidates << captainVote;
    if (!skChairVote.isEmpty()) votedCandidates << skChairVote;
    votedCandidates << bCouncilorVotes << skCouncilorVotes;

    QString summary;
    if (showCaptain) {
        summary += "<b>Barangay Captain:</b><br>";
        summary += captainVote.isEmpty() ? "None<br>" : "&nbsp;&nbsp;" + captainVote + "<br>";
    }

    if (showBCouncilors) {
        summary += "<br><b>Barangay Councilors:</b><br>";
        for (const QString& c : bCouncilorVotes) summary += "&nbsp;&nbsp;" + c + "<br>";
    }

    if (showSKChair) {
        summary += "<br><b>SK Chairman:</b><br>";
        summary += skChairVote.isEmpty() ? "None<br>" : "&nbsp;&nbsp;" + skChairVote + "<br>";
    }

    if (showSKCouncilors) {
        summary += "<br><b>SK Councilors:</b><br>";
        for (const QString& c : skCouncilorVotes) summary += "&nbsp;&nbsp;" + c + "<br>";
    }

    QSqlQuery checkVote(db);
    checkVote.prepare("SELECT has_voted FROM voter_info WHERE voter_id = :voter_id");
    checkVote.bindValue(":voter_id", currentVoterId);
    if (checkVote.exec() && checkVote.next() && checkVote.value(0).toBool()) {
        QMessageBox::warning(this, "Already Voted", "You have already voted. Multiple voting is not allowed.");
        return;
    }

    QMessageBox confirmBox;
    confirmBox.setWindowTitle("Confirm Vote");
    confirmBox.setTextFormat(Qt::RichText);
    confirmBox.setText("You selected:<br><br>" + summary + "<br>Submit your vote?");
    confirmBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    confirmBox.setDefaultButton(QMessageBox::No);
    if (confirmBox.exec() != QMessageBox::Yes) return;

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
    closingAfterVote = true;
    this->close();

    loginWindow = new loginsystem(db, nullptr);
    loginWindow->exec();
}




void vvm::updateBCouncilorLimit()
{
    int checkedCount = 0;
    QList<QCheckBox*> checkboxes;

    for (int i = 0; i < ui->bCouncilorsLayout->count(); ++i) {
        QCheckBox* cb = qobject_cast<QCheckBox*>(ui->bCouncilorsLayout->itemAt(i)->widget());
        if (cb) {
            checkboxes << cb;
            if (cb->isChecked()) checkedCount++;
        }
    }

    bool disableUnchecked = (checkedCount >= 7);
    for (QCheckBox* cb : checkboxes) {
        if (!cb->isChecked()) {
            cb->setEnabled(!disableUnchecked);
        }
    }
}

void vvm::updateSKCouncilorLimit()
{
    int checkedCount = 0;
    QList<QCheckBox*> checkboxes;

    for (int i = 0; i < ui->skCouncilorsLayout->count(); ++i) {
        QCheckBox* cb = qobject_cast<QCheckBox*>(ui->skCouncilorsLayout->itemAt(i)->widget());
        if (cb) {
            checkboxes << cb;
            if (cb->isChecked()) checkedCount++;
        }
    }

    bool disableUnchecked = (checkedCount >= 7);
    for (QCheckBox* cb : checkboxes) {
        if (!cb->isChecked()) {
            cb->setEnabled(!disableUnchecked);
        }
    }
}

