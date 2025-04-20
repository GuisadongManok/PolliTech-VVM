#ifndef COUNCILOR_H
#define COUNCILOR_H

#include <QMainWindow>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui {
class councilor;
}
QT_END_NAMESPACE

class councilor : public QMainWindow
{
    Q_OBJECT

public:
    explicit councilor(QSqlDatabase &database, QWidget *parent = nullptr);
    ~councilor();

protected:
    void closeEvent(QCloseEvent *event) override;

signals:
    void windowClosed();

private:
    Ui::councilor *ui;
    QSqlDatabase &db;
};
#endif // COUNCILOR_H
