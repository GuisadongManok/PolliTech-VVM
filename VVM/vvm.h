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
    explicit vvm(QSqlDatabase &database, const QString& voterId, QWidget *parent = nullptr);
    ~vvm();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void displayCandidates();
    void submitVote();

private:
    bool closingAfterVote = false;

private:
    Ui::vvm *ui;
    loginsystem *loginWindow;
    QSqlDatabase db;
    QString currentVoterId;



};
#endif // VVM_H
