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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportsNResults
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QTabWidget *tabWidget;
    QWidget *Captain;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_refresh;
    QTableWidget *vcCaptain;
    QWidget *Councilors;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_refresh_3;
    QTableWidget *vcCouncilors;
    QWidget *skChairman;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton_refresh_4;
    QTableWidget *vcChairman;
    QWidget *skCouncilors;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_refresh_5;
    QTableWidget *vcCouncilorsSK;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_back;
    QPushButton *pushButton_print;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QDialog *ReportsNResults)
    {
        if (ReportsNResults->objectName().isEmpty())
            ReportsNResults->setObjectName("ReportsNResults");
        ReportsNResults->resize(793, 782);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ReportsNResults->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(ReportsNResults);
        gridLayout_2->setObjectName("gridLayout_2");
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

        tabWidget = new QTabWidget(ReportsNResults);
        tabWidget->setObjectName("tabWidget");
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        tabWidget->setFont(font);
        tabWidget->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        tabWidget->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"    border: none;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    alignment: center;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    font-size: 16px;\n"
"	font-weight: bold;\n"
"    color: #0A1C3A;\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                stop:0 #ffffff, stop:1 #dcdcdc);\n"
"    border: 1px solid #888;\n"
"    border-radius: 4px;\n"
"    padding: 6px 12px;\n"
"    margin: 4px;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QTabBar::tab:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                stop:0 #f0f0f0, stop:1 #c8c8c8);\n"
"    border: 1px solid #555;\n"
"}\n"
"\n"
"/* Selected tab (pressed effect) */\n"
"QTabBar::tab:selected {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                stop:0 #c8c8c8, stop:1 #a0a0a0);\n"
"    padding-top: 7px;\n"
"    padding-left: 13px;\n"
"    color: #0A1C3A;\n"
"    border: 1px solid #555;\n"
""
                        "}\n"
"\n"
"/* Remove background from tab content */\n"
"QTabWidget QWidget {\n"
"    background-color: transparent;\n"
"    font-size: 13px;\n"
"}\n"
""));
        tabWidget->setTabPosition(QTabWidget::TabPosition::North);
        tabWidget->setUsesScrollButtons(false);
        Captain = new QWidget();
        Captain->setObjectName("Captain");
        gridLayout = new QGridLayout(Captain);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        pushButton_refresh = new QPushButton(Captain);
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

        horizontalLayout_7->addWidget(pushButton_refresh);


        verticalLayout_4->addLayout(horizontalLayout_7);

        vcCaptain = new QTableWidget(Captain);
        vcCaptain->setObjectName("vcCaptain");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vcCaptain->sizePolicy().hasHeightForWidth());
        vcCaptain->setSizePolicy(sizePolicy);
        vcCaptain->setMinimumSize(QSize(749, 489));
        vcCaptain->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        vcCaptain->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        vcCaptain->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        vcCaptain->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        vcCaptain->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        vcCaptain->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        vcCaptain->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        vcCaptain->setSortingEnabled(true);
        vcCaptain->setCornerButtonEnabled(false);

        verticalLayout_4->addWidget(vcCaptain);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(Captain, QString());
        Councilors = new QWidget();
        Councilors->setObjectName("Councilors");
        gridLayout_3 = new QGridLayout(Councilors);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        pushButton_refresh_3 = new QPushButton(Councilors);
        pushButton_refresh_3->setObjectName("pushButton_refresh_3");
        pushButton_refresh_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_refresh_3->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        pushButton_refresh_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_refresh_3->setIcon(icon1);

        horizontalLayout_10->addWidget(pushButton_refresh_3);


        verticalLayout_2->addLayout(horizontalLayout_10);

        vcCouncilors = new QTableWidget(Councilors);
        vcCouncilors->setObjectName("vcCouncilors");

        verticalLayout_2->addWidget(vcCouncilors);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(Councilors, QString());
        skChairman = new QWidget();
        skChairman->setObjectName("skChairman");
        gridLayout_4 = new QGridLayout(skChairman);
        gridLayout_4->setObjectName("gridLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        pushButton_refresh_4 = new QPushButton(skChairman);
        pushButton_refresh_4->setObjectName("pushButton_refresh_4");
        pushButton_refresh_4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_refresh_4->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        pushButton_refresh_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_refresh_4->setIcon(icon1);

        horizontalLayout_11->addWidget(pushButton_refresh_4);


        verticalLayout_3->addLayout(horizontalLayout_11);

        vcChairman = new QTableWidget(skChairman);
        vcChairman->setObjectName("vcChairman");

        verticalLayout_3->addWidget(vcChairman);


        gridLayout_4->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(skChairman, QString());
        skCouncilors = new QWidget();
        skCouncilors->setObjectName("skCouncilors");
        gridLayout_5 = new QGridLayout(skCouncilors);
        gridLayout_5->setObjectName("gridLayout_5");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);

        pushButton_refresh_5 = new QPushButton(skCouncilors);
        pushButton_refresh_5->setObjectName("pushButton_refresh_5");
        pushButton_refresh_5->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_refresh_5->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        pushButton_refresh_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_refresh_5->setIcon(icon1);

        horizontalLayout_12->addWidget(pushButton_refresh_5);


        verticalLayout_5->addLayout(horizontalLayout_12);

        vcCouncilorsSK = new QTableWidget(skCouncilors);
        vcCouncilorsSK->setObjectName("vcCouncilorsSK");
        vcCouncilorsSK->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        vcCouncilorsSK->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        vcCouncilorsSK->setTabKeyNavigation(false);
        vcCouncilorsSK->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        vcCouncilorsSK->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

        verticalLayout_5->addWidget(vcCouncilorsSK);


        gridLayout_5->addLayout(verticalLayout_5, 0, 0, 1, 1);

        tabWidget->addTab(skCouncilors, QString());

        verticalLayout->addWidget(tabWidget);

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
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setWeight(QFont::DemiBold);
        font1.setItalic(false);
        pushButton_print->setFont(font1);
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


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ReportsNResults);

        tabWidget->setCurrentIndex(0);


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
        tabWidget->setTabText(tabWidget->indexOf(Captain), QCoreApplication::translate("ReportsNResults", "BARANGAY CAPTAIN", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_refresh_3->setToolTip(QCoreApplication::translate("ReportsNResults", "<html><head/><body><p align=\"center\">Refresh</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_refresh_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Councilors), QCoreApplication::translate("ReportsNResults", "BARANGAY COUNCILORS", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_refresh_4->setToolTip(QCoreApplication::translate("ReportsNResults", "<html><head/><body><p align=\"center\">Refresh</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_refresh_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(skChairman), QCoreApplication::translate("ReportsNResults", "SK CHAIRMAN", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_refresh_5->setToolTip(QCoreApplication::translate("ReportsNResults", "<html><head/><body><p align=\"center\">Refresh</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_refresh_5->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(skCouncilors), QCoreApplication::translate("ReportsNResults", "SK COUNCILORS", nullptr));
        pushButton_back->setText(QCoreApplication::translate("ReportsNResults", "BACK", nullptr));
        pushButton_print->setText(QCoreApplication::translate("ReportsNResults", "EXPORT AS PDF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportsNResults: public Ui_ReportsNResults {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSNRESULTS_H
