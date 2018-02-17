/****************************************************************************
** Meta object code from reading C++ file 'IObjectManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/IObjectManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IObjectManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__Interfaces__IObjectManager_t {
    QByteArrayData data[16];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__Interfaces__IObjectManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__Interfaces__IObjectManager_t qt_meta_stringdata_Qtilities__Core__Interfaces__IObjectManager = {
    {
QT_MOC_LITERAL(0, 0, 43), // "Qtilities::Core::Interfaces::..."
QT_MOC_LITERAL(1, 44, 28), // "metaTypeActiveObjectsChanged"
QT_MOC_LITERAL(2, 73, 0), // ""
QT_MOC_LITERAL(3, 74, 25), // "QList<QPointer<QObject> >"
QT_MOC_LITERAL(4, 100, 7), // "objects"
QT_MOC_LITERAL(5, 108, 9), // "meta_type"
QT_MOC_LITERAL(6, 118, 14), // "newObjectAdded"
QT_MOC_LITERAL(7, 133, 3), // "obj"
QT_MOC_LITERAL(8, 137, 13), // "objectRemoved"
QT_MOC_LITERAL(9, 151, 17), // "PropertyTypeFlags"
QT_MOC_LITERAL(10, 169, 12), // "NoProperties"
QT_MOC_LITERAL(11, 182, 22), // "MultiContextProperties"
QT_MOC_LITERAL(12, 205, 16), // "SharedProperties"
QT_MOC_LITERAL(13, 222, 27), // "QtilitiesInternalProperties"
QT_MOC_LITERAL(14, 250, 22), // "NonQtilitiesProperties"
QT_MOC_LITERAL(15, 273, 16) // "AllPropertyTypes"

    },
    "Qtilities::Core::Interfaces::IObjectManager\0"
    "metaTypeActiveObjectsChanged\0\0"
    "QList<QPointer<QObject> >\0objects\0"
    "meta_type\0newObjectAdded\0obj\0objectRemoved\0"
    "PropertyTypeFlags\0NoProperties\0"
    "MultiContextProperties\0SharedProperties\0"
    "QtilitiesInternalProperties\0"
    "NonQtilitiesProperties\0AllPropertyTypes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__Interfaces__IObjectManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   40, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       6,    1,   34,    2, 0x06 /* Public */,
       8,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QObjectStar,    7,
    QMetaType::Void, QMetaType::QObjectStar,    7,

 // enums: name, flags, count, data
       9, 0x1,    6,   44,

 // enum data: key, value
      10, uint(Qtilities::Core::Interfaces::IObjectManager::NoProperties),
      11, uint(Qtilities::Core::Interfaces::IObjectManager::MultiContextProperties),
      12, uint(Qtilities::Core::Interfaces::IObjectManager::SharedProperties),
      13, uint(Qtilities::Core::Interfaces::IObjectManager::QtilitiesInternalProperties),
      14, uint(Qtilities::Core::Interfaces::IObjectManager::NonQtilitiesProperties),
      15, uint(Qtilities::Core::Interfaces::IObjectManager::AllPropertyTypes),

       0        // eod
};

void Qtilities::Core::Interfaces::IObjectManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IObjectManager *_t = static_cast<IObjectManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->metaTypeActiveObjectsChanged((*reinterpret_cast< QList<QPointer<QObject> >(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->newObjectAdded((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->objectRemoved((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPointer<QObject> > >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (IObjectManager::*_t)(QList<QPointer<QObject> > , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IObjectManager::metaTypeActiveObjectsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (IObjectManager::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IObjectManager::newObjectAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (IObjectManager::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IObjectManager::objectRemoved)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::Core::Interfaces::IObjectManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Core__Interfaces__IObjectManager.data,
      qt_meta_data_Qtilities__Core__Interfaces__IObjectManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::Interfaces::IObjectManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::Interfaces::IObjectManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__Interfaces__IObjectManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFactoryProvider"))
        return static_cast< IFactoryProvider*>(this);
    return QObject::qt_metacast(_clname);
}

int Qtilities::Core::Interfaces::IObjectManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::Core::Interfaces::IObjectManager::metaTypeActiveObjectsChanged(QList<QPointer<QObject> > _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::Core::Interfaces::IObjectManager::newObjectAdded(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qtilities::Core::Interfaces::IObjectManager::objectRemoved(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
