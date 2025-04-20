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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QFrame *line;
    QFrame *frame;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *manage_voter_button;
    QPushButton *manage_candidate_button;
    QPushButton *manage_admins_button;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QPushButton *view_live_vote_button;
    QPushButton *start_election_button;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QPushButton *LogoutButton;

    void setupUi(QDialog *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->resize(618, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dashboard->setWindowIcon(icon);
        dashboard->setStyleSheet(QString::fromUtf8("QDialog {\n"
"background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"        stop: 0 #f0f0f0,\n"
"        stop: 1 #e0e0e0\n"
"    );\n"
"}"));
        gridLayout_2 = new QGridLayout(dashboard);
        gridLayout_2->setObjectName("gridLayout_2");
        label_4 = new QLabel(dashboard);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Segoe UI\";\n"
"	font-size: 35px;\n"
"	color: #0A1C3A;\n"
"}"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        line = new QFrame(dashboard);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 1);

        frame = new QFrame(dashboard);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"padding: 3px;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::NoFrame);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 14pt \"Segoe UI\";\n"
"	color: #0A1C3A;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        manage_voter_button = new QPushButton(frame);
        manage_voter_button->setObjectName("manage_voter_button");
        manage_voter_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        manage_voter_button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        manage_voter_button->setToolTipDuration(-1);
        manage_voter_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	background-color: #f8f8f8;\n"
"	color: #0A1C3A;\n"
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

        manage_candidate_button = new QPushButton(frame);
        manage_candidate_button->setObjectName("manage_candidate_button");
        manage_candidate_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        manage_candidate_button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        manage_candidate_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	background-color: #f8f8f8;\n"
"	color: #0A1C3A;\n"
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

        manage_admins_button = new QPushButton(frame);
        manage_admins_button->setObjectName("manage_admins_button");
        manage_admins_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        manage_admins_button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        manage_admins_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	background-color: #f8f8f8;\n"
"	color: #0A1C3A;\n"
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


        verticalLayout_3->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 14pt \"Segoe UI\";\n"
"	color: #0A1C3A;\n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        view_live_vote_button = new QPushButton(frame);
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

        verticalLayout_2->addWidget(view_live_vote_button);

        start_election_button = new QPushButton(frame);
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

        verticalLayout_2->addWidget(start_election_button);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_4->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout_4, 0, 1, 1, 1);


        gridLayout_2->addWidget(frame, 2, 0, 1, 1);

        line_2 = new QFrame(dashboard);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line_2, 3, 0, 1, 1);

        LogoutButton = new QPushButton(dashboard);
        LogoutButton->setObjectName("LogoutButton");
        LogoutButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        LogoutButton->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        LogoutButton->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        LogoutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 600 9pt \"Segoe UI\";\n"
"    font-size: 12px;\n"
"    color: black;\n"
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

        gridLayout_2->addWidget(LogoutButton, 4, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);


        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QDialog *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "PolliTech", nullptr));
        label_4->setText(QCoreApplication::translate("dashboard", "ADMIN DASHBOARD", nullptr));
        label->setText(QCoreApplication::translate("dashboard", "USER MANAGEMENT", nullptr));
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
        label_3->setText(QCoreApplication::translate("dashboard", "ELECTION RESULTS & CONTROL", nullptr));
#if QT_CONFIG(tooltip)
        view_live_vote_button->setToolTip(QCoreApplication::translate("dashboard", "<html><head/><body><p align=\"center\">View live vote count</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        view_live_vote_button->setText(QCoreApplication::translate("dashboard", "VIEW VOTE COUNT", nullptr));
#if QT_CONFIG(tooltip)
        start_election_button->setToolTip(QCoreApplication::translate("dashboard", "<html><head/><body><p align=\"center\">Control Election</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        start_election_button->setText(QCoreApplication::translate("dashboard", "START/STOP ELECTION", nullptr));
        LogoutButton->setText(QCoreApplication::translate("dashboard", "LOGOUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
