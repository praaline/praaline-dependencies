/****************************************************************************
** Meta object code from reading C++ file 'NamingPolicyFilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/NamingPolicyFilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NamingPolicyFilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__NamingPolicyFilter_t {
    QByteArrayData data[32];
    char stringdata0[505];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__NamingPolicyFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__NamingPolicyFilter_t qt_meta_stringdata_Qtilities__CoreGui__NamingPolicyFilter = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Qtilities::CoreGui::NamingPol..."
QT_MOC_LITERAL(1, 39, 24), // "modificationStateChanged"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 11), // "is_modified"
QT_MOC_LITERAL(4, 77, 18), // "subjectNameChanged"
QT_MOC_LITERAL(5, 96, 3), // "obj"
QT_MOC_LITERAL(6, 100, 8), // "old_name"
QT_MOC_LITERAL(7, 109, 8), // "new_name"
QT_MOC_LITERAL(8, 118, 20), // "setModificationState"
QT_MOC_LITERAL(9, 139, 9), // "new_state"
QT_MOC_LITERAL(10, 149, 42), // "IModificationNotifier::Notifi..."
QT_MOC_LITERAL(11, 192, 20), // "notification_targets"
QT_MOC_LITERAL(12, 213, 19), // "force_notifications"
QT_MOC_LITERAL(13, 233, 16), // "UniquenessPolicy"
QT_MOC_LITERAL(14, 250, 19), // "AllowDuplicateNames"
QT_MOC_LITERAL(15, 270, 22), // "ProhibitDuplicateNames"
QT_MOC_LITERAL(16, 293, 35), // "ProhibitDuplicateNamesCaseSen..."
QT_MOC_LITERAL(17, 329, 16), // "ResolutionPolicy"
QT_MOC_LITERAL(18, 346, 10), // "AutoRename"
QT_MOC_LITERAL(19, 357, 10), // "PromptUser"
QT_MOC_LITERAL(20, 368, 7), // "Replace"
QT_MOC_LITERAL(21, 376, 6), // "Reject"
QT_MOC_LITERAL(22, 383, 20), // "ValidationCheckFlags"
QT_MOC_LITERAL(23, 404, 8), // "NoChecks"
QT_MOC_LITERAL(24, 413, 8), // "Validity"
QT_MOC_LITERAL(25, 422, 10), // "Uniqueness"
QT_MOC_LITERAL(26, 433, 9), // "AllChecks"
QT_MOC_LITERAL(27, 443, 19), // "ValidityCheckResult"
QT_MOC_LITERAL(28, 463, 10), // "Acceptable"
QT_MOC_LITERAL(29, 474, 9), // "Duplicate"
QT_MOC_LITERAL(30, 484, 7), // "Invalid"
QT_MOC_LITERAL(31, 492, 12) // "NameValidity"

    },
    "Qtilities::CoreGui::NamingPolicyFilter\0"
    "modificationStateChanged\0\0is_modified\0"
    "subjectNameChanged\0obj\0old_name\0"
    "new_name\0setModificationState\0new_state\0"
    "IModificationNotifier::NotificationTargets\0"
    "notification_targets\0force_notifications\0"
    "UniquenessPolicy\0AllowDuplicateNames\0"
    "ProhibitDuplicateNames\0"
    "ProhibitDuplicateNamesCaseSensitive\0"
    "ResolutionPolicy\0AutoRename\0PromptUser\0"
    "Replace\0Reject\0ValidationCheckFlags\0"
    "NoChecks\0Validity\0Uniqueness\0AllChecks\0"
    "ValidityCheckResult\0Acceptable\0Duplicate\0"
    "Invalid\0NameValidity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__NamingPolicyFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       5,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    3,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,   49,    2, 0x0a /* Public */,
       8,    2,   56,    2, 0x2a /* Public | MethodCloned */,
       8,    1,   61,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::QString,    5,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 10, QMetaType::Bool,    9,   11,   12,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::Bool,    9,

 // enums: name, flags, count, data
      13, 0x0,    3,   84,
      17, 0x0,    4,   90,
      22, 0x1,    4,   98,
      27, 0x0,    3,  106,
      31, 0x1,    3,  112,

 // enum data: key, value
      14, uint(Qtilities::CoreGui::NamingPolicyFilter::AllowDuplicateNames),
      15, uint(Qtilities::CoreGui::NamingPolicyFilter::ProhibitDuplicateNames),
      16, uint(Qtilities::CoreGui::NamingPolicyFilter::ProhibitDuplicateNamesCaseSensitive),
      18, uint(Qtilities::CoreGui::NamingPolicyFilter::AutoRename),
      19, uint(Qtilities::CoreGui::NamingPolicyFilter::PromptUser),
      20, uint(Qtilities::CoreGui::NamingPolicyFilter::Replace),
      21, uint(Qtilities::CoreGui::NamingPolicyFilter::Reject),
      23, uint(Qtilities::CoreGui::NamingPolicyFilter::NoChecks),
      24, uint(Qtilities::CoreGui::NamingPolicyFilter::Validity),
      25, uint(Qtilities::CoreGui::NamingPolicyFilter::Uniqueness),
      26, uint(Qtilities::CoreGui::NamingPolicyFilter::AllChecks),
      28, uint(Qtilities::CoreGui::NamingPolicyFilter::Acceptable),
      29, uint(Qtilities::CoreGui::NamingPolicyFilter::Duplicate),
      30, uint(Qtilities::CoreGui::NamingPolicyFilter::Invalid),
      28, uint(Qtilities::CoreGui::NamingPolicyFilter::Acceptable),
      29, uint(Qtilities::CoreGui::NamingPolicyFilter::Duplicate),
      30, uint(Qtilities::CoreGui::NamingPolicyFilter::Invalid),

       0        // eod
};

