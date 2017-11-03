/****************************************************************************
** Meta object code from reading C++ file 'winQt4OpenGLStereo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/cisst/cisstStereoVision/codeQt/winQt4OpenGLStereo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'winQt4OpenGLStereo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_svlWidgetQt4OpenGLStereo_t {
    QByteArrayData data[3];
    char stringdata[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_svlWidgetQt4OpenGLStereo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_svlWidgetQt4OpenGLStereo_t qt_meta_stringdata_svlWidgetQt4OpenGLStereo = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 15),
QT_MOC_LITERAL(2, 41, 0)
    },
    "svlWidgetQt4OpenGLStereo\0QSignalUpdateGL\0"
    "\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_svlWidgetQt4OpenGLStereo[] = {

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
       1,    0,   19,    2, 0x06,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void svlWidgetQt4OpenGLStereo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        svlWidgetQt4OpenGLStereo *_t = static_cast<svlWidgetQt4OpenGLStereo *>(_o);
        switch (_id) {
        case 0: _t->QSignalUpdateGL(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (svlWidgetQt4OpenGLStereo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&svlWidgetQt4OpenGLStereo::QSignalUpdateGL)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject svlWidgetQt4OpenGLStereo::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_svlWidgetQt4OpenGLStereo.data,
      qt_meta_data_svlWidgetQt4OpenGLStereo,  qt_static_metacall, 0, 0}
};


const QMetaObject *svlWidgetQt4OpenGLStereo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *svlWidgetQt4OpenGLStereo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_svlWidgetQt4OpenGLStereo.stringdata))
        return static_cast<void*>(const_cast< svlWidgetQt4OpenGLStereo*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int svlWidgetQt4OpenGLStereo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
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
void svlWidgetQt4OpenGLStereo::QSignalUpdateGL()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_svlParentWidgetQt4Stereo_t {
    QByteArrayData data[1];
    char stringdata[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_svlParentWidgetQt4Stereo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_svlParentWidgetQt4Stereo_t qt_meta_stringdata_svlParentWidgetQt4Stereo = {
    {
QT_MOC_LITERAL(0, 0, 24)
    },
    "svlParentWidgetQt4Stereo\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_svlParentWidgetQt4Stereo[] = {

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

void svlParentWidgetQt4Stereo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject svlParentWidgetQt4Stereo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_svlParentWidgetQt4Stereo.data,
      qt_meta_data_svlParentWidgetQt4Stereo,  qt_static_metacall, 0, 0}
};


const QMetaObject *svlParentWidgetQt4Stereo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *svlParentWidgetQt4Stereo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_svlParentWidgetQt4Stereo.stringdata))
        return static_cast<void*>(const_cast< svlParentWidgetQt4Stereo*>(this));
    return QWidget::qt_metacast(_clname);
}

int svlParentWidgetQt4Stereo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_svlWindowManagerQt4OpenGLStereo_t {
    QByteArrayData data[12];
    char stringdata[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_svlWindowManagerQt4OpenGLStereo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_svlWindowManagerQt4OpenGLStereo_t qt_meta_stringdata_svlWindowManagerQt4OpenGLStereo = {
    {
QT_MOC_LITERAL(0, 0, 31),
QT_MOC_LITERAL(1, 32, 17),
QT_MOC_LITERAL(2, 50, 0),
QT_MOC_LITERAL(3, 51, 18),
QT_MOC_LITERAL(4, 70, 9),
QT_MOC_LITERAL(5, 80, 15),
QT_MOC_LITERAL(6, 96, 12),
QT_MOC_LITERAL(7, 109, 5),
QT_MOC_LITERAL(8, 115, 17),
QT_MOC_LITERAL(9, 133, 14),
QT_MOC_LITERAL(10, 148, 13),
QT_MOC_LITERAL(11, 162, 10)
    },
    "svlWindowManagerQt4OpenGLStereo\0"
    "QSlotCreateWindow\0\0QSlotDestroyWindow\0"
    "QSlotShow\0QSlotMousePress\0QMouseEvent*\0"
    "event\0QSlotMouseRelease\0QSlotMouseMove\0"
    "QSlotKeyPress\0QKeyEvent*\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_svlWindowManagerQt4OpenGLStereo[] = {

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
       8,    1,   55,    2, 0x09,
       9,    1,   58,    2, 0x09,
      10,    1,   61,    2, 0x09,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 11,    7,

       0        // eod
};

void svlWindowManagerQt4OpenGLStereo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        svlWindowManagerQt4OpenGLStereo *_t = static_cast<svlWindowManagerQt4OpenGLStereo *>(_o);
        switch (_id) {
        case 0: _t->QSlotCreateWindow(); break;
        case 1: _t->QSlotDestroyWindow(); break;
        case 2: _t->QSlotShow(); break;
        case 3: _t->QSlotMousePress((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->QSlotMouseRelease((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->QSlotMouseMove((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 6: _t->QSlotKeyPress((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject svlWindowManagerQt4OpenGLStereo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_svlWindowManagerQt4OpenGLStereo.data,
      qt_meta_data_svlWindowManagerQt4OpenGLStereo,  qt_static_metacall, 0, 0}
};


const QMetaObject *svlWindowManagerQt4OpenGLStereo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *svlWindowManagerQt4OpenGLStereo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_svlWindowManagerQt4OpenGLStereo.stringdata))
        return static_cast<void*>(const_cast< svlWindowManagerQt4OpenGLStereo*>(this));
    if (!strcmp(_clname, "cmnGenericObject"))
        return static_cast< cmnGenericObject*>(const_cast< svlWindowManagerQt4OpenGLStereo*>(this));
    if (!strcmp(_clname, "svlWindowManagerBase"))
        return static_cast< svlWindowManagerBase*>(const_cast< svlWindowManagerQt4OpenGLStereo*>(this));
    return QObject::qt_metacast(_clname);
}

int svlWindowManagerQt4OpenGLStereo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
