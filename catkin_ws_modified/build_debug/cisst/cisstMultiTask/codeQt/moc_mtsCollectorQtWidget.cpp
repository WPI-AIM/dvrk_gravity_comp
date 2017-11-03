/****************************************************************************
** Meta object code from reading C++ file 'mtsCollectorQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/cisst/cisstMultiTask/mtsCollectorQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsCollectorQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mtsCollectorQtWidget_t {
    QByteArrayData data[19];
    char stringdata[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_mtsCollectorQtWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_mtsCollectorQtWidget_t qt_meta_stringdata_mtsCollectorQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 15),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 14),
QT_MOC_LITERAL(4, 53, 17),
QT_MOC_LITERAL(5, 71, 5),
QT_MOC_LITERAL(6, 77, 16),
QT_MOC_LITERAL(7, 94, 19),
QT_MOC_LITERAL(8, 114, 18),
QT_MOC_LITERAL(9, 133, 19),
QT_MOC_LITERAL(10, 153, 7),
QT_MOC_LITERAL(11, 161, 18),
QT_MOC_LITERAL(12, 180, 14),
QT_MOC_LITERAL(13, 195, 11),
QT_MOC_LITERAL(14, 207, 14),
QT_MOC_LITERAL(15, 222, 17),
QT_MOC_LITERAL(16, 240, 17),
QT_MOC_LITERAL(17, 258, 5),
QT_MOC_LITERAL(18, 264, 8)
    },
    "mtsCollectorQtWidget\0StartCollection\0"
    "\0StopCollection\0StartCollectionIn\0"
    "delay\0StopCollectionIn\0SetWorkingDirectory\0"
    "SetOutputToDefault\0ManualStartStopSlot\0"
    "checked\0ScheduledStartSlot\0FileDialogSlot\0"
    "FileNewSlot\0CollectorAdded\0CollectionStarted\0"
    "CollectionStopped\0count\0Progress\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsCollectorQtWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06,
       3,    0,   85,    2, 0x06,
       4,    1,   86,    2, 0x06,
       6,    1,   89,    2, 0x06,
       7,    1,   92,    2, 0x06,
       8,    0,   95,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    1,   96,    2, 0x0a,
      11,    0,   99,    2, 0x0a,
      12,    0,  100,    2, 0x0a,
      13,    0,  101,    2, 0x0a,
      14,    0,  102,    2, 0x0a,
      15,    0,  103,    2, 0x0a,
      16,    1,  104,    2, 0x0a,
      18,    1,  107,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   17,
    QMetaType::Void, QMetaType::UInt,   17,

       0        // eod
};

void mtsCollectorQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mtsCollectorQtWidget *_t = static_cast<mtsCollectorQtWidget *>(_o);
        switch (_id) {
        case 0: _t->StartCollection(); break;
        case 1: _t->StopCollection(); break;
        case 2: _t->StartCollectionIn((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->StopCollectionIn((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->SetWorkingDirectory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->SetOutputToDefault(); break;
        case 6: _t->ManualStartStopSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->ScheduledStartSlot(); break;
        case 8: _t->FileDialogSlot(); break;
        case 9: _t->FileNewSlot(); break;
        case 10: _t->CollectorAdded(); break;
        case 11: _t->CollectionStarted(); break;
        case 12: _t->CollectionStopped((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 13: _t->Progress((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mtsCollectorQtWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsCollectorQtWidget::StartCollection)) {
                *result = 0;
            }
        }
        {
            typedef void (mtsCollectorQtWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsCollectorQtWidget::StopCollection)) {
                *result = 1;
            }
        }
        {
            typedef void (mtsCollectorQtWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsCollectorQtWidget::StartCollectionIn)) {
                *result = 2;
            }
        }
        {
            typedef void (mtsCollectorQtWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsCollectorQtWidget::StopCollectionIn)) {
                *result = 3;
            }
        }
        {
            typedef void (mtsCollectorQtWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsCollectorQtWidget::SetWorkingDirectory)) {
                *result = 4;
            }
        }
        {
            typedef void (mtsCollectorQtWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsCollectorQtWidget::SetOutputToDefault)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject mtsCollectorQtWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mtsCollectorQtWidget.data,
      qt_meta_data_mtsCollectorQtWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *mtsCollectorQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsCollectorQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mtsCollectorQtWidget.stringdata))
        return static_cast<void*>(const_cast< mtsCollectorQtWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int mtsCollectorQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void mtsCollectorQtWidget::StartCollection()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void mtsCollectorQtWidget::StopCollection()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void mtsCollectorQtWidget::StartCollectionIn(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mtsCollectorQtWidget::StopCollectionIn(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mtsCollectorQtWidget::SetWorkingDirectory(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mtsCollectorQtWidget::SetOutputToDefault()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
