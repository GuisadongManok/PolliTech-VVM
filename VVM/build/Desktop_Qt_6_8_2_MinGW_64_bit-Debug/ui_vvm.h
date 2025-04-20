/********************************************************************************
** Form generated from reading UI file 'vvm.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVM_H
#define UI_VVM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvm
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_date;
    QLabel *label_2;

    void setupUi(QMainWindow *vvm)
    {
        if (vvm->objectName().isEmpty())
            vvm->setObjectName("vvm");
        vvm->resize(1258, 835);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        vvm->setWindowIcon(icon);
        centralwidget = new QWidget(vvm);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(9, 9, 304, 71));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 11pt \"Segoe UI\";\n"
"	color: black;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_2->addWidget(label);

        label_date = new QLabel(frame);
        label_date->setObjectName("label_date");
        label_date->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 600 11pt \"Segoe UI\";\n"
"	color: black;\n"
"}"));
        label_date->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_2->addWidget(label_date);


        horizontalLayout->addLayout(verticalLayout_2);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(61, 51));
        label_2->setMaximumSize(QSize(61, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/backgrounds/256x256 no bg.png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_2);

        vvm->setCentralWidget(centralwidget);

        retranslateUi(vvm);

        QMetaObject::connectSlotsByName(vvm);
    } // setupUi

    void retranslateUi(QMainWindow *vvm)
    {
        vvm->setWindowTitle(QCoreApplication::translate("vvm", "PolliTech", nullptr));
        label->setText(QCoreApplication::translate("vvm", "BARANGAY AND SK ELECTIONS", nullptr));
        label_date->setText(QCoreApplication::translate("vvm", "MMM d, yyyy", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class vvm: public Ui_vvm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVM_H
