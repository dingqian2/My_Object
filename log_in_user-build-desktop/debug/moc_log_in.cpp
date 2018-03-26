/****************************************************************************
** Meta object code from reading C++ file 'log_in.h'
**
** Created: Sun Feb 18 00:04:21 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../log_in_user/log_in.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'log_in.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_log_in[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,    8,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,    7,    7,    7, 0x08,
      60,    7,    7,    7, 0x08,
      91,    7,    7,    7, 0x08,
     120,    7,    7,    7, 0x08,
     147,    7,    7,    7, 0x08,
     167,    7,    7,    7, 0x08,
     192,  180,    7,    7, 0x08,
     245,    7,    7,    7, 0x08,
     263,  257,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_log_in[] = {
    "log_in\0\0ID,name\0emit_user(QString,QString)\0"
    "on_Key_clicked()\0on_pushButtonFindPwd_clicked()\0"
    "on_LoginpushButton_clicked()\0"
    "on_LogpushButton_clicked()\0"
    "onClientConneeced()\0onRecvChat()\0"
    "socketError\0"
    "onClientConnectedError(QAbstractSocket::SocketError)\0"
    "showPopup()\0event\0mousePressEvent(QMouseEvent*)\0"
};

const QMetaObject log_in::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_log_in,
      qt_meta_data_log_in, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &log_in::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *log_in::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *log_in::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_log_in))
        return static_cast<void*>(const_cast< log_in*>(this));
    return QDialog::qt_metacast(_clname);
}

int log_in::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: emit_user((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: on_Key_clicked(); break;
        case 2: on_pushButtonFindPwd_clicked(); break;
        case 3: on_LoginpushButton_clicked(); break;
        case 4: on_LogpushButton_clicked(); break;
        case 5: onClientConneeced(); break;
        case 6: onRecvChat(); break;
        case 7: onClientConnectedError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 8: showPopup(); break;
        case 9: mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void log_in::emit_user(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
