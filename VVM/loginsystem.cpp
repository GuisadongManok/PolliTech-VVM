#include "loginsystem.h"
#include "ui_loginsystem.h"

#include "ui_adminlogin.h"
#include "adminlogin.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include "vvm.h"
#include <QStackedWidget>
#include <QGroupBox>


loginsystem::loginsystem(QSqlDatabase& database, QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::loginsystem)
    , adminWindow (nullptr)
    , db(database)
    , posWindow(nullptr)
    , mainWindow (nullptr)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());

    connect(ui->LoginButton, &QPushButton::clicked, this, &loginsystem::LoginButton);
    connect(ui->AdminButton, &QPushButton::clicked, this, &loginsystem::AdminButton);


    if (!db.open()) {
        qDebug() <<"Failed to open database.";
    }
    else {
        qDebug() <<"Database connected.";
    }

    ui->lineEdit_lastName->setFocus();

    this->setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);

}

loginsystem::~loginsystem()
{
    delete ui;

    if (adminWindow) {
        adminWindow->close();
        delete adminWindow;
    }

    if (mainWindow) {
        mainWindow->close();
        delete mainWindow;
    }
}

void loginsystem::AdminButton()
{
    this->hide();
    adminWindow = new adminlogin(db, nullptr);
    adminWindow->exec();

    if (adminWindow->isHidden()) {
        return;
    }
    this->exec();
}


void loginsystem::LoginButton()
{
    QString last_name = ui->lineEdit_lastName->text().trimmed();
    QString voter_id = ui->lineEdit_VIN->text().trimmed();

    if (last_name.isEmpty() || voter_id.isEmpty()) {
        QMessageBox::warning(this, "Missing Fields", "Please enter your last name and voter ID.");
        return;
    }


    QSqlQuery statusQuery(db);
    statusQuery.prepare("SELECT status FROM election_state WHERE id = :id");
    statusQuery.bindValue(":id", 1);
    if (!statusQuery.exec()) {
        QMessageBox::critical(this, "Error", "Could not verify election status:\n" + statusQuery.lastError().text());
        return;
    }


    if (!statusQuery.next()) {
        QMessageBox::critical(this, "Error", "Election status not found. Please contact the administrator.");
        return;
    }

    QString status = statusQuery.value(0).toString();
    if (status != "ongoing") {
        QMessageBox::warning(this, "Election Not Active", "You can only vote while the election is ongoing.");
        return;
    }


    QSqlQuery query(db);
    query.prepare("SELECT age, last_name, voter_id FROM voter_info WHERE last_name = :last_name AND voter_id = :voter_id");
    query.bindValue(":last_name", last_name);
    query.bindValue(":voter_id", voter_id);

    if (!query.exec()) {
        qDebug() << "Database query failed: " << query.lastError().text();
        QMessageBox::critical(this, "Error", "Database query failed: " + query.lastError().text());
        return;
    }

    if (query.next()) {
        int age = query.value(0).toInt();
        qDebug() << "Login successful for user:" << last_name << " Age:" << age;

        QMessageBox::information(this, "Welcome", "Login Successful.");

        ui->lineEdit_lastName->clear();
        ui->lineEdit_VIN->clear();
        this->hide();

        delete mainWindow;
        mainWindow = new vvm(db, voter_id, nullptr);

        adjustVotingAge(age);
        mainWindow->show();
    } else {
        qDebug() << "Invalid login attempt for user:" << last_name;
        QMessageBox::warning(this, "Error", "Invalid Last Name or Voter ID.");
    }
}


void loginsystem::adjustVotingAge(int age)
{
    auto frameCaptain = mainWindow->findChild<QFrame*>("frame_cap");
    auto frameCouncilors = mainWindow->findChild<QFrame*>("frame_councilors");
    auto frameSKChair = mainWindow->findChild<QFrame*>("frame_skchair");
    auto frameSKCouncilors = mainWindow->findChild<QFrame*>("frame_skcouncilors");

    if (age >= 15 && age <= 17) {
        if (frameCaptain) frameCaptain->hide();
        if (frameCouncilors) frameCouncilors->hide();
        if (frameSKChair) frameSKChair->show();
        if (frameSKCouncilors) frameSKCouncilors->show();
    } else if (age >= 18 && age <= 30) {
        if (frameCaptain) frameCaptain->show();
        if (frameCouncilors) frameCouncilors->show();
        if (frameSKChair) frameSKChair->show();
        if (frameSKCouncilors) frameSKCouncilors->show();
    } else {
        if (frameCaptain) frameCaptain->show();
        if (frameCouncilors) frameCouncilors->show();
        if (frameSKChair) frameSKChair->hide();
        if (frameSKCouncilors) frameSKCouncilors->hide();
    }
}



