/****************************************************************************
** Meta object code from reading C++ file 'vctQtWidgetDynamicVector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/cisst/cisstVector/vctQtWidgetDynamicVector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vctQtWidgetDynamicVector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_vctQtWidgetDynamicVectorReadBase_t {
    QByteArrayData data[1];
    char stringdata[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_vctQtWidgetDynamicVectorReadBase_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_vctQtWidgetDynamicVectorReadBase_t qt_meta_stringdata_vctQtWidgetDynamicVectorReadBase = {
    {
QT_MOC_LITERAL(0, 0, 32)
    },
    "vctQtWidgetDynamicVectorReadBase\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vctQtWidgetDynamicVectorReadBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void vctQtWidgetDynamicVectorReadBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject vctQtWidgetDynamicVectorReadBase::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_vctQtWidgetDynamicVectorReadBase.data,
      qt_meta_data_vctQtWidgetDynamicVectorReadBase,  qt_static_metacall, 0, 0}
};


const QMetaObject *vctQtWidgetDynamicVectorReadBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vctQtWidgetDynamicVectorReadBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vctQtWidgetDynamicVectorReadBase.stringdata))
        return static_cast<void*>(const_cast< vctQtWidgetDynamicVectorReadBase*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int vctQtWidgetDynamicVectorReadBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_vctQtWidgetDynamicVectorWriteBase_t {
    QByteArrayData data[10];
    char stringdata[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_vctQtWidgetDynamicVectorWriteBase_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_vctQtWidgetDynamicVectorWriteBase_t qt_meta_stringdata_vctQtWidgetDynamicVectorWriteBase = {
    {
QT_MOC_LITERAL(0, 0, 33),
QT_MOC_LITERAL(1, 34, 12),
QT_MOC_LITERAL(2, 47, 0),
QT_MOC_LITERAL(3, 48, 22),
QT_MOC_LITERAL(4, 71, 5),
QT_MOC_LITERAL(5, 77, 29),
QT_MOC_LITERAL(6, 107, 23),
QT_MOC_LITERAL(7, 131, 15),
QT_MOC_LITERAL(8, 147, 17),
QT_MOC_LITERAL(9, 165, 4)
    },
    "vctQtWidgetDynamicVectorWriteBase\0"
    "valueChanged\0\0SliderValueChangedSlot\0"
    "value\0DoubleSpinBoxValueChangedSlot\0"
    "SpinBoxValueChangedSlot\0ItemChangedSlot\0"
    "QTableWidgetItem*\0item\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vctQtWidgetDynamicVectorWriteBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x09,
       5,    1,   43,    2, 0x09,
       6,    1,   46,    2, 0x09,
       7,    1,   49,    2, 0x09,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void vctQtWidgetDynamicVectorWriteBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        vctQtWidgetDynamicVectorWriteBase *_t = static_cast<vctQtWidgetDynamicVectorWriteBase *>(_o);
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->SliderValueChangedSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->DoubleSpinBoxValueChangedSlot((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->SpinBoxValueChangedSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->ItemChangedSlot((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (vctQtWidgetDynamicVectorWriteBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&vctQtWidgetDynamicVectorWriteBase::valueChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject vctQtWidgetDynamicVectorWriteBase::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_vctQtWidgetDynamicVectorWriteBase.data,
      qt_meta_data_vctQtWidgetDynamicVectorWriteBase,  qt_static_metacall, 0, 0}
};


const QMetaObject *vctQtWidgetDynamicVectorWriteBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vctQtWidgetDynamicVectorWriteBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vctQtWidgetDynamicVectorWriteBase.stringdata))
        return static_cast<void*>(const_cast< vctQtWidgetDynamicVectorWriteBase*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int vctQtWidgetDynamicVectorWriteBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void vctQtWidgetDynamicVectorWriteBase::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_vctQtWidgetDynamicVectorBoolWrite_t {
    QByteArrayData data[5];
    char stringdata[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_vctQtWidgetDynamicVectorBoolWrite_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_vctQtWidgetDynamicVectorBoolWrite_t qt_meta_stringdata_vctQtWidgetDynamicVectorBoolWrite = {
    {
QT_MOC_LITERAL(0, 0, 33),
QT_MOC_LITERAL(1, 34, 12),
QT_MOC_LITERAL(2, 47, 0),
QT_MOC_LITERAL(3, 48, 16),
QT_MOC_LITERAL(4, 65, 5)
    },
    "vctQtWidgetDynamicVectorBoolWrite\0"
    "valueChanged\0\0ValueChangedSlot\0value\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vctQtWidgetDynamicVectorBoolWrite[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x09,

 // signals: parameters
    QMetaType::Bool,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void vctQtWidgetDynamicVectorBoolWrite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        vctQtWidgetDynamicVectorBoolWrite *_t = static_cast<vctQtWidgetDynamicVectorBoolWrite *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->valueChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->ValueChangedSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef bool (vctQtWidgetDynamicVectorBoolWrite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&vctQtWidgetDynamicVectorBoolWrite::valueChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject vctQtWidgetDynamicVectorBoolWrite::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_vctQtWidgetDynamicVectorBoolWrite.data,
      qt_meta_data_vctQtWidgetDynamicVectorBoolWrite,  qt_static_metacall, 0, 0}
};


const QMetaObject *vctQtWidgetDynamicVectorBoolWrite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vctQtWidgetDynamicVectorBoolWrite::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vctQtWidgetDynamicVectorBoolWrite.stringdata))
        return static_cast<void*>(const_cast< vctQtWidgetDynamicVectorBoolWrite*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int vctQtWidgetDynamicVectorBoolWrite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
bool vctQtWidgetDynamicVectorBoolWrite::valueChanged()
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
