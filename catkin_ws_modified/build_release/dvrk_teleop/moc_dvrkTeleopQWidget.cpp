/****************************************************************************
** Meta object code from reading C++ file 'dvrkTeleopQWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/dvrk-ros/deprecated/dvrk_teleop/include/dvrk_teleop/dvrkTeleopQWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dvrkTeleopQWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dvrkTeleopQWidget_t {
    QByteArrayData data[10];
    char stringdata[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_dvrkTeleopQWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_dvrkTeleopQWidget_t qt_meta_stringdata_dvrkTeleopQWidget = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 23),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 25),
QT_MOC_LITERAL(4, 69, 29),
QT_MOC_LITERAL(5, 99, 25),
QT_MOC_LITERAL(6, 125, 5),
QT_MOC_LITERAL(7, 131, 25),
QT_MOC_LITERAL(8, 157, 23),
QT_MOC_LITERAL(9, 181, 27)
    },
    "dvrkTeleopQWidget\0slot_homeButton_pressed\0"
    "\0slot_manualButton_pressed\0"
    "slot_teleopTestButton_pressed\0"
    "slot_teleopButton_toggled\0state\0"
    "slot_clutchButton_pressed\0"
    "slot_headButton_pressed\0"
    "slot_moveToolButton_pressed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dvrkTeleopQWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x09,
       3,    0,   50,    2, 0x09,
       4,    0,   51,    2, 0x09,
       5,    1,   52,    2, 0x09,
       7,    1,   55,    2, 0x09,
       8,    1,   58,    2, 0x09,
       9,    1,   61,    2, 0x09,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void dvrkTeleopQWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dvrkTeleopQWidget *_t = static_cast<dvrkTeleopQWidget *>(_o);
        switch (_id) {
        case 0: _t->slot_homeButton_pressed(); break;
        case 1: _t->slot_manualButton_pressed(); break;
        case 2: _t->slot_teleopTestButton_pressed(); break;
        case 3: _t->slot_teleopButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slot_clutchButton_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slot_headButton_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slot_moveToolButton_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject dvrkTeleopQWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_dvrkTeleopQWidget.data,
      qt_meta_data_dvrkTeleopQWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *dvrkTeleopQWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dvrkTeleopQWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dvrkTeleopQWidget.stringdata))
        return static_cast<void*>(const_cast< dvrkTeleopQWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int dvrkTeleopQWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
