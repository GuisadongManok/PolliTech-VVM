#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>
#include <QSqlDatabase>
#include "loginsystem.h"
#include "votermanagement.h"
#include "candidatesmanagement.h"
#include "reportsnresults.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class dashboard;
}
QT_END_NAMESPACE

class dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit dashboard(QSqlDatabase &database, QWidget *parent = nullptr);
    ~dashboard();

private slots:
    void LogoutButton();
    void ManageVotersButton();
    void ManageCandidatesButton();
    void ViewLiveVoteCountButton();

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    bool isLoggingOut = false;

private:
    Ui::dashboard *ui;
    QSqlDatabase &db;
    loginsystem *loginWindow;
    VoterManagement *vmanageWindow;
    candidatesmanagement *cmanagementWindow;
    ReportsNResults *rnrWindow;
};
#endif // DASHBOARD_H
