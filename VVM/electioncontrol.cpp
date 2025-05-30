#include "electioncontrol.h"
#include "ui_electioncontrol.h"
#include "dashboard.h"

#include <QCloseEvent>
#include <QTime>
#include <QDateTime>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QInputDialog>

ElectionControl::ElectionControl(QSqlDatabase &database, const QString &email, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ElectionControl)
    , currentAdmin(email)
    , db(database)
    , isElectionOngoing(false)
{
    ui->setupUi(this);

    connect(ui->pushButton_refresh, &QPushButton::clicked, this, &ElectionControl::loadElectionStatus);
    connect(ui->start_stop_button, &QPushButton::clicked, this, &ElectionControl::toggleElection);
    connect(ui->resetElection_button, &QPushButton::clicked, this, &ElectionControl::resetElection);    

    loadElectionStatus();
}

ElectionControl::~ElectionControl()
{
    delete ui;
}

void ElectionControl::closeEvent(QCloseEvent *event)
{
    emit windowClosed();
    event->accept();
}

void ElectionControl::toggleElection()
{
    QSqlQuery query(db);

    if (!isElectionOngoing) {
        // START ELECTION
        isElectionOngoing = true;
        appendStatusRow("Election Started");
        ui->label_eStats->setText("Election Status: Ongoing");
        ui->label_sTime->setText("Start Time: " + QTime::currentTime().toString("hh:mm AP"));
        ui->start_stop_button->setText("STOP ELECTION");
        ui->start_stop_button->setStyleSheet("background-color: red; color: white; font-weight: bold; font-size: 16px; border: 1px solid #800000; padding: 6px; border-radius: 4px;");

        query.prepare("UPDATE election_state SET status = 'ongoing', start_time = :start_time, end_time = NULL WHERE id = 1");
        query.bindValue(":start_time", QDateTime::currentDateTime().toString(Qt::ISODate));

    } else {
        // ⚠️ STOP ELECTION — require password first
        bool ok;
        QString password = QInputDialog::getText(
            this,
            "Password Required",
            "Enter your password to stop the election:",
            QLineEdit::Password,
            "",
            &ok
            );

        if (!ok || password.isEmpty()) {
            QMessageBox::warning(this, "Aborted", "Election stop cancelled.");
            return;
        }

        QSqlQuery verifyQuery(db);
        verifyQuery.prepare("SELECT password FROM admins WHERE email = :email");
        verifyQuery.bindValue(":email", currentAdmin);

        if (!verifyQuery.exec() || !verifyQuery.next()) {
            QMessageBox::warning(this, "Error", "Failed to verify password.");
            return;
        }

        QString storedPassword = verifyQuery.value(0).toString();
        if (password != storedPassword) {
            QMessageBox::warning(this, "Access Denied", "Incorrect password. Operation cancelled.");
            return;
        }

        // Password confirmed, proceed to stop election
        isElectionOngoing = false;
        appendStatusRow("Election Ended");
        ui->label_eStats->setText("Election Status: Ended");
        ui->label_eTime->setText("End Time: " + QTime::currentTime().toString("hh:mm AP"));
        ui->start_stop_button->setText("START ELECTION");
        ui->start_stop_button->setStyleSheet("background-color: green; color: white; font-weight: bold; font-size: 16px; border: 1px solid #006400; padding: 6px; border-radius: 4px;");

        query.prepare("UPDATE election_state SET status = 'ended', end_time = :end_time WHERE id = 1");
        query.bindValue(":end_time", QDateTime::currentDateTime().toString(Qt::ISODate));
    }

    if (!query.exec()) {
        QMessageBox::warning(this, "Error", "Failed to update election status: " + query.lastError().text());
    }
}


