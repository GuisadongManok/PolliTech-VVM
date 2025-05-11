#ifndef ELECTIONCONTROL_H
#define ELECTIONCONTROL_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class ElectionControl;
}

class ElectionControl : public QDialog
{
    Q_OBJECT

public:
    explicit ElectionControl(QSqlDatabase &database, const QString &email, QWidget *parent = nullptr);
    ~ElectionControl();

protected:
    void closeEvent(QCloseEvent *event) override;

signals:
    void windowClosed();

private slots:
    void toggleElection();
    void resetElection();

private:
    Ui::ElectionControl *ui;
    QString currentAdmin;
    QSqlDatabase &db;
    void updateStatusDisplay();
    void loadElectionStatus();
    void saveElectionStatus(const QString &status, const QString &timestamp = QString());
    bool isElectionOngoing;
    void appendStatusRow(const QString& action);
};

#endif // ELECTIONCONTROL_H
