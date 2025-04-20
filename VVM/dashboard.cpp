#include "dashboard.h"
#include "ui_dashboard.h"
#include "loginsystem.h"
#include "votermanagement.h"
#include "candidatesmanagement.h"
#include "reportsnresults.h"

#include <QStackedWidget>
#include <QMessageBox>
#include <QCloseEvent>

dashboard::dashboard(QSqlDatabase &database, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dashboard)
    , db(database)
    , loginWindow(nullptr)
    , vmanageWindow(nullptr)
    , cmanagementWindow(nullptr)
    , rnrWindow(nullptr)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());

    connect(ui->LogoutButton, &QPushButton::clicked, this, &dashboard::LogoutButton);
    connect(ui->manage_voter_button, &QPushButton::clicked, this, &dashboard::ManageVotersButton);
    connect(ui->manage_candidate_button, &QPushButton::clicked, this, &dashboard::ManageCandidatesButton);
    connect(ui->view_live_vote_button, &QPushButton::clicked, this, &dashboard::ViewLiveVoteCountButton);

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

        loginWindow = new loginsystem (db, nullptr);
        this->close();
        loginWindow->exec();
    }


}


void dashboard::ManageVotersButton()
{
    this->hide();
    if (!vmanageWindow) {
        vmanageWindow = new VoterManagement (db, nullptr);
        connect(vmanageWindow, &VoterManagement::windowClosed, this, &dashboard::show);
    }

    ui->manage_voter_button->clearFocus();
    vmanageWindow->show();
}


void dashboard::ManageCandidatesButton()
{
    this->hide();
    if (!cmanagementWindow) {
        cmanagementWindow = new candidatesmanagement (db, nullptr);
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

        loginWindow = new loginsystem(db, nullptr);
        this->close();
        loginWindow->exec();
        event->accept();
    } else {
        event->ignore();
    }
}

