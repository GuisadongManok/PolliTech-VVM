#ifndef TREASURER_H
#define TREASURER_H

#include <QMainWindow>
#include <QSqlDatabase>


namespace Ui {
class Treasurer;
}

class Treasurer : public QMainWindow
{
    Q_OBJECT

public:
    explicit Treasurer(QSqlDatabase &database, QWidget *parent = nullptr);
    ~Treasurer();

protected:
    void closeEvent(QCloseEvent *event) override;

signals:
    void windowClosed();

private:
    Ui::Treasurer *ui;
    QSqlDatabase &db;
};

#endif // TREASURER_H
