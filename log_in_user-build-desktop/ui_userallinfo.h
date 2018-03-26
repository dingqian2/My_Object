/********************************************************************************
** Form generated from reading UI file 'userallinfo.ui'
**
** Created: Fri Jan 26 17:18:15 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERALLINFO_H
#define UI_USERALLINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_userallinfo
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *UID;
    QLabel *Usex;
    QLabel *Ubirth;
    QLabel *Utel;
    QLabel *Uhobby;
    QLabel *Uname;

    void setupUi(QDialog *userallinfo)
    {
        if (userallinfo->objectName().isEmpty())
            userallinfo->setObjectName(QString::fromUtf8("userallinfo"));
        userallinfo->resize(228, 268);
        label = new QLabel(userallinfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 91, 20));
        label_2 = new QLabel(userallinfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 41, 21));
        label_3 = new QLabel(userallinfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 70, 41, 21));
        label_4 = new QLabel(userallinfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 130, 41, 21));
        label_5 = new QLabel(userallinfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 100, 41, 21));
        label_6 = new QLabel(userallinfo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 160, 41, 21));
        label_7 = new QLabel(userallinfo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 190, 41, 21));
        UID = new QLabel(userallinfo);
        UID->setObjectName(QString::fromUtf8("UID"));
        UID->setGeometry(QRect(60, 41, 131, 21));
        Usex = new QLabel(userallinfo);
        Usex->setObjectName(QString::fromUtf8("Usex"));
        Usex->setGeometry(QRect(60, 100, 131, 21));
        Ubirth = new QLabel(userallinfo);
        Ubirth->setObjectName(QString::fromUtf8("Ubirth"));
        Ubirth->setGeometry(QRect(62, 130, 131, 21));
        Utel = new QLabel(userallinfo);
        Utel->setObjectName(QString::fromUtf8("Utel"));
        Utel->setGeometry(QRect(60, 160, 131, 21));
        Uhobby = new QLabel(userallinfo);
        Uhobby->setObjectName(QString::fromUtf8("Uhobby"));
        Uhobby->setGeometry(QRect(60, 190, 131, 21));
        Uname = new QLabel(userallinfo);
        Uname->setObjectName(QString::fromUtf8("Uname"));
        Uname->setGeometry(QRect(60, 70, 131, 21));

        retranslateUi(userallinfo);

        QMetaObject::connectSlotsByName(userallinfo);
    } // setupUi

    void retranslateUi(QDialog *userallinfo)
    {
        userallinfo->setWindowTitle(QApplication::translate("userallinfo", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("userallinfo", "\345\245\275\345\217\213\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("userallinfo", "ID\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("userallinfo", "\346\230\265\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("userallinfo", "\347\224\237\346\227\245\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("userallinfo", "\346\200\247\345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("userallinfo", "\346\211\213\346\234\272\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("userallinfo", "\347\210\261\345\245\275\357\274\232", 0, QApplication::UnicodeUTF8));
        UID->setText(QString());
        Usex->setText(QString());
        Ubirth->setText(QString());
        Utel->setText(QString());
        Uhobby->setText(QString());
        Uname->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class userallinfo: public Ui_userallinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERALLINFO_H
