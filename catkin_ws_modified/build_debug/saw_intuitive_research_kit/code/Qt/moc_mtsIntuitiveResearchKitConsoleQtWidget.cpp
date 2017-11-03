/****************************************************************************
** Meta object code from reading C++ file 'mtsIntuitiveResearchKitConsoleQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/sawIntuitiveResearchKit/components/include/sawIntuitiveResearchKit/mtsIntuitiveResearchKitConsoleQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsIntuitiveResearchKitConsoleQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mtsIntuitiveResearchKitConsoleQtWidget_t {
    QByteArrayData data[13];
    char stringdata[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_mtsIntuitiveResearchKitConsoleQtWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_mtsIntuitiveResearchKitConsoleQtWidget_t qt_meta_stringdata_mtsIntuitiveResearchKitConsoleQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 38),
QT_MOC_LITERAL(1, 39, 11),
QT_MOC_LITERAL(2, 51, 0),
QT_MOC_LITERAL(3, 52, 5),
QT_MOC_LITERAL(4, 58, 19),
QT_MOC_LITERAL(5, 78, 14),
QT_MOC_LITERAL(6, 93, 12),
QT_MOC_LITERAL(7, 106, 8),
QT_MOC_LITERAL(8, 115, 15),
QT_MOC_LITERAL(9, 131, 14),
QT_MOC_LITERAL(10, 146, 12),
QT_MOC_LITERAL(11, 159, 21),
QT_MOC_LITERAL(12, 181, 15)
    },
    "mtsIntuitiveResearchKitConsoleQtWidget\0"
    "SignalScale\0\0scale\0SignalAppendMessage\0"
    "SignalSetColor\0SlotPowerOff\0SlotHome\0"
    "SlotTeleopStart\0SlotTeleopStop\0"
    "SlotSetScale\0SlotScaleEventHandler\0"
    "SlotTextChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsIntuitiveResearchKitConsoleQtWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06,
       4,    1,   67,    2, 0x06,
       5,    1,   70,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    0,   73,    2, 0x08,
       7,    0,   74,    2, 0x08,
       8,    0,   75,    2, 0x08,
       9,    0,   76,    2, 0x08,
      10,    1,   77,    2, 0x08,
      11,    1,   80,    2, 0x08,
      12,    0,   83,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QColor,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,

       0        // eod
};

void mtsIntuitiveResearchKitConsoleQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mtsIntuitiveResearchKitConsoleQtWidget *_t = static_cast<mtsIntuitiveResearchKitConsoleQtWidget *>(_o);
        switch (_id) {
        case 0: _t->SignalScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->SignalAppendMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SignalSetColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->SlotPowerOff(); break;
        case 4: _t->SlotHome(); break;
        case 5: _t->SlotTeleopStart(); break;
        case 6: _t->SlotTeleopStop(); break;
        case 7: _t->SlotSetScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->SlotScaleEventHandler((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->SlotTextChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mtsIntuitiveResearchKitConsoleQtWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsIntuitiveResearchKitConsoleQtWidget::SignalScale)) {
                *result = 0;
            }
        }
        {
            typedef void (mtsIntuitiveResearchKitConsoleQtWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsIntuitiveResearchKitConsoleQtWidget::SignalAppendMessage)) {
                *result = 1;
            }
        }
        {
            typedef void (mtsIntuitiveResearchKitConsoleQtWidget::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsIntuitiveResearchKitConsoleQtWidget::SignalSetColor)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject mtsIntuitiveResearchKitConsoleQtWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mtsIntuitiveResearchKitConsoleQtWidget.data,
      qt_meta_data_mtsIntuitiveResearchKitConsoleQtWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *mtsIntuitiveResearchKitConsoleQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsIntuitiveResearchKitConsoleQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mtsIntuitiveResearchKitConsoleQtWidget.stringdata))
        return static_cast<void*>(const_cast< mtsIntuitiveResearchKitConsoleQtWidget*>(this));
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(const_cast< mtsIntuitiveResearchKitConsoleQtWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int mtsIntuitiveResearchKitConsoleQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void mtsIntuitiveResearchKitConsoleQtWidget::SignalScale(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mtsIntuitiveResearchKitConsoleQtWidget::SignalAppendMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mtsIntuitiveResearchKitConsoleQtWidget::SignalSetColor(QColor _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
