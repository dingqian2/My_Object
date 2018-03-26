/********************************************************************************
** Form generated from reading UI file 'onefriendchat.ui'
**
** Created: Sat Feb 17 22:42:50 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEFRIENDCHAT_H
#define UI_ONEFRIENDCHAT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFontComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oneFriendChat
{
public:
    QLabel *label_5;
    QPushButton *ChattingRecords;
    QTextEdit *Chat;
    QToolButton *FontColor;
    QLabel *Utel;
    QLabel *label_3;
    QPushButton *SendFile;
    QLabel *label_4;
    QLabel *Ubirth;
    QFontComboBox *Font;
    QPushButton *otherName;
    QPushButton *WeightFont;
    QLabel *label_7;
    QLabel *Uhobby;
    QLabel *label_6;
    QComboBox *FontSize;
    QLabel *label;
    QTextEdit *ChatRecorda;
    QLabel *ShowTime;
    QLabel *Uname;
    QPushButton *ClearRecord;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Send;
    QPushButton *Close;
    QLabel *Usex;

    void setupUi(QDialog *oneFriendChat)
    {
        if (oneFriendChat->objectName().isEmpty())
            oneFriendChat->setObjectName(QString::fromUtf8("oneFriendChat"));
        oneFriendChat->resize(657, 497);
        label_5 = new QLabel(oneFriendChat);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(470, 150, 41, 21));
        ChattingRecords = new QPushButton(oneFriendChat);
        ChattingRecords->setObjectName(QString::fromUtf8("ChattingRecords"));
        ChattingRecords->setGeometry(QRect(282, 350, 75, 28));
        Chat = new QTextEdit(oneFriendChat);
        Chat->setObjectName(QString::fromUtf8("Chat"));
        Chat->setGeometry(QRect(22, 380, 441, 64));
        FontColor = new QToolButton(oneFriendChat);
        FontColor->setObjectName(QString::fromUtf8("FontColor"));
        FontColor->setGeometry(QRect(160, 347, 31, 28));
        FontColor->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/20180123092951.png);"));
        Utel = new QLabel(oneFriendChat);
        Utel->setObjectName(QString::fromUtf8("Utel"));
        Utel->setGeometry(QRect(510, 210, 111, 21));
        label_3 = new QLabel(oneFriendChat);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(470, 120, 41, 21));
        SendFile = new QPushButton(oneFriendChat);
        SendFile->setObjectName(QString::fromUtf8("SendFile"));
        SendFile->setGeometry(QRect(372, 350, 31, 28));
        SendFile->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/send.png);"));
        label_4 = new QLabel(oneFriendChat);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(470, 180, 41, 21));
        Ubirth = new QLabel(oneFriendChat);
        Ubirth->setObjectName(QString::fromUtf8("Ubirth"));
        Ubirth->setGeometry(QRect(512, 180, 111, 21));
        Font = new QFontComboBox(oneFriendChat);
        Font->setObjectName(QString::fromUtf8("Font"));
        Font->setGeometry(QRect(22, 347, 81, 28));
        otherName = new QPushButton(oneFriendChat);
        otherName->setObjectName(QString::fromUtf8("otherName"));
        otherName->setGeometry(QRect(22, 10, 151, 41));
        WeightFont = new QPushButton(oneFriendChat);
        WeightFont->setObjectName(QString::fromUtf8("WeightFont"));
        WeightFont->setGeometry(QRect(202, 350, 39, 28));
        WeightFont->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/bold.png);"));
        label_7 = new QLabel(oneFriendChat);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(470, 240, 41, 21));
        Uhobby = new QLabel(oneFriendChat);
        Uhobby->setObjectName(QString::fromUtf8("Uhobby"));
        Uhobby->setGeometry(QRect(510, 240, 111, 21));
        label_6 = new QLabel(oneFriendChat);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(470, 210, 41, 21));
        FontSize = new QComboBox(oneFriendChat);
        FontSize->setObjectName(QString::fromUtf8("FontSize"));
        FontSize->setGeometry(QRect(112, 347, 41, 28));
        label = new QLabel(oneFriendChat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(510, 80, 91, 20));
        ChatRecorda = new QTextEdit(oneFriendChat);
        ChatRecorda->setObjectName(QString::fromUtf8("ChatRecorda"));
        ChatRecorda->setGeometry(QRect(22, 60, 441, 281));
        ShowTime = new QLabel(oneFriendChat);
        ShowTime->setObjectName(QString::fromUtf8("ShowTime"));
        ShowTime->setGeometry(QRect(352, 10, 241, 20));
        Uname = new QLabel(oneFriendChat);
        Uname->setObjectName(QString::fromUtf8("Uname"));
        Uname->setGeometry(QRect(510, 120, 111, 21));
        ClearRecord = new QPushButton(oneFriendChat);
        ClearRecord->setObjectName(QString::fromUtf8("ClearRecord"));
        ClearRecord->setGeometry(QRect(422, 350, 31, 28));
        ClearRecord->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/clear.png);"));
        layoutWidget = new QWidget(oneFriendChat);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(312, 450, 162, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Send = new QPushButton(layoutWidget);
        Send->setObjectName(QString::fromUtf8("Send"));

        horizontalLayout->addWidget(Send);

        Close = new QPushButton(layoutWidget);
        Close->setObjectName(QString::fromUtf8("Close"));

        horizontalLayout->addWidget(Close);

        Usex = new QLabel(oneFriendChat);
        Usex->setObjectName(QString::fromUtf8("Usex"));
        Usex->setGeometry(QRect(510, 150, 111, 21));

        retranslateUi(oneFriendChat);

        QMetaObject::connectSlotsByName(oneFriendChat);
    } // setupUi

    void retranslateUi(QDialog *oneFriendChat)
    {
        oneFriendChat->setWindowTitle(QApplication::translate("oneFriendChat", "Dialog", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("oneFriendChat", "\346\200\247\345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
        ChattingRecords->setText(QApplication::translate("oneFriendChat", "\350\201\212\345\244\251\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        FontColor->setText(QString());
        Utel->setText(QString());
        label_3->setText(QApplication::translate("oneFriendChat", "\346\230\265\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        SendFile->setText(QString());
        label_4->setText(QApplication::translate("oneFriendChat", "\347\224\237\346\227\245\357\274\232", 0, QApplication::UnicodeUTF8));
        Ubirth->setText(QString());
        otherName->setText(QString());
        WeightFont->setText(QString());
        label_7->setText(QApplication::translate("oneFriendChat", "\347\210\261\345\245\275\357\274\232", 0, QApplication::UnicodeUTF8));
        Uhobby->setText(QString());
        label_6->setText(QApplication::translate("oneFriendChat", "\346\211\213\346\234\272\357\274\232", 0, QApplication::UnicodeUTF8));
        FontSize->clear();
        FontSize->insertItems(0, QStringList()
         << QApplication::translate("oneFriendChat", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("oneFriendChat", "20", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("oneFriendChat", "\345\245\275\345\217\213\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        ShowTime->setText(QString());
        Uname->setText(QString());
        ClearRecord->setText(QString());
        Send->setText(QApplication::translate("oneFriendChat", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        Close->setText(QApplication::translate("oneFriendChat", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        Usex->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class oneFriendChat: public Ui_oneFriendChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEFRIENDCHAT_H
