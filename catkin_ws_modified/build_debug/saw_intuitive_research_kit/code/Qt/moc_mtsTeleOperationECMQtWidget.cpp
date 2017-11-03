/****************************************************************************
** Meta object code from reading C++ file 'mtsTeleOperationECMQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/sawIntuitiveResearchKit/components/include/sawIntuitiveResearchKit/mtsTeleOperationECMQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsTeleOperationECMQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mtsTeleOperationECMQtWidget_t {
    QByteArrayData data[18];
    char stringdata[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_mtsTeleOperationECMQtWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_mtsTeleOperationECMQtWidget_t qt_meta_stringdata_mtsTeleOperationECMQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 27),
QT_MOC_LITERAL(1, 28, 18),
QT_MOC_LITERAL(2, 47, 0),
QT_MOC_LITERAL(3, 48, 5),
QT_MOC_LITERAL(4, 54, 18),
QT_MOC_LITERAL(5, 73, 11),
QT_MOC_LITERAL(6, 85, 5),
QT_MOC_LITERAL(7, 91, 19),
QT_MOC_LITERAL(8, 111, 14),
QT_MOC_LITERAL(9, 126, 10),
QT_MOC_LITERAL(10, 137, 12),
QT_MOC_LITERAL(11, 150, 5),
QT_MOC_LITERAL(12, 156, 15),
QT_MOC_LITERAL(13, 172, 14),
QT_MOC_LITERAL(14, 187, 28),
QT_MOC_LITERAL(15, 216, 28),
QT_MOC_LITERAL(16, 245, 12),
QT_MOC_LITERAL(17, 258, 21)
    },
    "mtsTeleOperationECMQtWidget\0"
    "SignalDesiredState\0\0state\0SignalCurrentState\0"
    "SignalScale\0scale\0SignalAppendMessage\0"
    "SignalSetColor\0timerEvent\0QTimerEvent*\0"
    "event\0SlotTextChanged\0SlotLogEnabled\0"
    "SlotDesiredStateEventHandler\0"
    "SlotCurrentStateEventHandler\0SlotSetScale\0"
    "SlotScaleEventHandler\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsTeleOperationECMQtWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06,
       4,    1,   77,    2, 0x06,
       5,    1,   80,    2, 0x06,
       7,    1,   83,    2, 0x06,
       8,    1,   86,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    1,   89,    2, 0x08,
      12,    0,   92,    2, 0x08,
      13,    0,   93,    2, 0x08,
      14,    1,   94,    2, 0x08,
      15,    1,   97,    2, 0x08,
      16,    1,  100,    2, 0x08,
      17,    1,  103,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QColor,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,

       0        // eod
};

void mtsTeleOperationECMQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mtsTeleOperationECMQtWidget *_t = static_cast<mtsTeleOperationECMQtWidget *>(_o);
        switch (_id) {
        case 0: _t->SignalDesiredState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SignalCurrentState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SignalScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->SignalAppendMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->SignalSetColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 5: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 6: _t->SlotTextChanged(); break;
        case 7: _t->SlotLogEnabled(); break;
        case 8: _t->SlotDesiredStateEventHandler((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->SlotCurrentStateEventHandler((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->SlotSetScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->SlotScaleEventHandler((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mtsTeleOperationECMQtWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationECMQtWidget::SignalDesiredState)) {
                *result = 0;
            }
        }
        {
            typedef void (mtsTeleOperationECMQtWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationECMQtWidget::SignalCurrentState)) {
                *result = 1;
            }
        }
        {
            typedef void (mtsTeleOperationECMQtWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationECMQtWidget::SignalScale)) {
                *result = 2;
            }
        }
        {
            typedef void (mtsTeleOperationECMQtWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationECMQtWidget::SignalAppendMessage)) {
                *result = 3;
            }
        }
        {
            typedef void (mtsTeleOperationECMQtWidget::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationECMQtWidget::SignalSetColor)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject mtsTeleOperationECMQtWidget::staticMetaObject = {
    { &QSplitter::staticMetaObject, qt_meta_stringdata_mtsTeleOperationECMQtWidget.data,
      qt_meta_data_mtsTeleOperationECMQtWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *mtsTeleOperationECMQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsTeleOperationECMQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mtsTeleOperationECMQtWidget.stringdata))
        return static_cast<void*>(const_cast< mtsTeleOperationECMQtWidget*>(this));
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(const_cast< mtsTeleOperationECMQtWidget*>(this));
    return QSplitter::qt_metacast(_clname);
}

int mtsTeleOperationECMQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void mtsTeleOperationECMQtWidget::SignalDesiredState(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mtsTeleOperationECMQtWidget::SignalCurrentState(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mtsTeleOperationECMQtWidget::SignalScale(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mtsTeleOperationECMQtWidget::SignalAppendMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mtsTeleOperationECMQtWidget::SignalSetColor(QColor _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
