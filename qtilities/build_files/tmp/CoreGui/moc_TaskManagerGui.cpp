/****************************************************************************
** Meta object code from reading C++ file 'TaskManagerGui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/TaskManagerGui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskManagerGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__TaskManagerGui_t {
    QByteArrayData data[15];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__TaskManagerGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__TaskManagerGui_t qt_meta_stringdata_Qtilities__CoreGui__TaskManagerGui = {
    {
QT_MOC_LITERAL(0, 0, 34), // "Qtilities::CoreGui::TaskManag..."
QT_MOC_LITERAL(1, 35, 24), // "assignLoggerEngineToTask"
QT_MOC_LITERAL(2, 60, 21), // "AbstractLoggerEngine*"
QT_MOC_LITERAL(3, 82, 0), // ""
QT_MOC_LITERAL(4, 83, 6), // "ITask*"
QT_MOC_LITERAL(5, 90, 4), // "task"
QT_MOC_LITERAL(6, 95, 39), // "WidgetLoggerEngine::MessageDi..."
QT_MOC_LITERAL(7, 135, 21), // "message_displays_flag"
QT_MOC_LITERAL(8, 157, 24), // "handleObjectPoolAddition"
QT_MOC_LITERAL(9, 182, 3), // "obj"
QT_MOC_LITERAL(10, 186, 28), // "assignLazyLoggerEngineToTask"
QT_MOC_LITERAL(11, 215, 21), // "TaskLogInitialization"
QT_MOC_LITERAL(12, 237, 25), // "TaskLogLazyInitialization"
QT_MOC_LITERAL(13, 263, 27), // "TaskLogActiveInitialization"
QT_MOC_LITERAL(14, 291, 23) // "TaskLogNoInitialization"

    },
    "Qtilities::CoreGui::TaskManagerGui\0"
    "assignLoggerEngineToTask\0AbstractLoggerEngine*\0"
    "\0ITask*\0task\0WidgetLoggerEngine::MessageDisplaysFlag\0"
    "message_displays_flag\0handleObjectPoolAddition\0"
    "obj\0assignLazyLoggerEngineToTask\0"
    "TaskLogInitialization\0TaskLogLazyInitialization\0"
    "TaskLogActiveInitialization\0"
    "TaskLogNoInitialization"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__TaskManagerGui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       1,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    3, 0x0a /* Public */,
       1,    1,   39,    3, 0x2a /* Public | MethodCloned */,
       8,    1,   42,    3, 0x08 /* Private */,
      10,    0,   45,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QObjectStar,    9,
    QMetaType::Void,

 // enums: name, flags, count, data
      11, 0x0,    3,   50,

 // enum data: key, value
      12, uint(Qtilities::CoreGui::TaskManagerGui::TaskLogLazyInitialization),
      13, uint(Qtilities::CoreGui::TaskManagerGui::TaskLogActiveInitialization),
      14, uint(Qtilities::CoreGui::TaskManagerGui::TaskLogNoInitialization),

       0        // eod
};

void Qtilities::CoreGui::TaskManagerGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TaskManagerGui *_t = static_cast<TaskManagerGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { AbstractLoggerEngine* _r = _t->assignLoggerEngineToTask((*reinterpret_cast< ITask*(*)>(_a[1])),(*reinterpret_cast< WidgetLoggerEngine::MessageDisplaysFlag(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< AbstractLoggerEngine**>(_a[0]) = std::move(_r); }  break;
        case 1: { AbstractLoggerEngine* _r = _t->assignLoggerEngineToTask((*reinterpret_cast< ITask*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AbstractLoggerEngine**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->handleObjectPoolAddition((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->assignLazyLoggerEngineToTask(); break;
        default: ;
        }
    }
}

const QMetaObject Qtilities::CoreGui::TaskManagerGui::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__TaskManagerGui.data,
      qt_meta_data_Qtilities__CoreGui__TaskManagerGui,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::TaskManagerGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::TaskManagerGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__TaskManagerGui.stringdata0))
        return static_cast<void*>(const_cast< TaskManagerGui*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::CoreGui::TaskManagerGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
