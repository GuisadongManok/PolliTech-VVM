#include "admindashboard.h"
#include "ui_admindashboard.h"

admindashboard::admindashboard(QSqlDatabase &database, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::admindashboard)
    , db(database)
{
    ui->setupUi(this);
    this->showMaximized();
}

admindashboard::~admindashboard()
{
    delete ui;

    QApplication::quit();
}
