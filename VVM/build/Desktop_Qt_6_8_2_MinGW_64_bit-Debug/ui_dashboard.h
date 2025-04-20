/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QGroupBox *groupBox_userManagement;
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *manage_voter_button;
    QPushButton *manage_candidate_button;
    QPushButton *manage_admins_button;
    QGroupBox *groupBox_resultsNcontrol;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *view_live_vote_button;
    QPushButton *start_election_button;
    QLabel *label_2;
    QPushButton *LogoutButton;
    QLabel *label_4;

    void setupUi(QDialog *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->resize(721, 534);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dashboard->setWindowIcon(icon);
        dashboard->setStyleSheet(QString::fromUtf8("QDialog {\n"
"background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #f8f9fa, stop:1 #e9ecef);\n"
"}"));
        groupBox_userManagement = new QGroupBox(dashboard);
        groupBox_userManagement->setObjectName("groupBox_userManagement");
        groupBox_userManagement->setGeometry(QRect(110, 80, 411, 181));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        groupBox_userManagement->setFont(font);
        groupBox_userManagement->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	font: bold 16pt \"Segoe UI\";\n"
"    border: 1px solid #0A1C3A;\n"
"    border-radius: 8px;\n"
"    margin-top: 30px;\n"
"    padding: 15px;\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #f5f5f5,\n"
"        stop:1 #e0e0e0\n"
"    );\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 0 10px;\n"
"    color: #0A1C3A;\n"
"    border-radius: 4px;\n"
"}"));
        groupBox_userManagement->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gridLayout = new QGridLayout(groupBox_userManagement);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox_userManagement);
        label->setObjectName("label");
        label->setMinimumSize(QSize(81, 81));
        label->setMaximumSize(QSize(81, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/buttons/icons/user logo.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        manage_voter_button = new QPushButton(groupBox_userManagement);
        manage_voter_button->setObjectName("manage_voter_button");
        manage_voter_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        manage_voter_button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        manage_voter_button->setToolTipDuration(-1);
        manage_voter_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	background-color: #f8f8f8;\n"
"	color: black;\n"
"	font-size: 16px;\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #e6e6e6;\n"
"}"));
        manage_voter_button->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(manage_voter_button);

        manage_candidate_button = new QPushButton(groupBox_userManagement);
        manage_candidate_button->setObjectName("manage_candidate_button");
        manage_candidate_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        manage_candidate_button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        manage_candidate_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	background-color: #f8f8f8;\n"
"	color: black;\n"
"	font-size: 16px;\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #e6e6e6;\n"
"}"));
        manage_candidate_button->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(manage_candidate_button);

        manage_admins_button = new QPushButton(groupBox_userManagement);
        manage_admins_button->setObjectName("manage_admins_button");
        manage_admins_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        manage_admins_button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        manage_admins_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	background-color: #f8f8f8;\n"
"	color: black;\n"
"	font-size: 16px;\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #e6e6e6;\n"
"}"));
        manage_admins_button->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(manage_admins_button);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        groupBox_resultsNcontrol = new QGroupBox(dashboard);
        groupBox_resultsNcontrol->setObjectName("groupBox_resultsNcontrol");
        groupBox_resultsNcontrol->setGeometry(QRect(120, 280, 411, 163));
        groupBox_resultsNcontrol->setFont(font);
        groupBox_resultsNcontrol->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	font: bold 16pt \"Segoe UI\";\n"
"    border: 1px solid #0A1C3A;\n"
"    border-radius: 8px;\n"
"    margin-top: 30px;\n"
"    padding: 15px;\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #f5f5f5,\n"
"        stop:1 #e0e0e0\n"
"    );\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 0 10px;\n"
"    color: #0A1C3A;\n"
"    border-radius: 4px;\n"
"}"));
        groupBox_resultsNcontrol->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox_resultsNcontrol);
        gridLayout_2->setObjectName("gridLayout_2");
        label_3 = new QLabel(groupBox_resultsNcontrol);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(81, 81));
        label_3->setMaximumSize(QSize(81, 81));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icons/buttons/icons/dashboard.png")));
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        view_live_vote_button = new QPushButton(groupBox_resultsNcontrol);
        view_live_vote_button->setObjectName("view_live_vote_button");
        view_live_vote_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        view_live_vote_button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        view_live_vote_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	background-color: #f8f8f8;\n"
