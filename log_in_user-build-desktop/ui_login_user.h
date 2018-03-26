/********************************************************************************
** Form generated from reading UI file 'login_user.ui'
**
** Created: Tue Feb 6 21:46:26 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_USER_H
#define UI_LOGIN_USER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_login_user
{
public:
    QLabel *labelUpwdagaincheck;
    QLabel *labelUpwdcheck;
    QLabel *labelUsex_4;
    QRadioButton *radioButtonMan;
    QLineEdit *lineEditUname;
    QCheckBox *checkBox_3;
    QLabel *labelUpwdAgain;
    QLineEdit *lineEditUtel;
    QDateEdit *dateEditBirth;
    QRadioButton *radioButtonWoman;
    QCheckBox *checkBox_2;
    QLabel *labelUnamecheck;
    QPushButton *pushButtonLogin;
    QLabel *labelUsex_3;
    QLabel *labelUpwd;
    QLabel *labelUname;
    QLineEdit *lineEditUpwdAgain;
    QCheckBox *checkBox_4;
    QLabel *labelUsex_2;
    QCheckBox *checkBox;
    QLineEdit *lineEditUpwd;
    QLabel *labelUsex;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *labelUserPhoneCheck;
    QPushButton *LogWindow;

    void setupUi(QDialog *login_user)
    {
        if (login_user->objectName().isEmpty())
            login_user->setObjectName(QString::fromUtf8("login_user"));
        login_user->resize(363, 405);
        login_user->setStyleSheet(QString::fromUtf8(""));
        labelUpwdagaincheck = new QLabel(login_user);
        labelUpwdagaincheck->setObjectName(QString::fromUtf8("labelUpwdagaincheck"));
        labelUpwdagaincheck->setGeometry(QRect(247, 117, 111, 20));
        labelUpwdcheck = new QLabel(login_user);
        labelUpwdcheck->setObjectName(QString::fromUtf8("labelUpwdcheck"));
        labelUpwdcheck->setGeometry(QRect(245, 75, 111, 20));
        labelUsex_4 = new QLabel(login_user);
        labelUsex_4->setObjectName(QString::fromUtf8("labelUsex_4"));
        labelUsex_4->setGeometry(QRect(32, 177, 48, 16));
        radioButtonMan = new QRadioButton(login_user);
        radioButtonMan->setObjectName(QString::fromUtf8("radioButtonMan"));
        radioButtonMan->setGeometry(QRect(100, 150, 35, 17));
        radioButtonMan->setChecked(true);
        radioButtonMan->setAutoRepeat(false);
        lineEditUname = new QLineEdit(login_user);
        lineEditUname->setObjectName(QString::fromUtf8("lineEditUname"));
        lineEditUname->setGeometry(QRect(90, 30, 150, 30));
        checkBox_3 = new QCheckBox(login_user);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(170, 280, 72, 17));
        labelUpwdAgain = new QLabel(login_user);
        labelUpwdAgain->setObjectName(QString::fromUtf8("labelUpwdAgain"));
        labelUpwdAgain->setGeometry(QRect(22, 117, 60, 16));
        lineEditUtel = new QLineEdit(login_user);
        lineEditUtel->setObjectName(QString::fromUtf8("lineEditUtel"));
        lineEditUtel->setGeometry(QRect(90, 170, 150, 30));
        lineEditUtel->setEchoMode(QLineEdit::Normal);
        dateEditBirth = new QDateEdit(login_user);
        dateEditBirth->setObjectName(QString::fromUtf8("dateEditBirth"));
        dateEditBirth->setGeometry(QRect(90, 210, 150, 30));
        radioButtonWoman = new QRadioButton(login_user);
        radioButtonWoman->setObjectName(QString::fromUtf8("radioButtonWoman"));
        radioButtonWoman->setGeometry(QRect(190, 150, 35, 17));
        checkBox_2 = new QCheckBox(login_user);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(170, 260, 72, 17));
        labelUnamecheck = new QLabel(login_user);
        labelUnamecheck->setObjectName(QString::fromUtf8("labelUnamecheck"));
        labelUnamecheck->setGeometry(QRect(250, 37, 91, 20));
        pushButtonLogin = new QPushButton(login_user);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));
        pushButtonLogin->setGeometry(QRect(100, 310, 101, 31));
        pushButtonLogin->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        labelUsex_3 = new QLabel(login_user);
        labelUsex_3->setObjectName(QString::fromUtf8("labelUsex_3"));
        labelUsex_3->setGeometry(QRect(36, 260, 36, 16));
        labelUpwd = new QLabel(login_user);
        labelUpwd->setObjectName(QString::fromUtf8("labelUpwd"));
        labelUpwd->setGeometry(QRect(33, 77, 48, 16));
        labelUname = new QLabel(login_user);
        labelUname->setObjectName(QString::fromUtf8("labelUname"));
        labelUname->setGeometry(QRect(33, 38, 48, 16));
        lineEditUpwdAgain = new QLineEdit(login_user);
        lineEditUpwdAgain->setObjectName(QString::fromUtf8("lineEditUpwdAgain"));
        lineEditUpwdAgain->setGeometry(QRect(90, 110, 150, 30));
        lineEditUpwdAgain->setEchoMode(QLineEdit::Password);
        checkBox_4 = new QCheckBox(login_user);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(90, 280, 72, 17));
        labelUsex_2 = new QLabel(login_user);
        labelUsex_2->setObjectName(QString::fromUtf8("labelUsex_2"));
        labelUsex_2->setGeometry(QRect(41, 217, 36, 16));
        checkBox = new QCheckBox(login_user);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(90, 260, 72, 17));
        lineEditUpwd = new QLineEdit(login_user);
        lineEditUpwd->setObjectName(QString::fromUtf8("lineEditUpwd"));
        lineEditUpwd->setGeometry(QRect(90, 70, 150, 30));
        lineEditUpwd->setEchoMode(QLineEdit::Password);
        labelUsex = new QLabel(login_user);
        labelUsex->setObjectName(QString::fromUtf8("labelUsex"));
        labelUsex->setGeometry(QRect(38, 148, 42, 16));
        label = new QLabel(login_user);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 54, 12));
        label_2 = new QLabel(login_user);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 76, 51, 20));
        label_3 = new QLabel(login_user);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 120, 54, 12));
        label_4 = new QLabel(login_user);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 180, 54, 12));
        labelUserPhoneCheck = new QLabel(login_user);
        labelUserPhoneCheck->setObjectName(QString::fromUtf8("labelUserPhoneCheck"));
        labelUserPhoneCheck->setGeometry(QRect(250, 176, 111, 20));
        LogWindow = new QPushButton(login_user);
        LogWindow->setObjectName(QString::fromUtf8("LogWindow"));
        LogWindow->setGeometry(QRect(100, 350, 101, 31));
        LogWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        retranslateUi(login_user);

        QMetaObject::connectSlotsByName(login_user);
    } // setupUi

    void retranslateUi(QDialog *login_user)
    {
        login_user->setWindowTitle(QApplication::translate("login_user", "login_user", 0, QApplication::UnicodeUTF8));
        labelUpwdagaincheck->setText(QString());
        labelUpwdcheck->setText(QString());
        labelUsex_4->setText(QApplication::translate("login_user", "\346\211\213\346\234\272\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        radioButtonMan->setText(QApplication::translate("login_user", "\347\224\267", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("login_user", "\347\251\277\350\266\212\347\201\253\347\272\277", 0, QApplication::UnicodeUTF8));
        labelUpwdAgain->setText(QApplication::translate("login_user", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        dateEditBirth->setDisplayFormat(QApplication::translate("login_user", "yyyy-M-d", 0, QApplication::UnicodeUTF8));
        radioButtonWoman->setText(QApplication::translate("login_user", "\345\245\263", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("login_user", "\345\256\210\346\234\233\345\205\210\351\224\213", 0, QApplication::UnicodeUTF8));
        labelUnamecheck->setText(QString());
        pushButtonLogin->setText(QApplication::translate("login_user", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
        labelUsex_3->setText(QApplication::translate("login_user", "\347\210\261\345\245\275\357\274\232", 0, QApplication::UnicodeUTF8));
        labelUpwd->setText(QApplication::translate("login_user", " \345\257\206 \347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        labelUname->setText(QApplication::translate("login_user", "\347\224\250\346\210\267\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("login_user", "\350\213\261\351\233\204\350\201\224\347\233\237", 0, QApplication::UnicodeUTF8));
        labelUsex_2->setText(QApplication::translate("login_user", "\347\224\237\346\227\245\357\274\232", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("login_user", "\347\216\213\350\200\205\350\215\243\350\200\200", 0, QApplication::UnicodeUTF8));
        labelUsex->setText(QApplication::translate("login_user", "\346\200\247 \345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("login_user", "*", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("login_user", "*", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("login_user", "*", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("login_user", "*", 0, QApplication::UnicodeUTF8));
        labelUserPhoneCheck->setText(QString());
        LogWindow->setText(QApplication::translate("login_user", "\350\277\224\345\233\236\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class login_user: public Ui_login_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_USER_H
