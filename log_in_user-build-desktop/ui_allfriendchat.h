/********************************************************************************
** Form generated from reading UI file 'allfriendchat.ui'
**
** Created: Fri Feb 9 16:09:46 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLFRIENDCHAT_H
#define UI_ALLFRIENDCHAT_H

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
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllFriendChat
{
public:
    QComboBox *Friendlist;
    QPushButton *ClearRecord;
    QToolButton *FontColor;
    QComboBox *FontSize;
    QPushButton *SendFile;
    QLabel *FriendSum;
    QLabel *label;
    QPushButton *ChattingRecords;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Send;
    QPushButton *Close;
    QTextEdit *Chat;
    QFontComboBox *Font;
    QPushButton *WeightFont;
    QPushButton *FlushFriend;
    QPushButton *recvFile;
    QPushButton *otherChat;
    QTextEdit *ChatRecord;
    QLabel *label_2;
    QLabel *ShowTime;
    QTableWidget *Friend;

    void setupUi(QDialog *AllFriendChat)
    {
        if (AllFriendChat->objectName().isEmpty())
            AllFriendChat->setObjectName(QString::fromUtf8("AllFriendChat"));
        AllFriendChat->resize(665, 490);
        Friendlist = new QComboBox(AllFriendChat);
        Friendlist->setObjectName(QString::fromUtf8("Friendlist"));
        Friendlist->setGeometry(QRect(540, 40, 101, 22));
        ClearRecord = new QPushButton(AllFriendChat);
        ClearRecord->setObjectName(QString::fromUtf8("ClearRecord"));
        ClearRecord->setGeometry(QRect(350, 340, 31, 28));
        ClearRecord->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/clear.png);"));
        FontColor = new QToolButton(AllFriendChat);
        FontColor->setObjectName(QString::fromUtf8("FontColor"));
        FontColor->setGeometry(QRect(158, 337, 31, 28));
        FontColor->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/20180123092951.png);"));
        FontSize = new QComboBox(AllFriendChat);
        FontSize->setObjectName(QString::fromUtf8("FontSize"));
        FontSize->setGeometry(QRect(110, 337, 41, 28));
        SendFile = new QPushButton(AllFriendChat);
        SendFile->setObjectName(QString::fromUtf8("SendFile"));
        SendFile->setGeometry(QRect(270, 340, 31, 28));
        SendFile->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/send.png);"));
        FriendSum = new QLabel(AllFriendChat);
        FriendSum->setObjectName(QString::fromUtf8("FriendSum"));
        FriendSum->setGeometry(QRect(546, 345, 41, 21));
        label = new QLabel(AllFriendChat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 111, 21));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"ADMUI3Lg\";\n"
"font: 20pt \"ADMUI3Lg\";\n"
"font: 9pt \"\346\245\267\344\275\223\";"));
        ChattingRecords = new QPushButton(AllFriendChat);
        ChattingRecords->setObjectName(QString::fromUtf8("ChattingRecords"));
        ChattingRecords->setGeometry(QRect(400, 340, 61, 28));
        layoutWidget = new QWidget(AllFriendChat);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 446, 162, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Send = new QPushButton(layoutWidget);
        Send->setObjectName(QString::fromUtf8("Send"));

        horizontalLayout->addWidget(Send);

        Close = new QPushButton(layoutWidget);
        Close->setObjectName(QString::fromUtf8("Close"));

        horizontalLayout->addWidget(Close);

        Chat = new QTextEdit(AllFriendChat);
        Chat->setObjectName(QString::fromUtf8("Chat"));
        Chat->setGeometry(QRect(20, 380, 431, 64));
        Font = new QFontComboBox(AllFriendChat);
        Font->setObjectName(QString::fromUtf8("Font"));
        Font->setGeometry(QRect(20, 337, 81, 28));
        WeightFont = new QPushButton(AllFriendChat);
        WeightFont->setObjectName(QString::fromUtf8("WeightFont"));
        WeightFont->setGeometry(QRect(200, 340, 39, 28));
        WeightFont->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/bold.png);"));
        FlushFriend = new QPushButton(AllFriendChat);
        FlushFriend->setObjectName(QString::fromUtf8("FlushFriend"));
        FlushFriend->setGeometry(QRect(600, 337, 41, 28));
        FlushFriend->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/20180123092659.png);"));
        recvFile = new QPushButton(AllFriendChat);
        recvFile->setObjectName(QString::fromUtf8("recvFile"));
        recvFile->setGeometry(QRect(310, 340, 31, 28));
        otherChat = new QPushButton(AllFriendChat);
        otherChat->setObjectName(QString::fromUtf8("otherChat"));
        otherChat->setGeometry(QRect(470, 40, 61, 23));
        ChatRecord = new QTextEdit(AllFriendChat);
        ChatRecord->setObjectName(QString::fromUtf8("ChatRecord"));
        ChatRecord->setGeometry(QRect(20, 30, 441, 291));
        ChatRecord->setLayoutDirection(Qt::LeftToRight);
        label_2 = new QLabel(AllFriendChat);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(480, 345, 54, 21));
        ShowTime = new QLabel(AllFriendChat);
        ShowTime->setObjectName(QString::fromUtf8("ShowTime"));
        ShowTime->setGeometry(QRect(360, 12, 241, 20));
        Friend = new QTableWidget(AllFriendChat);
        if (Friend->columnCount() < 2)
            Friend->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Friend->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Friend->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        Friend->setObjectName(QString::fromUtf8("Friend"));
        Friend->setGeometry(QRect(470, 70, 171, 261));

        retranslateUi(AllFriendChat);
        QObject::connect(ChatRecord, SIGNAL(currentColorChanged(QColor)), Chat, SLOT(setColor(QColor)));

        QMetaObject::connectSlotsByName(AllFriendChat);
    } // setupUi

    void retranslateUi(QDialog *AllFriendChat)
    {
        AllFriendChat->setWindowTitle(QApplication::translate("AllFriendChat", "Dialog", 0, QApplication::UnicodeUTF8));
        ClearRecord->setText(QString());
        FontColor->setText(QString());
        FontSize->clear();
        FontSize->insertItems(0, QStringList()
         << QApplication::translate("AllFriendChat", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AllFriendChat", "20", 0, QApplication::UnicodeUTF8)
        );
        SendFile->setText(QString());
        FriendSum->setText(QString());
        label->setText(QApplication::translate("AllFriendChat", "ChattingRoom", 0, QApplication::UnicodeUTF8));
        ChattingRecords->setText(QApplication::translate("AllFriendChat", "\350\201\212\345\244\251\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        Send->setText(QApplication::translate("AllFriendChat", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        Close->setText(QApplication::translate("AllFriendChat", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        WeightFont->setText(QString());
        FlushFriend->setText(QString());
        recvFile->setText(QApplication::translate("AllFriendChat", "recv", 0, QApplication::UnicodeUTF8));
        otherChat->setText(QApplication::translate("AllFriendChat", "\351\200\211\346\213\251\345\245\275\345\217\213", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AllFriendChat", "\345\234\250\347\272\277\344\272\272\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        ShowTime->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = Friend->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AllFriendChat", "\346\230\265\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = Friend->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AllFriendChat", "ID", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AllFriendChat: public Ui_AllFriendChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLFRIENDCHAT_H
