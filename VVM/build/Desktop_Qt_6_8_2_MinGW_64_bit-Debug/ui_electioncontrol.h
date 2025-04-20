/********************************************************************************
** Form generated from reading UI file 'electioncontrol.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELECTIONCONTROL_H
#define UI_ELECTIONCONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElectionControl
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QDialog *ElectionControl)
    {
        if (ElectionControl->objectName().isEmpty())
            ElectionControl->setObjectName("ElectionControl");
        ElectionControl->resize(606, 414);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backgrounds/Smol logo no bg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ElectionControl->setWindowIcon(icon);
        stackedWidget = new QStackedWidget(ElectionControl);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(9, 9, 591, 391));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        retranslateUi(ElectionControl);

        QMetaObject::connectSlotsByName(ElectionControl);
    } // setupUi

    void retranslateUi(QDialog *ElectionControl)
    {
        ElectionControl->setWindowTitle(QCoreApplication::translate("ElectionControl", "PolliTech", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ElectionControl: public Ui_ElectionControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELECTIONCONTROL_H
