/****************************************************************************
** Meta object code from reading C++ file 'tools.h'
**
** Created: Tue Feb 6 10:50:37 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../log_in_user/tools.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tools.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tools[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      31,    6,    6,    6, 0x08,
      53,    6,    6,    6, 0x08,
      74,    6,    6,    6, 0x08,
      95,    6,    6,    6, 0x08,
     118,    6,    6,    6, 0x08,
     140,  138,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tools[] = {
    "Tools\0\0on_onShutdown_clicked()\0"
    "on_onLogoff_clicked()\0on_onPaint_clicked()\0"
    "on_onWrite_clicked()\0on_onNotePad_clicked()\0"
    "on_onCalc_clicked()\0e\0showEvent(QShowEvent*)\0"
};

const QMetaObject Tools::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Tools,
      qt_meta_data_Tools, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tools::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tools::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tools::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tools))
        return static_cast<void*>(const_cast< Tools*>(this));
    return QDialog::qt_metacast(_clname);
}

int Tools::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_onShutdown_clicked(); break;
        case 1: on_onLogoff_clicked(); break;
        case 2: on_onPaint_clicked(); break;
        case 3: on_onWrite_clicked(); break;
        case 4: on_onNotePad_clicked(); break;
        case 5: on_onCalc_clicked(); break;
        case 6: showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
