/****************************************************************************
** Meta object code from reading C++ file 'ActivityPolicyFilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/ActivityPolicyFilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActivityPolicyFilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__ActivityPolicyFilter_t {
    QByteArrayData data[40];
    char stringdata0[693];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__ActivityPolicyFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__ActivityPolicyFilter_t qt_meta_stringdata_Qtilities__Core__ActivityPolicyFilter = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Qtilities::Core::ActivityPoli..."
QT_MOC_LITERAL(1, 38, 24), // "modificationStateChanged"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 11), // "is_modified"
QT_MOC_LITERAL(4, 76, 21), // "activeSubjectsChanged"
QT_MOC_LITERAL(5, 98, 15), // "QList<QObject*>"
QT_MOC_LITERAL(6, 114, 14), // "active_objects"
QT_MOC_LITERAL(7, 129, 16), // "inactive_objects"
QT_MOC_LITERAL(8, 146, 20), // "setModificationState"
QT_MOC_LITERAL(9, 167, 9), // "new_state"
QT_MOC_LITERAL(10, 177, 42), // "IModificationNotifier::Notifi..."
QT_MOC_LITERAL(11, 220, 20), // "notification_targets"
QT_MOC_LITERAL(12, 241, 19), // "force_notifications"
QT_MOC_LITERAL(13, 261, 17), // "setActiveSubjects"
QT_MOC_LITERAL(14, 279, 7), // "objects"
QT_MOC_LITERAL(15, 287, 9), // "broadcast"
QT_MOC_LITERAL(16, 297, 25), // "QList<QPointer<QObject> >"
QT_MOC_LITERAL(17, 323, 16), // "setActiveSubject"
QT_MOC_LITERAL(18, 340, 3), // "obj"
QT_MOC_LITERAL(19, 344, 21), // "toggleSubjectActivity"
QT_MOC_LITERAL(20, 366, 18), // "setSubjectActivity"
QT_MOC_LITERAL(21, 385, 9), // "is_active"
QT_MOC_LITERAL(22, 395, 18), // "getSubjectActivity"
QT_MOC_LITERAL(23, 414, 14), // "const QObject*"
QT_MOC_LITERAL(24, 429, 5), // "bool*"
QT_MOC_LITERAL(25, 435, 2), // "ok"
QT_MOC_LITERAL(26, 438, 14), // "invertActivity"
QT_MOC_LITERAL(27, 453, 12), // "setAllActive"
QT_MOC_LITERAL(28, 466, 13), // "setNoneActive"
QT_MOC_LITERAL(29, 480, 28), // "handleProcessingCycleStarted"
QT_MOC_LITERAL(30, 509, 26), // "handleProcessingCycleEnded"
QT_MOC_LITERAL(31, 536, 14), // "ActivityPolicy"
QT_MOC_LITERAL(32, 551, 14), // "UniqueActivity"
QT_MOC_LITERAL(33, 566, 16), // "MultipleActivity"
QT_MOC_LITERAL(34, 583, 21), // "MinimumActivityPolicy"
QT_MOC_LITERAL(35, 605, 15), // "AllowNoneActive"
QT_MOC_LITERAL(36, 621, 18), // "ProhibitNoneActive"
QT_MOC_LITERAL(37, 640, 24), // "NewSubjectActivityPolicy"
QT_MOC_LITERAL(38, 665, 12), // "SetNewActive"
QT_MOC_LITERAL(39, 678, 14) // "SetNewInactive"

    },
    "Qtilities::Core::ActivityPolicyFilter\0"
    "modificationStateChanged\0\0is_modified\0"
    "activeSubjectsChanged\0QList<QObject*>\0"
    "active_objects\0inactive_objects\0"
    "setModificationState\0new_state\0"
    "IModificationNotifier::NotificationTargets\0"
    "notification_targets\0force_notifications\0"
    "setActiveSubjects\0objects\0broadcast\0"
    "QList<QPointer<QObject> >\0setActiveSubject\0"
    "obj\0toggleSubjectActivity\0setSubjectActivity\0"
    "is_active\0getSubjectActivity\0"
    "const QObject*\0bool*\0ok\0invertActivity\0"
    "setAllActive\0setNoneActive\0"
    "handleProcessingCycleStarted\0"
    "handleProcessingCycleEnded\0ActivityPolicy\0"
    "UniqueActivity\0MultipleActivity\0"
    "MinimumActivityPolicy\0AllowNoneActive\0"
    "ProhibitNoneActive\0NewSubjectActivityPolicy\0"
    "SetNewActive\0SetNewInactive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__ActivityPolicyFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       3,  182, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       4,    2,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,  122,    2, 0x0a /* Public */,
       8,    2,  129,    2, 0x2a /* Public | MethodCloned */,
       8,    1,  134,    2, 0x2a /* Public | MethodCloned */,
      13,    2,  137,    2, 0x0a /* Public */,
      13,    1,  142,    2, 0x2a /* Public | MethodCloned */,
      13,    2,  145,    2, 0x0a /* Public */,
      13,    1,  150,    2, 0x2a /* Public | MethodCloned */,
      17,    2,  153,    2, 0x0a /* Public */,
      17,    1,  158,    2, 0x2a /* Public | MethodCloned */,
      19,    1,  161,    2, 0x0a /* Public */,
      20,    2,  164,    2, 0x0a /* Public */,
      22,    2,  169,    2, 0x0a /* Public */,
      22,    1,  174,    2, 0x2a /* Public | MethodCloned */,
      26,    0,  177,    2, 0x0a /* Public */,
      27,    0,  178,    2, 0x0a /* Public */,
      28,    0,  179,    2, 0x0a /* Public */,
      29,    0,  180,    2, 0x08 /* Private */,
      30,    0,  181,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 10, QMetaType::Bool,    9,   11,   12,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Bool, 0x80000000 | 5, QMetaType::Bool,   14,   15,
    QMetaType::Bool, 0x80000000 | 5,   14,
    QMetaType::Bool, 0x80000000 | 16, QMetaType::Bool,   14,   15,
    QMetaType::Bool, 0x80000000 | 16,   14,
    QMetaType::Bool, QMetaType::QObjectStar, QMetaType::Bool,   18,   15,
    QMetaType::Bool, QMetaType::QObjectStar,   18,
    QMetaType::Bool, QMetaType::QObjectStar,   18,
    QMetaType::Bool, QMetaType::QObjectStar, QMetaType::Bool,   18,   21,
    QMetaType::Bool, 0x80000000 | 23, 0x80000000 | 24,   18,   25,
    QMetaType::Bool, 0x80000000 | 23,   18,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      31, 0x0,    2,  194,
      34, 0x0,    2,  198,
      37, 0x0,    2,  202,

 // enum data: key, value
      32, uint(Qtilities::Core::ActivityPolicyFilter::UniqueActivity),
      33, uint(Qtilities::Core::ActivityPolicyFilter::MultipleActivity),
      35, uint(Qtilities::Core::ActivityPolicyFilter::AllowNoneActive),
      36, uint(Qtilities::Core::ActivityPolicyFilter::ProhibitNoneActive),
      38, uint(Qtilities::Core::ActivityPolicyFilter::SetNewActive),
      39, uint(Qtilities::Core::ActivityPolicyFilter::SetNewInactive),

       0        // eod
};

