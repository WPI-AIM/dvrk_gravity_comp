/****************************************************************************
** Meta object code from reading C++ file 'svlQtWidgetFileOpen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/cisst/cisstStereoVision/svlQtWidgetFileOpen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'svlQtWidgetFileOpen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_svlQtWidgetFileOpen_t {
    QByteArrayData data[4];
    char stringdata[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_svlQtWidgetFileOpen_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_svlQtWidgetFileOpen_t qt_meta_stringdata_svlQtWidgetFileOpen = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 11),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 12)
    },
    "svlQtWidgetFileOpen\0QSlotCreate\0\0"
    "QSlotDestroy\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_svlQtWidgetFileOpen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09,
       3,    0,   25,    2, 0x09,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void svlQtWidgetFileOpen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        svlQtWidgetFileOpen *_t = static_cast<svlQtWidgetFileOpen *>(_o);
        switch (_id) {
        case 0: _t->QSlotCreate(); break;
        case 1: _t->QSlotDestroy(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject svlQtWidgetFileOpen::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_svlQtWidgetFileOpen.data,
      qt_meta_data_svlQtWidgetFileOpen,  qt_static_metacall, 0, 0}
};


const QMetaObject *svlQtWidgetFileOpen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *svlQtWidgetFileOpen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_svlQtWidgetFileOpen.stringdata))
        return static_cast<void*>(const_cast< svlQtWidgetFileOpen*>(this));
    if (!strcmp(_clname, "cmnGenericObject"))
        return static_cast< cmnGenericObject*>(const_cast< svlQtWidgetFileOpen*>(this));
    return QObject::qt_metacast(_clname);
}

int svlQtWidgetFileOpen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
