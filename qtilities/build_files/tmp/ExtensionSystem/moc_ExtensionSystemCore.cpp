/****************************************************************************
** Meta object code from reading C++ file 'ExtensionSystemCore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ExtensionSystem/source/ExtensionSystemCore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExtensionSystemCore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__ExtensionSystem__ExtensionSystemCore_t {
    QByteArrayData data[12];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__ExtensionSystem__ExtensionSystemCore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__ExtensionSystem__ExtensionSystemCore_t qt_meta_stringdata_Qtilities__ExtensionSystem__ExtensionSystemCore = {
    {
QT_MOC_LITERAL(0, 0, 47), // "Qtilities::ExtensionSystem::E..."
QT_MOC_LITERAL(1, 48, 18), // "newProgressMessage"
QT_MOC_LITERAL(2, 67, 0), // ""
QT_MOC_LITERAL(3, 68, 7), // "message"
QT_MOC_LITERAL(4, 76, 20), // "pluginLoadingStarted"
QT_MOC_LITERAL(5, 97, 22), // "pluginLoadingCompleted"
QT_MOC_LITERAL(6, 120, 18), // "pluginPathsChanged"
QT_MOC_LITERAL(7, 139, 12), // "plugin_paths"
QT_MOC_LITERAL(8, 152, 31), // "handlePluginConfigurationChange"
QT_MOC_LITERAL(9, 184, 15), // "QList<QObject*>"
QT_MOC_LITERAL(10, 200, 14), // "active_plugins"
QT_MOC_LITERAL(11, 215, 16) // "inactive_plugins"

    },
    "Qtilities::ExtensionSystem::ExtensionSystemCore\0"
    "newProgressMessage\0\0message\0"
    "pluginLoadingStarted\0pluginLoadingCompleted\0"
    "pluginPathsChanged\0plugin_paths\0"
    "handlePluginConfigurationChange\0"
    "QList<QObject*>\0active_plugins\0"
    "inactive_plugins"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__ExtensionSystem__ExtensionSystemCore[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    0,   43,    2, 0x06 /* Public */,
       6,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,   11,

       0        // eod
};

void Qtilities::ExtensionSystem::ExtensionSystemCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExtensionSystemCore *_t = static_cast<ExtensionSystemCore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newProgressMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->pluginLoadingStarted(); break;
        case 2: _t->pluginLoadingCompleted(); break;
        case 3: _t->pluginPathsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->handlePluginConfigurationChange((*reinterpret_cast< QList<QObject*>(*)>(_a[1])),(*reinterpret_cast< QList<QObject*>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ExtensionSystemCore::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExtensionSystemCore::newProgressMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ExtensionSystemCore::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExtensionSystemCore::pluginLoadingStarted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ExtensionSystemCore::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExtensionSystemCore::pluginLoadingCompleted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ExtensionSystemCore::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExtensionSystemCore::pluginPathsChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::ExtensionSystem::ExtensionSystemCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__ExtensionSystem__ExtensionSystemCore.data,
      qt_meta_data_Qtilities__ExtensionSystem__ExtensionSystemCore,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::ExtensionSystem::ExtensionSystemCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::ExtensionSystem::ExtensionSystemCore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__ExtensionSystem__ExtensionSystemCore.stringdata0))
        return static_cast<void*>(const_cast< ExtensionSystemCore*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::ExtensionSystem::ExtensionSystemCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::ExtensionSystem::ExtensionSystemCore::newProgressMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::ExtensionSystem::ExtensionSystemCore::pluginLoadingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Qtilities::ExtensionSystem::ExtensionSystemCore::pluginLoadingCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Qtilities::ExtensionSystem::ExtensionSystemCore::pluginPathsChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
