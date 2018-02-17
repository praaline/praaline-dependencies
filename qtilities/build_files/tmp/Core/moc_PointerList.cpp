/****************************************************************************
** Meta object code from reading C++ file 'PointerList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/PointerList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PointerList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__PointerListDeleter_t {
    QByteArrayData data[5];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__PointerListDeleter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__PointerListDeleter_t qt_meta_stringdata_Qtilities__Core__PointerListDeleter = {
    {
QT_MOC_LITERAL(0, 0, 35), // "Qtilities::Core::PointerListD..."
QT_MOC_LITERAL(1, 36, 15), // "objectDestroyed"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 6), // "object"
QT_MOC_LITERAL(4, 60, 12) // "removeSender"

    },
    "Qtilities::Core::PointerListDeleter\0"
    "objectDestroyed\0\0object\0removeSender"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__PointerListDeleter[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Qtilities::Core::PointerListDeleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PointerListDeleter *_t = static_cast<PointerListDeleter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->objectDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->removeSender(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PointerListDeleter::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PointerListDeleter::objectDestroyed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::Core::PointerListDeleter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Core__PointerListDeleter.data,
      qt_meta_data_Qtilities__Core__PointerListDeleter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::PointerListDeleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::PointerListDeleter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__PointerListDeleter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qtilities::Core::PointerListDeleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Qtilities::Core::PointerListDeleter::objectDestroyed(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
