/****************************************************************************
** Meta object code from reading C++ file 'SubjectFilterTemplate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/SubjectFilterTemplate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SubjectFilterTemplate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__SubjectFilterTemplate_t {
    QByteArrayData data[9];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__SubjectFilterTemplate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__SubjectFilterTemplate_t qt_meta_stringdata_Qtilities__Core__SubjectFilterTemplate = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Qtilities::Core::SubjectFilte..."
QT_MOC_LITERAL(1, 39, 24), // "modificationStateChanged"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 11), // "is_modified"
QT_MOC_LITERAL(4, 77, 20), // "setModificationState"
QT_MOC_LITERAL(5, 98, 9), // "new_state"
QT_MOC_LITERAL(6, 108, 42), // "IModificationNotifier::Notifi..."
QT_MOC_LITERAL(7, 151, 20), // "notification_targets"
QT_MOC_LITERAL(8, 172, 19) // "force_notifications"

    },
    "Qtilities::Core::SubjectFilterTemplate\0"
    "modificationStateChanged\0\0is_modified\0"
    "setModificationState\0new_state\0"
    "IModificationNotifier::NotificationTargets\0"
    "notification_targets\0force_notifications"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__SubjectFilterTemplate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   37,    2, 0x0a /* Public */,
       4,    2,   44,    2, 0x2a /* Public | MethodCloned */,
       4,    1,   49,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 6, QMetaType::Bool,    5,    7,    8,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void Qtilities::Core::SubjectFilterTemplate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubjectFilterTemplate *_t = static_cast<SubjectFilterTemplate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modificationStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< IModificationNotifier::NotificationTargets(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< IModificationNotifier::NotificationTargets(*)>(_a[2]))); break;
        case 3: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SubjectFilterTemplate::*_t)(bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SubjectFilterTemplate::modificationStateChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::Core::SubjectFilterTemplate::staticMetaObject = {
    { &AbstractSubjectFilter::staticMetaObject, qt_meta_stringdata_Qtilities__Core__SubjectFilterTemplate.data,
      qt_meta_data_Qtilities__Core__SubjectFilterTemplate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::SubjectFilterTemplate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::SubjectFilterTemplate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__SubjectFilterTemplate.stringdata0))
        return static_cast<void*>(const_cast< SubjectFilterTemplate*>(this));
    if (!strcmp(_clname, "IModificationNotifier"))
        return static_cast< IModificationNotifier*>(const_cast< SubjectFilterTemplate*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.IModificationNotifier/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IModificationNotifier*>(const_cast< SubjectFilterTemplate*>(this));
    return AbstractSubjectFilter::qt_metacast(_clname);
}

int Qtilities::Core::SubjectFilterTemplate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractSubjectFilter::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Qtilities::Core::SubjectFilterTemplate::modificationStateChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Qtilities::Core::SubjectFilterTemplate *>(this), &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
