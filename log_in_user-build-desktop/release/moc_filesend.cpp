/****************************************************************************
** Meta object code from reading C++ file 'filesend.h'
**
** Created: Mon Jan 29 10:36:36 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../log_in_user/filesend.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileSend[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      31,    9,    9,    9, 0x08,
      54,    9,    9,    9, 0x08,
      82,   76,    9,    9, 0x08,
     105,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FileSend[] = {
    "FileSend\0\0on_OpenBtn_clicked()\0"
    "on_sCloseBtn_clicked()\0on_sSendBtn_clicked()\0"
    "event\0showEvent(QShowEvent*)\0"
    "onRecvChatting()\0"
};

const QMetaObject FileSend::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FileSend,
      qt_meta_data_FileSend, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileSend::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileSend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileSend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileSend))
        return static_cast<void*>(const_cast< FileSend*>(this));
    return QDialog::qt_metacast(_clname);
}

int FileSend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_OpenBtn_clicked(); break;
        case 1: on_sCloseBtn_clicked(); break;
        case 2: on_sSendBtn_clicked(); break;
        case 3: showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 4: onRecvChatting(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
