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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvm
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_13;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_date;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollArea_bCaptain;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_Captain;
    QGridLayout *gridLayout_9;
    QGridLayout *captainLayout;
    QScrollArea *scrollArea_4;
    QWidget *scrollArea_bCouncilors_2;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_Councilors;
    QGridLayout *gridLayout_4;
    QGridLayout *bCouncilorsLayout;
    QScrollArea *scrollArea_2;
    QWidget *scrollArea_skChairman;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_SK_chairman;
    QGridLayout *gridLayout_5;
    QGridLayout *skChairmanLayout;
    QScrollArea *scrollArea_3;
    QWidget *scrollArea_skCouncilors;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_SK_councilors;
    QGridLayout *gridLayout_6;
    QGridLayout *skCouncilorsLayout;

    void setupUi(QMainWindow *vvm)
    {
        if (vvm->objectName().isEmpty())
            vvm->setObjectName("vvm");
        vvm->resize(724, 835);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        vvm->setWindowIcon(icon);
        centralwidget = new QWidget(vvm);
        centralwidget->setObjectName("centralwidget");
        gridLayout_13 = new QGridLayout(centralwidget);
        gridLayout_13->setObjectName("gridLayout_13");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
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


        gridLayout_13->addWidget(frame, 0, 0, 1, 1);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollArea_bCaptain = new QWidget();
        scrollArea_bCaptain->setObjectName("scrollArea_bCaptain");
        scrollArea_bCaptain->setGeometry(QRect(0, 0, 706, 181));
        gridLayout = new QGridLayout(scrollArea_bCaptain);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        groupBox_Captain = new QGroupBox(scrollArea_bCaptain);
        groupBox_Captain->setObjectName("groupBox_Captain");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        groupBox_Captain->setFont(font);
        groupBox_Captain->setAlignment(Qt::AlignmentFlag::AlignCenter);
        groupBox_Captain->setFlat(false);
        gridLayout_9 = new QGridLayout(groupBox_Captain);
        gridLayout_9->setObjectName("gridLayout_9");
        captainLayout = new QGridLayout();
        captainLayout->setObjectName("captainLayout");

        gridLayout_9->addLayout(captainLayout, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_Captain, 0, 0, 1, 1);

        scrollArea->setWidget(scrollArea_bCaptain);

        gridLayout_13->addWidget(scrollArea, 1, 0, 1, 1);

        scrollArea_4 = new QScrollArea(centralwidget);
        scrollArea_4->setObjectName("scrollArea_4");
        scrollArea_4->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollArea_bCouncilors_2 = new QWidget();
        scrollArea_bCouncilors_2->setObjectName("scrollArea_bCouncilors_2");
        scrollArea_bCouncilors_2->setGeometry(QRect(0, 0, 706, 180));
        gridLayout_8 = new QGridLayout(scrollArea_bCouncilors_2);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        groupBox_Councilors = new QGroupBox(scrollArea_bCouncilors_2);
        groupBox_Councilors->setObjectName("groupBox_Councilors");
        groupBox_Councilors->setFont(font);
        groupBox_Councilors->setAlignment(Qt::AlignmentFlag::AlignCenter);
        groupBox_Councilors->setFlat(false);
        gridLayout_4 = new QGridLayout(groupBox_Councilors);
        gridLayout_4->setObjectName("gridLayout_4");
        bCouncilorsLayout = new QGridLayout();
        bCouncilorsLayout->setObjectName("bCouncilorsLayout");

        gridLayout_4->addLayout(bCouncilorsLayout, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_Councilors, 0, 0, 1, 1);

        scrollArea_4->setWidget(scrollArea_bCouncilors_2);

        gridLayout_13->addWidget(scrollArea_4, 2, 0, 1, 1);

        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollArea_skChairman = new QWidget();
        scrollArea_skChairman->setObjectName("scrollArea_skChairman");
        scrollArea_skChairman->setGeometry(QRect(0, 0, 706, 181));
        gridLayout_2 = new QGridLayout(scrollArea_skChairman);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        groupBox_SK_chairman = new QGroupBox(scrollArea_skChairman);
        groupBox_SK_chairman->setObjectName("groupBox_SK_chairman");
        groupBox_SK_chairman->setFont(font);
        groupBox_SK_chairman->setAlignment(Qt::AlignmentFlag::AlignCenter);
        groupBox_SK_chairman->setFlat(false);
        gridLayout_5 = new QGridLayout(groupBox_SK_chairman);
        gridLayout_5->setObjectName("gridLayout_5");
        skChairmanLayout = new QGridLayout();
        skChairmanLayout->setObjectName("skChairmanLayout");

        gridLayout_5->addLayout(skChairmanLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_SK_chairman, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollArea_skChairman);

        gridLayout_13->addWidget(scrollArea_2, 3, 0, 1, 1);

        scrollArea_3 = new QScrollArea(centralwidget);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollArea_skCouncilors = new QWidget();
        scrollArea_skCouncilors->setObjectName("scrollArea_skCouncilors");
        scrollArea_skCouncilors->setGeometry(QRect(0, 0, 706, 180));
        gridLayout_7 = new QGridLayout(scrollArea_skCouncilors);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        groupBox_SK_councilors = new QGroupBox(scrollArea_skCouncilors);
        groupBox_SK_councilors->setObjectName("groupBox_SK_councilors");
        groupBox_SK_councilors->setFont(font);
        groupBox_SK_councilors->setAlignment(Qt::AlignmentFlag::AlignCenter);
        groupBox_SK_councilors->setFlat(false);
        gridLayout_6 = new QGridLayout(groupBox_SK_councilors);
        gridLayout_6->setObjectName("gridLayout_6");
        skCouncilorsLayout = new QGridLayout();
        skCouncilorsLayout->setObjectName("skCouncilorsLayout");

        gridLayout_6->addLayout(skCouncilorsLayout, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_SK_councilors, 0, 0, 1, 1);

        scrollArea_3->setWidget(scrollArea_skCouncilors);

        gridLayout_13->addWidget(scrollArea_3, 4, 0, 1, 1);

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
        groupBox_Captain->setTitle(QCoreApplication::translate("vvm", "Barangay Captain (Punong Barangay)", nullptr));
        groupBox_Councilors->setTitle(QCoreApplication::translate("vvm", "Barangay Councilors (Sangguniang Barangay)", nullptr));
        groupBox_SK_chairman->setTitle(QCoreApplication::translate("vvm", "SK Chairman", nullptr));
        groupBox_SK_councilors->setTitle(QCoreApplication::translate("vvm", "SK Councilors (SK Kagawad)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvm: public Ui_vvm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVM_H
