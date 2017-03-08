/********************************************************************************
** Form generated from reading UI file 'feng.ui'
**
** Created: Sat Dec 13 11:40:44 2014
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENG_H
#define UI_FENG_H

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

class Ui_Feng
{
public:
    QFrame *frame;
    QPushButton *fanhui1;
    QPushButton *open1;
    QPushButton *shutdown1;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;

    void setupUi(QWidget *Feng)
    {
        if (Feng->objectName().isEmpty())
            Feng->setObjectName(QString::fromUtf8("Feng"));
        Feng->resize(800, 480);
        frame = new QFrame(Feng);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 480));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/fengshan.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        fanhui1 = new QPushButton(frame);
        fanhui1->setObjectName(QString::fromUtf8("fanhui1"));
        fanhui1->setGeometry(QRect(700, 390, 98, 91));
        fanhui1->setStyleSheet(QString::fromUtf8("border-image: url(:/log-out.png);"));
        open1 = new QPushButton(frame);
        open1->setObjectName(QString::fromUtf8("open1"));
        open1->setGeometry(QRect(230, 90, 98, 91));
        open1->setStyleSheet(QString::fromUtf8("border-image: url(:/kaifeng.jpg);"));
        shutdown1 = new QPushButton(frame);
        shutdown1->setObjectName(QString::fromUtf8("shutdown1"));
        shutdown1->setGeometry(QRect(480, 90, 98, 91));
        shutdown1->setStyleSheet(QString::fromUtf8("border-image: url(:/fengoff.png);"));
        lineEdit1 = new QLineEdit(frame);
        lineEdit1->setObjectName(QString::fromUtf8("lineEdit1"));
        lineEdit1->setGeometry(QRect(0, 460, 16, 27));
        lineEdit2 = new QLineEdit(frame);
        lineEdit2->setObjectName(QString::fromUtf8("lineEdit2"));
        lineEdit2->setGeometry(QRect(0, 460, 16, 27));

        retranslateUi(Feng);

        QMetaObject::connectSlotsByName(Feng);
    } // setupUi

    void retranslateUi(QWidget *Feng)
    {
        Feng->setWindowTitle(QApplication::translate("Feng", "Form", 0, QApplication::UnicodeUTF8));
        fanhui1->setText(QString());
        open1->setText(QApplication::translate("Feng", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        shutdown1->setText(QApplication::translate("Feng", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        lineEdit1->setText(QApplication::translate("Feng", "2", 0, QApplication::UnicodeUTF8));
        lineEdit2->setText(QApplication::translate("Feng", "3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Feng: public Ui_Feng {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENG_H
