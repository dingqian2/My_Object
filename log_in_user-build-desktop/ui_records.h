/********************************************************************************
** Form generated from reading UI file 'records.ui'
**
** Created: Wed Jan 24 15:44:35 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDS_H
#define UI_RECORDS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Records
{
public:
    QAction *action;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Records)
    {
        if (Records->objectName().isEmpty())
            Records->setObjectName(QString::fromUtf8("Records"));
        Records->resize(108, 61);
        action = new QAction(Records);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(Records);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Records->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Records);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 108, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Records->setMenuBar(menubar);
        statusbar = new QStatusBar(Records);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Records->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(Records);

        QMetaObject::connectSlotsByName(Records);
    } // setupUi

    void retranslateUi(QMainWindow *Records)
    {
        Records->setWindowTitle(QApplication::translate("Records", "MainWindow", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("Records", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("Records", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Records: public Ui_Records {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDS_H
