/********************************************************************************
** Form generated from reading UI file 'electionresults.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELECTIONRESULTS_H
#define UI_ELECTIONRESULTS_H

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

class Ui_ElectionResults
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox_positionFilter;
    QTableWidget *tableWidget_winners;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_back;
    QPushButton *pushButton_print;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QDialog *ElectionResults)
    {
        if (ElectionResults->objectName().isEmpty())
            ElectionResults->setObjectName("ElectionResults");
        ElectionResults->resize(874, 562);
        ElectionResults->setMinimumSize(QSize(826, 562));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ElectionResults->setWindowIcon(icon);
        ElectionResults->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"        stop: 0 #f0f0f0,\n"
"        stop: 1 #e0e0e0\n"
"    );\n"
"}"));
        gridLayout = new QGridLayout(ElectionResults);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ElectionResults);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"	color: #0A1C3A;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        comboBox_positionFilter = new QComboBox(ElectionResults);
        comboBox_positionFilter->addItem(QString());
        comboBox_positionFilter->addItem(QString());
        comboBox_positionFilter->addItem(QString());
        comboBox_positionFilter->setObjectName("comboBox_positionFilter");
        comboBox_positionFilter->setMinimumSize(QSize(221, 35));
        comboBox_positionFilter->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        comboBox_positionFilter->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        comboBox_positionFilter->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	font: 14pt \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: #0A1C3A;\n"
"    background-color: rgba(255,255,255,200);\n"
"    border: 1px solid #0A1C3A;\n"
"    padding: 5px;\n"
"}\n"
""));

        verticalLayout->addWidget(comboBox_positionFilter, 0, Qt::AlignmentFlag::AlignLeft);

        tableWidget_winners = new QTableWidget(ElectionResults);
        tableWidget_winners->setObjectName("tableWidget_winners");
        tableWidget_winners->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        tableWidget_winners->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"	background-color: white;\n"
"}"));
        tableWidget_winners->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget_winners->setTabKeyNavigation(false);

        verticalLayout->addWidget(tableWidget_winners);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        pushButton_back = new QPushButton(ElectionResults);
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

        pushButton_print = new QPushButton(ElectionResults);
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


        retranslateUi(ElectionResults);

        QMetaObject::connectSlotsByName(ElectionResults);
    } // setupUi

    void retranslateUi(QDialog *ElectionResults)
    {
        ElectionResults->setWindowTitle(QCoreApplication::translate("ElectionResults", "PolliTech", nullptr));
        label->setText(QCoreApplication::translate("ElectionResults", "ELECTION RESULTS", nullptr));
        comboBox_positionFilter->setItemText(0, QCoreApplication::translate("ElectionResults", "All Positions", nullptr));
        comboBox_positionFilter->setItemText(1, QCoreApplication::translate("ElectionResults", "Barangay Officials", nullptr));
        comboBox_positionFilter->setItemText(2, QCoreApplication::translate("ElectionResults", "SK Officials", nullptr));

        pushButton_back->setText(QCoreApplication::translate("ElectionResults", "BACK", nullptr));
        pushButton_print->setText(QCoreApplication::translate("ElectionResults", "EXPORT AS CSV", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ElectionResults: public Ui_ElectionResults {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELECTIONRESULTS_H