void Qtilities::Core::ActivityPolicyFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActivityPolicyFilter *_t = static_cast<ActivityPolicyFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modificationStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->activeSubjectsChanged((*reinterpret_cast< QList<QObject*>(*)>(_a[1])),(*reinterpret_cast< QList<QObject*>(*)>(_a[2]))); break;
        case 2: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< IModificationNotifier::NotificationTargets(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< IModificationNotifier::NotificationTargets(*)>(_a[2]))); break;
        case 4: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->setActiveSubjects((*reinterpret_cast< QList<QObject*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->setActiveSubjects((*reinterpret_cast< QList<QObject*>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->setActiveSubjects((*reinterpret_cast< QList<QPointer<QObject> >(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->setActiveSubjects((*reinterpret_cast< QList<QPointer<QObject> >(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->setActiveSubject((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->setActiveSubject((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->toggleSubjectActivity((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->setSubjectActivity((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->getSubjectActivity((*reinterpret_cast< const QObject*(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->getSubjectActivity((*reinterpret_cast< const QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->invertActivity();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->setAllActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->setNoneActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->handleProcessingCycleStarted(); break;
        case 19: _t->handleProcessingCycleEnded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPointer<QObject> > >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPointer<QObject> > >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ActivityPolicyFilter::*_t)(bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActivityPolicyFilter::modificationStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ActivityPolicyFilter::*_t)(QList<QObject*> , QList<QObject*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActivityPolicyFilter::activeSubjectsChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::Core::ActivityPolicyFilter::staticMetaObject = {
    { &AbstractSubjectFilter::staticMetaObject, qt_meta_stringdata_Qtilities__Core__ActivityPolicyFilter.data,
      qt_meta_data_Qtilities__Core__ActivityPolicyFilter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::ActivityPolicyFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::ActivityPolicyFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__ActivityPolicyFilter.stringdata0))
        return static_cast<void*>(const_cast< ActivityPolicyFilter*>(this));
    if (!strcmp(_clname, "IModificationNotifier"))
        return static_cast< IModificationNotifier*>(const_cast< ActivityPolicyFilter*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.IModificationNotifier/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IModificationNotifier*>(const_cast< ActivityPolicyFilter*>(this));
    return AbstractSubjectFilter::qt_metacast(_clname);
}

int Qtilities::Core::ActivityPolicyFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractSubjectFilter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::Core::ActivityPolicyFilter::modificationStateChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Qtilities::Core::ActivityPolicyFilter *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::Core::ActivityPolicyFilter::activeSubjectsChanged(QList<QObject*> _t1, QList<QObject*> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
