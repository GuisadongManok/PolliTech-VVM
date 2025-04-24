/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

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

class Ui_adminlogin
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_email;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QHBoxLayout *horizontalLayout;
    QPushButton *BackButton;
    QPushButton *LoginButton;
    QLabel *label_4;
    QFrame *line;

    void setupUi(QDialog *adminlogin)
    {
        if (adminlogin->objectName().isEmpty())
            adminlogin->setObjectName("adminlogin");
        adminlogin->resize(644, 324);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(adminlogin->sizePolicy().hasHeightForWidth());
        adminlogin->setSizePolicy(sizePolicy);
        adminlogin->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        adminlogin->setWindowIcon(icon);
        adminlogin->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0,\n"
"        x2: 0, y2: 1,\n"
"        stop: 0 #f0f0f0,\n"
"        stop: 1 #e0e0e0\n"
"    );\n"
"}"));
        gridLayout = new QGridLayout(adminlogin);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        verticalLayout_4->setContentsMargins(-1, 0, -1, 30);
        label_3 = new QLabel(adminlogin);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Segoe UI\";\n"
"	font-size: 35px;\n"
"	color: #0A1C3A;\n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_3, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignBottom);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(20, -1, 20, -1);
        label = new QLabel(adminlogin);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        lineEdit_email = new QLineEdit(adminlogin);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: #0A1C3A;\n"
"font: 9pt \"Segoe UI\";\n"
"font-size: 16px;\n"
"padding: 3px;\n"
"border: 1px solid black;\n"
"border-radius: 5px;\n"
"}"));
        lineEdit_email->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_email->setClearButtonEnabled(false);

        verticalLayout->addWidget(lineEdit_email);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(20, -1, 20, -1);
        label_2 = new QLabel(adminlogin);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	font-size: 17px;\n"
"	color: #0A1C3A;\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        lineEdit_password = new QLineEdit(adminlogin);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(255,255,255,200);\n"
"color: #0A1C3A;\n"
"font: 9pt \"Segoe UI\";\n"
"font-size: 16px;\n"
"padding: 3px;\n"
"border: 1px solid black;\n"
"border-radius: 5px;\n"
"}"));
        lineEdit_password->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_password);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(70, 10, 70, -1);
        BackButton = new QPushButton(adminlogin);
        BackButton->setObjectName("BackButton");
        BackButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        BackButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(BackButton);

        LoginButton = new QPushButton(adminlogin);
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
"    border: 2px solid rgb(102, 178, 255);\n"
"}\n"
""));

        horizontalLayout->addWidget(LoginButton);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout->addLayout(verticalLayout_4, 0, 2, 1, 1);

        label_4 = new QLabel(adminlogin);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(281, 281));
        label_4->setFrameShape(QFrame::Shape::NoFrame);
        label_4->setLineWidth(0);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/backgrounds/256x256 name no bg.png")));
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4->setWordWrap(false);
        label_4->setIndent(-1);
        label_4->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        line = new QFrame(adminlogin);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        QWidget::setTabOrder(lineEdit_email, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, BackButton);
        QWidget::setTabOrder(BackButton, LoginButton);

        retranslateUi(adminlogin);

        QMetaObject::connectSlotsByName(adminlogin);
    } // setupUi

    void retranslateUi(QDialog *adminlogin)
    {
        adminlogin->setWindowTitle(QCoreApplication::translate("adminlogin", "PolliTech", nullptr));
        label_3->setText(QCoreApplication::translate("adminlogin", "ADMIN LOGIN", nullptr));
        label->setText(QCoreApplication::translate("adminlogin", "EMAIL", nullptr));
        label_2->setText(QCoreApplication::translate("adminlogin", "PASSWORD", nullptr));
        BackButton->setText(QCoreApplication::translate("adminlogin", "BACK", nullptr));
        LoginButton->setText(QCoreApplication::translate("adminlogin", "LOGIN", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminlogin: public Ui_adminlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
