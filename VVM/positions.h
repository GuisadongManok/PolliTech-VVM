#ifndef POSITIONS_H
#define POSITIONS_H

#include <QDialog>
#include <QSqlDatabase>
#include "vvm.h"
#include "loginsystem.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class positions;
}
QT_END_NAMESPACE

class positions : public QDialog
{
    Q_OBJECT

public:
    explicit positions(QSqlDatabase &database ,QWidget *parent = nullptr);
    ~positions();

private slots:
    void CaptainButton();
    void LogoutButton();
    void SK_LogoutButton();
    void CouncilorButton();
    void SKchairman_button();
    void SKcouncilor_button();
    void CaptainButton_2();
    void CouncilorButton_2();

private:
    Ui::positions *ui;
    QSqlDatabase &db;
    vvm *captainWindow;
    loginsystem *loginWindow;
};
#endif // POSITIONS_H
