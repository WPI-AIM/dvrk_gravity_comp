/****************************************************************************
** Meta object code from reading C++ file 'mtsTeleOperationQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/sawControllers/components/include/sawControllers/mtsTeleOperationQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsTeleOperationQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mtsTeleOperationQtWidget_t {
    QByteArrayData data[24];
    char stringdata[373];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_mtsTeleOperationQtWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_mtsTeleOperationQtWidget_t qt_meta_stringdata_mtsTeleOperationQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 12),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 6),
QT_MOC_LITERAL(4, 46, 11),
QT_MOC_LITERAL(5, 58, 5),
QT_MOC_LITERAL(6, 64, 20),
QT_MOC_LITERAL(7, 85, 4),
QT_MOC_LITERAL(8, 90, 23),
QT_MOC_LITERAL(9, 114, 19),
QT_MOC_LITERAL(10, 134, 14),
QT_MOC_LITERAL(11, 149, 10),
QT_MOC_LITERAL(12, 160, 12),
QT_MOC_LITERAL(13, 173, 5),
QT_MOC_LITERAL(14, 179, 15),
QT_MOC_LITERAL(15, 195, 10),
QT_MOC_LITERAL(16, 206, 5),
QT_MOC_LITERAL(17, 212, 12),
QT_MOC_LITERAL(18, 225, 16),
QT_MOC_LITERAL(19, 242, 19),
QT_MOC_LITERAL(20, 262, 22),
QT_MOC_LITERAL(21, 285, 21),
QT_MOC_LITERAL(22, 307, 30),
QT_MOC_LITERAL(23, 338, 33)
    },
    "mtsTeleOperationQtWidget\0SignalEnable\0"
    "\0enable\0SignalScale\0scale\0"
    "SignalRotationLocked\0lock\0"
    "SignalTranslationLocked\0SignalAppendMessage\0"
    "SignalSetColor\0timerEvent\0QTimerEvent*\0"
    "event\0SlotTextChanged\0SlotEnable\0state\0"
    "SlotSetScale\0SlotLockRotation\0"
    "SlotLockTranslation\0SlotEnableEventHandler\0"
    "SlotScaleEventHandler\0"
    "SlotRotationLockedEventHandler\0"
    "SlotTranslationLockedEventHandler\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsTeleOperationQtWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06,
       4,    1,   97,    2, 0x06,
       6,    1,  100,    2, 0x06,
       8,    1,  103,    2, 0x06,
       9,    1,  106,    2, 0x06,
      10,    1,  109,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      11,    1,  112,    2, 0x08,
      14,    0,  115,    2, 0x08,
      15,    1,  116,    2, 0x08,
      17,    1,  119,    2, 0x08,
      18,    1,  122,    2, 0x08,
      19,    1,  125,    2, 0x08,
      20,    1,  128,    2, 0x08,
      21,    1,  131,    2, 0x08,
      22,    1,  134,    2, 0x08,
      23,    1,  137,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QColor,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void mtsTeleOperationQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mtsTeleOperationQtWidget *_t = static_cast<mtsTeleOperationQtWidget *>(_o);
        switch (_id) {
        case 0: _t->SignalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SignalScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->SignalRotationLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SignalTranslationLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SignalAppendMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->SignalSetColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 6: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 7: _t->SlotTextChanged(); break;
        case 8: _t->SlotEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->SlotSetScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->SlotLockRotation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->SlotLockTranslation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->SlotEnableEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->SlotScaleEventHandler((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->SlotRotationLockedEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->SlotTranslationLockedEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mtsTeleOperationQtWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationQtWidget::SignalEnable)) {
                *result = 0;
            }
        }
        {
            typedef void (mtsTeleOperationQtWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationQtWidget::SignalScale)) {
                *result = 1;
            }
        }
        {
            typedef void (mtsTeleOperationQtWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationQtWidget::SignalRotationLocked)) {
                *result = 2;
            }
        }
        {
            typedef void (mtsTeleOperationQtWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationQtWidget::SignalTranslationLocked)) {
                *result = 3;
            }
        }
        {
            typedef void (mtsTeleOperationQtWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationQtWidget::SignalAppendMessage)) {
                *result = 4;
            }
        }
        {
            typedef void (mtsTeleOperationQtWidget::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationQtWidget::SignalSetColor)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject mtsTeleOperationQtWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mtsTeleOperationQtWidget.data,
      qt_meta_data_mtsTeleOperationQtWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *mtsTeleOperationQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsTeleOperationQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mtsTeleOperationQtWidget.stringdata))
        return static_cast<void*>(const_cast< mtsTeleOperationQtWidget*>(this));
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(const_cast< mtsTeleOperationQtWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int mtsTeleOperationQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void mtsTeleOperationQtWidget::SignalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mtsTeleOperationQtWidget::SignalScale(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mtsTeleOperationQtWidget::SignalRotationLocked(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mtsTeleOperationQtWidget::SignalTranslationLocked(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mtsTeleOperationQtWidget::SignalAppendMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mtsTeleOperationQtWidget::SignalSetColor(QColor _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
