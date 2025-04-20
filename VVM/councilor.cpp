#include "councilor.h"
#include "ui_councilor.h"

#include <QCloseEvent>

councilor::councilor(QSqlDatabase &database, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::councilor)
    , db(database)
{
    ui->setupUi(this);
}

councilor::~councilor()
{
    delete ui;
}

void councilor::closeEvent(QCloseEvent *event)
{
    emit windowClosed();
    event->accept();
}
