/********************************************************************************
** Form generated from reading UI file 'vvm.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVM_H
#define UI_VVM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvm
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_date;
    QVBoxLayout *verticalLayout_3;
    QFrame *line;
    QLabel *label_7;
    QFrame *line_2;
    QGridLayout *gridLayoutcap;
    QLabel *label_3;
    QScrollArea *scrollArea_cap;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QFrame *frame_cap;
    QGridLayout *gridLayout_9;
    QVBoxLayout *captainLayout;
    QGridLayout *gridLayout_skchair;
    QLabel *label_6;
    QScrollArea *scrollArea_skchair;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout_4;
    QFrame *frame_skchair;
    QGridLayout *gridLayout_10;
    QVBoxLayout *skChairmanLayout;
    QGridLayout *gridLayout_councilors;
    QLabel *label_5;
    QScrollArea *scrollArea_councilors;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_3;
    QFrame *frame_councilors;
    QGridLayout *gridLayout_8;
    QVBoxLayout *bCouncilorsLayout;
    QGridLayout *gridLayout_skcouncilors;
    QLabel *label_8;
    QScrollArea *scrollArea_skcouncilors;
    QWidget *scrollAreaWidgetContents_5;
    QGridLayout *gridLayout_6;
    QFrame *frame_skcouncilors;
    QGridLayout *gridLayout_11;
    QVBoxLayout *skCouncilorsLayout;
    QFrame *line_3;
    QPushButton *submitButton;

    void setupUi(QMainWindow *vvm)
    {
        if (vvm->objectName().isEmpty())
            vvm->setObjectName("vvm");
        vvm->resize(900, 879);
        vvm->setMinimumSize(QSize(900, 789));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        vvm->setWindowIcon(icon);
        centralwidget = new QWidget(vvm);
        centralwidget->setObjectName("centralwidget");
        gridLayout_7 = new QGridLayout(centralwidget);
        gridLayout_7->setObjectName("gridLayout_7");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");

        gridLayout_7->addLayout(verticalLayout_4, 0, 0, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setObjectName("gridLayout_5");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(61, 52));
        label_2->setMaximumSize(QSize(61, 52));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/backgrounds/256x256 no bg.png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	color: black;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_2->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter);

        label_date = new QLabel(frame);
        label_date->setObjectName("label_date");
        label_date->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 11pt \"Segoe UI\";\n"
"	color: black;\n"
"}"));
        label_date->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_2->addWidget(label_date, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        line = new QFrame(frame);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 11pt \"Segoe UI\";\n"
"	color: black;\n"
"}"));

        verticalLayout_3->addWidget(label_7, 0, Qt::AlignmentFlag::AlignHCenter);

        line_2 = new QFrame(frame);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_2);


        verticalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);


        gridLayout_5->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_7->addWidget(frame, 1, 1, 1, 2);

        gridLayoutcap = new QGridLayout();
        gridLayoutcap->setObjectName("gridLayoutcap");
        gridLayoutcap->setVerticalSpacing(0);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 13pt \"Segoe UI\";\n"
"	color: white;\n"
"	background-color: #3CA36E;\n"
"	padding: 4px;\n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayoutcap->addWidget(label_3, 0, 0, 1, 1);

        scrollArea_cap = new QScrollArea(centralwidget);
        scrollArea_cap->setObjectName("scrollArea_cap");
        scrollArea_cap->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 430, 257));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        frame_cap = new QFrame(scrollAreaWidgetContents);
        frame_cap->setObjectName("frame_cap");
        frame_cap->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	background: #f0f0f0;\n"
"}"));
        frame_cap->setFrameShape(QFrame::Shape::Box);
        frame_cap->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_9 = new QGridLayout(frame_cap);
        gridLayout_9->setObjectName("gridLayout_9");
        captainLayout = new QVBoxLayout();
        captainLayout->setObjectName("captainLayout");

        gridLayout_9->addLayout(captainLayout, 0, 0, 1, 1);


        gridLayout->addWidget(frame_cap, 0, 0, 1, 1, Qt::AlignmentFlag::AlignTop);

        scrollArea_cap->setWidget(scrollAreaWidgetContents);

        gridLayoutcap->addWidget(scrollArea_cap, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayoutcap, 2, 1, 1, 1);

        gridLayout_skchair = new QGridLayout();
        gridLayout_skchair->setObjectName("gridLayout_skchair");
        gridLayout_skchair->setVerticalSpacing(0);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 13pt \"Segoe UI\";\n"
"	color: white;\n"
"	background-color: #3CA36E;\n"
"	padding: 4px;\n"
"}"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_skchair->addWidget(label_6, 0, 0, 1, 1);

        scrollArea_skchair = new QScrollArea(centralwidget);
        scrollArea_skchair->setObjectName("scrollArea_skchair");
        scrollArea_skchair->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 430, 257));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout_4->setObjectName("gridLayout_4");
        frame_skchair = new QFrame(scrollAreaWidgetContents_4);
        frame_skchair->setObjectName("frame_skchair");
        frame_skchair->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	background: #f0f0f0;\n"
"}"));
        frame_skchair->setFrameShape(QFrame::Shape::Box);
        frame_skchair->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_10 = new QGridLayout(frame_skchair);
        gridLayout_10->setObjectName("gridLayout_10");
        skChairmanLayout = new QVBoxLayout();
        skChairmanLayout->setObjectName("skChairmanLayout");

        gridLayout_10->addLayout(skChairmanLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame_skchair, 0, 0, 1, 1, Qt::AlignmentFlag::AlignTop);

        scrollArea_skchair->setWidget(scrollAreaWidgetContents_4);

        gridLayout_skchair->addWidget(scrollArea_skchair, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_skchair, 2, 2, 1, 1);

        gridLayout_councilors = new QGridLayout();
        gridLayout_councilors->setObjectName("gridLayout_councilors");
        gridLayout_councilors->setVerticalSpacing(0);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 13pt \"Segoe UI\";\n"
"	color: white;\n"
"	background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(1, 120, 200),\n"
"        stop:1 rgb(1, 100, 182)\n"
"	);\n"
"	padding: 4px;\n"
"}"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_councilors->addWidget(label_5, 0, 0, 1, 1);

        scrollArea_councilors = new QScrollArea(centralwidget);
        scrollArea_councilors->setObjectName("scrollArea_councilors");
        scrollArea_councilors->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 430, 256));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_3->setObjectName("gridLayout_3");
        frame_councilors = new QFrame(scrollAreaWidgetContents_3);
        frame_councilors->setObjectName("frame_councilors");
        frame_councilors->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	background: #f0f0f0;\n"
"}"));
        frame_councilors->setFrameShape(QFrame::Shape::Box);
        frame_councilors->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_8 = new QGridLayout(frame_councilors);
        gridLayout_8->setObjectName("gridLayout_8");
        bCouncilorsLayout = new QVBoxLayout();
        bCouncilorsLayout->setObjectName("bCouncilorsLayout");

        gridLayout_8->addLayout(bCouncilorsLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_councilors, 0, 0, 1, 1, Qt::AlignmentFlag::AlignTop);

        scrollArea_councilors->setWidget(scrollAreaWidgetContents_3);

        gridLayout_councilors->addWidget(scrollArea_councilors, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_councilors, 3, 1, 1, 1);

        gridLayout_skcouncilors = new QGridLayout();
        gridLayout_skcouncilors->setObjectName("gridLayout_skcouncilors");
        gridLayout_skcouncilors->setVerticalSpacing(0);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 13pt \"Segoe UI\";\n"
"	color: white;\n"
"	background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(1, 120, 200),\n"
"        stop:1 rgb(1, 100, 182)\n"
"	);\n"
"	padding: 4px;\n"
"}"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_skcouncilors->addWidget(label_8, 0, 0, 1, 1);

        scrollArea_skcouncilors = new QScrollArea(centralwidget);
        scrollArea_skcouncilors->setObjectName("scrollArea_skcouncilors");
        scrollArea_skcouncilors->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName("scrollAreaWidgetContents_5");
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 430, 256));
        gridLayout_6 = new QGridLayout(scrollAreaWidgetContents_5);
        gridLayout_6->setObjectName("gridLayout_6");
        frame_skcouncilors = new QFrame(scrollAreaWidgetContents_5);
        frame_skcouncilors->setObjectName("frame_skcouncilors");
        frame_skcouncilors->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	background: #f0f0f0;\n"
"}"));
        frame_skcouncilors->setFrameShape(QFrame::Shape::Box);
        frame_skcouncilors->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_11 = new QGridLayout(frame_skcouncilors);
        gridLayout_11->setObjectName("gridLayout_11");
        skCouncilorsLayout = new QVBoxLayout();
        skCouncilorsLayout->setObjectName("skCouncilorsLayout");

        gridLayout_11->addLayout(skCouncilorsLayout, 0, 0, 1, 1);


        gridLayout_6->addWidget(frame_skcouncilors, 0, 0, 1, 1, Qt::AlignmentFlag::AlignTop);

        scrollArea_skcouncilors->setWidget(scrollAreaWidgetContents_5);

        gridLayout_skcouncilors->addWidget(scrollArea_skcouncilors, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_skcouncilors, 3, 2, 1, 1);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_7->addWidget(line_3, 4, 1, 1, 2);

        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName("submitButton");
        submitButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        submitButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 600 9pt \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: black;\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #6FE1A4, stop:1 #3CA36E\n"
"    );\n"
"    border: 1px solid #2e7d5d;\n"
"    border-radius: 15px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #7FFFB2, stop:1 #4BB97E\n"
"    );\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #3CA36E, stop:1 #6FE1A4\n"
"    );\n"
"    padding-top: 7px;\n"
"    padding-bottom: 3px;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;\n"
"    border: 2px solid #1A5E3B;\n"
"}\n"
""));

        gridLayout_7->addWidget(submitButton, 5, 1, 1, 2, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        vvm->setCentralWidget(centralwidget);

        retranslateUi(vvm);

        QMetaObject::connectSlotsByName(vvm);
    } // setupUi

    void retranslateUi(QMainWindow *vvm)
    {
        vvm->setWindowTitle(QCoreApplication::translate("vvm", "PolliTech", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("vvm", "BARANGAY AND SK ELECTIONS", nullptr));
        label_date->setText(QCoreApplication::translate("vvm", "MMM d, yyyy", nullptr));
        label_7->setText(QCoreApplication::translate("vvm", "Please select your candidates carefully. Votes cannot be changed after submitting.", nullptr));
        label_3->setText(QCoreApplication::translate("vvm", "Barangay Captain (Punong Barangay)\n"
"Pick 1 to vote", nullptr));
        label_6->setText(QCoreApplication::translate("vvm", "SK Chairperson\n"
"Pick 1 to vote", nullptr));
        label_5->setText(QCoreApplication::translate("vvm", "Barangay Councilors (Sangguniang Barangay)\n"
"Pick 7 to vote", nullptr));
        label_8->setText(QCoreApplication::translate("vvm", "SK Councilors (SK Kagawad)\n"
"Pick 7 to vote", nullptr));
        submitButton->setText(QCoreApplication::translate("vvm", "SUBMIT VOTE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvm: public Ui_vvm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVM_H
