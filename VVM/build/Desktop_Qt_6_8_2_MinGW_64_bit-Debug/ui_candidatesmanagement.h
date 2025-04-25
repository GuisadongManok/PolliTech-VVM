/********************************************************************************
** Form generated from reading UI file 'candidatesmanagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANDIDATESMANAGEMENT_H
#define UI_CANDIDATESMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_candidatesmanagement
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_11;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_first_name;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_voter_id;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QComboBox *comboBox_positions;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_last_name;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_age;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEdit_party;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QPushButton *pushButton_insert;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *refresh_button;
    QVBoxLayout *verticalLayout_12;
    QTableWidget *candidate_tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *list_delete_button;
    QPushButton *list_deleteAll_button;

    void setupUi(QMainWindow *candidatesmanagement)
    {
        if (candidatesmanagement->objectName().isEmpty())
            candidatesmanagement->setObjectName("candidatesmanagement");
        candidatesmanagement->resize(1560, 662);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        candidatesmanagement->setWindowIcon(icon);
        candidatesmanagement->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(candidatesmanagement);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::Shape::NoFrame);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(frame);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Segoe UI\";\n"
"	font-size: 35px;\n"
"	color: #0A1C3A;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_11->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 10, -1, -1);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, -1, 10, -1);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_3);

        lineEdit_first_name = new QLineEdit(frame);
        lineEdit_first_name->setObjectName("lineEdit_first_name");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_first_name->sizePolicy().hasHeightForWidth());
        lineEdit_first_name->setSizePolicy(sizePolicy2);
        lineEdit_first_name->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit_first_name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: #0A1C3A;\n"
"font: 14pt \"Segoe UI\";\n"
"font-size: 16px;\n"
"padding: 5px;\n"
"border: 1px solid #0A1C3A;\n"
"}"));
        lineEdit_first_name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(lineEdit_first_name);


        verticalLayout_7->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(10, -1, 10, -1);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        lineEdit_voter_id = new QLineEdit(frame);
        lineEdit_voter_id->setObjectName("lineEdit_voter_id");
        sizePolicy2.setHeightForWidth(lineEdit_voter_id->sizePolicy().hasHeightForWidth());
        lineEdit_voter_id->setSizePolicy(sizePolicy2);
        lineEdit_voter_id->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit_voter_id->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: #0A1C3A;\n"
"font: 14pt \"Segoe UI\";\n"
"font-size: 16px;\n"
"padding: 5px;\n"
"border: 1px solid #0A1C3A;\n"
"}"));
        lineEdit_voter_id->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(lineEdit_voter_id);


        verticalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(10, -1, 10, -1);
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"}"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_7);

        comboBox_positions = new QComboBox(frame);
        comboBox_positions->addItem(QString());
        comboBox_positions->addItem(QString());
        comboBox_positions->addItem(QString());
        comboBox_positions->addItem(QString());
        comboBox_positions->addItem(QString());
        comboBox_positions->setObjectName("comboBox_positions");
        sizePolicy2.setHeightForWidth(comboBox_positions->sizePolicy().hasHeightForWidth());
        comboBox_positions->setSizePolicy(sizePolicy2);
        comboBox_positions->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        comboBox_positions->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        comboBox_positions->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	font: 14pt \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: #0A1C3A;\n"
"    background-color: rgba(255,255,255,200);\n"
"    border: 1px solid #0A1C3A;\n"
"    padding: 5px;\n"
"}\n"
""));
        comboBox_positions->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToContentsOnFirstShow);

        verticalLayout_5->addWidget(comboBox_positions);


        verticalLayout_7->addLayout(verticalLayout_5);


        horizontalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(10, -1, 10, -1);
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"}"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        lineEdit_last_name = new QLineEdit(frame);
        lineEdit_last_name->setObjectName("lineEdit_last_name");
        sizePolicy2.setHeightForWidth(lineEdit_last_name->sizePolicy().hasHeightForWidth());
        lineEdit_last_name->setSizePolicy(sizePolicy2);
        lineEdit_last_name->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit_last_name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: #0A1C3A;\n"
"font: 14pt \"Segoe UI\";\n"
"font-size: 16px;\n"
"padding: 5px;\n"
"border: 1px solid #0A1C3A;\n"
"}"));
        lineEdit_last_name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_last_name);


        verticalLayout_8->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(80, -1, 80, -1);
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"}"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        lineEdit_age = new QLineEdit(frame);
        lineEdit_age->setObjectName("lineEdit_age");
        sizePolicy2.setHeightForWidth(lineEdit_age->sizePolicy().hasHeightForWidth());
        lineEdit_age->setSizePolicy(sizePolicy2);
        lineEdit_age->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit_age->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: #0A1C3A;\n"
"font: 14pt \"Segoe UI\";\n"
"font-size: 16px;\n"
"padding: 5px;\n"
"border: 1px solid #0A1C3A;\n"
"}"));
        lineEdit_age->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(lineEdit_age);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(10, -1, 10, -1);
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"}"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_8);

        lineEdit_party = new QLineEdit(frame);
        lineEdit_party->setObjectName("lineEdit_party");
        sizePolicy2.setHeightForWidth(lineEdit_party->sizePolicy().hasHeightForWidth());
        lineEdit_party->setSizePolicy(sizePolicy2);
        lineEdit_party->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit_party->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: #0A1C3A;\n"
"font: 14pt \"Segoe UI\";\n"
"font-size: 16px;\n"
"padding: 5px;\n"
"border: 1px solid #0A1C3A;\n"
"}"));
        lineEdit_party->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(lineEdit_party);


        verticalLayout_8->addLayout(verticalLayout_6);


        horizontalLayout_3->addLayout(verticalLayout_8);


        verticalLayout_11->addLayout(horizontalLayout_3);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(-1, 10, -1, -1);
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: italic 11pt \"Segoe UI\";\n"
"	font-size: 14px;\n"
"	color: #0A1C3A;\n"
"	background-color: none;\n"
"}"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(200, 10, 200, 0);
        pushButton_back = new QPushButton(frame);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setMinimumSize(QSize(125, 31));
        pushButton_back->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_back->setFocusPolicy(Qt::FocusPolicy::TabFocus);
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
        pushButton_insert->setMinimumSize(QSize(126, 31));
        pushButton_insert->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_insert->setFocusPolicy(Qt::FocusPolicy::TabFocus);
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


        verticalLayout_10->addLayout(horizontalLayout);


        verticalLayout_11->addLayout(verticalLayout_10);


        gridLayout->addLayout(verticalLayout_11, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        refresh_button = new QPushButton(centralwidget);
        refresh_button->setObjectName("refresh_button");
        refresh_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        refresh_button->setFocusPolicy(Qt::FocusPolicy::TabFocus);
        refresh_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        refresh_button->setIcon(icon1);

        horizontalLayout_4->addWidget(refresh_button);


        verticalLayout_9->addLayout(horizontalLayout_4);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        candidate_tableWidget = new QTableWidget(centralwidget);
        candidate_tableWidget->setObjectName("candidate_tableWidget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(candidate_tableWidget->sizePolicy().hasHeightForWidth());
        candidate_tableWidget->setSizePolicy(sizePolicy3);
        candidate_tableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        candidate_tableWidget->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        candidate_tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"color: black;\n"
"border: 1px solid black;\n"
"background-color: white;\n"
"}"));
        candidate_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        candidate_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        candidate_tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        candidate_tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::DoubleClicked);
        candidate_tableWidget->setTabKeyNavigation(false);
        candidate_tableWidget->setAlternatingRowColors(false);
        candidate_tableWidget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        candidate_tableWidget->setSortingEnabled(true);
        candidate_tableWidget->setCornerButtonEnabled(false);
        candidate_tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        candidate_tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout_12->addWidget(candidate_tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(250, -1, 250, -1);
        list_delete_button = new QPushButton(centralwidget);
        list_delete_button->setObjectName("list_delete_button");
        list_delete_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        list_delete_button->setFocusPolicy(Qt::FocusPolicy::TabFocus);
        list_delete_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_2->addWidget(list_delete_button);

        list_deleteAll_button = new QPushButton(centralwidget);
        list_deleteAll_button->setObjectName("list_deleteAll_button");
        list_deleteAll_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        list_deleteAll_button->setFocusPolicy(Qt::FocusPolicy::TabFocus);
        list_deleteAll_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_2->addWidget(list_deleteAll_button);


        verticalLayout_12->addLayout(horizontalLayout_2);


        verticalLayout_9->addLayout(verticalLayout_12);


        gridLayout_2->addLayout(verticalLayout_9, 0, 1, 1, 1);

        candidatesmanagement->setCentralWidget(centralwidget);
        QWidget::setTabOrder(lineEdit_first_name, lineEdit_last_name);
        QWidget::setTabOrder(lineEdit_last_name, lineEdit_voter_id);
        QWidget::setTabOrder(lineEdit_voter_id, lineEdit_age);
        QWidget::setTabOrder(lineEdit_age, comboBox_positions);
        QWidget::setTabOrder(comboBox_positions, lineEdit_party);
        QWidget::setTabOrder(lineEdit_party, pushButton_back);
        QWidget::setTabOrder(pushButton_back, pushButton_insert);
        QWidget::setTabOrder(pushButton_insert, refresh_button);
        QWidget::setTabOrder(refresh_button, list_delete_button);
        QWidget::setTabOrder(list_delete_button, list_deleteAll_button);

        retranslateUi(candidatesmanagement);

        QMetaObject::connectSlotsByName(candidatesmanagement);
    } // setupUi

    void retranslateUi(QMainWindow *candidatesmanagement)
    {
        candidatesmanagement->setWindowTitle(QCoreApplication::translate("candidatesmanagement", "PolliTech", nullptr));
        label->setText(QCoreApplication::translate("candidatesmanagement", "MANAGE CANDIDATES", nullptr));
        label_3->setText(QCoreApplication::translate("candidatesmanagement", "FIRST NAME", nullptr));
        label_2->setText(QCoreApplication::translate("candidatesmanagement", "VOTER ID", nullptr));
        label_7->setText(QCoreApplication::translate("candidatesmanagement", "POSITION", nullptr));
        comboBox_positions->setItemText(0, QCoreApplication::translate("candidatesmanagement", "Select Position", nullptr));
        comboBox_positions->setItemText(1, QCoreApplication::translate("candidatesmanagement", "Barangay Captain", nullptr));
        comboBox_positions->setItemText(2, QCoreApplication::translate("candidatesmanagement", "Barangay Councilor", nullptr));
        comboBox_positions->setItemText(3, QCoreApplication::translate("candidatesmanagement", "SK Chairman", nullptr));
        comboBox_positions->setItemText(4, QCoreApplication::translate("candidatesmanagement", "SK Councilor", nullptr));

        comboBox_positions->setCurrentText(QCoreApplication::translate("candidatesmanagement", "Select Position", nullptr));
        label_4->setText(QCoreApplication::translate("candidatesmanagement", "LAST NAME", nullptr));
        label_5->setText(QCoreApplication::translate("candidatesmanagement", "AGE", nullptr));
        label_8->setText(QCoreApplication::translate("candidatesmanagement", "PARTY", nullptr));
        label_6->setText(QCoreApplication::translate("candidatesmanagement", "Voter ID cannot be changed. If incorrect, please delete and re-add the candidate", nullptr));
        pushButton_back->setText(QCoreApplication::translate("candidatesmanagement", "BACK", nullptr));
        pushButton_insert->setText(QCoreApplication::translate("candidatesmanagement", "INSERT", nullptr));
#if QT_CONFIG(tooltip)
        refresh_button->setToolTip(QCoreApplication::translate("candidatesmanagement", "<html><head/><body><p align=\"center\">Refresh</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        refresh_button->setWhatsThis(QCoreApplication::translate("candidatesmanagement", "<html><head/><body><p align=\"center\">Refresh Button</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        refresh_button->setText(QString());
#if QT_CONFIG(tooltip)
        list_delete_button->setToolTip(QCoreApplication::translate("candidatesmanagement", "<html><head/><body><p align=\"center\">Delete candidate</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        list_delete_button->setWhatsThis(QCoreApplication::translate("candidatesmanagement", "<html><head/><body><p align=\"center\">Delete Button (One Person)</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        list_delete_button->setText(QCoreApplication::translate("candidatesmanagement", "DELETE", nullptr));
#if QT_CONFIG(tooltip)
        list_deleteAll_button->setToolTip(QCoreApplication::translate("candidatesmanagement", "<html><head/><body><p align=\"center\">Delete all candidates</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        list_deleteAll_button->setWhatsThis(QCoreApplication::translate("candidatesmanagement", "<html><head/><body><p align=\"center\">Delete All Button</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        list_deleteAll_button->setText(QCoreApplication::translate("candidatesmanagement", "DELETE ALL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class candidatesmanagement: public Ui_candidatesmanagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANDIDATESMANAGEMENT_H
