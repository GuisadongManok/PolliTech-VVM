#include "positions.h"
#include "ui_positions.h"

#include "vvm.h"
#include "loginsystem.h"
#include "councilor.h"
#include <QWidget>
#include "treasurer.h"
#include <QStackedWidget>
#include <QMessageBox>

positions::positions(QSqlDatabase &database, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::positions)
    , db(database)
    , captainWindow(nullptr)
    , loginWindow(nullptr)
{
    ui->setupUi(this);
    connect(ui->captainButton, &QPushButton::clicked, this, &positions::CaptainButton);
    connect(ui->logoutButton, &QPushButton::clicked, this, &positions::LogoutButton);
    connect(ui->logoutButton_2, &QPushButton::clicked, this, &positions::SK_LogoutButton);
    connect(ui->councilorButton, &QPushButton::clicked, this, &positions::CouncilorButton);
    connect(ui->sk_chairman_button, &QPushButton::clicked, this, &positions::SKchairman_button);
    connect(ui->sk_councilor_button, &QPushButton::clicked, this, &positions::SKcouncilor_button);
    connect(ui->captainButton_2, &QPushButton::clicked, this, &positions::CaptainButton_2);
    connect(ui->councilorButton_2, &QPushButton::clicked, this, &positions::CouncilorButton_2);

    ui->logoutButton->setFocusPolicy(Qt::NoFocus);
    ui->captainButton->setFocusPolicy(Qt::NoFocus);
    ui->councilorButton->setFocusPolicy(Qt::NoFocus);
    ui->sk_chairman_button->setFocusPolicy(Qt::NoFocus);
    ui->sk_councilor_button->setFocusPolicy(Qt::NoFocus);
}

positions::~positions()
{
    delete ui;
    delete captainWindow;
    delete loginWindow;
}

void positions::CaptainButton()
{
    if (captainWindow) {
        delete captainWindow;
    }

    captainWindow = new vvm(db, this);
    connect(captainWindow, &vvm::windowClosed, this, &positions::show);

    this->hide();

    QStackedWidget* stackedWidget = captainWindow->findChild<QStackedWidget*>("stackedWidget");
    if (stackedWidget) {
        stackedWidget->setCurrentIndex(0);
    }
    captainWindow->showMaximized();
}


void positions::LogoutButton()
{

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Logout Confirmation", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        if (loginWindow) {
            delete loginWindow;
        }
        loginWindow = new loginsystem(db, this);
        this->hide();
        loginWindow->exec();
    }


}


void positions::SK_LogoutButton()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Logout Confirmation", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        if (loginWindow) {
            delete loginWindow;
        }
        loginWindow = new loginsystem(db, this);
        this->hide();
        loginWindow->exec();
    }

}


void positions::CouncilorButton()
{
    if (captainWindow) {
        delete captainWindow;
    }

    captainWindow = new vvm(db, this);
    connect(captainWindow, &vvm::windowClosed, this, &positions::show);

    QStackedWidget* stackedWidget = captainWindow->findChild<QStackedWidget*>("stackedWidget");
    if (stackedWidget) {
        stackedWidget->setCurrentIndex(1);
    }

    this->hide();
    captainWindow->showMaximized();
}


void positions::SKchairman_button()
{
    if (captainWindow) {
        delete captainWindow;
    }

    captainWindow = new vvm(db, this);
    connect(captainWindow, &vvm::windowClosed, this, &positions::show);

    QStackedWidget* stackedWidget = captainWindow->findChild<QStackedWidget*>("stackedWidget");
    if (stackedWidget) {
        stackedWidget->setCurrentIndex(2);
    }

    this->hide();
    captainWindow->showMaximized();
}


void positions::SKcouncilor_button()
{
    if (captainWindow) {
        delete captainWindow;
    }

    captainWindow = new vvm(db, this);
    connect(captainWindow, &vvm::windowClosed, this, &positions::show);

    QStackedWidget* stackedWidget = captainWindow->findChild<QStackedWidget*>("stackedWidget");
    if (stackedWidget) {
        stackedWidget->setCurrentIndex(3);
    }

    this->hide();
    captainWindow->showMaximized();
}


void positions::CaptainButton_2()
{
    if (captainWindow) {
        delete captainWindow;
    }

    captainWindow = new vvm(db, this);
    connect(captainWindow, &vvm::windowClosed, this, &positions::show);

    this->hide();

    QStackedWidget* stackedWidget = captainWindow->findChild<QStackedWidget*>("stackedWidget");
    if (stackedWidget) {
        stackedWidget->setCurrentIndex(0);
    }
    captainWindow->showMaximized();
}


void positions::CouncilorButton_2()
{
    if (captainWindow) {
        delete captainWindow;
    }

    captainWindow = new vvm(db, this);
    connect(captainWindow, &vvm::windowClosed, this, &positions::show);

    QStackedWidget* stackedWidget = captainWindow->findChild<QStackedWidget*>("stackedWidget");
    if (stackedWidget) {
        stackedWidget->setCurrentIndex(1);
    }

    this->hide();
    captainWindow->showMaximized();
}

