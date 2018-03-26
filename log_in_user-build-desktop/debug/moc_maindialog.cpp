/****************************************************************************
** Meta object code from reading C++ file 'maindialog.h'
**
** Created: Sun Feb 18 00:04:24 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../log_in_user/maindialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   12,   11,   11, 0x05,
      35,   30,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   11,   11,   11, 0x0a,
      71,   11,   11,   11, 0x0a,
     103,   11,   11,   11, 0x0a,
     127,   11,   11,   11, 0x0a,
     150,  144,   11,   11, 0x0a,
     183,  144,   11,   11, 0x0a,
     234,  217,   11,   11, 0x0a,
     285,  274,   11,   11, 0x0a,
     323,  217,   11,   11, 0x0a,
     358,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainDialog[] = {
    "MainDialog\0\0p\0onpoint(QPoint)\0data\0"
    "sendData(QString)\0on_Tool_clicked()\0"
    "on_pushButtonChatting_clicked()\0"
    "on_pushButton_clicked()\0onRecvChatting()\0"
    "pItem\0onItemExpanded(QTreeWidgetItem*)\0"
    "onItemCollapsed(QTreeWidgetItem*)\0"
    "FriendName,count\0"
    "SendaddFriendInfo(QTreeWidgetItem*,int)\0"
    "Info,count\0DisaddFriendask(QTreeWidgetItem*,int)\0"
    "OneToOneChat(QTreeWidgetItem*,int)\0"
    "on_Allfriendchat_clicked()\0"
};

const QMetaObject MainDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MainDialog,
      qt_meta_data_MainDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainDialog))
        return static_cast<void*>(const_cast< MainDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MainDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onpoint((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: sendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: on_Tool_clicked(); break;
        case 3: on_pushButtonChatting_clicked(); break;
        case 4: on_pushButton_clicked(); break;
        case 5: onRecvChatting(); break;
        case 6: onItemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 7: onItemCollapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 8: SendaddFriendInfo((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: DisaddFriendask((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: OneToOneChat((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: on_Allfriendchat_clicked(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MainDialog::onpoint(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainDialog::sendData(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
