/****************************************************************************
** Meta object code from reading C++ file 'mtsIntuitiveResearchKitArmQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/sawIntuitiveResearchKit/components/include/sawIntuitiveResearchKit/mtsIntuitiveResearchKitArmQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsIntuitiveResearchKitArmQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget_t {
    QByteArrayData data[12];
    char stringdata[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget_t qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 34),
QT_MOC_LITERAL(1, 35, 19),
QT_MOC_LITERAL(2, 55, 0),
QT_MOC_LITERAL(3, 56, 14),
QT_MOC_LITERAL(4, 71, 10),
QT_MOC_LITERAL(5, 82, 12),
QT_MOC_LITERAL(6, 95, 5),
QT_MOC_LITERAL(7, 101, 15),
QT_MOC_LITERAL(8, 117, 14),
QT_MOC_LITERAL(9, 132, 23),
QT_MOC_LITERAL(10, 156, 6),
QT_MOC_LITERAL(11, 163, 8)
    },
    "mtsIntuitiveResearchKitArmQtWidget\0"
    "SignalAppendMessage\0\0SignalSetColor\0"
    "timerEvent\0QTimerEvent*\0event\0"
    "SlotTextChanged\0SlotLogEnabled\0"
    "SlotEnableDirectControl\0toggle\0SlotHome\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsIntuitiveResearchKitArmQtWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06,
       3,    1,   52,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    1,   55,    2, 0x08,
       7,    0,   58,    2, 0x08,
       8,    0,   59,    2, 0x08,
       9,    1,   60,    2, 0x08,
      11,    0,   63,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QColor,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

       0        // eod
};

void mtsIntuitiveResearchKitArmQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mtsIntuitiveResearchKitArmQtWidget *_t = static_cast<mtsIntuitiveResearchKitArmQtWidget *>(_o);
        switch (_id) {
        case 0: _t->SignalAppendMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SignalSetColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 3: _t->SlotTextChanged(); break;
        case 4: _t->SlotLogEnabled(); break;
        case 5: _t->SlotEnableDirectControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->SlotHome(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mtsIntuitiveResearchKitArmQtWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsIntuitiveResearchKitArmQtWidget::SignalAppendMessage)) {
                *result = 0;
            }
        }
        {
            typedef void (mtsIntuitiveResearchKitArmQtWidget::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsIntuitiveResearchKitArmQtWidget::SignalSetColor)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject mtsIntuitiveResearchKitArmQtWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget.data,
      qt_meta_data_mtsIntuitiveResearchKitArmQtWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *mtsIntuitiveResearchKitArmQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsIntuitiveResearchKitArmQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget.stringdata))
        return static_cast<void*>(const_cast< mtsIntuitiveResearchKitArmQtWidget*>(this));
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(const_cast< mtsIntuitiveResearchKitArmQtWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int mtsIntuitiveResearchKitArmQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void mtsIntuitiveResearchKitArmQtWidget::SignalAppendMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mtsIntuitiveResearchKitArmQtWidget::SignalSetColor(QColor _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
