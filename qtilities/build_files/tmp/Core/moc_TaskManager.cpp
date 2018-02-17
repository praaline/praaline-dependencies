/****************************************************************************
** Meta object code from reading C++ file 'TaskManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/TaskManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__TaskManager_t {
    QByteArrayData data[11];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__TaskManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__TaskManager_t qt_meta_stringdata_Qtilities__Core__TaskManager = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Qtilities::Core::TaskManager"
QT_MOC_LITERAL(1, 29, 12), // "newTaskAdded"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 6), // "ITask*"
QT_MOC_LITERAL(4, 50, 8), // "new_task"
QT_MOC_LITERAL(5, 59, 11), // "taskRemoved"
QT_MOC_LITERAL(6, 71, 12), // "task_removed"
QT_MOC_LITERAL(7, 84, 10), // "removeTask"
QT_MOC_LITERAL(8, 95, 7), // "task_id"
QT_MOC_LITERAL(9, 103, 3), // "obj"
QT_MOC_LITERAL(10, 107, 7) // "addTask"

    },
    "Qtilities::Core::TaskManager\0newTaskAdded\0"
    "\0ITask*\0new_task\0taskRemoved\0task_removed\0"
    "removeTask\0task_id\0obj\0addTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__TaskManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   45,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x0a /* Public */,
      10,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QObjectStar,    9,
    QMetaType::Bool, QMetaType::QObjectStar,    9,

       0        // eod
};

void Qtilities::Core::TaskManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TaskManager *_t = static_cast<TaskManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newTaskAdded((*reinterpret_cast< ITask*(*)>(_a[1]))); break;
        case 1: _t->taskRemoved((*reinterpret_cast< ITask*(*)>(_a[1]))); break;
        case 2: _t->removeTask((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->removeTask((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->addTask((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TaskManager::*_t)(ITask * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaskManager::newTaskAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TaskManager::*_t)(ITask * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaskManager::taskRemoved)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::Core::TaskManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Core__TaskManager.data,
      qt_meta_data_Qtilities__Core__TaskManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::TaskManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::TaskManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__TaskManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qtilities::Core::TaskManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::Core::TaskManager::newTaskAdded(ITask * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::Core::TaskManager::taskRemoved(ITask * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
