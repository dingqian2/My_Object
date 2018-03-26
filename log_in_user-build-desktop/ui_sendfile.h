/********************************************************************************
** Form generated from reading UI file 'sendfile.ui'
**
** Created: Sun Jan 28 17:02:07 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDFILE_H
#define UI_SENDFILE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SendFile
{
public:
    QLabel *label;
    QPushButton *cCancleBtn;
    QProgressBar *progressBar;
    QPushButton *cCloseBtn;
    QLabel *cStatusLbl;

    void setupUi(QDialog *SendFile)
    {
        if (SendFile->objectName().isEmpty())
            SendFile->setObjectName(QString::fromUtf8("SendFile"));
        SendFile->resize(376, 199);
        label = new QLabel(SendFile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 61, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        cCancleBtn = new QPushButton(SendFile);
        cCancleBtn->setObjectName(QString::fromUtf8("cCancleBtn"));
        cCancleBtn->setGeometry(QRect(70, 140, 75, 23));
        progressBar = new QProgressBar(SendFile);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(100, 30, 271, 23));
        progressBar->setValue(0);
        cCloseBtn = new QPushButton(SendFile);
        cCloseBtn->setObjectName(QString::fromUtf8("cCloseBtn"));
        cCloseBtn->setGeometry(QRect(230, 140, 75, 23));
        cStatusLbl = new QLabel(SendFile);
        cStatusLbl->setObjectName(QString::fromUtf8("cStatusLbl"));
        cStatusLbl->setGeometry(QRect(30, 60, 331, 71));
        QFont font1;
        font1.setPointSize(10);
        cStatusLbl->setFont(font1);

        retranslateUi(SendFile);

        QMetaObject::connectSlotsByName(SendFile);
    } // setupUi

    void retranslateUi(QDialog *SendFile)
    {
        SendFile->setWindowTitle(QApplication::translate("SendFile", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SendFile", "\345\267\262\345\256\214\346\210\220", 0, QApplication::UnicodeUTF8));
        cCancleBtn->setText(QApplication::translate("SendFile", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        cCloseBtn->setText(QApplication::translate("SendFile", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        cStatusLbl->setText(QApplication::translate("SendFile", "\347\255\211\345\276\205\346\216\245\346\224\266\346\226\207\344\273\266\342\200\246", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SendFile: public Ui_SendFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDFILE_H