void ElectionControl::resetElection()
{
    QMessageBox::StandardButton reply = QMessageBox::question(
        this,
        "Confirm Reset",
        "Are you sure you want to reset the election?\n"
        "This will clear all votes and voting statuses.",
        QMessageBox::Yes | QMessageBox::No
        );

    if (reply != QMessageBox::Yes) return;

    bool ok;
    QString password = QInputDialog::getText(
        this,
        "Password Confirmation",
        "Enter your password to confirm:",
        QLineEdit::Password,
        "",
        &ok
        );

    if (!ok || password.isEmpty()) {
        QMessageBox::warning(this, "Aborted", "Password not entered. Election reset canceled.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT password FROM admins WHERE email = :email");
    query.bindValue(":email", currentAdmin);

    if (!query.exec() || !query.next()) {
        QMessageBox::warning(this, "Error", "Failed to verify credentials.");
        return;
    }

    QString dbPassword = query.value(0).toString();

    if (password != dbPassword) {
        QMessageBox::warning(this, "Access Denied", "Incorrect password. Election reset aborted.");
        return;
    }

    if (!query.exec("UPDATE candidates_info SET vote_count = 0")) {
        QMessageBox::warning(this, "Error", "Failed to reset candidate votes: " + query.lastError().text());
        return;
    }

    if (!query.exec("UPDATE voter_info SET has_voted = 0")) {
        QMessageBox::warning(this, "Error", "Failed to reset voter statuses: " + query.lastError().text());
        return;
    }

    if (!query.exec("UPDATE election_state SET status = 'not started', start_time = NULL, end_time = NULL WHERE id = 1")) {
        QMessageBox::warning(this, "Error", "Failed to reset election status: " + query.lastError().text());
        return;
    }

    appendStatusRow("Election Reset");
    updateStatusDisplay();
    isElectionOngoing = false;

    QMessageBox::information(this, "Reset Complete", "The election has been successfully reset.");
}


void ElectionControl::updateStatusDisplay()
{
    QSqlQuery query("SELECT status, start_time, end_time FROM election_state WHERE id = 1");
    if (query.next()) {
        QString status = query.value(0).toString();
        QString startTime = query.value(1).toString();
        QString endTime = query.value(2).toString();

        QString color;
        if (status == "ongoing") {
            color = "green";
        } else if (status == "ended") {
            color = "red";
        } else {
            color = "orange";
        }

        ui->label_eStats->setText("Election Status: " + status.toUpper());
        ui->label_eStats->setStyleSheet("color: " + color + "; font-weight: bold; font-size: 16px;");

        ui->label_sTime->setText("Start Time: " + (startTime.isEmpty() ? "" : QDateTime::fromString(startTime, Qt::ISODate).toString("hh:mm AP")));
        ui->label_eTime->setText("End Time: " + (endTime.isEmpty() ? "" : QDateTime::fromString(endTime, Qt::ISODate).toString("hh:mm AP")));

        ui->start_stop_button->setText(status == "ongoing" ? "STOP ELECTION" : "START ELECTION");
        ui->start_stop_button->setStyleSheet(status == "ongoing"
                                                 ? "background-color: red; color: white; font-weight: bold; font-size: 16px; border: 1px solid #800000; padding: 6px; border-radius: 4px;"
                                                 : "background-color: green; color: white; font-weight: bold; font-size: 16px; border: 1px solid #006400; padding: 6px; border-radius: 4px;");

        ui->resetElection_button->setStyleSheet("background-color: #f5c542; color: black; font-weight: bold; font-size: 16px; border: 1px solid #b58900; padding: 6px; border-radius: 4px;");

        isElectionOngoing = (status == "ongoing");
    }
}


void ElectionControl::loadElectionStatus()
{
    ui->statusTableWidget->setRowCount(0);

    ui->statusTableWidget->setColumnCount(2);
    ui->statusTableWidget->setHorizontalHeaderLabels(QStringList() << "ACTION" << "TIMESTAMP");
    ui->statusTableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->statusTableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->statusTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->statusTableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    QSqlQuery loadLogs(db);
    loadLogs.prepare("SELECT action, timestamp FROM election_status_log ORDER BY id ASC");
    if (loadLogs.exec()) {
        while (loadLogs.next()) {
            int row = ui->statusTableWidget->rowCount();
            ui->statusTableWidget->insertRow(row);
            ui->statusTableWidget->setItem(row, 0, new QTableWidgetItem(loadLogs.value(0).toString()));
            ui->statusTableWidget->setItem(row, 1, new QTableWidgetItem(loadLogs.value(1).toString()));
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to load election logs: " + loadLogs.lastError().text());
    }

    QSqlQuery checkInit(db);
    if (checkInit.exec("SELECT COUNT(*) FROM election_state") && checkInit.next()) {
        if (checkInit.value(0).toInt() == 0) {
            QSqlQuery insertQuery(db);
            insertQuery.prepare("INSERT INTO election_state (id, status) VALUES (1, 'not started')");
            if (!insertQuery.exec()) {
                QMessageBox::warning(this, "Error", "Failed to initialize election state: " + insertQuery.lastError().text());
            }
        }
    }

    ui->statusTableWidget->setStyleSheet(R"(
    QTableWidget {
        background-color: #ffffff;
        border: 1px solid black;
        gridline-color: #ccc;
        font-size: 14px;
    }

    QTableWidget::item {
        padding: 6px;
    }

    QTableWidget::item:selected {
        background-color: #cce5ff;
        color: #000;
    }

    QTableWidget::item:hover {
        background-color: #e6f2ff;
    }

    QHeaderView::section {
        background-color: #f5f5f5;
        padding: 6px;
        border: 1px solid #ccc;
        font-weight: bold;
    }

    QTableCornerButton::section {
        background-color: #f5f5f5;
        border: 1px solid #ccc;
    }
    )");

    updateStatusDisplay();
}

void ElectionControl::appendStatusRow(const QString& action)
{
    QString timestamp = QDateTime::currentDateTime().toString("MMM dd yyyy - hh:mm:ss AP");

    int row = ui->statusTableWidget->rowCount();
    ui->statusTableWidget->insertRow(row);
    ui->statusTableWidget->setItem(row, 0, new QTableWidgetItem(action));
    ui->statusTableWidget->setItem(row, 1, new QTableWidgetItem(timestamp));

    QSqlQuery query(db);
    query.prepare("INSERT INTO election_status_log (action, timestamp) VALUES (:action, :timestamp)");
    query.bindValue(":action", action);
    query.bindValue(":timestamp", timestamp);

    if (!query.exec()) {
        QMessageBox::warning(this, "Error", "Failed to save status log: " + query.lastError().text());
    }
}
