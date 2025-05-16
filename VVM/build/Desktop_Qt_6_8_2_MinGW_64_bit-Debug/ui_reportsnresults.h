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
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_refresh;
    QTableWidget *VoteTable;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_back;
    QPushButton *pushButton_print;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QDialog *ReportsNResults)
    {
        if (ReportsNResults->objectName().isEmpty())
            ReportsNResults->setObjectName("ReportsNResults");
        ReportsNResults->resize(803, 689);
        ReportsNResults->setMinimumSize(QSize(803, 689));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ReportsNResults->setWindowIcon(icon);
        gridLayout = new QGridLayout(ReportsNResults);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_6 = new QLabel(ReportsNResults);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"	color: black;\n"
"}"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);

        pushButton_refresh = new QPushButton(ReportsNResults);
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

        horizontalLayout_12->addWidget(pushButton_refresh);


        verticalLayout_5->addLayout(horizontalLayout_12);

        VoteTable = new QTableWidget(ReportsNResults);
        VoteTable->setObjectName("VoteTable");
        VoteTable->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        VoteTable->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        VoteTable->setTabKeyNavigation(false);
        VoteTable->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        VoteTable->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

        verticalLayout_5->addWidget(VoteTable);


        verticalLayout->addLayout(verticalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        pushButton_back = new QPushButton(ReportsNResults);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setMinimumSize(QSize(52, 32));
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
#if QT_CONFIG(tooltip)
        pushButton_refresh->setToolTip(QCoreApplication::translate("ReportsNResults", "<html><head/><body><p align=\"center\">Refresh</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_refresh->setText(QString());
        pushButton_back->setText(QCoreApplication::translate("ReportsNResults", "BACK", nullptr));
        pushButton_print->setText(QCoreApplication::translate("ReportsNResults", "EXPORT AS CSV", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportsNResults: public Ui_ReportsNResults {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSNRESULTS_H
