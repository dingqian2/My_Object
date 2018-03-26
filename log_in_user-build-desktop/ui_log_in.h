/********************************************************************************
** Form generated from reading UI file 'log_in.ui'
**
** Created: Tue Feb 6 22:59:12 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_IN_H
#define UI_LOG_IN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_log_in
{
public:
    QPushButton *LogpushButton;
    QPushButton *LoginpushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditUpwd;
    QPushButton *pushButtonFindPwd;
    QLabel *labelCheck;
    QLabel *label_3;
    QPushButton *Key;
    QComboBox *EditUname;
    QLabel *labelUnameCheck;

    void setupUi(QDialog *log_in)
    {
        if (log_in->objectName().isEmpty())
            log_in->setObjectName(QString::fromUtf8("log_in"));
        log_in->resize(403, 305);
        log_in->setMinimumSize(QSize(403, 305));
        log_in->setStyleSheet(QString::fromUtf8(""));
        LogpushButton = new QPushButton(log_in);
        LogpushButton->setObjectName(QString::fromUtf8("LogpushButton"));
        LogpushButton->setGeometry(QRect(150, 223, 81, 31));
        LogpushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);"));
        LoginpushButton = new QPushButton(log_in);
        LoginpushButton->setObjectName(QString::fromUtf8("LoginpushButton"));
        LoginpushButton->setGeometry(QRect(150, 263, 81, 31));
        LoginpushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);"));
        label = new QLabel(log_in);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(49, 125, 81, 41));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_2 = new QLabel(log_in);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(52, 165, 81, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEditUpwd = new QLineEdit(log_in);
        lineEditUpwd->setObjectName(QString::fromUtf8("lineEditUpwd"));
        lineEditUpwd->setGeometry(QRect(119, 165, 151, 31));
        lineEditUpwd->setEchoMode(QLineEdit::Password);
        pushButtonFindPwd = new QPushButton(log_in);
        pushButtonFindPwd->setObjectName(QString::fromUtf8("pushButtonFindPwd"));
        pushButtonFindPwd->setGeometry(QRect(320, 270, 75, 23));
        pushButtonFindPwd->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);"));
        labelCheck = new QLabel(log_in);
        labelCheck->setObjectName(QString::fromUtf8("labelCheck"));
        labelCheck->setGeometry(QRect(280, 171, 111, 21));
        labelCheck->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_3 = new QLabel(log_in);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 401, 111));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/59350c3789e33_1024.jpg);"));
        Key = new QPushButton(log_in);
        Key->setObjectName(QString::fromUtf8("Key"));
        Key->setGeometry(QRect(241, 165, 31, 31));
        Key->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/QQ20180129230715.png);"));
        EditUname = new QComboBox(log_in);
        EditUname->setObjectName(QString::fromUtf8("EditUname"));
        EditUname->setGeometry(QRect(119, 132, 151, 31));
        labelUnameCheck = new QLabel(log_in);
        labelUnameCheck->setObjectName(QString::fromUtf8("labelUnameCheck"));
        labelUnameCheck->setGeometry(QRect(275, 138, 111, 21));
        labelUnameCheck->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        retranslateUi(log_in);

        QMetaObject::connectSlotsByName(log_in);
    } // setupUi

    void retranslateUi(QDialog *log_in)
    {
        log_in->setWindowTitle(QApplication::translate("log_in", "log_in", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        log_in->setToolTip(QApplication::translate("log_in", "HEHE", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        LogpushButton->setText(QApplication::translate("log_in", "\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
        LoginpushButton->setText(QApplication::translate("log_in", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("log_in", "\347\224\250\346\210\267\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("log_in", "\345\257\206  \347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        lineEditUpwd->setText(QString());
        pushButtonFindPwd->setText(QApplication::translate("log_in", "\345\257\206\347\240\201\346\211\276\345\233\236", 0, QApplication::UnicodeUTF8));
        labelCheck->setText(QString());
        label_3->setText(QString());
        Key->setText(QString());
        labelUnameCheck->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class log_in: public Ui_log_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_IN_H
