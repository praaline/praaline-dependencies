/****************************************************************************
** Meta object code from reading C++ file 'Observer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/Observer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Observer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__Observer_t {
    QByteArrayData data[71];
    char stringdata0[1142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__Observer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__Observer_t qt_meta_stringdata_Qtilities__Core__Observer = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Qtilities::Core::Observer"
QT_MOC_LITERAL(1, 26, 24), // "modificationStateChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 11), // "is_modified"
QT_MOC_LITERAL(4, 64, 14), // "subjectDeleted"
QT_MOC_LITERAL(5, 79, 3), // "obj"
QT_MOC_LITERAL(6, 83, 16), // "aboutToBeDeleted"
QT_MOC_LITERAL(7, 100, 27), // "allSubjectsAboutToBeDeleted"
QT_MOC_LITERAL(8, 128, 18), // "allSubjectsDeleted"
QT_MOC_LITERAL(9, 147, 28), // "allSubjectsAboutToBeDetached"
QT_MOC_LITERAL(10, 176, 19), // "allSubjectsDetached"
QT_MOC_LITERAL(11, 196, 24), // "monitoredPropertyChanged"
QT_MOC_LITERAL(12, 221, 11), // "const char*"
QT_MOC_LITERAL(13, 233, 13), // "property_name"
QT_MOC_LITERAL(14, 247, 15), // "QList<QObject*>"
QT_MOC_LITERAL(15, 263, 7), // "objects"
QT_MOC_LITERAL(16, 271, 22), // "propertyChangeFiltered"
QT_MOC_LITERAL(17, 294, 23), // "numberOfSubjectsChanged"
QT_MOC_LITERAL(18, 318, 33), // "Observer::SubjectChangeIndica..."
QT_MOC_LITERAL(19, 352, 17), // "change_indication"
QT_MOC_LITERAL(20, 370, 25), // "QList<QPointer<QObject> >"
QT_MOC_LITERAL(21, 396, 13), // "layoutChanged"
QT_MOC_LITERAL(22, 410, 13), // "new_selection"
QT_MOC_LITERAL(23, 424, 11), // "dataChanged"
QT_MOC_LITERAL(24, 436, 9), // "Observer*"
QT_MOC_LITERAL(25, 446, 8), // "observer"
QT_MOC_LITERAL(26, 455, 22), // "processingCycleStarted"
QT_MOC_LITERAL(27, 478, 20), // "processingCycleEnded"
QT_MOC_LITERAL(28, 499, 20), // "setModificationState"
QT_MOC_LITERAL(29, 520, 9), // "new_state"
QT_MOC_LITERAL(30, 530, 42), // "IModificationNotifier::Notifi..."
QT_MOC_LITERAL(31, 573, 20), // "notification_targets"
QT_MOC_LITERAL(32, 594, 19), // "force_notifications"
QT_MOC_LITERAL(33, 614, 13), // "detachSubject"
QT_MOC_LITERAL(34, 628, 8), // "QString*"
QT_MOC_LITERAL(35, 637, 9), // "rejectMsg"
QT_MOC_LITERAL(36, 647, 14), // "detachSubjects"
QT_MOC_LITERAL(37, 662, 9), // "detachAll"
QT_MOC_LITERAL(38, 672, 9), // "deleteAll"
QT_MOC_LITERAL(39, 682, 15), // "base_class_name"
QT_MOC_LITERAL(40, 698, 13), // "refresh_views"
QT_MOC_LITERAL(41, 712, 21), // "handle_deletedSubject"
QT_MOC_LITERAL(42, 734, 4), // "Name"
QT_MOC_LITERAL(43, 739, 11), // "Description"
QT_MOC_LITERAL(44, 751, 12), // "SubjectLimit"
QT_MOC_LITERAL(45, 764, 12), // "SubjectCount"
QT_MOC_LITERAL(46, 777, 6), // "Access"
QT_MOC_LITERAL(47, 784, 10), // "AccessMode"
QT_MOC_LITERAL(48, 795, 2), // "ID"
QT_MOC_LITERAL(49, 798, 8), // "Modified"
QT_MOC_LITERAL(50, 807, 14), // "ProcCycleCount"
QT_MOC_LITERAL(51, 822, 16), // "EvaluationResult"
QT_MOC_LITERAL(52, 839, 7), // "Allowed"
QT_MOC_LITERAL(53, 847, 11), // "Conditional"
QT_MOC_LITERAL(54, 859, 8), // "Rejected"
QT_MOC_LITERAL(55, 868, 16), // "IsParentObserver"
QT_MOC_LITERAL(56, 885, 18), // "LastScopedObserver"
QT_MOC_LITERAL(57, 904, 23), // "SubjectChangeIndication"
QT_MOC_LITERAL(58, 928, 12), // "SubjectAdded"
QT_MOC_LITERAL(59, 941, 14), // "SubjectRemoved"
QT_MOC_LITERAL(60, 956, 13), // "CyclicProcess"
QT_MOC_LITERAL(61, 970, 15), // "ObjectOwnership"
QT_MOC_LITERAL(62, 986, 15), // "ManualOwnership"
QT_MOC_LITERAL(63, 1002, 13), // "AutoOwnership"
QT_MOC_LITERAL(64, 1016, 25), // "SpecificObserverOwnership"
QT_MOC_LITERAL(65, 1042, 22), // "ObserverScopeOwnership"
QT_MOC_LITERAL(66, 1065, 23), // "OwnedBySubjectOwnership"
QT_MOC_LITERAL(67, 1089, 10), // "FullAccess"
QT_MOC_LITERAL(68, 1100, 14), // "ReadOnlyAccess"
QT_MOC_LITERAL(69, 1115, 12), // "LockedAccess"
QT_MOC_LITERAL(70, 1128, 13) // "InvalidAccess"

    },
    "Qtilities::Core::Observer\0"
    "modificationStateChanged\0\0is_modified\0"
    "subjectDeleted\0obj\0aboutToBeDeleted\0"
    "allSubjectsAboutToBeDeleted\0"
    "allSubjectsDeleted\0allSubjectsAboutToBeDetached\0"
    "allSubjectsDetached\0monitoredPropertyChanged\0"
    "const char*\0property_name\0QList<QObject*>\0"
    "objects\0propertyChangeFiltered\0"
    "numberOfSubjectsChanged\0"
    "Observer::SubjectChangeIndication\0"
    "change_indication\0QList<QPointer<QObject> >\0"
    "layoutChanged\0new_selection\0dataChanged\0"
    "Observer*\0observer\0processingCycleStarted\0"
    "processingCycleEnded\0setModificationState\0"
    "new_state\0IModificationNotifier::NotificationTargets\0"
    "notification_targets\0force_notifications\0"
    "detachSubject\0QString*\0rejectMsg\0"
    "detachSubjects\0detachAll\0deleteAll\0"
    "base_class_name\0refresh_views\0"
    "handle_deletedSubject\0Name\0Description\0"
    "SubjectLimit\0SubjectCount\0Access\0"
    "AccessMode\0ID\0Modified\0ProcCycleCount\0"
    "EvaluationResult\0Allowed\0Conditional\0"
    "Rejected\0IsParentObserver\0LastScopedObserver\0"
    "SubjectChangeIndication\0SubjectAdded\0"
    "SubjectRemoved\0CyclicProcess\0"
    "ObjectOwnership\0ManualOwnership\0"
    "AutoOwnership\0SpecificObserverOwnership\0"
    "ObserverScopeOwnership\0OwnedBySubjectOwnership\0"
    "FullAccess\0ReadOnlyAccess\0LockedAccess\0"
    "InvalidAccess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__Observer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       8,  258, // properties
       4,  282, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  169,    2, 0x06 /* Public */,
       4,    1,  172,    2, 0x06 /* Public */,
       6,    0,  175,    2, 0x06 /* Public */,
       7,    0,  176,    2, 0x06 /* Public */,
       8,    0,  177,    2, 0x06 /* Public */,
       9,    0,  178,    2, 0x06 /* Public */,
      10,    0,  179,    2, 0x06 /* Public */,
      11,    2,  180,    2, 0x06 /* Public */,
      11,    1,  185,    2, 0x26 /* Public | MethodCloned */,
      16,    2,  188,    2, 0x06 /* Public */,
      16,    1,  193,    2, 0x26 /* Public | MethodCloned */,
      17,    2,  196,    2, 0x06 /* Public */,
      17,    1,  201,    2, 0x26 /* Public | MethodCloned */,
      21,    1,  204,    2, 0x06 /* Public */,
      21,    0,  207,    2, 0x26 /* Public | MethodCloned */,
      23,    1,  208,    2, 0x06 /* Public */,
      23,    0,  211,    2, 0x26 /* Public | MethodCloned */,
      26,    0,  212,    2, 0x06 /* Public */,
      27,    0,  213,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    3,  214,    2, 0x0a /* Public */,
      28,    2,  221,    2, 0x2a /* Public | MethodCloned */,
      28,    1,  226,    2, 0x2a /* Public | MethodCloned */,
      33,    2,  229,    2, 0x0a /* Public */,
      33,    1,  234,    2, 0x2a /* Public | MethodCloned */,
      36,    2,  237,    2, 0x0a /* Public */,
      36,    1,  242,    2, 0x2a /* Public | MethodCloned */,
      37,    0,  245,    2, 0x0a /* Public */,
      38,    2,  246,    2, 0x0a /* Public */,
      38,    1,  251,    2, 0x2a /* Public | MethodCloned */,
      38,    0,  254,    2, 0x2a /* Public | MethodCloned */,
      41,    1,  255,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QObjectStar,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,   13,   15,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,   13,   15,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 20,   19,   15,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 20,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 30, QMetaType::Bool,   29,   31,   32,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 30,   29,   31,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 34,    5,   35,
    QMetaType::Bool, QMetaType::QObjectStar,    5,
    0x80000000 | 20, 0x80000000 | 14, 0x80000000 | 34,   15,   35,
    0x80000000 | 20, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   39,   40,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    5,

 // properties: name, type, flags
      42, QMetaType::QString, 0x00095001,
      43, QMetaType::QString, 0x00095001,
      44, QMetaType::Int, 0x00095103,
      45, QMetaType::Int, 0x00095001,
      46, 0x80000000 | 47, 0x00095009,
      48, QMetaType::Int, 0x00095001,
      49, QMetaType::Bool, 0x00095001,
      50, QMetaType::Int, 0x00095001,

 // enums: name, flags, count, data
      51, 0x0,    5,  298,
      57, 0x0,    3,  308,
      61, 0x0,    5,  314,
      47, 0x0,    4,  324,

 // enum data: key, value
      52, uint(Qtilities::Core::Observer::Allowed),
      53, uint(Qtilities::Core::Observer::Conditional),
      54, uint(Qtilities::Core::Observer::Rejected),
      55, uint(Qtilities::Core::Observer::IsParentObserver),
      56, uint(Qtilities::Core::Observer::LastScopedObserver),
      58, uint(Qtilities::Core::Observer::SubjectAdded),
      59, uint(Qtilities::Core::Observer::SubjectRemoved),
      60, uint(Qtilities::Core::Observer::CyclicProcess),
      62, uint(Qtilities::Core::Observer::ManualOwnership),
      63, uint(Qtilities::Core::Observer::AutoOwnership),
      64, uint(Qtilities::Core::Observer::SpecificObserverOwnership),
      65, uint(Qtilities::Core::Observer::ObserverScopeOwnership),
      66, uint(Qtilities::Core::Observer::OwnedBySubjectOwnership),
      67, uint(Qtilities::Core::Observer::FullAccess),
      68, uint(Qtilities::Core::Observer::ReadOnlyAccess),
      69, uint(Qtilities::Core::Observer::LockedAccess),
      70, uint(Qtilities::Core::Observer::InvalidAccess),

       0        // eod
};

