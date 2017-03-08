/********************************************************************************
** Form generated from reading UI file 'chuanghu.ui'
**
** Created: Sat Dec 13 11:40:44 2014
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHUANGHU_H
#define UI_CHUANGHU_H

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

class Ui_chuanghu
{
public:
    QFrame *frame;
    QPushButton *open;
    QPushButton *close;
    QPushButton *fanhui;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *chuanghu)
    {
        if (chuanghu->objectName().isEmpty())
            chuanghu->setObjectName(QString::fromUtf8("chuanghu"));
        chuanghu->resize(800, 480);
        frame = new QFrame(chuanghu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 480));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/chuanghu.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        open = new QPushButton(frame);
        open->setObjectName(QString::fromUtf8("open"));
        open->setGeometry(QRect(280, 140, 98, 81));
        open->setStyleSheet(QString::fromUtf8("border-image: url(:/ch2.png);"));
        close = new QPushButton(frame);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(380, 140, 98, 81));
        close->setStyleSheet(QString::fromUtf8("border-image: url(:/ch1.png);"));
        fanhui = new QPushButton(frame);
        fanhui->setObjectName(QString::fromUtf8("fanhui"));
        fanhui->setGeometry(QRect(700, 390, 98, 91));
        fanhui->setStyleSheet(QString::fromUtf8("border-image: url(:/log-out.png);"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 450, 16, 27));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(true);
        lineEdit_2->setGeometry(QRect(0, 450, 16, 27));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-image: url(:/chuanghu.jpg);"));

        retranslateUi(chuanghu);

        QMetaObject::connectSlotsByName(chuanghu);
    } // setupUi

    void retranslateUi(QWidget *chuanghu)
    {
        chuanghu->setWindowTitle(QApplication::translate("chuanghu", "Form", 0, QApplication::UnicodeUTF8));
        open->setText(QApplication::translate("chuanghu", "\345\274\200\347\252\227", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("chuanghu", "\345\205\263\347\252\227", 0, QApplication::UnicodeUTF8));
        fanhui->setText(QString());
        lineEdit->setText(QApplication::translate("chuanghu", "1", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QApplication::translate("chuanghu", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class chuanghu: public Ui_chuanghu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHUANGHU_H
