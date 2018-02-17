/****************************************************************************
** Meta object code from reading C++ file 'IContextManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/IContextManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IContextManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__Interfaces__IContextManager_t {
    QByteArrayData data[17];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__Interfaces__IContextManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__Interfaces__IContextManager_t qt_meta_stringdata_Qtilities__Core__Interfaces__IContextManager = {
    {
QT_MOC_LITERAL(0, 0, 44), // "Qtilities::Core::Interfaces::..."
QT_MOC_LITERAL(1, 45, 14), // "contextChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 10), // "QList<int>"
QT_MOC_LITERAL(4, 72, 12), // "new_contexts"
QT_MOC_LITERAL(5, 85, 20), // "aboutToSetNewContext"
QT_MOC_LITERAL(6, 106, 10), // "context_id"
QT_MOC_LITERAL(7, 117, 21), // "finishedSetNewContext"
QT_MOC_LITERAL(8, 139, 20), // "aboutToAppendContext"
QT_MOC_LITERAL(9, 160, 21), // "finishedAppendContext"
QT_MOC_LITERAL(10, 182, 20), // "aboutToRemoveContext"
QT_MOC_LITERAL(11, 203, 21), // "finishedRemoveContext"
QT_MOC_LITERAL(12, 225, 24), // "aboutToUnregisterContext"
QT_MOC_LITERAL(13, 250, 25), // "finishedUnregisterContext"
QT_MOC_LITERAL(14, 276, 14), // "broadcastState"
QT_MOC_LITERAL(15, 291, 11), // "addContexts"
QT_MOC_LITERAL(16, 303, 3) // "obj"

    },
    "Qtilities::Core::Interfaces::IContextManager\0"
    "contextChanged\0\0QList<int>\0new_contexts\0"
    "aboutToSetNewContext\0context_id\0"
    "finishedSetNewContext\0aboutToAppendContext\0"
    "finishedAppendContext\0aboutToRemoveContext\0"
    "finishedRemoveContext\0aboutToUnregisterContext\0"
    "finishedUnregisterContext\0broadcastState\0"
    "addContexts\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__Interfaces__IContextManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       7,    1,   75,    2, 0x06 /* Public */,
       8,    1,   78,    2, 0x06 /* Public */,
       9,    1,   81,    2, 0x06 /* Public */,
      10,    1,   84,    2, 0x06 /* Public */,
      11,    1,   87,    2, 0x06 /* Public */,
      12,    1,   90,    2, 0x06 /* Public */,
      13,    1,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   96,    2, 0x0a /* Public */,
      15,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   16,

       0        // eod
};

void Qtilities::Core::Interfaces::IContextManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IContextManager *_t = static_cast<IContextManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contextChanged((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 1: _t->aboutToSetNewContext((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->finishedSetNewContext((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->aboutToAppendContext((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->finishedAppendContext((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->aboutToRemoveContext((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->finishedRemoveContext((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->aboutToUnregisterContext((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->finishedUnregisterContext((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->broadcastState(); break;
        case 10: _t->addContexts((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (IContextManager::*_t)(QList<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IContextManager::contextChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (IContextManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IContextManager::aboutToSetNewContext)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (IContextManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IContextManager::finishedSetNewContext)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (IContextManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IContextManager::aboutToAppendContext)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (IContextManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IContextManager::finishedAppendContext)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (IContextManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IContextManager::aboutToRemoveContext)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (IContextManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IContextManager::finishedRemoveContext)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (IContextManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IContextManager::aboutToUnregisterContext)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (IContextManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IContextManager::finishedUnregisterContext)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::Core::Interfaces::IContextManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Core__Interfaces__IContextManager.data,
      qt_meta_data_Qtilities__Core__Interfaces__IContextManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::Interfaces::IContextManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::Interfaces::IContextManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__Interfaces__IContextManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IObjectBase"))
        return static_cast< IObjectBase*>(this);
    return QObject::qt_metacast(_clname);
}

int Qtilities::Core::Interfaces::IContextManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::Core::Interfaces::IContextManager::contextChanged(QList<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::Core::Interfaces::IContextManager::aboutToSetNewContext(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qtilities::Core::Interfaces::IContextManager::finishedSetNewContext(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qtilities::Core::Interfaces::IContextManager::aboutToAppendContext(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qtilities::Core::Interfaces::IContextManager::finishedAppendContext(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Qtilities::Core::Interfaces::IContextManager::aboutToRemoveContext(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Qtilities::Core::Interfaces::IContextManager::finishedRemoveContext(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Qtilities::Core::Interfaces::IContextManager::aboutToUnregisterContext(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Qtilities::Core::Interfaces::IContextManager::finishedUnregisterContext(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
