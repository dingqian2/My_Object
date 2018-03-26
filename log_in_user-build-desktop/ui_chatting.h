/********************************************************************************
** Form generated from reading UI file 'chatting.ui'
**
** Created: Mon Jan 29 10:11:59 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATTING_H
#define UI_CHATTING_H

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

class Ui_Chatting
{
public:
    QTextEdit *ChatRecord;
    QLabel *label;
    QLabel *ShowTime;
    QFontComboBox *Font;
    QComboBox *FontSize;
    QToolButton *FontColor;
    QPushButton *ClearRecord;
    QPushButton *WeightFont;
    QTableWidget *Friend;
    QPushButton *FlushFriend;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Send;
    QPushButton *Close;
    QPushButton *SendFile;
    QPushButton *ChattingRecords;
    QTextEdit *Chat;
    QComboBox *Friendlist;
    QPushButton *otherChat;
    QPushButton *recvFile;
    QLabel *label_2;
    QLabel *FriendSum;

    void setupUi(QDialog *Chatting)
    {
        if (Chatting->objectName().isEmpty())
            Chatting->setObjectName(QString::fromUtf8("Chatting"));
        Chatting->resize(641, 479);
        Chatting->setStyleSheet(QString::fromUtf8(""));
        ChatRecord = new QTextEdit(Chatting);
        ChatRecord->setObjectName(QString::fromUtf8("ChatRecord"));
        ChatRecord->setGeometry(QRect(10, 40, 441, 291));
        ChatRecord->setLayoutDirection(Qt::LeftToRight);
        label = new QLabel(Chatting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 111, 21));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"ADMUI3Lg\";\n"
"font: 20pt \"ADMUI3Lg\";\n"
"font: 9pt \"\346\245\267\344\275\223\";"));
        ShowTime = new QLabel(Chatting);
        ShowTime->setObjectName(QString::fromUtf8("ShowTime"));
        ShowTime->setGeometry(QRect(350, 12, 241, 20));
        Font = new QFontComboBox(Chatting);
        Font->setObjectName(QString::fromUtf8("Font"));
        Font->setGeometry(QRect(10, 337, 81, 28));
        FontSize = new QComboBox(Chatting);
        FontSize->setObjectName(QString::fromUtf8("FontSize"));
        FontSize->setGeometry(QRect(100, 337, 41, 28));
        FontColor = new QToolButton(Chatting);
        FontColor->setObjectName(QString::fromUtf8("FontColor"));
        FontColor->setGeometry(QRect(148, 337, 31, 28));
        FontColor->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/20180123092951.png);"));
        ClearRecord = new QPushButton(Chatting);
        ClearRecord->setObjectName(QString::fromUtf8("ClearRecord"));
        ClearRecord->setGeometry(QRect(340, 340, 31, 28));
        ClearRecord->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/clear.png);"));
        WeightFont = new QPushButton(Chatting);
        WeightFont->setObjectName(QString::fromUtf8("WeightFont"));
        WeightFont->setGeometry(QRect(190, 340, 39, 28));
        WeightFont->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/bold.png);"));
        Friend = new QTableWidget(Chatting);
        if (Friend->columnCount() < 2)
            Friend->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Friend->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Friend->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        Friend->setObjectName(QString::fromUtf8("Friend"));
        Friend->setGeometry(QRect(460, 70, 171, 261));
        FlushFriend = new QPushButton(Chatting);
        FlushFriend->setObjectName(QString::fromUtf8("FlushFriend"));
        FlushFriend->setGeometry(QRect(590, 337, 41, 28));
        FlushFriend->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/20180123092659.png);"));
        layoutWidget = new QWidget(Chatting);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 440, 162, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Send = new QPushButton(layoutWidget);
        Send->setObjectName(QString::fromUtf8("Send"));

        horizontalLayout->addWidget(Send);

        Close = new QPushButton(layoutWidget);
        Close->setObjectName(QString::fromUtf8("Close"));

        horizontalLayout->addWidget(Close);

        SendFile = new QPushButton(Chatting);
        SendFile->setObjectName(QString::fromUtf8("SendFile"));
        SendFile->setGeometry(QRect(260, 340, 31, 28));
        SendFile->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/images/send.png);"));
        ChattingRecords = new QPushButton(Chatting);
        ChattingRecords->setObjectName(QString::fromUtf8("ChattingRecords"));
        ChattingRecords->setGeometry(QRect(390, 340, 61, 28));
        Chat = new QTextEdit(Chatting);
        Chat->setObjectName(QString::fromUtf8("Chat"));
        Chat->setGeometry(QRect(10, 380, 431, 64));
        Friendlist = new QComboBox(Chatting);
        Friendlist->setObjectName(QString::fromUtf8("Friendlist"));
        Friendlist->setGeometry(QRect(530, 40, 101, 22));
        otherChat = new QPushButton(Chatting);
        otherChat->setObjectName(QString::fromUtf8("otherChat"));
        otherChat->setGeometry(QRect(460, 40, 61, 23));
        recvFile = new QPushButton(Chatting);
        recvFile->setObjectName(QString::fromUtf8("recvFile"));
        recvFile->setGeometry(QRect(300, 340, 31, 28));
        label_2 = new QLabel(Chatting);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(470, 345, 54, 21));
        FriendSum = new QLabel(Chatting);
        FriendSum->setObjectName(QString::fromUtf8("FriendSum"));
        FriendSum->setGeometry(QRect(536, 345, 41, 21));

        retranslateUi(Chatting);

        QMetaObject::connectSlotsByName(Chatting);
    } // setupUi

    void retranslateUi(QDialog *Chatting)
    {
        Chatting->setWindowTitle(QApplication::translate("Chatting", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Chatting", "ChattingRoom", 0, QApplication::UnicodeUTF8));
        ShowTime->setText(QString());
        FontSize->clear();
        FontSize->insertItems(0, QStringList()
         << QApplication::translate("Chatting", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Chatting", "20", 0, QApplication::UnicodeUTF8)
        );
        FontColor->setText(QString());
        ClearRecord->setText(QString());
        WeightFont->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = Friend->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Chatting", "\346\230\265\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = Friend->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Chatting", "ID", 0, QApplication::UnicodeUTF8));
        FlushFriend->setText(QString());
        Send->setText(QApplication::translate("Chatting", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        Close->setText(QApplication::translate("Chatting", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        SendFile->setText(QString());
        ChattingRecords->setText(QApplication::translate("Chatting", "\350\201\212\345\244\251\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        otherChat->setText(QApplication::translate("Chatting", "\351\200\211\346\213\251\345\245\275\345\217\213", 0, QApplication::UnicodeUTF8));
        recvFile->setText(QApplication::translate("Chatting", "recv", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Chatting", "\345\234\250\347\272\277\344\272\272\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        FriendSum->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Chatting: public Ui_Chatting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATTING_H
