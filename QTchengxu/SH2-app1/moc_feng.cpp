/****************************************************************************
** Meta object code from reading C++ file 'feng.h'
**
** Created: Sat Dec 13 11:41:17 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SH2/feng.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'feng.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Feng[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,    5,    5,    5, 0x08,
      48,    5,    5,    5, 0x08,
      71,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Feng[] = {
    "Feng\0\0sig_GoBack_SmartHome()\0"
    "on_open1_clicked()\0on_shutdown1_clicked()\0"
    "on_fanhui1_clicked()\0"
};

const QMetaObject Feng::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Feng,
      qt_meta_data_Feng, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Feng::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Feng::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Feng::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Feng))
        return static_cast<void*>(const_cast< Feng*>(this));
    return QWidget::qt_metacast(_clname);
}

int Feng::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sig_GoBack_SmartHome(); break;
        case 1: on_open1_clicked(); break;
        case 2: on_shutdown1_clicked(); break;
        case 3: on_fanhui1_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Feng::sig_GoBack_SmartHome()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
