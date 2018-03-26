/********************************************************************************
** Form generated from reading UI file 'filesend.ui'
**
** Created: Tue Jan 23 11:08:56 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESEND_H
#define UI_FILESEND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileSend
{
public:
    QPushButton *OpenBtn;
    QLabel *label_2;
    QProgressBar *progressBar;
    QLabel *ShowFilename;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *sSendBtn;
    QPushButton *sCloseBtn;

    void setupUi(QDialog *FileSend)
    {
        if (FileSend->objectName().isEmpty())
            FileSend->setObjectName(QString::fromUtf8("FileSend"));
        FileSend->resize(391, 219);
        OpenBtn = new QPushButton(FileSend);
        OpenBtn->setObjectName(QString::fromUtf8("OpenBtn"));
        OpenBtn->setGeometry(QRect(170, 10, 75, 23));
        label_2 = new QLabel(FileSend);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 131, 21));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        progressBar = new QProgressBar(FileSend);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 100, 261, 23));
        progressBar->setValue(0);
        ShowFilename = new QLabel(FileSend);
        ShowFilename->setObjectName(QString::fromUtf8("ShowFilename"));
        ShowFilename->setGeometry(QRect(20, 40, 331, 51));
        QFont font1;
        font1.setPointSize(10);
        ShowFilename->setFont(font1);
        widget = new QWidget(FileSend);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(200, 170, 162, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sSendBtn = new QPushButton(widget);
        sSendBtn->setObjectName(QString::fromUtf8("sSendBtn"));

        horizontalLayout->addWidget(sSendBtn);

        sCloseBtn = new QPushButton(widget);
        sCloseBtn->setObjectName(QString::fromUtf8("sCloseBtn"));

        horizontalLayout->addWidget(sCloseBtn);


        retranslateUi(FileSend);

        QMetaObject::connectSlotsByName(FileSend);
    } // setupUi

    void retranslateUi(QDialog *FileSend)
    {
        FileSend->setWindowTitle(QApplication::translate("FileSend", "Dialog", 0, QApplication::UnicodeUTF8));
        OpenBtn->setText(QApplication::translate("FileSend", "\346\211\223\345\274\200...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FileSend", "\351\200\211\346\213\251\346\226\207\344\273\266/\346\226\207\344\273\266\345\244\271", 0, QApplication::UnicodeUTF8));
        ShowFilename->setText(QApplication::translate("FileSend", "\350\257\267\351\200\211\346\213\251\350\246\201\345\217\221\351\200\201\347\232\204\346\226\207\344\273\266\357\274\201", 0, QApplication::UnicodeUTF8));
        sSendBtn->setText(QApplication::translate("FileSend", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        sCloseBtn->setText(QApplication::translate("FileSend", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FileSend: public Ui_FileSend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESEND_H
