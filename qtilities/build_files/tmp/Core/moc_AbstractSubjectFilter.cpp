/****************************************************************************
** Meta object code from reading C++ file 'AbstractSubjectFilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/AbstractSubjectFilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractSubjectFilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__AbstractSubjectFilter_t {
    QByteArrayData data[12];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__AbstractSubjectFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__AbstractSubjectFilter_t qt_meta_stringdata_Qtilities__Core__AbstractSubjectFilter = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Qtilities::Core::AbstractSubj..."
QT_MOC_LITERAL(1, 39, 24), // "monitoredPropertyChanged"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 11), // "const char*"
QT_MOC_LITERAL(4, 77, 13), // "property_name"
QT_MOC_LITERAL(5, 91, 15), // "QList<QObject*>"
QT_MOC_LITERAL(6, 107, 7), // "objects"
QT_MOC_LITERAL(7, 115, 22), // "propertyChangeFiltered"
QT_MOC_LITERAL(8, 138, 16), // "EvaluationResult"
QT_MOC_LITERAL(9, 155, 7), // "Allowed"
QT_MOC_LITERAL(10, 163, 11), // "Conditional"
QT_MOC_LITERAL(11, 175, 8) // "Rejected"

    },
    "Qtilities::Core::AbstractSubjectFilter\0"
    "monitoredPropertyChanged\0\0const char*\0"
    "property_name\0QList<QObject*>\0objects\0"
    "propertyChangeFiltered\0EvaluationResult\0"
    "Allowed\0Conditional\0Rejected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__AbstractSubjectFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       1,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       1,    1,   39,    2, 0x26 /* Public | MethodCloned */,
       7,    2,   42,    2, 0x06 /* Public */,
       7,    1,   47,    2, 0x26 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,

 // enums: name, flags, count, data
       8, 0x0,    3,   54,

 // enum data: key, value
       9, uint(Qtilities::Core::AbstractSubjectFilter::Allowed),
      10, uint(Qtilities::Core::AbstractSubjectFilter::Conditional),
      11, uint(Qtilities::Core::AbstractSubjectFilter::Rejected),

       0        // eod
};

void Qtilities::Core::AbstractSubjectFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractSubjectFilter *_t = static_cast<AbstractSubjectFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->monitoredPropertyChanged((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< QList<QObject*>(*)>(_a[2]))); break;
        case 1: _t->monitoredPropertyChanged((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 2: _t->propertyChangeFiltered((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< QList<QObject*>(*)>(_a[2]))); break;
        case 3: _t->propertyChangeFiltered((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AbstractSubjectFilter::*_t)(const char * , QList<QObject*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractSubjectFilter::monitoredPropertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AbstractSubjectFilter::*_t)(const char * , QList<QObject*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractSubjectFilter::propertyChangeFiltered)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::Core::AbstractSubjectFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Core__AbstractSubjectFilter.data,
      qt_meta_data_Qtilities__Core__AbstractSubjectFilter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::AbstractSubjectFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::AbstractSubjectFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__AbstractSubjectFilter.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IExportable"))
        return static_cast< IExportable*>(this);
    return QObject::qt_metacast(_clname);
}

int Qtilities::Core::AbstractSubjectFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::Core::AbstractSubjectFilter::monitoredPropertyChanged(const char * _t1, QList<QObject*> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void Qtilities::Core::AbstractSubjectFilter::propertyChangeFiltered(const char * _t1, QList<QObject*> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
