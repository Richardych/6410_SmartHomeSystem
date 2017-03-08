/****************************************************************************
** Meta object code from reading C++ file 'temp.h'
**
** Created: Sat Dec 13 11:41:14 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SH2/temp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'temp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Temp[] = {

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
      47,    5,    5,    5, 0x08,
      59,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Temp[] = {
    "Temp\0\0sig_GoBack_SmartHome()\0"
    "on_QUIT_clicked()\0readMyCom()\0"
    "on_sendButton_clicked()\0"
};

const QMetaObject Temp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Temp,
      qt_meta_data_Temp, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Temp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Temp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Temp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Temp))
        return static_cast<void*>(const_cast< Temp*>(this));
    return QWidget::qt_metacast(_clname);
}

int Temp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sig_GoBack_SmartHome(); break;
        case 1: on_QUIT_clicked(); break;
        case 2: readMyCom(); break;
        case 3: on_sendButton_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Temp::sig_GoBack_SmartHome()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
