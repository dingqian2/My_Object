/********************************************************************************
** Form generated from reading UI file 'pwdfinddialog.ui'
**
** Created: Tue Feb 6 22:38:08 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PWDFINDDIALOG_H
#define UI_PWDFINDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PwdFindDialog
{
public:
    QLabel *label;
    QLineEdit *lineEditUname;
    QLineEdit *lineEditUphone;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *labelUpwdAgainCheck;
    QLineEdit *lineEditUpwd;
    QLabel *label_5;
    QLabel *labelUphoneCheck_3;
    QLineEdit *lineEditUpwdAgain;
    QLabel *label_6;
    QLabel *labelHint;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *PwdFindDialog)
    {
        if (PwdFindDialog->objectName().isEmpty())
            PwdFindDialog->setObjectName(QString::fromUtf8("PwdFindDialog"));
        PwdFindDialog->resize(357, 379);
        label = new QLabel(PwdFindDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(31, 75, 91, 31));
        lineEditUname = new QLineEdit(PwdFindDialog);
        lineEditUname->setObjectName(QString::fromUtf8("lineEditUname"));
        lineEditUname->setGeometry(QRect(82, 75, 131, 31));
        lineEditUphone = new QLineEdit(PwdFindDialog);
        lineEditUphone->setObjectName(QString::fromUtf8("lineEditUphone"));
        lineEditUphone->setGeometry(QRect(81, 110, 131, 31));
        label_2 = new QLabel(PwdFindDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 110, 91, 31));
        label_3 = new QLabel(PwdFindDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 141, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"ADMUI3Lg\";\n"
"color: rgb(255, 0, 0);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));
        label_4 = new QLabel(PwdFindDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(28, 190, 91, 31));
        labelUpwdAgainCheck = new QLabel(PwdFindDialog);
        labelUpwdAgainCheck->setObjectName(QString::fromUtf8("labelUpwdAgainCheck"));
        labelUpwdAgainCheck->setGeometry(QRect(234, 234, 101, 21));
        lineEditUpwd = new QLineEdit(PwdFindDialog);
        lineEditUpwd->setObjectName(QString::fromUtf8("lineEditUpwd"));
        lineEditUpwd->setGeometry(QRect(80, 190, 131, 31));
        lineEditUpwd->setEchoMode(QLineEdit::Password);
        label_5 = new QLabel(PwdFindDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 230, 91, 31));
        labelUphoneCheck_3 = new QLabel(PwdFindDialog);
        labelUphoneCheck_3->setObjectName(QString::fromUtf8("labelUphoneCheck_3"));
        labelUphoneCheck_3->setGeometry(QRect(326, 235, 101, 21));
        lineEditUpwdAgain = new QLineEdit(PwdFindDialog);
        lineEditUpwdAgain->setObjectName(QString::fromUtf8("lineEditUpwdAgain"));
        lineEditUpwdAgain->setGeometry(QRect(80, 230, 131, 31));
        lineEditUpwdAgain->setEchoMode(QLineEdit::Password);
        label_6 = new QLabel(PwdFindDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 150, 171, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"ADMUI3Lg\";\n"
"color: rgb(255, 0, 0);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));
        labelHint = new QLabel(PwdFindDialog);
        labelHint->setObjectName(QString::fromUtf8("labelHint"));
        labelHint->setGeometry(QRect(80, 280, 211, 31));
        labelHint->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        pushButtonSave = new QPushButton(PwdFindDialog);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setGeometry(QRect(140, 330, 91, 31));
        pushButtonSave->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);"));
        pushButtonCancel = new QPushButton(PwdFindDialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(254, 330, 91, 31));
        pushButtonCancel->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);"));

        retranslateUi(PwdFindDialog);

        QMetaObject::connectSlotsByName(PwdFindDialog);
    } // setupUi

    void retranslateUi(QDialog *PwdFindDialog)
    {
        PwdFindDialog->setWindowTitle(QApplication::translate("PwdFindDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PwdFindDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PwdFindDialog", "\346\211\213\346\234\272\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PwdFindDialog", "\345\257\206\347\240\201\351\207\215\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PwdFindDialog", "\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        labelUpwdAgainCheck->setText(QString());
        label_5->setText(QApplication::translate("PwdFindDialog", "\351\207\215\346\226\260\350\276\223\345\205\245\357\274\232", 0, QApplication::UnicodeUTF8));
        labelUphoneCheck_3->setText(QString());
        label_6->setText(QApplication::translate("PwdFindDialog", "\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        labelHint->setText(QString());
        pushButtonSave->setText(QApplication::translate("PwdFindDialog", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        pushButtonCancel->setText(QApplication::translate("PwdFindDialog", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PwdFindDialog: public Ui_PwdFindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PWDFINDDIALOG_H
