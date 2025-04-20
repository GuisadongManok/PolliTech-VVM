#ifndef SKPOSITIONS_H
#define SKPOSITIONS_H

#include <QDialog>
#include <QSqlDatabase>
#include "loginsystem.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class skpositions;
}
QT_END_NAMESPACE

class skpositions : public QDialog
{
    Q_OBJECT

public:
    explicit skpositions(QSqlDatabase &database, QWidget *parent = nullptr);
    ~skpositions();

private slots:
    void LogoutButton();

private:
    Ui::skpositions *ui;
    QSqlDatabase &db;
    loginsystem *loginWindow;
};
#endif // SKPOSITIONS_H
