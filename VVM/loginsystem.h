#ifndef LOGINSYSTEM_H
#define LOGINSYSTEM_H

#include <QDialog>
#include "ui_loginsystem.h"
#include <QSqlDatabase>


class adminlogin;
class vvm;

QT_BEGIN_NAMESPACE
namespace Ui {
class loginsystem;
}
QT_END_NAMESPACE

class loginsystem : public QDialog
{
    Q_OBJECT

public:
    explicit loginsystem(QSqlDatabase &database, const QString &email, QWidget *parent = nullptr);
    ~loginsystem();

private slots:
    void AdminButton();
    void LoginButton();
    void adjustVotingAge(int age);

private:
    Ui::loginsystem *ui;
    QString currentAdmin;
    adminlogin *adminWindow;
    QSqlDatabase &db;
    vvm *mainWindow;
};
#endif // LOGINSYSTEM_H
