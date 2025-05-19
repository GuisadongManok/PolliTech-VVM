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
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ElectionResults
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_4;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTableWidget *table_barangay;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTableWidget *table_sk;
    QPushButton *pushButton_back;

    void setupUi(QDialog *ElectionResults)
    {
        if (ElectionResults->objectName().isEmpty())
            ElectionResults->setObjectName("ElectionResults");
        ElectionResults->resize(768, 774);
        ElectionResults->setMinimumSize(QSize(768, 647));
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
        label = new QLabel(ElectionResults);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"	color: #0A1C3A;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        line_2 = new QFrame(ElectionResults);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_4->addWidget(line_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(ElectionResults);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 18pt \"Segoe UI\";\n"
"	color: #0A1C3A;\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2, 0, Qt::AlignmentFlag::AlignHCenter);

        table_barangay = new QTableWidget(ElectionResults);
        table_barangay->setObjectName("table_barangay");
        table_barangay->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"background-color: transparent;\n"
"}"));

        verticalLayout->addWidget(table_barangay);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(ElectionResults);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 18pt \"Segoe UI\";\n"
"	color: #0A1C3A;\n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_3, 0, Qt::AlignmentFlag::AlignHCenter);

        table_sk = new QTableWidget(ElectionResults);
        table_sk->setObjectName("table_sk");
        table_sk->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"background-color: transparent;\n"
"}"));

        verticalLayout_2->addWidget(table_sk);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);

        pushButton_back = new QPushButton(ElectionResults);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setMinimumSize(QSize(151, 35));
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

        gridLayout->addWidget(pushButton_back, 2, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);


        retranslateUi(ElectionResults);

        QMetaObject::connectSlotsByName(ElectionResults);
    } // setupUi

    void retranslateUi(QDialog *ElectionResults)
    {
        ElectionResults->setWindowTitle(QCoreApplication::translate("ElectionResults", "PolliTech", nullptr));
        label->setText(QCoreApplication::translate("ElectionResults", "ELECTION RESULTS", nullptr));
        label_2->setText(QCoreApplication::translate("ElectionResults", "BARANGAY OFFICIALS", nullptr));
        label_3->setText(QCoreApplication::translate("ElectionResults", "SK OFFICIALS", nullptr));
        pushButton_back->setText(QCoreApplication::translate("ElectionResults", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ElectionResults: public Ui_ElectionResults {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELECTIONRESULTS_H
