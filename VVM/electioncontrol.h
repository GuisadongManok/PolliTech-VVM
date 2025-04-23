#ifndef ELECTIONCONTROL_H
#define ELECTIONCONTROL_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class ElectionControl;
}

class ElectionControl : public QDialog
{
    Q_OBJECT

public:
    explicit ElectionControl(QSqlDatabase database, QWidget *parent = nullptr);
    ~ElectionControl();

protected:
    void closeEvent(QCloseEvent *event) override;

signals:
    void windowClosed();

private:
    Ui::ElectionControl *ui;
    QSqlDatabase &db;
};

#endif // ELECTIONCONTROL_H
