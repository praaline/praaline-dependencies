/****************************************************************************
** Meta object code from reading C++ file 'ActionManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/ActionManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActionManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__ActionManager_t {
    QByteArrayData data[7];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__ActionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__ActionManager_t qt_meta_stringdata_Qtilities__CoreGui__ActionManager = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Qtilities::CoreGui::ActionMan..."
QT_MOC_LITERAL(1, 34, 28), // "unregisterCommandsForContext"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 7), // "context"
QT_MOC_LITERAL(4, 72, 20), // "handleContextChanged"
QT_MOC_LITERAL(5, 93, 10), // "QList<int>"
QT_MOC_LITERAL(6, 104, 12) // "new_contexts"

    },
    "Qtilities::CoreGui::ActionManager\0"
    "unregisterCommandsForContext\0\0context\0"
    "handleContextChanged\0QList<int>\0"
    "new_contexts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__ActionManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void Qtilities::CoreGui::ActionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActionManager *_t = static_cast<ActionManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->unregisterCommandsForContext((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->handleContextChanged((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject Qtilities::CoreGui::ActionManager::staticMetaObject = {
    { &IActionManager::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__ActionManager.data,
      qt_meta_data_Qtilities__CoreGui__ActionManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::ActionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::ActionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__ActionManager.stringdata0))
        return static_cast<void*>(const_cast< ActionManager*>(this));
    if (!strcmp(_clname, "com.Qtilities.ObjManagement.IActionManager/1.0"))
        return static_cast< Qtilities::CoreGui::Interfaces::IActionManager*>(const_cast< ActionManager*>(this));
    return IActionManager::qt_metacast(_clname);
}

int Qtilities::CoreGui::ActionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IActionManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
