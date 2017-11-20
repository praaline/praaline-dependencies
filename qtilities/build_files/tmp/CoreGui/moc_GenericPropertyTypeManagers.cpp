/****************************************************************************
** Meta object code from reading C++ file 'GenericPropertyTypeManagers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/GenericPropertyTypeManagers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GenericPropertyTypeManagers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__PathPropertyManager_t {
    QByteArrayData data[1];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__PathPropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__PathPropertyManager_t qt_meta_stringdata_Qtilities__CoreGui__PathPropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 39) // "Qtilities::CoreGui::PathPrope..."

    },
    "Qtilities::CoreGui::PathPropertyManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__PathPropertyManager[] = {

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

void Qtilities::CoreGui::PathPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::CoreGui::PathPropertyManager::staticMetaObject = {
    { &QtStringPropertyManager::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__PathPropertyManager.data,
      qt_meta_data_Qtilities__CoreGui__PathPropertyManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::PathPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::PathPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__PathPropertyManager.stringdata0))
        return static_cast<void*>(const_cast< PathPropertyManager*>(this));
    return QtStringPropertyManager::qt_metacast(_clname);
}

int Qtilities::CoreGui::PathPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtStringPropertyManager::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Qtilities__CoreGui__FileEditorFactory_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__FileEditorFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__FileEditorFactory_t qt_meta_stringdata_Qtilities__CoreGui__FileEditorFactory = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Qtilities::CoreGui::FileEdito..."
QT_MOC_LITERAL(1, 38, 16), // "slotValueChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 11), // "QtProperty*"
QT_MOC_LITERAL(4, 68, 8), // "property"
QT_MOC_LITERAL(5, 77, 5), // "value"
QT_MOC_LITERAL(6, 83, 19), // "slotEditorDestroyed"
QT_MOC_LITERAL(7, 103, 6), // "object"
QT_MOC_LITERAL(8, 110, 12) // "slotSetValue"

    },
    "Qtilities::CoreGui::FileEditorFactory\0"
    "slotValueChanged\0\0QtProperty*\0property\0"
    "value\0slotEditorDestroyed\0object\0"
    "slotSetValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__FileEditorFactory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x08 /* Private */,
       6,    1,   34,    2, 0x08 /* Private */,
       8,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QObjectStar,    7,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void Qtilities::CoreGui::FileEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileEditorFactory *_t = static_cast<FileEditorFactory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotValueChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->slotEditorDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->slotSetValue((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Qtilities::CoreGui::FileEditorFactory::staticMetaObject = {
    { &QtAbstractEditorFactory<PathPropertyManager>::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__FileEditorFactory.data,
      qt_meta_data_Qtilities__CoreGui__FileEditorFactory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::FileEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::FileEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__FileEditorFactory.stringdata0))
        return static_cast<void*>(const_cast< FileEditorFactory*>(this));
    return QtAbstractEditorFactory<PathPropertyManager>::qt_metacast(_clname);
}

int Qtilities::CoreGui::FileEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<PathPropertyManager>::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
