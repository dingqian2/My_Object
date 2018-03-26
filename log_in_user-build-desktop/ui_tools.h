/********************************************************************************
** Form generated from reading UI file 'tools.ui'
**
** Created: Wed Jan 24 16:12:13 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLS_H
#define UI_TOOLS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Tools
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *onCalc;
    QPushButton *onWrite;
    QPushButton *onLogoff;
    QVBoxLayout *verticalLayout_2;
    QPushButton *onNotePad;
    QPushButton *onPaint;
    QPushButton *onShutdown;

    void setupUi(QDialog *Tools)
    {
        if (Tools->objectName().isEmpty())
            Tools->setObjectName(QString::fromUtf8("Tools"));
        Tools->resize(182, 107);
        horizontalLayout = new QHBoxLayout(Tools);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        onCalc = new QPushButton(Tools);
        onCalc->setObjectName(QString::fromUtf8("onCalc"));

        verticalLayout->addWidget(onCalc);

        onWrite = new QPushButton(Tools);
        onWrite->setObjectName(QString::fromUtf8("onWrite"));

        verticalLayout->addWidget(onWrite);

        onLogoff = new QPushButton(Tools);
        onLogoff->setObjectName(QString::fromUtf8("onLogoff"));

        verticalLayout->addWidget(onLogoff);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        onNotePad = new QPushButton(Tools);
        onNotePad->setObjectName(QString::fromUtf8("onNotePad"));

        verticalLayout_2->addWidget(onNotePad);

        onPaint = new QPushButton(Tools);
        onPaint->setObjectName(QString::fromUtf8("onPaint"));

        verticalLayout_2->addWidget(onPaint);

        onShutdown = new QPushButton(Tools);
        onShutdown->setObjectName(QString::fromUtf8("onShutdown"));

        verticalLayout_2->addWidget(onShutdown);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(Tools);

        QMetaObject::connectSlotsByName(Tools);
    } // setupUi

    void retranslateUi(QDialog *Tools)
    {
        Tools->setWindowTitle(QApplication::translate("Tools", "Dialog", 0, QApplication::UnicodeUTF8));
        onCalc->setText(QApplication::translate("Tools", "\350\256\241\347\256\227\345\231\250", 0, QApplication::UnicodeUTF8));
        onWrite->setText(QApplication::translate("Tools", "\345\206\231\345\255\227\346\235\277", 0, QApplication::UnicodeUTF8));
        onLogoff->setText(QApplication::translate("Tools", "\346\263\250\351\224\200", 0, QApplication::UnicodeUTF8));
        onNotePad->setText(QApplication::translate("Tools", "\350\256\260\344\272\213\346\234\254", 0, QApplication::UnicodeUTF8));
        onPaint->setText(QApplication::translate("Tools", "\347\224\273\345\233\276\346\235\277", 0, QApplication::UnicodeUTF8));
        onShutdown->setText(QApplication::translate("Tools", "15\347\247\222\345\205\263\346\234\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Tools: public Ui_Tools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLS_H
