/****************************************************************************
** Meta object code from reading C++ file 'chatting.h'
**
** Created: Tue Jan 30 10:50:31 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../log_in_user/chatting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Chatting[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      22,    9,    9,    9, 0x08,
      44,    9,    9,    9, 0x08,
      67,    9,    9,    9, 0x08,
      96,    9,    9,    9, 0x08,
     118,    9,    9,    9, 0x08,
     151,  143,    9,    9, 0x08,
     179,    9,    9,    9, 0x08,
     204,    9,    9,    9, 0x08,
     232,  227,    9,    9, 0x08,
     275,  273,    9,    9, 0x08,
     309,    9,    9,    9, 0x08,
     328,    9,    9,    9, 0x08,
     346,    9,    9,    9, 0x08,
     357,    9,    9,    9, 0x08,
     380,  374,    9,    9, 0x08,
     403,  374,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Chatting[] = {
    "Chatting\0\0recv_emit()\0on_recvFile_clicked()\0"
    "on_otherChat_clicked()\0"
    "on_ChattingRecords_clicked()\0"
    "on_SendFile_clicked()\0on_FlushFriend_clicked()\0"
    "checked\0on_WeightFont_clicked(bool)\0"
    "on_ClearRecord_clicked()\0"
    "on_FontColor_clicked()\0arg1\0"
    "on_FontSize_currentIndexChanged(QString)\0"
    "f\0on_Font_currentFontChanged(QFont)\0"
    "on_Close_clicked()\0on_Send_clicked()\0"
    "ShowTime()\0onRecvChatting()\0event\0"
    "showEvent(QShowEvent*)\0closeEvent(QCloseEvent*)\0"
};

const QMetaObject Chatting::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Chatting,
      qt_meta_data_Chatting, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Chatting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Chatting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Chatting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Chatting))
        return static_cast<void*>(const_cast< Chatting*>(this));
    return QDialog::qt_metacast(_clname);
}

int Chatting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: recv_emit(); break;
        case 1: on_recvFile_clicked(); break;
        case 2: on_otherChat_clicked(); break;
        case 3: on_ChattingRecords_clicked(); break;
        case 4: on_SendFile_clicked(); break;
        case 5: on_FlushFriend_clicked(); break;
        case 6: on_WeightFont_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: on_ClearRecord_clicked(); break;
        case 8: on_FontColor_clicked(); break;
        case 9: on_FontSize_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: on_Font_currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 11: on_Close_clicked(); break;
        case 12: on_Send_clicked(); break;
        case 13: ShowTime(); break;
        case 14: onRecvChatting(); break;
        case 15: showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 16: closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
