/****************************************************************************
** Meta object code from reading C++ file 'mtsRobotIO1394QtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/sawRobotIO1394/components/include/sawRobotIO1394/mtsRobotIO1394QtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsRobotIO1394QtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mtsRobotIO1394QtWidget_t {
    QByteArrayData data[25];
    char stringdata[430];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_mtsRobotIO1394QtWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_mtsRobotIO1394QtWidget_t qt_meta_stringdata_mtsRobotIO1394QtWidget = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 17),
QT_MOC_LITERAL(2, 41, 0),
QT_MOC_LITERAL(3, 42, 6),
QT_MOC_LITERAL(4, 49, 20),
QT_MOC_LITERAL(5, 70, 14),
QT_MOC_LITERAL(6, 85, 6),
QT_MOC_LITERAL(7, 92, 13),
QT_MOC_LITERAL(8, 106, 23),
QT_MOC_LITERAL(9, 130, 21),
QT_MOC_LITERAL(10, 152, 19),
QT_MOC_LITERAL(11, 172, 31),
QT_MOC_LITERAL(12, 204, 37),
QT_MOC_LITERAL(13, 242, 18),
QT_MOC_LITERAL(14, 261, 20),
QT_MOC_LITERAL(15, 282, 19),
QT_MOC_LITERAL(16, 302, 18),
QT_MOC_LITERAL(17, 321, 9),
QT_MOC_LITERAL(18, 331, 15),
QT_MOC_LITERAL(19, 347, 16),
QT_MOC_LITERAL(20, 364, 10),
QT_MOC_LITERAL(21, 375, 12),
QT_MOC_LITERAL(22, 388, 5),
QT_MOC_LITERAL(23, 394, 15),
QT_MOC_LITERAL(24, 410, 18)
    },
    "mtsRobotIO1394QtWidget\0SignalPowerStatus\0"
    "\0status\0SignalWatchdogStatus\0"
    "SlotEnableAmps\0toggle\0SlotEnableAll\0"
    "SlotEnableDirectControl\0SlotActuatorAmpEnable\0"
    "SlotResetCurrentAll\0SlotActuatorCurrentValueChanged\0"
    "SlotSliderActuatorCurrentValueChanged\0"
    "SlotBrakeAmpEnable\0SlotResetEncodersAll\0"
    "SlotBiasEncodersAll\0SlotWatchdogPeriod\0"
    "period_ms\0SlotBrakeEngage\0SlotBrakeRelease\0"
    "timerEvent\0QTimerEvent*\0event\0"
    "SlotPowerStatus\0SlotWatchdogStatus\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsRobotIO1394QtWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06,
       4,    1,  107,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    1,  110,    2, 0x08,
       7,    1,  113,    2, 0x08,
       8,    1,  116,    2, 0x08,
       9,    0,  119,    2, 0x08,
      10,    0,  120,    2, 0x08,
      11,    0,  121,    2, 0x08,
      12,    0,  122,    2, 0x08,
      13,    0,  123,    2, 0x08,
      14,    0,  124,    2, 0x08,
      15,    0,  125,    2, 0x08,
      16,    1,  126,    2, 0x08,
      18,    0,  129,    2, 0x08,
      19,    0,  130,    2, 0x08,
      20,    1,  131,    2, 0x08,
      23,    1,  134,    2, 0x09,
      24,    1,  137,    2, 0x09,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void mtsRobotIO1394QtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mtsRobotIO1394QtWidget *_t = static_cast<mtsRobotIO1394QtWidget *>(_o);
        switch (_id) {
        case 0: _t->SignalPowerStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SignalWatchdogStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SlotEnableAmps((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SlotEnableAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SlotEnableDirectControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->SlotActuatorAmpEnable(); break;
        case 6: _t->SlotResetCurrentAll(); break;
        case 7: _t->SlotActuatorCurrentValueChanged(); break;
        case 8: _t->SlotSliderActuatorCurrentValueChanged(); break;
        case 9: _t->SlotBrakeAmpEnable(); break;
        case 10: _t->SlotResetEncodersAll(); break;
        case 11: _t->SlotBiasEncodersAll(); break;
        case 12: _t->SlotWatchdogPeriod((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->SlotBrakeEngage(); break;
        case 14: _t->SlotBrakeRelease(); break;
        case 15: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 16: _t->SlotPowerStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->SlotWatchdogStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mtsRobotIO1394QtWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsRobotIO1394QtWidget::SignalPowerStatus)) {
                *result = 0;
            }
        }
        {
            typedef void (mtsRobotIO1394QtWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsRobotIO1394QtWidget::SignalWatchdogStatus)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject mtsRobotIO1394QtWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mtsRobotIO1394QtWidget.data,
      qt_meta_data_mtsRobotIO1394QtWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *mtsRobotIO1394QtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsRobotIO1394QtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mtsRobotIO1394QtWidget.stringdata))
        return static_cast<void*>(const_cast< mtsRobotIO1394QtWidget*>(this));
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(const_cast< mtsRobotIO1394QtWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int mtsRobotIO1394QtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void mtsRobotIO1394QtWidget::SignalPowerStatus(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mtsRobotIO1394QtWidget::SignalWatchdogStatus(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