void Qtilities::Core::Observer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Observer *_t = static_cast<Observer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modificationStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->subjectDeleted((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->aboutToBeDeleted(); break;
        case 3: _t->allSubjectsAboutToBeDeleted(); break;
        case 4: _t->allSubjectsDeleted(); break;
        case 5: _t->allSubjectsAboutToBeDetached(); break;
        case 6: _t->allSubjectsDetached(); break;
        case 7: _t->monitoredPropertyChanged((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< QList<QObject*>(*)>(_a[2]))); break;
        case 8: _t->monitoredPropertyChanged((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 9: _t->propertyChangeFiltered((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< QList<QObject*>(*)>(_a[2]))); break;
        case 10: _t->propertyChangeFiltered((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 11: _t->numberOfSubjectsChanged((*reinterpret_cast< Observer::SubjectChangeIndication(*)>(_a[1])),(*reinterpret_cast< QList<QPointer<QObject> >(*)>(_a[2]))); break;
        case 12: _t->numberOfSubjectsChanged((*reinterpret_cast< Observer::SubjectChangeIndication(*)>(_a[1]))); break;
        case 13: _t->layoutChanged((*reinterpret_cast< QList<QPointer<QObject> >(*)>(_a[1]))); break;
        case 14: _t->layoutChanged(); break;
        case 15: _t->dataChanged((*reinterpret_cast< Observer*(*)>(_a[1]))); break;
        case 16: _t->dataChanged(); break;
        case 17: _t->processingCycleStarted(); break;
        case 18: _t->processingCycleEnded(); break;
        case 19: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< IModificationNotifier::NotificationTargets(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 20: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< IModificationNotifier::NotificationTargets(*)>(_a[2]))); break;
        case 21: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: { bool _r = _t->detachSubject((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->detachSubject((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { QList<QPointer<QObject> > _r = _t->detachSubjects((*reinterpret_cast< QList<QObject*>(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QPointer<QObject> >*>(_a[0]) = std::move(_r); }  break;
        case 25: { QList<QPointer<QObject> > _r = _t->detachSubjects((*reinterpret_cast< QList<QObject*>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QPointer<QObject> >*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->detachAll(); break;
        case 27: _t->deleteAll((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->deleteAll((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->deleteAll(); break;
        case 30: _t->handle_deletedSubject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPointer<QObject> > >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPointer<QObject> > >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Observer* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Observer::*_t)(bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Observer::modificationStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Observer::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Observer::subjectDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Observer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Observer::aboutToBeDeleted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Observer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Observer::allSubjectsAboutToBeDeleted)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Observer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Observer::allSubjectsDeleted)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Observer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Observer::allSubjectsAboutToBeDetached)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Observer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Observer::allSubjectsDetached)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Observer::*_t)(const char * , QList<QObject*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Observer::monitoredPropertyChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Observer::*_t)(const char * , QList<QObject*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Observer::propertyChangeFiltered)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Observer::*_t)(Observer::SubjectChangeIndication , QList<QPointer<QObject> > );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Observer::numberOfSubjectsChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Observer::*_t)(QList<QPointer<QObject> > );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Observer::layoutChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (Observer::*_t)(Observer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Observer::dataChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (Observer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Observer::processingCycleStarted)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (Observer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Observer::processingCycleEnded)) {
                *result = 18;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Observer *_t = static_cast<Observer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->observerName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->observerDescription(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->subjectLimit(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->subjectCount(); break;
        case 4: *reinterpret_cast< AccessMode*>(_v) = _t->accessMode(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->observerID(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isModified(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->processingCycleCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Observer *_t = static_cast<Observer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setSubjectLimit(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qtilities::Core::Observer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Core__Observer.data,
      qt_meta_data_Qtilities__Core__Observer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::Observer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::Observer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__Observer.stringdata0))
        return static_cast<void*>(const_cast< Observer*>(this));
    if (!strcmp(_clname, "IExportable"))
        return static_cast< IExportable*>(const_cast< Observer*>(this));
    if (!strcmp(_clname, "IModificationNotifier"))
        return static_cast< IModificationNotifier*>(const_cast< Observer*>(this));
    if (!strcmp(_clname, "IExportableObserver"))
        return static_cast< IExportableObserver*>(const_cast< Observer*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.IExportable/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IExportable*>(const_cast< Observer*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.IExportableObserver/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IExportableObserver*>(const_cast< Observer*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.IModificationNotifier/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IModificationNotifier*>(const_cast< Observer*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::Core::Observer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qtilities::Core::Observer::modificationStateChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Qtilities::Core::Observer *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::Core::Observer::subjectDeleted(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qtilities::Core::Observer::aboutToBeDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Qtilities::Core::Observer::allSubjectsAboutToBeDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Qtilities::Core::Observer::allSubjectsDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Qtilities::Core::Observer::allSubjectsAboutToBeDetached()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Qtilities::Core::Observer::allSubjectsDetached()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Qtilities::Core::Observer::monitoredPropertyChanged(const char * _t1, QList<QObject*> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 9
void Qtilities::Core::Observer::propertyChangeFiltered(const char * _t1, QList<QObject*> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 11
void Qtilities::Core::Observer::numberOfSubjectsChanged(Observer::SubjectChangeIndication _t1, QList<QPointer<QObject> > _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 13
void Qtilities::Core::Observer::layoutChanged(QList<QPointer<QObject> > _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 15
void Qtilities::Core::Observer::dataChanged(Observer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 17
void Qtilities::Core::Observer::processingCycleStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void Qtilities::Core::Observer::processingCycleEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