void Qtilities::CoreGui::NamingPolicyFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NamingPolicyFilter *_t = static_cast<NamingPolicyFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modificationStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->subjectNameChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< IModificationNotifier::NotificationTargets(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< IModificationNotifier::NotificationTargets(*)>(_a[2]))); break;
        case 4: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NamingPolicyFilter::*_t)(bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NamingPolicyFilter::modificationStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NamingPolicyFilter::*_t)(QObject * , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NamingPolicyFilter::subjectNameChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::NamingPolicyFilter::staticMetaObject = {
    { &AbstractSubjectFilter::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__NamingPolicyFilter.data,
      qt_meta_data_Qtilities__CoreGui__NamingPolicyFilter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::NamingPolicyFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::NamingPolicyFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__NamingPolicyFilter.stringdata0))
        return static_cast<void*>(const_cast< NamingPolicyFilter*>(this));
    if (!strcmp(_clname, "IModificationNotifier"))
        return static_cast< IModificationNotifier*>(const_cast< NamingPolicyFilter*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.IModificationNotifier/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IModificationNotifier*>(const_cast< NamingPolicyFilter*>(this));
    return AbstractSubjectFilter::qt_metacast(_clname);
}

int Qtilities::CoreGui::NamingPolicyFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractSubjectFilter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::NamingPolicyFilter::modificationStateChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Qtilities::CoreGui::NamingPolicyFilter *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::CoreGui::NamingPolicyFilter::subjectNameChanged(QObject * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_Qtilities__CoreGui__NamingPolicyDelegate_t {
    QByteArrayData data[7];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__NamingPolicyDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__NamingPolicyDelegate_t qt_meta_stringdata_Qtilities__CoreGui__NamingPolicyDelegate = {
    {
QT_MOC_LITERAL(0, 0, 40), // "Qtilities::CoreGui::NamingPol..."
QT_MOC_LITERAL(1, 41, 23), // "on_LineEdit_TextChanged"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 4), // "text"
QT_MOC_LITERAL(4, 71, 26), // "handleCurrentObjectChanged"
QT_MOC_LITERAL(5, 98, 15), // "QList<QObject*>"
QT_MOC_LITERAL(6, 114, 3) // "obj"

    },
    "Qtilities::CoreGui::NamingPolicyDelegate\0"
    "on_LineEdit_TextChanged\0\0text\0"
    "handleCurrentObjectChanged\0QList<QObject*>\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__NamingPolicyDelegate[] = {

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
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void Qtilities::CoreGui::NamingPolicyDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NamingPolicyDelegate *_t = static_cast<NamingPolicyDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_LineEdit_TextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->handleCurrentObjectChanged((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        }
    }
}

const QMetaObject Qtilities::CoreGui::NamingPolicyDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__NamingPolicyDelegate.data,
      qt_meta_data_Qtilities__CoreGui__NamingPolicyDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::NamingPolicyDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::NamingPolicyDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__NamingPolicyDelegate.stringdata0))
        return static_cast<void*>(const_cast< NamingPolicyDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int Qtilities::CoreGui::NamingPolicyDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
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
