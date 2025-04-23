#include "electioncontrol.h"
#include "ui_electioncontrol.h"
#include "dashboard.h"

#include <QCloseEvent>

ElectionControl::ElectionControl(QSqlDatabase database, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ElectionControl)
    , db(database)
{
    ui->setupUi(this);
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
