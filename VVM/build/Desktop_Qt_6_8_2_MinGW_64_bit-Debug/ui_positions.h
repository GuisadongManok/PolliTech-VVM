/********************************************************************************
** Form generated from reading UI file 'positions.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSITIONS_H
#define UI_POSITIONS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_positions
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *councilorButton;
    QPushButton *captainButton;
    QLabel *label;
    QPushButton *logoutButton;
    QWidget *page_2;
    QPushButton *sk_councilor_button;
    QPushButton *sk_chairman_button;
    QLabel *label_2;
    QPushButton *logoutButton_2;
    QPushButton *councilorButton_2;
    QPushButton *captainButton_2;

    void setupUi(QDialog *positions)
    {
        if (positions->objectName().isEmpty())
            positions->setObjectName("positions");
        positions->resize(721, 311);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        positions->setWindowIcon(icon);
        positions->setStyleSheet(QString::fromUtf8("QDialog {\n"
"background: white;\n"
"}"));
        stackedWidget = new QStackedWidget(positions);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 10, 701, 311));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: white;"));
        page = new QWidget();
        page->setObjectName("page");
        councilorButton = new QPushButton(page);
        councilorButton->setObjectName("councilorButton");
        councilorButton->setGeometry(QRect(360, 140, 271, 91));
        councilorButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        councilorButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"	color: black;\n"
"	background-color: #ecf0f1;\n"
"	border: 1px solid black;\n"
"} \n"
"QPushButton:hover {\n"
"	background-color: #bdc3c7;\n"
"}"));
        captainButton = new QPushButton(page);
        captainButton->setObjectName("captainButton");
        captainButton->setGeometry(QRect(60, 140, 271, 91));
        captainButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        captainButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"	color: black;\n"
"	background-color: #ecf0f1;\n"
"	border: 1px solid black;\n"
"} \n"
"QPushButton:hover {\n"
"	background-color: #bdc3c7;\n"
"}"));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 50, 330, 43));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	font-size: 35px;\n"
"	color: black;\n"
"}"));
        logoutButton = new QPushButton(page);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(620, 0, 80, 24));
        logoutButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        logoutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 9pt \"Source Code Pro\";\n"
"	font-size: 14px;\n"
"	color: black;\n"
"	background-color: #ecf0f1;\n"
"} \n"
"QPushButton:hover {\n"
"	background-color: #bdc3c7;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/buttons/icons/power_icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        logoutButton->setIcon(icon1);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        sk_councilor_button = new QPushButton(page_2);
        sk_councilor_button->setObjectName("sk_councilor_button");
        sk_councilor_button->setGeometry(QRect(370, 80, 261, 91));
        sk_councilor_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sk_councilor_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"	color: black;\n"
"	background-color: #ecf0f1;\n"
"	border: 1px solid black;\n"
"} \n"
"QPushButton:hover {\n"
"	background-color: #bdc3c7;\n"
"}"));
        sk_chairman_button = new QPushButton(page_2);
        sk_chairman_button->setObjectName("sk_chairman_button");
        sk_chairman_button->setGeometry(QRect(70, 80, 261, 91));
        sk_chairman_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sk_chairman_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"	color: black;\n"
"	background-color: #ecf0f1;\n"
"	border: 1px solid black;\n"
"} \n"
"QPushButton:hover {\n"
"	background-color: #bdc3c7;\n"
"}"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 20, 270, 38));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Segoe UI\";\n"
"	font-size: 30px;\n"
"	color: black;\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        logoutButton_2 = new QPushButton(page_2);
        logoutButton_2->setObjectName("logoutButton_2");
        logoutButton_2->setGeometry(QRect(620, 0, 80, 24));
        logoutButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        logoutButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 500 9pt \"Source Code Pro\";\n"
"	font-size: 14px;\n"
"	color: black;\n"
"	background-color: #ecf0f1;\n"
"} \n"
"QPushButton:hover {\n"
"	background-color: #bdc3c7;\n"
"}"));
        logoutButton_2->setIcon(icon1);
        councilorButton_2 = new QPushButton(page_2);
        councilorButton_2->setObjectName("councilorButton_2");
        councilorButton_2->setGeometry(QRect(370, 180, 261, 91));
        councilorButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        councilorButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"	color: black;\n"
"	background-color: #ecf0f1;\n"
"	border: 1px solid black;\n"
"} \n"
"QPushButton:hover {\n"
"	background-color: #bdc3c7;\n"
"}"));
        captainButton_2 = new QPushButton(page_2);
        captainButton_2->setObjectName("captainButton_2");
        captainButton_2->setGeometry(QRect(70, 180, 261, 91));
        captainButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        captainButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 20px;\n"
"	color: black;\n"
"	background-color: #ecf0f1;\n"
"	border: 1px solid black;\n"
"} \n"
"QPushButton:hover {\n"
"	background-color: #bdc3c7;\n"
"}"));
        stackedWidget->addWidget(page_2);
        QWidget::setTabOrder(captainButton, councilorButton);

        retranslateUi(positions);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(positions);
    } // setupUi

    void retranslateUi(QDialog *positions)
    {
        positions->setWindowTitle(QCoreApplication::translate("positions", "PolliTech", nullptr));
        councilorButton->setText(QCoreApplication::translate("positions", "BARANGAY COUNCILORS", nullptr));
        captainButton->setText(QCoreApplication::translate("positions", "BARANGAY CAPTAIN", nullptr));
        label->setText(QCoreApplication::translate("positions", "CHOOSE POSITION", nullptr));
        logoutButton->setText(QCoreApplication::translate("positions", "LOGOUT", nullptr));
        sk_councilor_button->setText(QCoreApplication::translate("positions", "SK COUNCILOR", nullptr));
        sk_chairman_button->setText(QCoreApplication::translate("positions", "SK CHAIRMAN", nullptr));
        label_2->setText(QCoreApplication::translate("positions", "CHOOSE POSITION", nullptr));
        logoutButton_2->setText(QCoreApplication::translate("positions", "LOGOUT", nullptr));
        councilorButton_2->setText(QCoreApplication::translate("positions", "BARANGAY COUNCILORS", nullptr));
        captainButton_2->setText(QCoreApplication::translate("positions", "BARANGAY CAPTAIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class positions: public Ui_positions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSITIONS_H
