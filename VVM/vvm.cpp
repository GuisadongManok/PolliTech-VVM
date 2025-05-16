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

#include <QPrinter>
#include <QPrinterInfo>
#include <QPrintDialog>
#include <QTextDocument>
#include <QFile>
#include <QDir>
#include <QFileInfo>
#include <QStandardPaths>
#include <QRegularExpression>



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

        loginWindow = new loginsystem(db, "", nullptr);
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
    getCandidate.prepare(R"(
        SELECT last_name || ', ' || first_name AS full_name,
               position,
               party
        FROM candidates_info
        ORDER BY last_name ASC, first_name ASC
    )");

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

    // Helpers
    auto collectRadioVote = [](QLayout* layout) -> QString {
        if (!layout) return "";
        for (int i = 0; i < layout->count(); ++i) {
            QRadioButton* radio = qobject_cast<QRadioButton*>(layout->itemAt(i)->widget());
            if (radio && radio->isChecked()) return radio->text();
        }
        return "";
    };

    auto collectCheckboxVotes = [](QLayout* layout) -> QStringList {
        QStringList selected;
        if (!layout) return selected;
        for (int i = 0; i < layout->count(); ++i) {
            QCheckBox* checkbox = qobject_cast<QCheckBox*>(layout->itemAt(i)->widget());
            if (checkbox && checkbox->isChecked()) selected << checkbox->text();
        }
        return selected;
    };

    // Visibility checks
    const bool showCaptain       = ui->frame_cap && ui->frame_cap->isVisible();
    const bool showBCouncilors   = ui->frame_councilors && ui->frame_councilors->isVisible();
    const bool showSKChair       = ui->frame_skchair && ui->frame_skchair->isVisible();
    const bool showSKCouncilors  = ui->frame_skcouncilors && ui->frame_skcouncilors->isVisible();

    // Collect votes
    QString captainVote = collectRadioVote(ui->captainLayout);
    QString skChairVote = collectRadioVote(ui->skChairmanLayout);
    QStringList bCouncilorVotes = collectCheckboxVotes(ui->bCouncilorsLayout);
    QStringList skCouncilorVotes = collectCheckboxVotes(ui->skCouncilorsLayout);

    // Validation
    if (showCaptain && captainVote.isEmpty()) {
        QMessageBox::warning(this, "Incomplete Vote", "You must vote for 1 Barangay Captain.");
        return;
    }
    if (showSKChair && skChairVote.isEmpty()) {
        QMessageBox::warning(this, "Incomplete Vote", "You must vote for 1 SK Chairman.");
        return;
    }
    if (showBCouncilors) {
        if (bCouncilorVotes.isEmpty()) {
            QMessageBox::warning(this, "Incomplete Vote", "Select at least 1 Barangay Councilor.");
            return;
        }
        if (bCouncilorVotes.size() > 7) {
            QMessageBox::warning(this, "Too Many Votes", "You can only vote for up to 7 Barangay Councilors.");
            return;
        }
    }
    if (showSKCouncilors) {
        if (skCouncilorVotes.isEmpty()) {
            QMessageBox::warning(this, "Incomplete Vote", "Select at least 1 SK Councilor.");
            return;
        }
        if (skCouncilorVotes.size() > 7) {
            QMessageBox::warning(this, "Too Many Votes", "You can only vote for up to 7 SK Councilors.");
            return;
        }
    }
    if (captainVote.isEmpty() && skChairVote.isEmpty()) {
        QMessageBox::warning(this, "Missing Vote", "Please vote at least for Barangay Captain or SK Chairman.");
        return;
    }

    // Build vote list
    if (!captainVote.isEmpty()) votedCandidates << captainVote;
    if (!skChairVote.isEmpty()) votedCandidates << skChairVote;
    votedCandidates << bCouncilorVotes << skCouncilorVotes;

    // Create summary
    QString summary;
    if (showCaptain) summary += "<b>Barangay Captain:</b><br>" + (captainVote.isEmpty() ? "None" : "&nbsp;&nbsp;" + captainVote) + "<br>";
    if (showBCouncilors) {
        summary += "<br><b>Barangay Councilors:</b><br>";
        for (const QString& c : bCouncilorVotes) summary += "&nbsp;&nbsp;" + c + "<br>";
    }
    if (showSKChair) summary += "<br><b>SK Chairman:</b><br>" + (skChairVote.isEmpty() ? "None" : "&nbsp;&nbsp;" + skChairVote) + "<br>";
    if (showSKCouncilors) {
        summary += "<br><b>SK Councilors:</b><br>";
        for (const QString& c : skCouncilorVotes) summary += "&nbsp;&nbsp;" + c + "<br>";
    }

    // Prevent double voting
    QSqlQuery checkVote(db);
    checkVote.prepare("SELECT has_voted FROM voter_info WHERE voter_id = :voter_id");
    checkVote.bindValue(":voter_id", currentVoterId);
    if (!checkVote.exec() || !checkVote.next()) {
        QMessageBox::critical(this, "Database Error", "Unable to verify voter status.");
        return;
    }
    if (checkVote.value(0).toBool()) {
        QMessageBox::warning(this, "Already Voted", "You have already voted. Multiple voting is not allowed.");
        return;
    }

    // Confirmation
    QMessageBox confirmBox;
    confirmBox.setWindowTitle("Confirm Vote");
    confirmBox.setTextFormat(Qt::RichText);
    confirmBox.setText("You selected:<br><br>" + summary + "<br>Submit your vote?");
    confirmBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    confirmBox.setDefaultButton(QMessageBox::No);
    if (confirmBox.exec() != QMessageBox::Yes) return;

    // Voter name
    QString voterName = "Unknown Voter";
    QSqlQuery nameQuery(db);
    nameQuery.prepare("SELECT first_name, last_name FROM voter_info WHERE voter_id = :voter_id");
    nameQuery.bindValue(":voter_id", currentVoterId);
    if (nameQuery.exec() && nameQuery.next())
        voterName = nameQuery.value(0).toString() + " " + nameQuery.value(1).toString();

    // Print receipt
    QString receiptContent;
    receiptContent += "<div style='font-size:12pt;'>";
    receiptContent += "<h2 align='center' style='font-size:14pt;'>VOTE RECEIPT</h2>";
    receiptContent += "<p><b>Date:</b> " + QDate::currentDate().toString("MMM dd, yyyy") + "</p>";
    receiptContent += "<p><b>Time:</b> " + QTime::currentTime().toString("hh:mm:ss AP") + "</p>";
    receiptContent += "<hr>" + summary + "<hr>";
    receiptContent += "<p align='center'>Thank you for voting!</p>";
    receiptContent += "</div>";



    QTextDocument receiptDoc;
    receiptDoc.setHtml(receiptContent);

    QPrinterInfo defaultPrinter = QPrinterInfo::defaultPrinter();
    if (!defaultPrinter.isNull()) {
        QPrinter printer(QPrinter::HighResolution);
        printer.setPrinterName(defaultPrinter.printerName());
        printer.setOutputFormat(QPrinter::NativeFormat);
        receiptDoc.print(&printer);
    } else {
        QMessageBox::warning(this, "Printer Error", "No default printer found.");
    }

    // Update vote count
    for (const QString& displayText : votedCandidates) {
        QStringList parts = displayText.split(" - ");
        if (parts.isEmpty()) continue;

        QString fullName = parts[0].trimmed();
        QSqlQuery findCandidate(db);
        findCandidate.prepare("SELECT first_name, last_name FROM candidates_info WHERE TRIM(first_name || ' ' || last_name) = :full_name");
        findCandidate.bindValue(":full_name", fullName);
        if (findCandidate.exec() && findCandidate.next()) {
            QString first = findCandidate.value(0).toString();
            QString last = findCandidate.value(1).toString();

            QSqlQuery updateVote(db);
            updateVote.prepare(R"(
                UPDATE candidates_info
                SET vote_count = COALESCE(vote_count, 0) + 1
                WHERE first_name = :first AND last_name = :last
            )");
            updateVote.bindValue(":first", first);
            updateVote.bindValue(":last", last);
            if (!updateVote.exec()) {
                qDebug() << "Vote count update failed for:" << first << last << "-" << updateVote.lastError().text();
            }
        }
    }

    // Mark voter as voted
    QSqlQuery updateVoter(db);
    updateVoter.prepare("UPDATE voter_info SET has_voted = 1 WHERE voter_id = :voter_id");
    updateVoter.bindValue(":voter_id", currentVoterId);
    if (!updateVoter.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to update voter record.");
        return;
    }

    QMessageBox::information(this, "Success", "Your vote has been submitted. Thank you!");
    ui->submitButton->setEnabled(false);

    closingAfterVote = true;
    this->close();

    loginWindow = new loginsystem(db, "", nullptr);
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
