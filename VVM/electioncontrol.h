#ifndef ELECTIONCONTROL_H
#define ELECTIONCONTROL_H

#include <QDialog>

namespace Ui {
class ElectionControl;
}

class ElectionControl : public QDialog
{
    Q_OBJECT

public:
    explicit ElectionControl(QWidget *parent = nullptr);
    ~ElectionControl();

private:
    Ui::ElectionControl *ui;
};

#endif // ELECTIONCONTROL_H
