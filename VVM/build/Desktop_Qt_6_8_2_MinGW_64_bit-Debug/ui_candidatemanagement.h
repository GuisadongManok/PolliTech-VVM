/********************************************************************************
** Form generated from reading UI file 'candidatemanagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANDIDATEMANAGEMENT_H
#define UI_CANDIDATEMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CandidateManagement
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_12;
    QTableWidget *candidate_tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *refresh_button;
    QPushButton *list_delete_button;
    QPushButton *list_deleteAll_button;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_13;
    QLabel *label;
    QVBoxLayout *verticalLayout_11;
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
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QPushButton *pushButton_insert;
    QPushButton *pushButton_update;

    void setupUi(QDialog *CandidateManagement)
    {
        if (CandidateManagement->objectName().isEmpty())
            CandidateManagement->setObjectName("CandidateManagement");
        CandidateManagement->resize(1560, 662);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        CandidateManagement->setWindowIcon(icon);
        widget = new QWidget(CandidateManagement);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(676, 43, 391, 321));
        verticalLayout_12 = new QVBoxLayout(widget);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        candidate_tableWidget = new QTableWidget(widget);
        candidate_tableWidget->setObjectName("candidate_tableWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(candidate_tableWidget->sizePolicy().hasHeightForWidth());
        candidate_tableWidget->setSizePolicy(sizePolicy);
        candidate_tableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        candidate_tableWidget->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        candidate_tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"color: black;\n"
"border: 1px solid black;\n"
"background-color: white;\n"
"}"));
        candidate_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        candidate_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        candidate_tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        candidate_tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
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
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        refresh_button = new QPushButton(widget);
        refresh_button->setObjectName("refresh_button");
        refresh_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        refresh_button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        refresh_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 500 9pt \"Source Code Pro\";\n"
"	background-color: #f8f8f8;\n"
"	color: black;\n"
"	font-size: 16px;\n"
"	border: 1px solid black;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #e6e6e6;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/buttons/icons/refresh-page-option.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        refresh_button->setIcon(icon1);

        horizontalLayout_2->addWidget(refresh_button);

        list_delete_button = new QPushButton(widget);
        list_delete_button->setObjectName("list_delete_button");
        list_delete_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        list_delete_button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        list_delete_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 500 9pt \"Source Code Pro\";\n"
"	background-color: #f8f8f8;\n"
"	color: black;\n"
"	font-size: 16px;\n"
"	border: 1px solid black;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #e6e6e6;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/buttons/icons/bin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        list_delete_button->setIcon(icon2);

        horizontalLayout_2->addWidget(list_delete_button);

        list_deleteAll_button = new QPushButton(widget);
        list_deleteAll_button->setObjectName("list_deleteAll_button");
        list_deleteAll_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        list_deleteAll_button->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        list_deleteAll_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 9pt \"Source Code Pro\";\n"
"	background-color: #f8f8f8;\n"
"	color: black;\n"
"	font-size: 16px;\n"
"	border: 1px solid black;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #e6e6e6;\n"
"}"));

        horizontalLayout_2->addWidget(list_deleteAll_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_12->addLayout(horizontalLayout_2);

        widget1 = new QWidget(CandidateManagement);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 89, 650, 354));
        verticalLayout_13 = new QVBoxLayout(widget1);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Segoe UI\";\n"
"	font-size: 35px;\n"
"	color: black;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_13->addWidget(label);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, -1, 10, -1);
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 500 9pt \"Source Code Pro\";\n"
"	font-size: 18px;\n"
"	color: black;\n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_3);

        lineEdit_first_name = new QLineEdit(widget1);
        lineEdit_first_name->setObjectName("lineEdit_first_name");
        lineEdit_first_name->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit_first_name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: black;\n"
"font: 9pt \"Source Code Pro\";\n"
"font-size: 16px;\n"
"padding: 5px;\n"
"border: 1px solid black;\n"
"}"));
        lineEdit_first_name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(lineEdit_first_name);


        verticalLayout_7->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(10, -1, 10, -1);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 500 9pt \"Source Code Pro\";\n"
"	font-size: 18px;\n"
"	color: black;\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        lineEdit_voter_id = new QLineEdit(widget1);
        lineEdit_voter_id->setObjectName("lineEdit_voter_id");
        lineEdit_voter_id->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit_voter_id->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: black;\n"
"font: 9pt \"Source Code Pro\";\n"
"font-size: 16px;\n"
"padding: 5px;\n"
"border: 1px solid black;\n"
"}"));
        lineEdit_voter_id->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(lineEdit_voter_id);


        verticalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(10, -1, 10, -1);
        label_7 = new QLabel(widget1);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 500 9pt \"Source Code Pro\";\n"
"	font-size: 18px;\n"
"	color: black;\n"
"}"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_7);

        comboBox_positions = new QComboBox(widget1);
        comboBox_positions->addItem(QString());
        comboBox_positions->addItem(QString());
        comboBox_positions->addItem(QString());
        comboBox_positions->addItem(QString());
        comboBox_positions->addItem(QString());
        comboBox_positions->setObjectName("comboBox_positions");
        comboBox_positions->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        comboBox_positions->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        comboBox_positions->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	font: 9pt \"Source Code Pro\";\n"
"	font-size: 16px;\n"
"	color: black;\n"
"	background-color: rgba(255,255,255,200);\n"
"	border: 1px solid black;\n"
"	padding: 5px;\n"
"}\n"
""));

        verticalLayout_5->addWidget(comboBox_positions);


        verticalLayout_7->addLayout(verticalLayout_5);


        horizontalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(10, -1, 10, -1);
        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 500 9pt \"Source Code Pro\";\n"
"	font-size: 18px;\n"
"	color: black;\n"
"}"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        lineEdit_last_name = new QLineEdit(widget1);
        lineEdit_last_name->setObjectName("lineEdit_last_name");
        lineEdit_last_name->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit_last_name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: black;\n"
"font: 9pt \"Source Code Pro\";\n"
"font-size: 16px;\n"
"padding: 5px;\n"
"border: 1px solid black;\n"
"}"));
        lineEdit_last_name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_last_name);


        verticalLayout_8->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(80, -1, 80, -1);
        label_5 = new QLabel(widget1);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 500 9pt \"Source Code Pro\";\n"
"	font-size: 18px;\n"
"	color: black;\n"
"}"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        lineEdit_age = new QLineEdit(widget1);
        lineEdit_age->setObjectName("lineEdit_age");
        lineEdit_age->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit_age->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: black;\n"
"font: 9pt \"Source Code Pro\";\n"
"font-size: 16px;\n"
"padding: 5px;\n"
"border: 1px solid black;\n"
"}"));
        lineEdit_age->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(lineEdit_age);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(10, -1, 10, -1);
        label_8 = new QLabel(widget1);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 500 9pt \"Source Code Pro\";\n"
"	font-size: 18px;\n"
"	color: black;\n"
"}"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_8);

        lineEdit_party = new QLineEdit(widget1);
        lineEdit_party->setObjectName("lineEdit_party");
        lineEdit_party->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit_party->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: black;\n"
"font: 9pt \"Source Code Pro\";\n"
"font-size: 16px;\n"
"padding: 5px;\n"
"border: 1px solid black;\n"
"}"));
        lineEdit_party->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(lineEdit_party);


        verticalLayout_8->addLayout(verticalLayout_6);


        horizontalLayout_3->addLayout(verticalLayout_8);


        verticalLayout_11->addLayout(horizontalLayout_3);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(-1, 10, -1, -1);
        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: italic 9pt \"Source Code Pro\";\n"
"	font-size: 14px;\n"
"	color: black;\n"
"}"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10->addWidget(label_6);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(80, -1, 80, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 10, -1, -1);
        pushButton_back = new QPushButton(widget1);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setMinimumSize(QSize(125, 31));
        pushButton_back->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_back->setFocusPolicy(Qt::FocusPolicy::TabFocus);
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 500 9pt \"Source Code Pro\";\n"
"	background-color: #f8f8f8;\n"
"	color: black;\n"
"	font-size: 16px;\n"
"	border: 1px solid black;\n"
"	border-radius: 15px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #e6e6e6;\n"
"}"));

        horizontalLayout->addWidget(pushButton_back);

        pushButton_insert = new QPushButton(widget1);
        pushButton_insert->setObjectName("pushButton_insert");
        pushButton_insert->setMinimumSize(QSize(126, 31));
        pushButton_insert->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_insert->setFocusPolicy(Qt::FocusPolicy::TabFocus);
        pushButton_insert->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 500 9pt \"Source Code Pro\";\n"
"	background-color: #f8f8f8;\n"
"	color: black;\n"
"	font-size: 16px;\n"
"	border: 1px solid black;\n"
"	border-radius: 15px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #e6e6e6;\n"
"}"));

        horizontalLayout->addWidget(pushButton_insert);

        pushButton_update = new QPushButton(widget1);
        pushButton_update->setObjectName("pushButton_update");
        pushButton_update->setMinimumSize(QSize(125, 31));
        pushButton_update->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_update->setFocusPolicy(Qt::FocusPolicy::TabFocus);
        pushButton_update->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 500 9pt \"Source Code Pro\";\n"
"	background-color: #f8f8f8;\n"
"	color: black;\n"
"	font-size: 16px;\n"
"	border: 1px solid black;\n"
"	border-radius: 15px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #e6e6e6;\n"
"}"));

        horizontalLayout->addWidget(pushButton_update);


        verticalLayout_9->addLayout(horizontalLayout);


        verticalLayout_10->addLayout(verticalLayout_9);


        verticalLayout_11->addLayout(verticalLayout_10);


        verticalLayout_13->addLayout(verticalLayout_11);

        QWidget::setTabOrder(lineEdit_first_name, lineEdit_last_name);
        QWidget::setTabOrder(lineEdit_last_name, lineEdit_voter_id);
        QWidget::setTabOrder(lineEdit_voter_id, lineEdit_age);
        QWidget::setTabOrder(lineEdit_age, comboBox_positions);
        QWidget::setTabOrder(comboBox_positions, lineEdit_party);
        QWidget::setTabOrder(lineEdit_party, pushButton_back);
        QWidget::setTabOrder(pushButton_back, pushButton_insert);
        QWidget::setTabOrder(pushButton_insert, pushButton_update);

        retranslateUi(CandidateManagement);

        QMetaObject::connectSlotsByName(CandidateManagement);
    } // setupUi

    void retranslateUi(QDialog *CandidateManagement)
    {
        CandidateManagement->setWindowTitle(QCoreApplication::translate("CandidateManagement", "PolliTech", nullptr));
        refresh_button->setText(QString());
        list_delete_button->setText(QString());
        list_deleteAll_button->setText(QCoreApplication::translate("CandidateManagement", "DELETE ALL", nullptr));
        label->setText(QCoreApplication::translate("CandidateManagement", "MANAGE CANDIDATES", nullptr));
        label_3->setText(QCoreApplication::translate("CandidateManagement", "FIRST NAME", nullptr));
        label_2->setText(QCoreApplication::translate("CandidateManagement", "VOTER ID", nullptr));
        label_7->setText(QCoreApplication::translate("CandidateManagement", "POSITION", nullptr));
        comboBox_positions->setItemText(0, QCoreApplication::translate("CandidateManagement", "         Select Position", nullptr));
        comboBox_positions->setItemText(1, QCoreApplication::translate("CandidateManagement", "Barangay Captain", nullptr));
        comboBox_positions->setItemText(2, QCoreApplication::translate("CandidateManagement", "Barangay Councilor", nullptr));
        comboBox_positions->setItemText(3, QCoreApplication::translate("CandidateManagement", "SK Chairman", nullptr));
        comboBox_positions->setItemText(4, QCoreApplication::translate("CandidateManagement", "SK Councilor", nullptr));

        label_4->setText(QCoreApplication::translate("CandidateManagement", "LAST NAME", nullptr));
        label_5->setText(QCoreApplication::translate("CandidateManagement", "AGE", nullptr));
        label_8->setText(QCoreApplication::translate("CandidateManagement", "PARTY AFFILIATION", nullptr));
        label_6->setText(QCoreApplication::translate("CandidateManagement", "Voter ID cannot be changed. If incorrect, please delete and re-add the candidate", nullptr));
        pushButton_back->setText(QCoreApplication::translate("CandidateManagement", "BACK", nullptr));
        pushButton_insert->setText(QCoreApplication::translate("CandidateManagement", "INSERT", nullptr));
        pushButton_update->setText(QCoreApplication::translate("CandidateManagement", "UPDATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CandidateManagement: public Ui_CandidateManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANDIDATEMANAGEMENT_H
