#ifndef ADMINDASHBOARD_H
#define ADMINDASHBOARD_H

#include <QMainWindow>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui {
class admindashboard;
}
QT_END_NAMESPACE

class admindashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit admindashboard(QSqlDatabase &database, QWidget *parent = nullptr);
    ~admindashboard();

private:
    Ui::admindashboard *ui;
    QSqlDatabase &db;
};
#endif // ADMINDASHBOARD_H
