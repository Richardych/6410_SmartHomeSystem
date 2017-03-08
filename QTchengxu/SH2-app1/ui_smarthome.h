/********************************************************************************
** Form generated from reading UI file 'smarthome.ui'
**
** Created: Sat Dec 13 11:40:44 2014
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTHOME_H
#define UI_SMARTHOME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartHome
{
public:
    QWidget *centralWidget;
    QPushButton *temp;
    QPushButton *feng;
    QPushButton *windows;
    QPushButton *shutdown;
    QPushButton *light;

    void setupUi(QMainWindow *SmartHome)
    {
        if (SmartHome->objectName().isEmpty())
            SmartHome->setObjectName(QString::fromUtf8("SmartHome"));
        SmartHome->resize(800, 480);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/clever.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/clever.jpg"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QString::fromUtf8(":/clever.jpg"), QSize(), QIcon::Disabled, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/clever.jpg"), QSize(), QIcon::Disabled, QIcon::On);
        icon.addFile(QString::fromUtf8(":/clever.jpg"), QSize(), QIcon::Active, QIcon::Off);
        SmartHome->setWindowIcon(icon);
        SmartHome->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/zuomian.jpg);"));
        centralWidget = new QWidget(SmartHome);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        temp = new QPushButton(centralWidget);
        temp->setObjectName(QString::fromUtf8("temp"));
        temp->setGeometry(QRect(210, 50, 81, 71));
        temp->setStyleSheet(QString::fromUtf8("border-image: url(:/temp.jpg);"));
        feng = new QPushButton(centralWidget);
        feng->setObjectName(QString::fromUtf8("feng"));
        feng->setGeometry(QRect(360, 50, 81, 71));
        feng->setStyleSheet(QString::fromUtf8("border-image: url(:/feng.jpg);"));
        windows = new QPushButton(centralWidget);
        windows->setObjectName(QString::fromUtf8("windows"));
        windows->setGeometry(QRect(70, 50, 81, 71));
        windows->setStyleSheet(QString::fromUtf8("border-image: url(:/window.jpg);"));
        shutdown = new QPushButton(centralWidget);
        shutdown->setObjectName(QString::fromUtf8("shutdown"));
        shutdown->setGeometry(QRect(640, 50, 81, 71));
        shutdown->setStyleSheet(QString::fromUtf8("border-image: url(:/tui.png);"));
        light = new QPushButton(centralWidget);
        light->setObjectName(QString::fromUtf8("light"));
        light->setGeometry(QRect(500, 50, 81, 71));
        light->setStyleSheet(QString::fromUtf8("border-image: url(:/xiaoch.jpg);"));
        SmartHome->setCentralWidget(centralWidget);

        retranslateUi(SmartHome);

        QMetaObject::connectSlotsByName(SmartHome);
    } // setupUi

    void retranslateUi(QMainWindow *SmartHome)
    {
        SmartHome->setWindowTitle(QApplication::translate("SmartHome", "SmartHome", 0, QApplication::UnicodeUTF8));
        temp->setText(QString());
        feng->setText(QString());
        windows->setText(QString());
        shutdown->setText(QString());
        light->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SmartHome: public Ui_SmartHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTHOME_H
