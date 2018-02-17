/****************************************************************************
** Meta object code from reading C++ file 'IClipboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/IClipboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IClipboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__Interfaces__IClipboard_t {
    QByteArrayData data[9];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__Interfaces__IClipboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__Interfaces__IClipboard_t qt_meta_stringdata_Qtilities__CoreGui__Interfaces__IClipboard = {
    {
QT_MOC_LITERAL(0, 0, 42), // "Qtilities::CoreGui::Interface..."
QT_MOC_LITERAL(1, 43, 6), // "filled"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 7), // "cleared"
QT_MOC_LITERAL(4, 59, 22), // "handleClipboardChanged"
QT_MOC_LITERAL(5, 82, 15), // "ClipboardOrigin"
QT_MOC_LITERAL(6, 98, 10), // "CopyAction"
QT_MOC_LITERAL(7, 109, 9), // "CutAction"
QT_MOC_LITERAL(8, 119, 11) // "Unspecified"

    },
    "Qtilities::CoreGui::Interfaces::IClipboard\0"
    "filled\0\0cleared\0handleClipboardChanged\0"
    "ClipboardOrigin\0CopyAction\0CutAction\0"
    "Unspecified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__Interfaces__IClipboard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // enums: name, flags, count, data
       5, 0x0,    3,   36,

 // enum data: key, value
       6, uint(Qtilities::CoreGui::Interfaces::IClipboard::CopyAction),
       7, uint(Qtilities::CoreGui::Interfaces::IClipboard::CutAction),
       8, uint(Qtilities::CoreGui::Interfaces::IClipboard::Unspecified),

       0        // eod
};

void Qtilities::CoreGui::Interfaces::IClipboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IClipboard *_t = static_cast<IClipboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filled(); break;
        case 1: _t->cleared(); break;
        case 2: _t->handleClipboardChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (IClipboard::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IClipboard::filled)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (IClipboard::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IClipboard::cleared)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::CoreGui::Interfaces::IClipboard::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__Interfaces__IClipboard.data,
      qt_meta_data_Qtilities__CoreGui__Interfaces__IClipboard,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::Interfaces::IClipboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::Interfaces::IClipboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__Interfaces__IClipboard.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IObjectBase"))
        return static_cast< IObjectBase*>(this);
    return QObject::qt_metacast(_clname);
}

int Qtilities::CoreGui::Interfaces::IClipboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::Interfaces::IClipboard::filled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Qtilities::CoreGui::Interfaces::IClipboard::cleared()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
