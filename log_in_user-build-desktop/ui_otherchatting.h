/********************************************************************************
** Form generated from reading UI file 'otherchatting.ui'
**
** Created: Sat Jan 27 15:16:08 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHERCHATTING_H
#define UI_OTHERCHATTING_H

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

class Ui_OtherChatting
{
public:
    QToolButton *FontColor;
    QTextEdit *Chat;
    QFontComboBox *Font;
    QPushButton *ClearRecord;
    QPushButton *ChattingRecords;
    QComboBox *FontSize;
    QPushButton *SendFile;
    QPushButton *WeightFont;
    QLabel *ShowTime;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Send;
    QPushButton *Close;
    QTextEdit *ChatRecorda;
    QPushButton *otherName;
    QLabel *Usex;
    QLabel *label_3;
    QLabel *Uhobby;
    QLabel *Uname;
    QLabel *label;
    QLabel *label_4;
    QLabel *Utel;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *UID;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *Ubirth;

    void setupUi(QDialog *OtherChatting)
    {
        if (OtherChatting->objectName().isEmpty())
            OtherChatting->setObjectName(QString::fromUtf8("OtherChatting"));
        OtherChatting->resize(652, 479);
        FontColor = new QToolButton(OtherChatting);
        FontColor->setObjectName(QString::fromUtf8("FontColor"));
        FontColor->setGeometry(QRect(178, 347, 31, 28));
        FontColor->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/20180123092951.png);"));
        Chat = new QTextEdit(OtherChatting);
        Chat->setObjectName(QString::fromUtf8("Chat"));
        Chat->setGeometry(QRect(40, 380, 441, 64));
        Font = new QFontComboBox(OtherChatting);
        Font->setObjectName(QString::fromUtf8("Font"));
        Font->setGeometry(QRect(40, 347, 81, 28));
        ClearRecord = new QPushButton(OtherChatting);
        ClearRecord->setObjectName(QString::fromUtf8("ClearRecord"));
        ClearRecord->setGeometry(QRect(440, 350, 31, 28));
        ClearRecord->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/clear.png);"));
        ChattingRecords = new QPushButton(OtherChatting);
        ChattingRecords->setObjectName(QString::fromUtf8("ChattingRecords"));
        ChattingRecords->setGeometry(QRect(300, 350, 75, 28));
        FontSize = new QComboBox(OtherChatting);
        FontSize->setObjectName(QString::fromUtf8("FontSize"));
        FontSize->setGeometry(QRect(130, 347, 41, 28));
        SendFile = new QPushButton(OtherChatting);
        SendFile->setObjectName(QString::fromUtf8("SendFile"));
        SendFile->setGeometry(QRect(390, 350, 31, 28));
        SendFile->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/send.png);"));
        WeightFont = new QPushButton(OtherChatting);
        WeightFont->setObjectName(QString::fromUtf8("WeightFont"));
        WeightFont->setGeometry(QRect(220, 350, 39, 28));
        WeightFont->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/bold.png);"));
        ShowTime = new QLabel(OtherChatting);
        ShowTime->setObjectName(QString::fromUtf8("ShowTime"));
        ShowTime->setGeometry(QRect(370, 10, 241, 20));
        layoutWidget = new QWidget(OtherChatting);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 450, 162, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Send = new QPushButton(layoutWidget);
        Send->setObjectName(QString::fromUtf8("Send"));

        horizontalLayout->addWidget(Send);

        Close = new QPushButton(layoutWidget);
        Close->setObjectName(QString::fromUtf8("Close"));

        horizontalLayout->addWidget(Close);

        ChatRecorda = new QTextEdit(OtherChatting);
        ChatRecorda->setObjectName(QString::fromUtf8("ChatRecorda"));
        ChatRecorda->setGeometry(QRect(40, 60, 441, 281));
        otherName = new QPushButton(OtherChatting);
        otherName->setObjectName(QString::fromUtf8("otherName"));
        otherName->setGeometry(QRect(40, 10, 151, 41));
        Usex = new QLabel(OtherChatting);
        Usex->setObjectName(QString::fromUtf8("Usex"));
        Usex->setGeometry(QRect(528, 170, 111, 21));
        label_3 = new QLabel(OtherChatting);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(488, 140, 41, 21));
        Uhobby = new QLabel(OtherChatting);
        Uhobby->setObjectName(QString::fromUtf8("Uhobby"));
        Uhobby->setGeometry(QRect(528, 260, 111, 21));
        Uname = new QLabel(OtherChatting);
        Uname->setObjectName(QString::fromUtf8("Uname"));
        Uname->setGeometry(QRect(528, 140, 111, 21));
        label = new QLabel(OtherChatting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(528, 80, 91, 20));
        label_4 = new QLabel(OtherChatting);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(488, 200, 41, 21));
        Utel = new QLabel(OtherChatting);
        Utel->setObjectName(QString::fromUtf8("Utel"));
        Utel->setGeometry(QRect(528, 230, 111, 21));
        label_2 = new QLabel(OtherChatting);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(488, 110, 41, 21));
        label_5 = new QLabel(OtherChatting);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(488, 170, 41, 21));
        UID = new QLabel(OtherChatting);
        UID->setObjectName(QString::fromUtf8("UID"));
        UID->setGeometry(QRect(528, 111, 111, 21));
        label_6 = new QLabel(OtherChatting);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(488, 230, 41, 21));
        label_7 = new QLabel(OtherChatting);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(488, 260, 41, 21));
        Ubirth = new QLabel(OtherChatting);
        Ubirth->setObjectName(QString::fromUtf8("Ubirth"));
        Ubirth->setGeometry(QRect(530, 200, 111, 21));

        retranslateUi(OtherChatting);

        QMetaObject::connectSlotsByName(OtherChatting);
    } // setupUi

    void retranslateUi(QDialog *OtherChatting)
    {
        OtherChatting->setWindowTitle(QApplication::translate("OtherChatting", "Dialog", 0, QApplication::UnicodeUTF8));
        FontColor->setText(QString());
        ClearRecord->setText(QString());
        ChattingRecords->setText(QApplication::translate("OtherChatting", "\350\201\212\345\244\251\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        FontSize->clear();
        FontSize->insertItems(0, QStringList()
         << QApplication::translate("OtherChatting", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OtherChatting", "20", 0, QApplication::UnicodeUTF8)
        );
        SendFile->setText(QString());
        WeightFont->setText(QString());
        ShowTime->setText(QString());
        Send->setText(QApplication::translate("OtherChatting", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        Close->setText(QApplication::translate("OtherChatting", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        otherName->setText(QString());
        Usex->setText(QString());
        label_3->setText(QApplication::translate("OtherChatting", "\346\230\265\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        Uhobby->setText(QString());
        Uname->setText(QString());
        label->setText(QApplication::translate("OtherChatting", "\345\245\275\345\217\213\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OtherChatting", "\347\224\237\346\227\245\357\274\232", 0, QApplication::UnicodeUTF8));
        Utel->setText(QString());
        label_2->setText(QApplication::translate("OtherChatting", "ID\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OtherChatting", "\346\200\247\345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
        UID->setText(QString());
        label_6->setText(QApplication::translate("OtherChatting", "\346\211\213\346\234\272\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("OtherChatting", "\347\210\261\345\245\275\357\274\232", 0, QApplication::UnicodeUTF8));
        Ubirth->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OtherChatting: public Ui_OtherChatting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHERCHATTING_H
