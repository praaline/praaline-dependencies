/****************************************************************************
** Meta object code from reading C++ file 'SessionLogMode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Plugins/SessionLogPlugin/source/SessionLogMode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SessionLogMode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Plugins__SessionLog__SessionLogMode_t {
    QByteArrayData data[5];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Plugins__SessionLog__SessionLogMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Plugins__SessionLog__SessionLogMode_t qt_meta_stringdata_Qtilities__Plugins__SessionLog__SessionLogMode = {
    {
QT_MOC_LITERAL(0, 0, 46), // "Qtilities::Plugins::SessionLo..."
QT_MOC_LITERAL(1, 47, 15), // "modeIconChanged"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 28), // "handle_dockVisibilityChanged"
QT_MOC_LITERAL(4, 93, 7) // "visible"

    },
    "Qtilities::Plugins::SessionLog::SessionLogMode\0"
    "modeIconChanged\0\0handle_dockVisibilityChanged\0"
    "visible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Plugins__SessionLog__SessionLogMode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void Qtilities::Plugins::SessionLog::SessionLogMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SessionLogMode *_t = static_cast<SessionLogMode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modeIconChanged(); break;
        case 1: _t->handle_dockVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SessionLogMode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SessionLogMode::modeIconChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::Plugins::SessionLog::SessionLogMode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Plugins__SessionLog__SessionLogMode.data,
      qt_meta_data_Qtilities__Plugins__SessionLog__SessionLogMode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Plugins::SessionLog::SessionLogMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Plugins::SessionLog::SessionLogMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Plugins__SessionLog__SessionLogMode.stringdata0))
        return static_cast<void*>(const_cast< SessionLogMode*>(this));
    if (!strcmp(_clname, "IMode"))
        return static_cast< IMode*>(const_cast< SessionLogMode*>(this));
    if (!strcmp(_clname, "com.Qtilities.CoreGui.IMode/1.0"))
        return static_cast< Qtilities::CoreGui::Interfaces::IMode*>(const_cast< SessionLogMode*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::Plugins::SessionLog::SessionLogMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::Plugins::SessionLog::SessionLogMode::modeIconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
