#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include "vvm.h"
#include "dashboard.h"
#include "loginsystem.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class adminlogin;
}
QT_END_NAMESPACE

class adminlogin : public QDialog
{
    Q_OBJECT

public:
    explicit adminlogin(QSqlDatabase &database, QWidget *parent = nullptr);
    ~adminlogin();

private slots:
    void BackButton();
    void LoginButton();

private:
    Ui::adminlogin *ui;
    QSqlDatabase &db;
    loginsystem *loginWindow;
    vvm *mainWindow;
    dashboard *adminDash;
};
#endif // ADMINLOGIN_H
