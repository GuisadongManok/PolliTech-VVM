/********************************************************************************
** Form generated from reading UI file 'electioncontrol.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELECTIONCONTROL_H
#define UI_ELECTIONCONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ElectionControl
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_refresh;
    QTableWidget *statusTableWidget;
    QFrame *frame;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_eStats;
    QLabel *label_sTime;
    QLabel *label_eTime;
    QVBoxLayout *verticalLayout_2;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *start_stop_button;
    QPushButton *resetElection_button;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ElectionControl)
    {
        if (ElectionControl->objectName().isEmpty())
            ElectionControl->setObjectName("ElectionControl");
        ElectionControl->resize(642, 577);
        ElectionControl->setMinimumSize(QSize(642, 577));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ElectionControl->setWindowIcon(icon);
        ElectionControl->setStyleSheet(QString::fromUtf8("QDialog {\n"
"background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"        stop: 0 #f0f0f0,\n"
"        stop: 1 #e0e0e0\n"
"    );\n"
"}"));
        gridLayout_2 = new QGridLayout(ElectionControl);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(ElectionControl);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Segoe UI\";\n"
"	font-size: 35px;\n"
"	color: #0A1C3A;\n"
"	background-color: none;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_refresh = new QPushButton(ElectionControl);
        pushButton_refresh->setObjectName("pushButton_refresh");
        pushButton_refresh->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_refresh->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        pushButton_refresh->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 600 9pt \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: #0A1C3A;\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                stop:0 #ffffff, stop:1 #dcdcdc);\n"
"    border: 1px solid #888;\n"
"    border-radius: 4px;\n"
"    padding: 6px 12px;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                stop:0 #f0f0f0, stop:1 #c8c8c8);\n"
"    border: 1px solid #555;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                stop:0 #c8c8c8, stop:1 #a0a0a0);\n"
"    padding-top: 7px;\n"
"    padding-left: 13px;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/buttons/icons/refresh-page-option.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_refresh->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButton_refresh);


        verticalLayout_3->addLayout(horizontalLayout_2);

        statusTableWidget = new QTableWidget(ElectionControl);
        statusTableWidget->setObjectName("statusTableWidget");
        statusTableWidget->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        statusTableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"	background-color: white;\n"
"}"));

        verticalLayout_3->addWidget(statusTableWidget);


        gridLayout_2->addLayout(verticalLayout_3, 1, 0, 1, 1);

        frame = new QFrame(ElectionControl);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(16777215, 101));
        frame->setFrameShape(QFrame::Shape::NoFrame);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_eStats = new QLabel(frame);
        label_eStats->setObjectName("label_eStats");
        sizePolicy.setHeightForWidth(label_eStats->sizePolicy().hasHeightForWidth());
        label_eStats->setSizePolicy(sizePolicy);
        label_eStats->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"	background-color: none;\n"
"}"));
        label_eStats->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(label_eStats);

        label_sTime = new QLabel(frame);
        label_sTime->setObjectName("label_sTime");
        sizePolicy.setHeightForWidth(label_sTime->sizePolicy().hasHeightForWidth());
        label_sTime->setSizePolicy(sizePolicy);
        label_sTime->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"	background-color: none;\n"
"}"));
        label_sTime->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(label_sTime);

        label_eTime = new QLabel(frame);
        label_eTime->setObjectName("label_eTime");
        sizePolicy.setHeightForWidth(label_eTime->sizePolicy().hasHeightForWidth());
        label_eTime->setSizePolicy(sizePolicy);
        label_eTime->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"	background-color: none;\n"
"}"));
        label_eTime->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(label_eTime);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        line_2 = new QFrame(ElectionControl);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        start_stop_button = new QPushButton(ElectionControl);
        start_stop_button->setObjectName("start_stop_button");
        start_stop_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        start_stop_button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        start_stop_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 600 9pt \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: #0A1C3A;\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                stop:0 #ffffff, stop:1 #dcdcdc);\n"
"    border: 1px solid #888;\n"
"    border-radius: 4px;\n"
"    padding: 6px 12px;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                stop:0 #f0f0f0, stop:1 #c8c8c8);\n"
"    border: 1px solid #555;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                stop:0 #c8c8c8, stop:1 #a0a0a0);\n"
"    padding-top: 7px;\n"
"    padding-left: 13px;\n"
"}\n"
""));
        start_stop_button->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(start_stop_button);

        resetElection_button = new QPushButton(ElectionControl);
        resetElection_button->setObjectName("resetElection_button");
        resetElection_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        resetElection_button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        resetElection_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 600 9pt \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: #0A1C3A;\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                stop:0 #ffffff, stop:1 #dcdcdc);\n"
"    border: 1px solid #888;\n"
"    border-radius: 4px;\n"
"    padding: 6px 12px;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                stop:0 #f0f0f0, stop:1 #c8c8c8);\n"
"    border: 1px solid #555;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                stop:0 #c8c8c8, stop:1 #a0a0a0);\n"
"    padding-top: 7px;\n"
"    padding-left: 13px;\n"
"}\n"
""));
        resetElection_button->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(resetElection_button, 0, Qt::AlignmentFlag::AlignHCenter);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout_2, 3, 0, 1, 1);


        retranslateUi(ElectionControl);

        QMetaObject::connectSlotsByName(ElectionControl);
    } // setupUi

    void retranslateUi(QDialog *ElectionControl)
    {
        ElectionControl->setWindowTitle(QCoreApplication::translate("ElectionControl", "PolliTech", nullptr));
        label->setText(QCoreApplication::translate("ElectionControl", "ELECTION CONTROL PANEL", nullptr));
        pushButton_refresh->setText(QString());
        label_eStats->setText(QCoreApplication::translate("ElectionControl", "Election Status:", nullptr));
        label_sTime->setText(QCoreApplication::translate("ElectionControl", "Start Time: ", nullptr));
        label_eTime->setText(QCoreApplication::translate("ElectionControl", "End Time: ", nullptr));
#if QT_CONFIG(tooltip)
        start_stop_button->setToolTip(QCoreApplication::translate("ElectionControl", "<html><head/><body><p align=\"center\">Start/stop election</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        start_stop_button->setText(QCoreApplication::translate("ElectionControl", "START/STOP ELECTION", nullptr));
#if QT_CONFIG(tooltip)
        resetElection_button->setToolTip(QCoreApplication::translate("ElectionControl", "<html><head/><body><p align=\"center\">Reset election data</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        resetElection_button->setText(QCoreApplication::translate("ElectionControl", "RESET ELECTION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ElectionControl: public Ui_ElectionControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELECTIONCONTROL_H
