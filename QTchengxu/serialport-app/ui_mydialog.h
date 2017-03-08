/********************************************************************************
** Form generated from reading UI file 'mydialog.ui'
**
** Created: Sun Oct 12 20:35:35 2014
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *MyDialog)
    {
        if (MyDialog->objectName().isEmpty())
            MyDialog->setObjectName(QString::fromUtf8("MyDialog"));
        MyDialog->resize(800, 450);
        MyDialog->setMouseTracking(true);
        MyDialog->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8("clever.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8("clever.jpg"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QString::fromUtf8("clever.jpg"), QSize(), QIcon::Disabled, QIcon::Off);
        icon.addFile(QString::fromUtf8("clever.jpg"), QSize(), QIcon::Disabled, QIcon::On);
        icon.addFile(QString::fromUtf8("clever.jpg"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QString::fromUtf8("clever.jpg"), QSize(), QIcon::Active, QIcon::On);
        icon.addFile(QString::fromUtf8("clever.jpg"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QString::fromUtf8("clever.jpg"), QSize(), QIcon::Selected, QIcon::On);
        MyDialog->setWindowIcon(icon);
        label = new QLabel(MyDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 531, 51));
        label_2 = new QLabel(MyDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(520, 320, 81, 41));
        widget = new QWidget(MyDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 220, 301, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(MyDialog);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MyDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(MyDialog);
    } // setupUi

    void retranslateUi(QDialog *MyDialog)
    {
        MyDialog->setWindowTitle(QApplication::translate("MyDialog", "\346\210\221\347\232\204\345\265\214\345\205\245\345\274\217\345\274\200\345\217\221\344\271\213\350\267\257", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MyDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">\345\237\272\344\272\216\345\265\214\345\205\245\345\274\217LInux\345\222\214\346\227\240\347\272\277\351\200\232\344\277\241\347\232\204\346\231\272\346\205\247Car\357\274\215robot\347\263\273\347\273\237</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MyDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#1920ac;\">\357\274\215\357\274\215\344\272\216\350\266\205\350\276\211</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MyDialog", "\347\231\273\345\275\225\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MyDialog", "\351\200\200\345\207\272\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyDialog: public Ui_MyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
