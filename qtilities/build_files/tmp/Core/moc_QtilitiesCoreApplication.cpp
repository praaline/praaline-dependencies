/****************************************************************************
** Meta object code from reading C++ file 'QtilitiesCoreApplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/QtilitiesCoreApplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtilitiesCoreApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__QtilitiesCoreApplication_t {
    QByteArrayData data[6];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__QtilitiesCoreApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__QtilitiesCoreApplication_t qt_meta_stringdata_Qtilities__Core__QtilitiesCoreApplication = {
    {
QT_MOC_LITERAL(0, 0, 41), // "Qtilities::Core::QtilitiesCor..."
QT_MOC_LITERAL(1, 42, 21), // "settingsUpdateRequest"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 10), // "request_id"
QT_MOC_LITERAL(4, 76, 16), // "busyStateChanged"
QT_MOC_LITERAL(5, 93, 7) // "is_busy"

    },
    "Qtilities::Core::QtilitiesCoreApplication\0"
    "settingsUpdateRequest\0\0request_id\0"
    "busyStateChanged\0is_busy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__QtilitiesCoreApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void Qtilities::Core::QtilitiesCoreApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtilitiesCoreApplication *_t = static_cast<QtilitiesCoreApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingsUpdateRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->busyStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtilitiesCoreApplication::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtilitiesCoreApplication::settingsUpdateRequest)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QtilitiesCoreApplication::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtilitiesCoreApplication::busyStateChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::Core::QtilitiesCoreApplication::staticMetaObject = {
    { &QCoreApplication::staticMetaObject, qt_meta_stringdata_Qtilities__Core__QtilitiesCoreApplication.data,
      qt_meta_data_Qtilities__Core__QtilitiesCoreApplication,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::QtilitiesCoreApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::QtilitiesCoreApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__QtilitiesCoreApplication.stringdata0))
        return static_cast<void*>(this);
    return QCoreApplication::qt_metacast(_clname);
}

int Qtilities::Core::QtilitiesCoreApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCoreApplication::qt_metacall(_c, _id, _a);
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
void Qtilities::Core::QtilitiesCoreApplication::settingsUpdateRequest(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::Core::QtilitiesCoreApplication::busyStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
