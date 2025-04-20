#ifndef LOGINSYSTEM_H
#define LOGINSYSTEM_H

#include <QDialog>
#include "ui_loginsystem.h"
#include "positions.h"
#include <QSqlDatabase>


class adminlogin;
class vvm;
class positions;

QT_BEGIN_NAMESPACE
namespace Ui {
class loginsystem;
}
QT_END_NAMESPACE

class loginsystem : public QDialog
{
    Q_OBJECT

public:
    explicit loginsystem(QSqlDatabase &database, QWidget *parent = nullptr);
    ~loginsystem();

private slots:
    void AdminButton();
    void LoginButton();
    void adjustVotingAge(int age);

private:
    Ui::loginsystem *ui;
    adminlogin *adminWindow;
    QSqlDatabase &db;
    positions *posWindow;
    vvm *mainWindow;
};
#endif // LOGINSYSTEM_H
