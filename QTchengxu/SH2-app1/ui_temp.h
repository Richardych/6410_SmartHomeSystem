/********************************************************************************
** Form generated from reading UI file 'temp.ui'
**
** Created: Sat Dec 13 11:40:44 2014
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMP_H
#define UI_TEMP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Temp
{
public:
    QFrame *frame;
    QPushButton *QUIT;
    QTextBrowser *textBrowser;
    QPushButton *sendButton;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Temp)
    {
        if (Temp->objectName().isEmpty())
            Temp->setObjectName(QString::fromUtf8("Temp"));
        Temp->resize(800, 480);
        Temp->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Temp);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 480));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/wendu.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        QUIT = new QPushButton(frame);
        QUIT->setObjectName(QString::fromUtf8("QUIT"));
        QUIT->setGeometry(QRect(700, 390, 98, 91));
        QUIT->setStyleSheet(QString::fromUtf8("background-image: url(:/log-out.png);"));
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 40, 231, 221));
        textBrowser->setStyleSheet(QString::fromUtf8("background-image: url(:/white.png);"));
        sendButton = new QPushButton(frame);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(0, 320, 111, 31));
        sendButton->setStyleSheet(QString::fromUtf8("border-image: url(:/send.jpg);"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 270, 231, 31));

        retranslateUi(Temp);

        QMetaObject::connectSlotsByName(Temp);
    } // setupUi

    void retranslateUi(QWidget *Temp)
    {
        Temp->setWindowTitle(QApplication::translate("Temp", "Form", 0, QApplication::UnicodeUTF8));
        QUIT->setText(QString());
        sendButton->setText(QApplication::translate("Temp", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("Temp", "21", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Temp: public Ui_Temp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMP_H
