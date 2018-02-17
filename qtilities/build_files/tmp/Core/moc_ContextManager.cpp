/****************************************************************************
** Meta object code from reading C++ file 'ContextManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/ContextManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContextManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__ContextManager_t {
    QByteArrayData data[11];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__ContextManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__ContextManager_t qt_meta_stringdata_Qtilities__Core__ContextManager = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Qtilities::Core::ContextManager"
QT_MOC_LITERAL(1, 32, 13), // "setNewContext"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 10), // "context_id"
QT_MOC_LITERAL(4, 58, 6), // "notify"
QT_MOC_LITERAL(5, 65, 13), // "appendContext"
QT_MOC_LITERAL(6, 79, 13), // "removeContext"
QT_MOC_LITERAL(7, 93, 14), // "context_string"
QT_MOC_LITERAL(8, 108, 14), // "broadcastState"
QT_MOC_LITERAL(9, 123, 11), // "addContexts"
QT_MOC_LITERAL(10, 135, 3) // "obj"

    },
    "Qtilities::Core::ContextManager\0"
    "setNewContext\0\0context_id\0notify\0"
    "appendContext\0removeContext\0context_string\0"
    "broadcastState\0addContexts\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__ContextManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x0a /* Public */,
       1,    1,   89,    2, 0x2a /* Public | MethodCloned */,
       5,    2,   92,    2, 0x0a /* Public */,
       5,    1,   97,    2, 0x2a /* Public | MethodCloned */,
       6,    2,  100,    2, 0x0a /* Public */,
       6,    1,  105,    2, 0x2a /* Public | MethodCloned */,
       1,    2,  108,    2, 0x0a /* Public */,
       1,    1,  113,    2, 0x2a /* Public | MethodCloned */,
       5,    2,  116,    2, 0x0a /* Public */,
       5,    1,  121,    2, 0x2a /* Public | MethodCloned */,
       6,    2,  124,    2, 0x0a /* Public */,
       6,    1,  129,    2, 0x2a /* Public | MethodCloned */,
       8,    0,  132,    2, 0x0a /* Public */,
       9,    1,  133,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    7,    4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    7,    4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    7,    4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   10,

       0        // eod
};

void Qtilities::Core::ContextManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContextManager *_t = static_cast<ContextManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setNewContext((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->setNewContext((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->appendContext((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->appendContext((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->removeContext((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->removeContext((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setNewContext((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->setNewContext((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->appendContext((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->appendContext((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->removeContext((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->removeContext((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->broadcastState(); break;
        case 13: _t->addContexts((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Qtilities::Core::ContextManager::staticMetaObject = {
    { &IContextManager::staticMetaObject, qt_meta_stringdata_Qtilities__Core__ContextManager.data,
      qt_meta_data_Qtilities__Core__ContextManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::ContextManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::ContextManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__ContextManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "com.Qtilities.Core.IContextManager/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IContextManager*>(this);
    return IContextManager::qt_metacast(_clname);
}

int Qtilities::Core::ContextManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IContextManager::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
