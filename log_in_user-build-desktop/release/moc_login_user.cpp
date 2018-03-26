/****************************************************************************
** Meta object code from reading C++ file 'login_user.h'
**
** Created: Tue Jan 30 16:01:55 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../log_in_user/login_user.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login_user.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_login_user[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      23,   11,   11,   11, 0x0a,
      48,   11,   11,   11, 0x0a,
      78,   11,   11,   11, 0x0a,
      91,   11,   11,   11, 0x0a,
     123,  111,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_login_user[] = {
    "login_user\0\0onButton()\0onUserPwdInputFinished()\0"
    "onUserPwdAgainInputFinished()\0"
    "onRecvChat()\0onClientConneeced()\0"
    "socketError\0"
    "onClientConnectedError(QAbstractSocket::SocketError)\0"
};

const QMetaObject login_user::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_login_user,
      qt_meta_data_login_user, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &login_user::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *login_user::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *login_user::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_login_user))
        return static_cast<void*>(const_cast< login_user*>(this));
    return QDialog::qt_metacast(_clname);
}

int login_user::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onButton(); break;
        case 1: onUserPwdInputFinished(); break;
        case 2: onUserPwdAgainInputFinished(); break;
        case 3: onRecvChat(); break;
        case 4: onClientConneeced(); break;
        case 5: onClientConnectedError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
