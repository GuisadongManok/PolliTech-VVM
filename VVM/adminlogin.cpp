#include "adminlogin.h"
#include "ui_adminlogin.h"

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include "vvm.h"
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include "admindashboard.h"
#include "loginsystem.h"

adminlogin::adminlogin(QSqlDatabase &database, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminlogin)
    , db(database)
    , loginWindow(nullptr)
    , mainWindow(nullptr)
    , adminDash(nullptr)


{
    ui->setupUi(this);
    this->setFixedSize(this->size());

    connect(ui->BackButton, &QPushButton::clicked, this, &adminlogin::BackButton);
    connect(ui->LoginButton, &QPushButton::clicked, this, &adminlogin::LoginButton);

    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    ui->LoginButton->setDefault(true);


    if (!db.isOpen()) {
        qDebug() << "AdminLogin: Database connection failed: " << db.lastError().text();
    } else {
        qDebug() << "AdminLogin: Database is open.";
    }

    this->setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);


}

adminlogin::~adminlogin()
{
    delete ui;

    if (mainWindow) {
        mainWindow->close();
        delete mainWindow;
    }

    if (adminDash) {
        adminDash->close();
        delete adminDash;
    }

    if (db.isOpen()) {
        db.close();
    }
}

void adminlogin::BackButton()
{
    loginWindow = new loginsystem (db, nullptr);
    this->close();
    loginWindow->exec();

}


void adminlogin::LoginButton()
{
    QString email = ui->lineEdit_email->text();
    QString password = ui->lineEdit_password->text();

    QSqlQuery query (db);
    query.prepare("SELECT email, password FROM admins WHERE email = :email AND password = :password");
    query.bindValue(":email", email);
    query.bindValue(":password", password);

    if (!query.exec()) {
        qDebug() << "Database query failed: " << query.lastError().text();
        QMessageBox::critical(this, "Error", "Database query failed: " + query.lastError().text());
        return;
    }

    if (query.next()) {
        qDebug() << "Admin login successful for:" << email;
        QMessageBox::information(this, "Welcome", "Admin Login Successful!");

        adminDash = new dashboard(db, nullptr);
        adminDash->show();
        this->close();

        ui->lineEdit_email->clear();
        ui->lineEdit_password->clear();

    } else {
        qDebug() << "Invalid admin login attempt for:" << email;
        QMessageBox::warning(this, "Error", "Invalid email or password.");
    }


}

