/****************************************************************************
** Meta object code from reading C++ file 'svlQtWidgetVideoEncoder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/cisst/cisstStereoVision/svlQtWidgetVideoEncoder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'svlQtWidgetVideoEncoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_svlQtWidgetVideoEncoder_t {
    QByteArrayData data[13];
    char stringdata[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_svlQtWidgetVideoEncoder_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_svlQtWidgetVideoEncoder_t qt_meta_stringdata_svlQtWidgetVideoEncoder = {
    {
QT_MOC_LITERAL(0, 0, 23),
QT_MOC_LITERAL(1, 24, 17),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 5),
QT_MOC_LITERAL(4, 49, 33),
QT_MOC_LITERAL(5, 83, 11),
QT_MOC_LITERAL(6, 95, 19),
QT_MOC_LITERAL(7, 115, 12),
QT_MOC_LITERAL(8, 128, 12),
QT_MOC_LITERAL(9, 141, 13),
QT_MOC_LITERAL(10, 155, 13),
QT_MOC_LITERAL(11, 169, 15),
QT_MOC_LITERAL(12, 185, 15)
    },
    "svlQtWidgetVideoEncoder\0QSlotOnSliderMove\0"
    "\0value\0QSlotOnQualityBasedCBStateChanged\0"
    "QSlotCreate\0QSlotGetCodecParams\0"
    "QSlotDestroy\0QSlotConnect\0QSlotConnect2\0"
    "QSlotConnect3\0QSlotDisconnect\0"
    "QSlotUpdateData\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_svlQtWidgetVideoEncoder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x09,
       4,    1,   67,    2, 0x09,
       5,    0,   70,    2, 0x09,
       6,    0,   71,    2, 0x09,
       7,    0,   72,    2, 0x09,
       8,    0,   73,    2, 0x09,
       9,    0,   74,    2, 0x09,
      10,    0,   75,    2, 0x09,
      11,    0,   76,    2, 0x09,
      12,    0,   77,    2, 0x09,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void svlQtWidgetVideoEncoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        svlQtWidgetVideoEncoder *_t = static_cast<svlQtWidgetVideoEncoder *>(_o);
        switch (_id) {
        case 0: _t->QSlotOnSliderMove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->QSlotOnQualityBasedCBStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->QSlotCreate(); break;
        case 3: _t->QSlotGetCodecParams(); break;
        case 4: _t->QSlotDestroy(); break;
        case 5: _t->QSlotConnect(); break;
        case 6: _t->QSlotConnect2(); break;
        case 7: _t->QSlotConnect3(); break;
        case 8: _t->QSlotDisconnect(); break;
        case 9: _t->QSlotUpdateData(); break;
        default: ;
        }
    }
}

const QMetaObject svlQtWidgetVideoEncoder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_svlQtWidgetVideoEncoder.data,
      qt_meta_data_svlQtWidgetVideoEncoder,  qt_static_metacall, 0, 0}
};


const QMetaObject *svlQtWidgetVideoEncoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *svlQtWidgetVideoEncoder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_svlQtWidgetVideoEncoder.stringdata))
        return static_cast<void*>(const_cast< svlQtWidgetVideoEncoder*>(this));
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(const_cast< svlQtWidgetVideoEncoder*>(this));
    return QObject::qt_metacast(_clname);
}

int svlQtWidgetVideoEncoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
