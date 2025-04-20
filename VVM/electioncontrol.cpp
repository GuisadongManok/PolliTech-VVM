#include "electioncontrol.h"
#include "ui_electioncontrol.h"

ElectionControl::ElectionControl(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ElectionControl)
{
    ui->setupUi(this);
}

ElectionControl::~ElectionControl()
{
    delete ui;
}
