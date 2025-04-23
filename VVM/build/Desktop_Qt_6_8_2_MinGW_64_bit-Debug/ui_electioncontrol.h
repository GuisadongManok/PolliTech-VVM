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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ElectionControl
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QListWidget *listWidget;
    QFrame *frame;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *start_election_button;
    QPushButton *start_election_button_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ElectionControl)
    {
        if (ElectionControl->objectName().isEmpty())
            ElectionControl->setObjectName("ElectionControl");
        ElectionControl->resize(600, 550);
        ElectionControl->setMinimumSize(QSize(600, 413));
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
        verticalLayout_3 = new QVBoxLayout(ElectionControl);
        verticalLayout_3->setObjectName("verticalLayout_3");
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

        verticalLayout_3->addWidget(label);

        listWidget = new QListWidget(ElectionControl);
        listWidget->setObjectName("listWidget");
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"	background-color: rgba(255,255,255,200);\n"
"}"));

        verticalLayout_3->addWidget(listWidget);

        frame = new QFrame(ElectionControl);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(16777215, 101));
        frame->setFrameShape(QFrame::Shape::NoFrame);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"	background-color: none;\n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"	background-color: none;\n"
"}"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"	background-color: none;\n"
"}"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(label_5);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_3->addWidget(frame);

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

        start_election_button = new QPushButton(ElectionControl);
        start_election_button->setObjectName("start_election_button");
        start_election_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        start_election_button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        start_election_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        start_election_button->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(start_election_button);

        start_election_button_2 = new QPushButton(ElectionControl);
        start_election_button_2->setObjectName("start_election_button_2");
        start_election_button_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        start_election_button_2->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        start_election_button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        start_election_button_2->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(start_election_button_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(ElectionControl);

        QMetaObject::connectSlotsByName(ElectionControl);
    } // setupUi

    void retranslateUi(QDialog *ElectionControl)
    {
        ElectionControl->setWindowTitle(QCoreApplication::translate("ElectionControl", "PolliTech", nullptr));
        label->setText(QCoreApplication::translate("ElectionControl", "ELECTION CONTROL PANEL", nullptr));
        label_3->setText(QCoreApplication::translate("ElectionControl", "Election Status:", nullptr));
        label_4->setText(QCoreApplication::translate("ElectionControl", "Start Time: ", nullptr));
        label_5->setText(QCoreApplication::translate("ElectionControl", "End Time: ", nullptr));
#if QT_CONFIG(tooltip)
        start_election_button->setToolTip(QCoreApplication::translate("ElectionControl", "<html><head/><body><p align=\"center\">Control Election</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        start_election_button->setText(QCoreApplication::translate("ElectionControl", "START/STOP ELECTION", nullptr));
#if QT_CONFIG(tooltip)
        start_election_button_2->setToolTip(QCoreApplication::translate("ElectionControl", "<html><head/><body><p align=\"center\">Control Election</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        start_election_button_2->setText(QCoreApplication::translate("ElectionControl", "RESET ELECTION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ElectionControl: public Ui_ElectionControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELECTIONCONTROL_H