"	color: black;\n"
"	font-size: 16px;\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #e6e6e6;\n"
"}"));
        view_live_vote_button->setIconSize(QSize(16, 16));

        verticalLayout_3->addWidget(view_live_vote_button);

        start_election_button = new QPushButton(groupBox_resultsNcontrol);
        start_election_button->setObjectName("start_election_button");
        start_election_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        start_election_button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        start_election_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	background-color: #f8f8f8;\n"
"	color: black;\n"
"	font-size: 16px;\n"
"	border: 1px solid black;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #e6e6e6;\n"
"}"));
        start_election_button->setIconSize(QSize(16, 16));

        verticalLayout_3->addWidget(start_election_button);


        gridLayout_2->addLayout(verticalLayout_3, 0, 1, 1, 1);

        label_2 = new QLabel(dashboard);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-10, 430, 111, 111));
        label_2->setMinimumSize(QSize(111, 111));
        label_2->setMaximumSize(QSize(111, 111));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/backgrounds/256x256 logo w name no bg.png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        LogoutButton = new QPushButton(dashboard);
        LogoutButton->setObjectName("LogoutButton");
        LogoutButton->setGeometry(QRect(600, 10, 99, 28));
        LogoutButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        LogoutButton->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        LogoutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 600 9pt \"Segoe UI\";\n"
"    font-size: 12px;\n"
"    color: white;\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(220, 60, 50), \n"
"        stop:1 rgb(180, 30, 30)\n"
"    );\n"
"\n"
"    border: 1px solid #5A0A0A; \n"
"    border-radius: 14px;\n"
"    padding: 5px 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(240, 80, 70),\n"
"        stop:1 rgb(200, 40, 40)\n"
"    );\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(160, 20, 20);\n"
"    padding-top: 6px;\n"
"    padding-bottom: 4px;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;\n"
"    border: 2px solid #8B0000;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/buttons/icons/power_icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        LogoutButton->setIcon(icon1);
        LogoutButton->setIconSize(QSize(16, 16));
        label_4 = new QLabel(dashboard);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 10, 353, 47));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Segoe UI\";\n"
"	font-size: 35px;\n"
"	color: #0A1C3A;\n"
"}"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        QWidget::setTabOrder(manage_voter_button, manage_candidate_button);
        QWidget::setTabOrder(manage_candidate_button, view_live_vote_button);

        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QDialog *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "PolliTech", nullptr));
        groupBox_userManagement->setTitle(QCoreApplication::translate("dashboard", "USER MANAGEMENT", nullptr));
        label->setText(QString());
#if QT_CONFIG(tooltip)
        manage_voter_button->setToolTip(QCoreApplication::translate("dashboard", "<html><head/><body><p align=\"center\">Add or Remove Voters</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        manage_voter_button->setText(QCoreApplication::translate("dashboard", "MANAGE VOTERS", nullptr));
#if QT_CONFIG(tooltip)
        manage_candidate_button->setToolTip(QCoreApplication::translate("dashboard", "<html><head/><body><p align=\"center\">Add or Remove Candidates</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        manage_candidate_button->setText(QCoreApplication::translate("dashboard", "MANAGE CANDIDATES", nullptr));
#if QT_CONFIG(tooltip)
        manage_admins_button->setToolTip(QCoreApplication::translate("dashboard", "<html><head/><body><p align=\"center\">Add or Remove Admins</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        manage_admins_button->setText(QCoreApplication::translate("dashboard", "MANAGE OTHER ADMINS", nullptr));
        groupBox_resultsNcontrol->setTitle(QCoreApplication::translate("dashboard", "ELECTION CONTROL", nullptr));
        label_3->setText(QString());
#if QT_CONFIG(tooltip)
        view_live_vote_button->setToolTip(QCoreApplication::translate("dashboard", "<html><head/><body><p align=\"center\">View live vote count</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        view_live_vote_button->setText(QCoreApplication::translate("dashboard", "VIEW VOTE COUNT", nullptr));
#if QT_CONFIG(tooltip)
        start_election_button->setToolTip(QCoreApplication::translate("dashboard", "<html><head/><body><p align=\"center\">Control Election</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        start_election_button->setText(QCoreApplication::translate("dashboard", "START/STOP ELECTION", nullptr));
        label_2->setText(QString());
        LogoutButton->setText(QCoreApplication::translate("dashboard", "LOGOUT", nullptr));
        label_4->setText(QCoreApplication::translate("dashboard", "ADMIN DASHBOARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
