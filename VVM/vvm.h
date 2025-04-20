#ifndef VVM_H
#define VVM_H

#include <QMainWindow>
#include <QSqlDatabase>

class loginsystem;

QT_BEGIN_NAMESPACE
namespace Ui {
class vvm;
}
QT_END_NAMESPACE

class vvm : public QMainWindow
{
    Q_OBJECT

public:
    vvm(QSqlDatabase& database, QWidget* parent = nullptr);
    ~vvm();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void displayCandidates();

private:
    Ui::vvm *ui;
    loginsystem *loginWindow;
    QSqlDatabase db;


};
#endif // VVM_H
