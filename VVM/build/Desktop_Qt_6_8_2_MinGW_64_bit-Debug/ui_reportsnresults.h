/********************************************************************************
** Form generated from reading UI file 'reportsnresults.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTSNRESULTS_H
#define UI_REPORTSNRESULTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReportsNResults
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *comboBox_positions;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_refresh;
    QTableWidget *tableWidget_voteCount;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_back;
    QPushButton *pushButton_print;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QDialog *ReportsNResults)
    {
        if (ReportsNResults->objectName().isEmpty())
            ReportsNResults->setObjectName("ReportsNResults");
        ReportsNResults->resize(769, 635);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ReportsNResults->setWindowIcon(icon);
        gridLayout = new QGridLayout(ReportsNResults);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        label_6 = new QLabel(ReportsNResults);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Source Code Pro\";\n"
"	font-size: 35px;\n"
"	color: black;\n"
"}"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        comboBox_positions = new QComboBox(ReportsNResults);
        comboBox_positions->addItem(QString());
        comboBox_positions->addItem(QString());
        comboBox_positions->addItem(QString());
        comboBox_positions->addItem(QString());
        comboBox_positions->addItem(QString());
        comboBox_positions->setObjectName("comboBox_positions");
        comboBox_positions->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        comboBox_positions->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	font: 9pt \"Source Code Pro\";\n"
"	font-size: 16px;\n"
"	color: black;\n"
"	background-color: white;\n"
"	border: 1px solid black;\n"
"	padding: 2px;\n"
"}"));

        horizontalLayout_7->addWidget(comboBox_positions);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        pushButton_refresh = new QPushButton(ReportsNResults);
        pushButton_refresh->setObjectName("pushButton_refresh");
        pushButton_refresh->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_refresh->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        pushButton_refresh->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_refresh->setIcon(icon1);

        horizontalLayout_7->addWidget(pushButton_refresh);


        verticalLayout->addLayout(horizontalLayout_7);

        tableWidget_voteCount = new QTableWidget(ReportsNResults);
        tableWidget_voteCount->setObjectName("tableWidget_voteCount");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget_voteCount->sizePolicy().hasHeightForWidth());
        tableWidget_voteCount->setSizePolicy(sizePolicy);
        tableWidget_voteCount->setMinimumSize(QSize(749, 489));
        tableWidget_voteCount->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        tableWidget_voteCount->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        tableWidget_voteCount->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        tableWidget_voteCount->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        tableWidget_voteCount->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        tableWidget_voteCount->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget_voteCount->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidget_voteCount->setSortingEnabled(true);
        tableWidget_voteCount->setCornerButtonEnabled(false);

        verticalLayout->addWidget(tableWidget_voteCount);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        pushButton_back = new QPushButton(ReportsNResults);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setMinimumSize(QSize(52, 32));
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

        horizontalLayout_8->addWidget(pushButton_back);

        pushButton_print = new QPushButton(ReportsNResults);
        pushButton_print->setObjectName("pushButton_print");
        pushButton_print->setMinimumSize(QSize(162, 32));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setWeight(QFont::DemiBold);
        font.setItalic(false);
        pushButton_print->setFont(font);
        pushButton_print->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_print->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        pushButton_print->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        pushButton_print->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_8->addWidget(pushButton_print);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_8);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ReportsNResults);

        QMetaObject::connectSlotsByName(ReportsNResults);
    } // setupUi

    void retranslateUi(QDialog *ReportsNResults)
    {
        ReportsNResults->setWindowTitle(QCoreApplication::translate("ReportsNResults", "PolliTech", nullptr));
        label_6->setText(QCoreApplication::translate("ReportsNResults", "LIVE VOTE COUNT", nullptr));
        comboBox_positions->setItemText(0, QCoreApplication::translate("ReportsNResults", "  Select Position", nullptr));
        comboBox_positions->setItemText(1, QCoreApplication::translate("ReportsNResults", "Barangay Captain", nullptr));
        comboBox_positions->setItemText(2, QCoreApplication::translate("ReportsNResults", "Barangay Councilors", nullptr));
        comboBox_positions->setItemText(3, QCoreApplication::translate("ReportsNResults", "SK Chairman", nullptr));
        comboBox_positions->setItemText(4, QCoreApplication::translate("ReportsNResults", "SK Councilors", nullptr));

        pushButton_refresh->setText(QString());
        pushButton_back->setText(QCoreApplication::translate("ReportsNResults", "BACK", nullptr));
        pushButton_print->setText(QCoreApplication::translate("ReportsNResults", "EXPORT AS PDF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportsNResults: public Ui_ReportsNResults {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSNRESULTS_H
