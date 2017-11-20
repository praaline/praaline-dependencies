/****************************************************************************
** Meta object code from reading C++ file 'QtilitiesCoreApplication_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/QtilitiesCoreApplication_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtilitiesCoreApplication_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__QtilitiesCoreApplicationPrivate_t {
    QByteArrayData data[4];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__QtilitiesCoreApplicationPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__QtilitiesCoreApplicationPrivate_t qt_meta_stringdata_Qtilities__Core__QtilitiesCoreApplicationPrivate = {
    {
QT_MOC_LITERAL(0, 0, 48), // "Qtilities::Core::QtilitiesCor..."
QT_MOC_LITERAL(1, 49, 16), // "busyStateChanged"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 7) // "is_busy"

    },
    "Qtilities::Core::QtilitiesCoreApplicationPrivate\0"
    "busyStateChanged\0\0is_busy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__QtilitiesCoreApplicationPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void Qtilities::Core::QtilitiesCoreApplicationPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtilitiesCoreApplicationPrivate *_t = static_cast<QtilitiesCoreApplicationPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->busyStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtilitiesCoreApplicationPrivate::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtilitiesCoreApplicationPrivate::busyStateChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::Core::QtilitiesCoreApplicationPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Core__QtilitiesCoreApplicationPrivate.data,
      qt_meta_data_Qtilities__Core__QtilitiesCoreApplicationPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::QtilitiesCoreApplicationPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::QtilitiesCoreApplicationPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__QtilitiesCoreApplicationPrivate.stringdata0))
        return static_cast<void*>(const_cast< QtilitiesCoreApplicationPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::Core::QtilitiesCoreApplicationPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::Core::QtilitiesCoreApplicationPrivate::busyStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
