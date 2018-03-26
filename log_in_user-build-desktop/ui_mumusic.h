/********************************************************************************
** Form generated from reading UI file 'mumusic.ui'
**
** Created: Sat Jan 20 19:42:08 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUMUSIC_H
#define UI_MUMUSIC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_MuMusic
{
public:

    void setupUi(QDialog *MuMusic)
    {
        if (MuMusic->objectName().isEmpty())
            MuMusic->setObjectName(QString::fromUtf8("MuMusic"));
        MuMusic->resize(400, 300);

        retranslateUi(MuMusic);

        QMetaObject::connectSlotsByName(MuMusic);
    } // setupUi

    void retranslateUi(QDialog *MuMusic)
    {
        MuMusic->setWindowTitle(QApplication::translate("MuMusic", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MuMusic: public Ui_MuMusic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUMUSIC_H
