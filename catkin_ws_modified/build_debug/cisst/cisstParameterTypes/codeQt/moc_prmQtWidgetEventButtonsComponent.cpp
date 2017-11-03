/****************************************************************************
** Meta object code from reading C++ file 'prmQtWidgetEventButtonsComponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/cisst/cisstParameterTypes/prmQtWidgetEventButtonsComponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prmQtWidgetEventButtonsComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_prmQtWidgetEventButtonsComponent_ButtonData_t {
    QByteArrayData data[3];
    char stringdata[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_prmQtWidgetEventButtonsComponent_ButtonData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_prmQtWidgetEventButtonsComponent_ButtonData_t qt_meta_stringdata_prmQtWidgetEventButtonsComponent_ButtonData = {
    {
QT_MOC_LITERAL(0, 0, 43),
QT_MOC_LITERAL(1, 44, 14),
QT_MOC_LITERAL(2, 59, 0)
    },
    "prmQtWidgetEventButtonsComponent_ButtonData\0"
    "SetValueSignal\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_prmQtWidgetEventButtonsComponent_ButtonData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void prmQtWidgetEventButtonsComponent_ButtonData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        prmQtWidgetEventButtonsComponent_ButtonData *_t = static_cast<prmQtWidgetEventButtonsComponent_ButtonData *>(_o);
        switch (_id) {
        case 0: _t->SetValueSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (prmQtWidgetEventButtonsComponent_ButtonData::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&prmQtWidgetEventButtonsComponent_ButtonData::SetValueSignal)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject prmQtWidgetEventButtonsComponent_ButtonData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_prmQtWidgetEventButtonsComponent_ButtonData.data,
      qt_meta_data_prmQtWidgetEventButtonsComponent_ButtonData,  qt_static_metacall, 0, 0}
};


const QMetaObject *prmQtWidgetEventButtonsComponent_ButtonData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *prmQtWidgetEventButtonsComponent_ButtonData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_prmQtWidgetEventButtonsComponent_ButtonData.stringdata))
        return static_cast<void*>(const_cast< prmQtWidgetEventButtonsComponent_ButtonData*>(this));
    return QObject::qt_metacast(_clname);
}

int prmQtWidgetEventButtonsComponent_ButtonData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void prmQtWidgetEventButtonsComponent_ButtonData::SetValueSignal(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_prmQtWidgetEventButtonsComponent_t {
    QByteArrayData data[1];
    char stringdata[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_prmQtWidgetEventButtonsComponent_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_prmQtWidgetEventButtonsComponent_t qt_meta_stringdata_prmQtWidgetEventButtonsComponent = {
    {
QT_MOC_LITERAL(0, 0, 32)
    },
    "prmQtWidgetEventButtonsComponent\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_prmQtWidgetEventButtonsComponent[] = {

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

void prmQtWidgetEventButtonsComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject prmQtWidgetEventButtonsComponent::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_prmQtWidgetEventButtonsComponent.data,
      qt_meta_data_prmQtWidgetEventButtonsComponent,  qt_static_metacall, 0, 0}
};


const QMetaObject *prmQtWidgetEventButtonsComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *prmQtWidgetEventButtonsComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_prmQtWidgetEventButtonsComponent.stringdata))
        return static_cast<void*>(const_cast< prmQtWidgetEventButtonsComponent*>(this));
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(const_cast< prmQtWidgetEventButtonsComponent*>(this));
    return QWidget::qt_metacast(_clname);
}

int prmQtWidgetEventButtonsComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
