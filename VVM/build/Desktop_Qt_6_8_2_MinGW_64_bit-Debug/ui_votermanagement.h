/********************************************************************************
** Form generated from reading UI file 'votermanagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTERMANAGEMENT_H
#define UI_VOTERMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VoterManagement
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_8;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_first_name;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_voter_id;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_last_name;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_age;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_back;
    QPushButton *pushButton_insert;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *RefreshButton;
    QVBoxLayout *verticalLayout_10;
    QTableWidget *Voter_table;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ListDeleteButton;
    QPushButton *DeleteAll_Button;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QMainWindow *VoterManagement)
    {
        if (VoterManagement->objectName().isEmpty())
            VoterManagement->setObjectName("VoterManagement");
        VoterManagement->resize(1262, 582);
        VoterManagement->setMinimumSize(QSize(1262, 582));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        VoterManagement->setWindowIcon(icon);
        VoterManagement->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(VoterManagement);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"        stop: 0 #f0f0f0,\n"
"        stop: 1 #e0e0e0\n"
"    );\n"
"}"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMaximumSize(QSize(16777215, 303));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"background-color: none;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::NoFrame);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label = new QLabel(frame);
        label->setObjectName("label");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Segoe UI\";\n"
"	font-size: 35px;\n"
"	color: #0A1C3A;\n"
"	background-color: none;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

        verticalLayout_8->addWidget(label, 0, Qt::AlignmentFlag::AlignBottom);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 5, -1, -1);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, -1, 10, -1);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"	background-color: none;\n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_3, 0, Qt::AlignmentFlag::AlignBottom);

        lineEdit_first_name = new QLineEdit(frame);
        lineEdit_first_name->setObjectName("lineEdit_first_name");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_first_name->sizePolicy().hasHeightForWidth());
        lineEdit_first_name->setSizePolicy(sizePolicy3);
        lineEdit_first_name->setMinimumSize(QSize(281, 35));
        lineEdit_first_name->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit_first_name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: #0A1C3A;\n"
"font: 14pt \"Segoe UI\";\n"
"font-size: 16px;\n"
"padding: 5px;\n"
"border: 1px solid #0A1C3A;\n"
"border-radius: 5px;\n"
"}"));
        lineEdit_first_name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(lineEdit_first_name);


        verticalLayout_7->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, -1, 10, -1);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"	background-color: none;\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_2, 0, Qt::AlignmentFlag::AlignBottom);

        lineEdit_voter_id = new QLineEdit(frame);
        lineEdit_voter_id->setObjectName("lineEdit_voter_id");
        sizePolicy3.setHeightForWidth(lineEdit_voter_id->sizePolicy().hasHeightForWidth());
        lineEdit_voter_id->setSizePolicy(sizePolicy3);
        lineEdit_voter_id->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit_voter_id->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: #0A1C3A;\n"
"font: 14pt \"Segoe UI\";\n"
"font-size: 16px;\n"
"padding: 5px;\n"
"border: 1px solid #0A1C3A;\n"
"border-radius: 5px;\n"
"}"));
        lineEdit_voter_id->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(lineEdit_voter_id);


        verticalLayout_7->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(10, -1, 0, -1);
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"	background-color: none;\n"
"}"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_4, 0, Qt::AlignmentFlag::AlignBottom);

        lineEdit_last_name = new QLineEdit(frame);
        lineEdit_last_name->setObjectName("lineEdit_last_name");
        sizePolicy3.setHeightForWidth(lineEdit_last_name->sizePolicy().hasHeightForWidth());
        lineEdit_last_name->setSizePolicy(sizePolicy3);
        lineEdit_last_name->setMinimumSize(QSize(284, 35));
        lineEdit_last_name->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit_last_name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: #0A1C3A;\n"
"font: 14pt \"Segoe UI\";\n"
"font-size: 16px;\n"
"padding: 5px;\n"
"border: 1px solid #0A1C3A;\n"
"border-radius: 5px;\n"
"}"));
        lineEdit_last_name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_last_name);


        verticalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, -1, 0, -1);
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"	background-color: none;\n"
"}"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_5, 0, Qt::AlignmentFlag::AlignBottom);

        lineEdit_age = new QLineEdit(frame);
        lineEdit_age->setObjectName("lineEdit_age");
        sizePolicy3.setHeightForWidth(lineEdit_age->sizePolicy().hasHeightForWidth());
        lineEdit_age->setSizePolicy(sizePolicy3);
        lineEdit_age->setMaximumSize(QSize(135, 35));
        lineEdit_age->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit_age->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: #0A1C3A;\n"
"font: 14pt \"Segoe UI\";\n"
"font-size: 16px;\n"
"padding: 5px;\n"
"border: 1px solid #0A1C3A;\n"
"border-radius: 5px;\n"
"}"));
        lineEdit_age->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(lineEdit_age, 0, Qt::AlignmentFlag::AlignHCenter);


        verticalLayout_6->addLayout(verticalLayout_4);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(horizontalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(-1, 5, -1, -1);
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: italic 11pt \"Segoe UI\";\n"
"	font-size: 14px;\n"
"	color: #0A1C3A;\n"
"	background-color: none;\n"
"}"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        horizontalLayout->setContentsMargins(0, 10, 0, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_back = new QPushButton(frame);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setMinimumSize(QSize(136, 35));
        pushButton_back->setMaximumSize(QSize(136, 35));
        pushButton_back->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_back->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 600 9pt \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: white;\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(1, 120, 200),\n"
"        stop:1 rgb(1, 100, 182)\n"
"    );\n"
"\n"
"    border: 1px solid rgb(1, 26, 48);\n"
"    border-radius: 15px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(30, 145, 220),\n"
"        stop:1 rgb(0, 90, 165)\n"
"    );\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(0, 75, 140);\n"
"    padding-top: 6px;\n"
"    padding-bottom: 4px;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;\n"
"    border: 2px solid #0A1C3A;\n"
"}"));

        horizontalLayout->addWidget(pushButton_back);

        pushButton_insert = new QPushButton(frame);
        pushButton_insert->setObjectName("pushButton_insert");
        pushButton_insert->setMinimumSize(QSize(136, 35));
        pushButton_insert->setMaximumSize(QSize(136, 35));
        pushButton_insert->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_insert->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        pushButton_insert->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(pushButton_insert);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout_8->addLayout(verticalLayout_5);


        gridLayout->addLayout(verticalLayout_8, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(-1, -1, 0, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        RefreshButton = new QPushButton(centralwidget);
        RefreshButton->setObjectName("RefreshButton");
        RefreshButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        RefreshButton->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        RefreshButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 600 9pt \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: black;\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #B3E5FC,\n"
"        stop:1 #4FC3F7\n"
"    );\n"
"\n"
"    border: 1px solid #0288D1;\n"
"    border-radius: 15px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #E1F5FE,\n"
"        stop:1 #81D4FA\n"
"    );\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #29B6F6;\n"
"    padding-top: 6px;\n"
"    padding-bottom: 4px;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;\n"
"    border: 2px solid #0288D1;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/buttons/icons/refresh-page-option.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        RefreshButton->setIcon(icon1);

        horizontalLayout_2->addWidget(RefreshButton);


        verticalLayout_11->addLayout(horizontalLayout_2);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        Voter_table = new QTableWidget(centralwidget);
        Voter_table->setObjectName("Voter_table");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Voter_table->sizePolicy().hasHeightForWidth());
        Voter_table->setSizePolicy(sizePolicy4);
        Voter_table->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        Voter_table->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        Voter_table->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Voter_table->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"color: black;\n"
"background-color: #ffffff;\n"
"border: 1px solid #ccc;\n"
"gridline-color: #ddd;\n"
"font: 9pt \"Segoe UI\";\n"
"}\n"
""));
        Voter_table->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        Voter_table->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        Voter_table->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        Voter_table->setEditTriggers(QAbstractItemView::EditTrigger::DoubleClicked);
        Voter_table->setTabKeyNavigation(false);
        Voter_table->setAlternatingRowColors(false);
        Voter_table->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        Voter_table->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        Voter_table->setSortingEnabled(true);
        Voter_table->setCornerButtonEnabled(false);
        Voter_table->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        Voter_table->horizontalHeader()->setStretchLastSection(false);
        Voter_table->verticalHeader()->setVisible(true);
        Voter_table->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout_10->addWidget(Voter_table);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, -1, 0, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        ListDeleteButton = new QPushButton(centralwidget);
        ListDeleteButton->setObjectName("ListDeleteButton");
        ListDeleteButton->setMinimumSize(QSize(99, 35));
        ListDeleteButton->setMaximumSize(QSize(99, 35));
        ListDeleteButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        ListDeleteButton->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        ListDeleteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 600 9pt \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: white;\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(220, 60, 50), \n"
"        stop:1 rgb(180, 30, 30)\n"
"    );\n"
"\n"
"    border: 1px solid #5A0A0A; \n"
"    border-radius: 15px;\n"
"    padding: 6px 12px;\n"
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
        ListDeleteButton->setIconSize(QSize(18, 18));

        horizontalLayout_4->addWidget(ListDeleteButton);

        DeleteAll_Button = new QPushButton(centralwidget);
        DeleteAll_Button->setObjectName("DeleteAll_Button");
        DeleteAll_Button->setMinimumSize(QSize(109, 35));
        DeleteAll_Button->setMaximumSize(QSize(109, 35));
        DeleteAll_Button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        DeleteAll_Button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        DeleteAll_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 600 9pt \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: white;\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(240, 30, 20),\n"
"        stop:1 rgb(200, 20, 20)  \n"
"    );\n"
"\n"
"    border: 1px solid #8B0000; \n"
"    border-radius: 15px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(255, 50, 40), \n"
"        stop:1 rgb(210, 40, 30)\n"
"    );\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(180, 10, 10); \n"
"    padding-top: 6px;\n"
"    padding-bottom: 4px;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;\n"
"    border: 2px solid #B22222; \n"
"}\n"
""));

        horizontalLayout_4->addWidget(DeleteAll_Button);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_10->addLayout(horizontalLayout_4);


        verticalLayout_11->addLayout(verticalLayout_10);


        gridLayout_2->addLayout(verticalLayout_11, 0, 1, 1, 1);

        VoterManagement->setCentralWidget(centralwidget);
        QWidget::setTabOrder(lineEdit_first_name, lineEdit_last_name);
        QWidget::setTabOrder(lineEdit_last_name, lineEdit_voter_id);
        QWidget::setTabOrder(lineEdit_voter_id, lineEdit_age);
        QWidget::setTabOrder(lineEdit_age, pushButton_back);
        QWidget::setTabOrder(pushButton_back, pushButton_insert);
        QWidget::setTabOrder(pushButton_insert, Voter_table);
        QWidget::setTabOrder(Voter_table, ListDeleteButton);
        QWidget::setTabOrder(ListDeleteButton, DeleteAll_Button);

        retranslateUi(VoterManagement);

        QMetaObject::connectSlotsByName(VoterManagement);
    } // setupUi

    void retranslateUi(QMainWindow *VoterManagement)
    {
        VoterManagement->setWindowTitle(QCoreApplication::translate("VoterManagement", "PolliTech", nullptr));
        label->setText(QCoreApplication::translate("VoterManagement", "MANAGE VOTERS", nullptr));
        label_3->setText(QCoreApplication::translate("VoterManagement", "FIRST NAME", nullptr));
        label_2->setText(QCoreApplication::translate("VoterManagement", "VOTER ID", nullptr));
        label_4->setText(QCoreApplication::translate("VoterManagement", "LAST NAME", nullptr));
        label_5->setText(QCoreApplication::translate("VoterManagement", "AGE", nullptr));
        label_6->setText(QCoreApplication::translate("VoterManagement", "Voter ID cannot be changed. If incorrect, please delete and re-add the voter", nullptr));
        pushButton_back->setText(QCoreApplication::translate("VoterManagement", "BACK", nullptr));
        pushButton_insert->setText(QCoreApplication::translate("VoterManagement", "INSERT", nullptr));
#if QT_CONFIG(tooltip)
        RefreshButton->setToolTip(QCoreApplication::translate("VoterManagement", "<html><head/><body><p align=\"center\">Refresh</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        RefreshButton->setText(QString());
#if QT_CONFIG(tooltip)
        ListDeleteButton->setToolTip(QCoreApplication::translate("VoterManagement", "<html><head/><body><p align=\"center\">Delete voter</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ListDeleteButton->setText(QCoreApplication::translate("VoterManagement", "DELETE", nullptr));
#if QT_CONFIG(tooltip)
        DeleteAll_Button->setToolTip(QCoreApplication::translate("VoterManagement", "<html><head/><body><p align=\"center\">Delete all the voters</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteAll_Button->setText(QCoreApplication::translate("VoterManagement", "DELETE ALL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VoterManagement: public Ui_VoterManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTERMANAGEMENT_H
