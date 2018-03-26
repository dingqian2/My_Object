/****************************************************************************
** Meta object code from reading C++ file 'allfriendchat.h'
**
** Created: Fri Feb 9 18:10:28 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../log_in_user/allfriendchat.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'allfriendchat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AllFriendChat[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   15,   14,   14, 0x0a,
      51,   14,   14,   14, 0x0a,
      76,   14,   14,   14, 0x0a,
     104,   99,   14,   14, 0x0a,
     147,  145,   14,   14, 0x0a,
     181,   14,   14,   14, 0x0a,
     200,   14,   14,   14, 0x0a,
     218,   14,   14,   14, 0x0a,
     235,  229,   14,   14, 0x0a,
     271,  263,  258,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AllFriendChat[] = {
    "AllFriendChat\0\0checked\0"
    "on_WeightFont_clicked(bool)\0"
    "on_ClearRecord_clicked()\0"
    "on_FontColor_clicked()\0arg1\0"
    "on_FontSize_currentIndexChanged(QString)\0"
    "f\0on_Font_currentFontChanged(QFont)\0"
    "on_Close_clicked()\0on_Send_clicked()\0"
    "ShowTime()\0event\0showEvent(QShowEvent*)\0"
    "bool\0message\0recvMessage(QString)\0"
};

const QMetaObject AllFriendChat::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AllFriendChat,
      qt_meta_data_AllFriendChat, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AllFriendChat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AllFriendChat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AllFriendChat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AllFriendChat))
        return static_cast<void*>(const_cast< AllFriendChat*>(this));
    return QDialog::qt_metacast(_clname);
}

int AllFriendChat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_WeightFont_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: on_ClearRecord_clicked(); break;
        case 2: on_FontColor_clicked(); break;
        case 3: on_FontSize_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: on_Font_currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 5: on_Close_clicked(); break;
        case 6: on_Send_clicked(); break;
        case 7: ShowTime(); break;
        case 8: showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 9: { bool _r = recvMessage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
