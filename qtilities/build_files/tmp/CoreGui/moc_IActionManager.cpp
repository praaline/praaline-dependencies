/****************************************************************************
** Meta object code from reading C++ file 'IActionManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/IActionManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IActionManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__Interfaces__IActionManager_t {
    QByteArrayData data[6];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__Interfaces__IActionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__Interfaces__IActionManager_t qt_meta_stringdata_Qtilities__CoreGui__Interfaces__IActionManager = {
    {
QT_MOC_LITERAL(0, 0, 46), // "Qtilities::CoreGui::Interface..."
QT_MOC_LITERAL(1, 47, 23), // "numberOfCommandsChanged"
QT_MOC_LITERAL(2, 71, 0), // ""
QT_MOC_LITERAL(3, 72, 20), // "handleContextChanged"
QT_MOC_LITERAL(4, 93, 10), // "QList<int>"
QT_MOC_LITERAL(5, 104, 12) // "new_contexts"

    },
    "Qtilities::CoreGui::Interfaces::IActionManager\0"
    "numberOfCommandsChanged\0\0handleContextChanged\0"
    "QList<int>\0new_contexts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__Interfaces__IActionManager[] = {

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
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void Qtilities::CoreGui::Interfaces::IActionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IActionManager *_t = static_cast<IActionManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numberOfCommandsChanged(); break;
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
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IActionManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IActionManager::numberOfCommandsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::Interfaces::IActionManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__Interfaces__IActionManager.data,
      qt_meta_data_Qtilities__CoreGui__Interfaces__IActionManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::Interfaces::IActionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::Interfaces::IActionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__Interfaces__IActionManager.stringdata0))
        return static_cast<void*>(const_cast< IActionManager*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::CoreGui::Interfaces::IActionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::Interfaces::IActionManager::numberOfCommandsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
