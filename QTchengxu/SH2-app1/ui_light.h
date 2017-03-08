/********************************************************************************
** Form generated from reading UI file 'light.ui'
**
** Created: Sat Dec 13 11:40:44 2014
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHT_H
#define UI_LIGHT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Light
{
public:
    QFrame *frame;
    QPushButton *fanhui2;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit0;
    QPushButton *lighton;
    QPushButton *lightoff;

    void setupUi(QWidget *Light)
    {
        if (Light->objectName().isEmpty())
            Light->setObjectName(QString::fromUtf8("Light"));
        Light->resize(800, 480);
        frame = new QFrame(Light);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 480));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/che.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        fanhui2 = new QPushButton(frame);
        fanhui2->setObjectName(QString::fromUtf8("fanhui2"));
        fanhui2->setGeometry(QRect(700, 390, 98, 91));
        fanhui2->setStyleSheet(QString::fromUtf8("border-image: url(:/log-out.png);"));
        lineEdit1 = new QLineEdit(frame);
        lineEdit1->setObjectName(QString::fromUtf8("lineEdit1"));
        lineEdit1->setGeometry(QRect(0, 460, 16, 27));
        lineEdit0 = new QLineEdit(frame);
        lineEdit0->setObjectName(QString::fromUtf8("lineEdit0"));
        lineEdit0->setGeometry(QRect(0, 460, 16, 27));
        lighton = new QPushButton(frame);
        lighton->setObjectName(QString::fromUtf8("lighton"));
        lighton->setGeometry(QRect(140, 280, 98, 91));
        lighton->setStyleSheet(QString::fromUtf8("border-image: url(:/kaiche.jpg);"));
        lightoff = new QPushButton(frame);
        lightoff->setObjectName(QString::fromUtf8("lightoff"));
        lightoff->setGeometry(QRect(560, 280, 98, 91));
        lightoff->setStyleSheet(QString::fromUtf8("border-image: url(:/tingche.jpg);"));
        fanhui2->raise();
        lineEdit1->raise();
        lineEdit0->raise();
        lightoff->raise();
        lighton->raise();

        retranslateUi(Light);

        QMetaObject::connectSlotsByName(Light);
    } // setupUi

    void retranslateUi(QWidget *Light)
    {
        Light->setWindowTitle(QApplication::translate("Light", "Form", 0, QApplication::UnicodeUTF8));
        fanhui2->setText(QString());
        lineEdit1->setText(QApplication::translate("Light", "4", 0, QApplication::UnicodeUTF8));
        lineEdit0->setText(QApplication::translate("Light", "5", 0, QApplication::UnicodeUTF8));
        lighton->setText(QApplication::translate("Light", "\n"
"\n"
"\345\274\200\350\275\246", 0, QApplication::UnicodeUTF8));
        lightoff->setText(QApplication::translate("Light", "\n"
"\n"
"\345\201\234\350\275\246", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Light: public Ui_Light {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHT_H
