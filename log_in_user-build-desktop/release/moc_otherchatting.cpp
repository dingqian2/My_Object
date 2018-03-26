/****************************************************************************
** Meta object code from reading C++ file 'otherchatting.h'
**
** Created: Tue Jan 30 10:50:31 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../log_in_user/otherchatting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'otherchatting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OtherChatting[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   14,   14,   14, 0x08,
      51,   14,   14,   14, 0x08,
      69,   14,   14,   14, 0x08,
      88,   14,   14,   14, 0x08,
     113,   14,   14,   14, 0x08,
     141,  136,   14,   14, 0x08,
     184,  182,   14,   14, 0x08,
     224,  218,   14,   14, 0x08,
     247,   14,   14,   14, 0x08,
     258,  218,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OtherChatting[] = {
    "OtherChatting\0\0otherclose()\0"
    "on_otherName_clicked()\0on_Send_clicked()\0"
    "on_Close_clicked()\0on_ClearRecord_clicked()\0"
    "on_FontColor_clicked()\0arg1\0"
    "on_FontSize_currentIndexChanged(QString)\0"
    "f\0on_Font_currentFontChanged(QFont)\0"
    "event\0showEvent(QShowEvent*)\0ShowTime()\0"
    "closeEvent(QCloseEvent*)\0"
};

const QMetaObject OtherChatting::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OtherChatting,
      qt_meta_data_OtherChatting, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OtherChatting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OtherChatting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OtherChatting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OtherChatting))
        return static_cast<void*>(const_cast< OtherChatting*>(this));
    return QDialog::qt_metacast(_clname);
}

int OtherChatting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: otherclose(); break;
        case 1: on_otherName_clicked(); break;
        case 2: on_Send_clicked(); break;
        case 3: on_Close_clicked(); break;
        case 4: on_ClearRecord_clicked(); break;
        case 5: on_FontColor_clicked(); break;
        case 6: on_FontSize_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: on_Font_currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 8: showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 9: ShowTime(); break;
        case 10: closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OtherChatting::otherclose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
