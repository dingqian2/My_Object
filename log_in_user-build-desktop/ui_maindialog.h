/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created: Fri Feb 9 16:05:42 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QLabel *Uname;
    QLabel *UID;
    QLabel *label_2;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QPushButton *Tool;
    QTreeWidget *contactTreeWidget;
    QPushButton *Allfriendchat;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QString::fromUtf8("MainDialog"));
        MainDialog->resize(217, 527);
        MainDialog->setStyleSheet(QString::fromUtf8(""));
        Uname = new QLabel(MainDialog);
        Uname->setObjectName(QString::fromUtf8("Uname"));
        Uname->setGeometry(QRect(90, 30, 111, 31));
        Uname->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
"font: 20pt \"ADMUI3Lg\";"));
        UID = new QLabel(MainDialog);
        UID->setObjectName(QString::fromUtf8("UID"));
        UID->setGeometry(QRect(93, 60, 111, 20));
        UID->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_2 = new QLabel(MainDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 90, 301, 20));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"background-color: rgb(0, 255, 0);"));
        pushButton = new QPushButton(MainDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(99, 490, 51, 31));
        comboBox = new QComboBox(MainDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(-1, 90, 71, 22));
        pushButton_2 = new QPushButton(MainDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 75, 71));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/QQ20180119195307.png);"));
        Tool = new QPushButton(MainDialog);
        Tool->setObjectName(QString::fromUtf8("Tool"));
        Tool->setGeometry(QRect(168, 490, 31, 31));
        Tool->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/20180125085946.png);"));
        contactTreeWidget = new QTreeWidget(MainDialog);
        contactTreeWidget->setObjectName(QString::fromUtf8("contactTreeWidget"));
        contactTreeWidget->setGeometry(QRect(10, 121, 191, 361));
        Allfriendchat = new QPushButton(MainDialog);
        Allfriendchat->setObjectName(QString::fromUtf8("Allfriendchat"));
        Allfriendchat->setGeometry(QRect(22, 491, 61, 31));

        retranslateUi(MainDialog);

        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QApplication::translate("MainDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        Uname->setText(QString());
        UID->setText(QString());
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("MainDialog", "MuMusic", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QString());
        Tool->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = contactTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainDialog", "New Column", 0, QApplication::UnicodeUTF8));
        Allfriendchat->setText(QApplication::translate("MainDialog", "Chatting", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
