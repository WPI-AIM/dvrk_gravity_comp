/****************************************************************************
** Meta object code from reading C++ file 'mtsPIDQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/sawControllers/components/include/sawControllers/mtsPIDQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsPIDQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mtsPIDQtWidget_t {
    QByteArrayData data[21];
    char stringdata[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_mtsPIDQtWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_mtsPIDQtWidget_t qt_meta_stringdata_mtsPIDQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 15),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 6),
QT_MOC_LITERAL(4, 39, 13),
QT_MOC_LITERAL(5, 53, 6),
QT_MOC_LITERAL(6, 60, 20),
QT_MOC_LITERAL(7, 81, 19),
QT_MOC_LITERAL(8, 101, 16),
QT_MOC_LITERAL(9, 118, 16),
QT_MOC_LITERAL(10, 135, 16),
QT_MOC_LITERAL(11, 152, 20),
QT_MOC_LITERAL(12, 173, 16),
QT_MOC_LITERAL(13, 190, 16),
QT_MOC_LITERAL(14, 207, 13),
QT_MOC_LITERAL(15, 221, 7),
QT_MOC_LITERAL(16, 229, 22),
QT_MOC_LITERAL(17, 252, 23),
QT_MOC_LITERAL(18, 276, 10),
QT_MOC_LITERAL(19, 287, 12),
QT_MOC_LITERAL(20, 300, 5)
    },
    "mtsPIDQtWidget\0SignalEnablePID\0\0enable\0"
    "SlotEnablePID\0toggle\0SlotEnableTorqueMode\0"
    "SlotPositionChanged\0SlotPGainChanged\0"
    "SlotDGainChanged\0SlotIGainChanged\0"
    "SlotMaintainPosition\0SlotZeroPosition\0"
    "SlotResetPIDGain\0SlotPlotIndex\0newAxis\0"
    "SlotEnableEventHandler\0SlotEnableDirectControl\0"
    "timerEvent\0QTimerEvent*\0event\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsPIDQtWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    1,   87,    2, 0x08,
       6,    1,   90,    2, 0x08,
       7,    0,   93,    2, 0x08,
       8,    0,   94,    2, 0x08,
       9,    0,   95,    2, 0x08,
      10,    0,   96,    2, 0x08,
      11,    0,   97,    2, 0x08,
      12,    0,   98,    2, 0x08,
      13,    0,   99,    2, 0x08,
      14,    1,  100,    2, 0x08,
      16,    1,  103,    2, 0x08,
      17,    1,  106,    2, 0x08,
      18,    1,  109,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void mtsPIDQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mtsPIDQtWidget *_t = static_cast<mtsPIDQtWidget *>(_o);
        switch (_id) {
        case 0: _t->SignalEnablePID((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SlotEnablePID((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SlotEnableTorqueMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SlotPositionChanged(); break;
        case 4: _t->SlotPGainChanged(); break;
        case 5: _t->SlotDGainChanged(); break;
        case 6: _t->SlotIGainChanged(); break;
        case 7: _t->SlotMaintainPosition(); break;
        case 8: _t->SlotZeroPosition(); break;
        case 9: _t->SlotResetPIDGain(); break;
        case 10: _t->SlotPlotIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->SlotEnableEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->SlotEnableDirectControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mtsPIDQtWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsPIDQtWidget::SignalEnablePID)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject mtsPIDQtWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mtsPIDQtWidget.data,
      qt_meta_data_mtsPIDQtWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *mtsPIDQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsPIDQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mtsPIDQtWidget.stringdata))
        return static_cast<void*>(const_cast< mtsPIDQtWidget*>(this));
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(const_cast< mtsPIDQtWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int mtsPIDQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void mtsPIDQtWidget::SignalEnablePID(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
