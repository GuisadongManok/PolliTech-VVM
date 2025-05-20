#include "dashboard.h"
#include "ui_dashboard.h"
#include "loginsystem.h"
#include "votermanagement.h"
#include "candidatesmanagement.h"
#include "reportsnresults.h"
#include "electioncontrol.h"

#include <QStackedWidget>
#include <QMessageBox>
#include <QCloseEvent>
#include <QSqlQuery>


dashboard::dashboard(QSqlDatabase &database, const QString &email, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dashboard)
    , currentAdmin(email)
    , db(database)
    , loginWindow(nullptr)
    , vmanageWindow(nullptr)
    , cmanagementWindow(nullptr)
    , rnrWindow(nullptr)
    , controlWindow(nullptr)
    , electionResultsWindow(nullptr)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());

    connect(ui->LogoutButton, &QPushButton::clicked, this, &dashboard::LogoutButton);
    connect(ui->manage_voter_button, &QPushButton::clicked, this, &dashboard::ManageVotersButton);
    connect(ui->manage_candidate_button, &QPushButton::clicked, this, &dashboard::ManageCandidatesButton);
    connect(ui->view_live_vote_button, &QPushButton::clicked, this, &dashboard::ViewLiveVoteCountButton);
    connect(ui->start_election_button, &QPushButton::clicked, this, &dashboard::controlButton);
    connect(ui->election_results_button, &QPushButton::clicked, this, &dashboard::ElectionResultsButton);

    this->setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);

}

dashboard::~dashboard()
{
    delete ui;
}

void dashboard::LogoutButton()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Logout Confirmation", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        isLoggingOut = true;

        if (loginWindow) {
            delete loginWindow;
        }

        loginWindow = new loginsystem(db, "", nullptr);
        this->close();
        loginWindow->exec();
    }


}


void dashboard::ManageVotersButton()
{
    this->hide();
    if (!vmanageWindow) {
        vmanageWindow = new VoterManagement (db, currentAdmin, nullptr);
        connect(vmanageWindow, &VoterManagement::windowClosed, this, &dashboard::show);
    }

    ui->manage_voter_button->clearFocus();
    vmanageWindow->show();
}


void dashboard::ManageCandidatesButton()
{
    this->hide();
    if (!cmanagementWindow) {
        cmanagementWindow = new candidatesmanagement (db, currentAdmin, nullptr);
        connect(cmanagementWindow, &candidatesmanagement::windowClosed, this, &dashboard::show);
    }

    ui->manage_candidate_button->clearFocus();
    cmanagementWindow->show();

}


void dashboard::ViewLiveVoteCountButton()
{
    this->hide();
    if (!rnrWindow) {
        rnrWindow = new ReportsNResults (db, nullptr);
        connect(rnrWindow, &ReportsNResults::windowClosed, this, &dashboard::show);
    }

    ui->view_live_vote_button->clearFocus();
    rnrWindow->show();
}

void dashboard::closeEvent(QCloseEvent *event)
{
    if (isLoggingOut) {
        event->accept();
        return;
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Logout Confirmation", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        if (loginWindow) {
            delete loginWindow;
        }

        loginWindow = new loginsystem(db, "", nullptr);
        this->close();
        loginWindow->exec();
        event->accept();
    } else {
        event->ignore();
    }
}


void dashboard::controlButton()
{
    if (!controlWindow) {
        controlWindow = new ElectionControl(db, currentAdmin, nullptr);
        connect(controlWindow, &ElectionControl::windowClosed, this, &dashboard::show);
    }

    this->hide();
    controlWindow->show();
}


void dashboard::ElectionResultsButton()
{
    QSqlQuery query(db);
    query.prepare("SELECT status FROM election_state ORDER BY id DESC LIMIT 1");
    if (!query.exec() || !query.next() || query.value(0).toString().toLower() != "ended") {
        QMessageBox::warning(this, "Election Not Finished", "You can only view results after the election has ended.");
    }
    else {

        if (!electionResultsWindow) {
            electionResultsWindow = new ElectionResults(db, nullptr);
            connect(electionResultsWindow, &ElectionResults::windowClosed, this, &dashboard::show);
        }

        this->hide();
        electionResultsWindow->show();
    }
}

