#include "skpositions.h"
#include "ui_skpositions.h"

#include "loginsystem.h"

skpositions::skpositions(QSqlDatabase& database, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::skpositions)
    , db(database)
    , loginWindow(nullptr)
{
    ui->setupUi(this);

    connect(ui->logoutButton, &QPushButton::clicked, this, &skpositions::LogoutButton);
}

skpositions::~skpositions()
{
    delete ui;
}

void skpositions::LogoutButton()
{
    if (loginWindow) {
        loginWindow->deleteLater();
    }

    loginWindow = new loginsystem(db, nullptr);
    loginWindow->show();
    this->close();
}

