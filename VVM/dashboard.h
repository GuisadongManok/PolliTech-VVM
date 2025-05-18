#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>
#include <QSqlDatabase>
#include "loginsystem.h"
#include "votermanagement.h"
#include "candidatesmanagement.h"
#include "reportsnresults.h"
#include "electioncontrol.h"
#include "electionresults.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class dashboard;
}
QT_END_NAMESPACE

class dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit dashboard(QSqlDatabase &database, const QString &email, QWidget *parent = nullptr);
    ~dashboard();

private slots:
    void LogoutButton();
    void ManageVotersButton();
    void ManageCandidatesButton();
    void ViewLiveVoteCountButton();
    void controlButton();
    void ElectionResultsButton();

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    bool isLoggingOut = false;

private:
    Ui::dashboard *ui;
    QString currentAdmin;
    QSqlDatabase &db;
    loginsystem *loginWindow;
    VoterManagement *vmanageWindow;
    candidatesmanagement *cmanagementWindow;
    ReportsNResults *rnrWindow;
    ElectionControl *controlWindow;
    ElectionResults *electionResultsWindow;
};
#endif // DASHBOARD_H
