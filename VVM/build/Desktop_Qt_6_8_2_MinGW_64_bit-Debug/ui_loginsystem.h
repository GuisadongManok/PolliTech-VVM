/********************************************************************************
** Form generated from reading UI file 'loginsystem.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSYSTEM_H
#define UI_LOGINSYSTEM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_loginsystem
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *LoginButton;
    QPushButton *AdminButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_VIN;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_lastName;
    QFrame *line;

    void setupUi(QDialog *loginsystem)
    {
        if (loginsystem->objectName().isEmpty())
            loginsystem->setObjectName("loginsystem");
        loginsystem->resize(642, 324);
        loginsystem->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        loginsystem->setWindowIcon(icon);
        loginsystem->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"        stop: 0 #f0f0f0,\n"
"        stop: 1 #e0e0e0\n"
"    );\n"
"}"));
        gridLayout_2 = new QGridLayout(loginsystem);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(loginsystem);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(281, 281));
        label_2->setFrameShape(QFrame::Shape::NoFrame);
        label_2->setLineWidth(0);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/backgrounds/256x256 name no bg.png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2->setWordWrap(false);
        label_2->setIndent(-1);
        label_2->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetMaximumSize);
        gridLayout->setContentsMargins(-1, 35, -1, 0);
        label_4 = new QLabel(loginsystem);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Segoe UI\";\n"
"	font-size: 35px;\n"
"	color: #0A1C3A;\n"
"}"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 1, Qt::AlignmentFlag::AlignBottom);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(70, 5, 70, 45);
        LoginButton = new QPushButton(loginsystem);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        LoginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"    border-radius: 16px;\n"
"    padding: 5px 15px;\n"
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

        horizontalLayout->addWidget(LoginButton);

        AdminButton = new QPushButton(loginsystem);
        AdminButton->setObjectName("AdminButton");
        AdminButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        AdminButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 600 9pt \"Segoe UI\";\n"
"    font-size: 16px;\n"
"    color: #012648;\n"
"\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(255, 210, 30),\n"
"        stop:1 rgb(254, 196, 1)\n"
"    );\n"
"\n"
"    border: 1px solid #0A1C3A;\n"
"    border-radius: 16px;\n"
"    padding: 5px 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(255, 225, 90),\n"
"        stop:1 rgb(255, 205, 30)\n"
"    );\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(240, 180, 0);\n"
"    padding-top: 6px;\n"
"    padding-bottom: 4px;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;\n"
"    border: 2px solid 	#C49102;\n"
"}"));

        horizontalLayout->addWidget(AdminButton);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(20, -1, 20, -1);
        label_3 = new QLabel(loginsystem);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        lineEdit_VIN = new QLineEdit(loginsystem);
        lineEdit_VIN->setObjectName("lineEdit_VIN");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_VIN->sizePolicy().hasHeightForWidth());
        lineEdit_VIN->setSizePolicy(sizePolicy1);
        lineEdit_VIN->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: #0A1C3A;\n"
"font: 9pt \"Segoe UI\";\n"
"font-size: 16px;\n"
"padding: 3px;\n"
"border: 1px solid black;\n"
"border-radius: 5px;\n"
"}"));
        lineEdit_VIN->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_VIN);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(20, -1, 20, -1);
        label = new QLabel(loginsystem);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        lineEdit_lastName = new QLineEdit(loginsystem);
        lineEdit_lastName->setObjectName("lineEdit_lastName");
        sizePolicy1.setHeightForWidth(lineEdit_lastName->sizePolicy().hasHeightForWidth());
        lineEdit_lastName->setSizePolicy(sizePolicy1);
        lineEdit_lastName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: #0A1C3A;\n"
"font: 9pt \"Segoe UI\";\n"
"font-size: 16px;\n"
"padding: 3px;\n"
"border: 1px solid black;\n"
"border-radius: 5px;\n"
"}"));
        lineEdit_lastName->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(lineEdit_lastName);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 2, 1, 1);

        line = new QFrame(loginsystem);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line, 0, 1, 1, 1);

        QWidget::setTabOrder(lineEdit_lastName, lineEdit_VIN);
        QWidget::setTabOrder(lineEdit_VIN, LoginButton);
        QWidget::setTabOrder(LoginButton, AdminButton);

        retranslateUi(loginsystem);

        QMetaObject::connectSlotsByName(loginsystem);
    } // setupUi

    void retranslateUi(QDialog *loginsystem)
    {
        loginsystem->setWindowTitle(QCoreApplication::translate("loginsystem", "PolliTech", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("loginsystem", "VOTER LOGIN", nullptr));
        LoginButton->setText(QCoreApplication::translate("loginsystem", "LOGIN", nullptr));
        AdminButton->setText(QCoreApplication::translate("loginsystem", "ADMIN", nullptr));
        label_3->setText(QCoreApplication::translate("loginsystem", "VOTER ID NUMBER", nullptr));
        label->setText(QCoreApplication::translate("loginsystem", "LAST NAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginsystem: public Ui_loginsystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSYSTEM_H
