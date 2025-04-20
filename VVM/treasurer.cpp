#include "treasurer.h"
#include "ui_treasurer.h"

#include <QCloseEvent>


Treasurer::Treasurer(QSqlDatabase &database, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Treasurer)
    , db(database)
{
    ui->setupUi(this);
}

Treasurer::~Treasurer()
{
    delete ui;
}

void Treasurer::closeEvent(QCloseEvent *event)
{
    emit windowClosed();
    event->accept();
}
