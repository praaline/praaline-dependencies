/****************************************************************************
** Meta object code from reading C++ file 'ProjectManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ProjectManagement/source/ProjectManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProjectManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__ProjectManagement__ProjectManager_t {
    QByteArrayData data[40];
    char stringdata0[865];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__ProjectManagement__ProjectManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__ProjectManagement__ProjectManager_t qt_meta_stringdata_Qtilities__ProjectManagement__ProjectManager = {
    {
QT_MOC_LITERAL(0, 0, 44), // "Qtilities::ProjectManagement:..."
QT_MOC_LITERAL(1, 45, 24), // "modificationStateChanged"
QT_MOC_LITERAL(2, 70, 0), // ""
QT_MOC_LITERAL(3, 71, 11), // "is_modified"
QT_MOC_LITERAL(4, 83, 21), // "currentProjectChanged"
QT_MOC_LITERAL(5, 105, 9), // "IProject*"
QT_MOC_LITERAL(6, 115, 7), // "project"
QT_MOC_LITERAL(7, 123, 22), // "projectCreationStarted"
QT_MOC_LITERAL(8, 146, 23), // "projectCreationFinished"
QT_MOC_LITERAL(9, 170, 21), // "projectLoadingStarted"
QT_MOC_LITERAL(10, 192, 12), // "project_file"
QT_MOC_LITERAL(11, 205, 22), // "projectLoadingFinished"
QT_MOC_LITERAL(12, 228, 7), // "success"
QT_MOC_LITERAL(13, 236, 20), // "projectSavingStarted"
QT_MOC_LITERAL(14, 257, 21), // "projectSavingFinished"
QT_MOC_LITERAL(15, 279, 21), // "projectClosingStarted"
QT_MOC_LITERAL(16, 301, 22), // "projectClosingFinished"
QT_MOC_LITERAL(17, 324, 21), // "recentProjectsChanged"
QT_MOC_LITERAL(18, 346, 5), // "names"
QT_MOC_LITERAL(19, 352, 5), // "paths"
QT_MOC_LITERAL(20, 358, 25), // "customProjectPathsChanged"
QT_MOC_LITERAL(21, 384, 38), // "projectSaveRequestedWithoutOp..."
QT_MOC_LITERAL(22, 423, 19), // "clearRecentProjects"
QT_MOC_LITERAL(23, 443, 31), // "removeNonExistingRecentProjects"
QT_MOC_LITERAL(24, 475, 23), // "handle_actionProjectNew"
QT_MOC_LITERAL(25, 499, 24), // "handle_actionProjectOpen"
QT_MOC_LITERAL(26, 524, 25), // "handle_actionProjectClose"
QT_MOC_LITERAL(27, 550, 24), // "handle_actionProjectSave"
QT_MOC_LITERAL(28, 575, 26), // "handle_actionProjectSaveAs"
QT_MOC_LITERAL(29, 602, 26), // "handle_projectStateChanged"
QT_MOC_LITERAL(30, 629, 33), // "handleApplicationBusyStateCha..."
QT_MOC_LITERAL(31, 663, 21), // "refreshRecentProjects"
QT_MOC_LITERAL(32, 685, 34), // "handleRecentProjectActionTrig..."
QT_MOC_LITERAL(33, 720, 20), // "setModificationState"
QT_MOC_LITERAL(34, 741, 9), // "new_state"
QT_MOC_LITERAL(35, 751, 42), // "IModificationNotifier::Notifi..."
QT_MOC_LITERAL(36, 794, 19), // "force_notifications"
QT_MOC_LITERAL(37, 814, 30), // "ModifiedProjectsHandlingPolicy"
QT_MOC_LITERAL(38, 845, 10), // "PromptUser"
QT_MOC_LITERAL(39, 856, 8) // "AutoSave"

    },
    "Qtilities::ProjectManagement::ProjectManager\0"
    "modificationStateChanged\0\0is_modified\0"
    "currentProjectChanged\0IProject*\0project\0"
    "projectCreationStarted\0projectCreationFinished\0"
    "projectLoadingStarted\0project_file\0"
    "projectLoadingFinished\0success\0"
    "projectSavingStarted\0projectSavingFinished\0"
    "projectClosingStarted\0projectClosingFinished\0"
    "recentProjectsChanged\0names\0paths\0"
    "customProjectPathsChanged\0"
    "projectSaveRequestedWithoutOpenProject\0"
    "clearRecentProjects\0removeNonExistingRecentProjects\0"
    "handle_actionProjectNew\0"
    "handle_actionProjectOpen\0"
    "handle_actionProjectClose\0"
    "handle_actionProjectSave\0"
    "handle_actionProjectSaveAs\0"
    "handle_projectStateChanged\0"
    "handleApplicationBusyStateChanged\0"
    "refreshRecentProjects\0"
    "handleRecentProjectActionTriggered\0"
    "setModificationState\0new_state\0"
    "IModificationNotifier::NotificationTargets\0"
    "force_notifications\0ModifiedProjectsHandlingPolicy\0"
    "PromptUser\0AutoSave"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__ProjectManagement__ProjectManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       1,  212, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       4,    1,  152,    2, 0x06 /* Public */,
       7,    0,  155,    2, 0x06 /* Public */,
       8,    0,  156,    2, 0x06 /* Public */,
       9,    1,  157,    2, 0x06 /* Public */,
      11,    2,  160,    2, 0x06 /* Public */,
      13,    1,  165,    2, 0x06 /* Public */,
      14,    2,  168,    2, 0x06 /* Public */,
      15,    1,  173,    2, 0x06 /* Public */,
      16,    1,  176,    2, 0x06 /* Public */,
      17,    2,  179,    2, 0x06 /* Public */,
      20,    0,  184,    2, 0x06 /* Public */,
      21,    0,  185,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  186,    2, 0x0a /* Public */,
      23,    0,  187,    2, 0x0a /* Public */,
      24,    0,  188,    2, 0x08 /* Private */,
      25,    0,  189,    2, 0x08 /* Private */,
      26,    0,  190,    2, 0x08 /* Private */,
      27,    0,  191,    2, 0x08 /* Private */,
      28,    0,  192,    2, 0x08 /* Private */,
      29,    0,  193,    2, 0x08 /* Private */,
      30,    0,  194,    2, 0x08 /* Private */,
      31,    0,  195,    2, 0x08 /* Private */,
      32,    0,  196,    2, 0x08 /* Private */,
      33,    3,  197,    2, 0x0a /* Public */,
      33,    2,  204,    2, 0x2a /* Public | MethodCloned */,
      33,    1,  209,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   10,   12,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   10,   12,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QStringList,   18,   19,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 35, QMetaType::Bool,   34,    2,   36,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 35,   34,    2,
    QMetaType::Void, QMetaType::Bool,   34,

 // enums: name, flags, count, data
      37, 0x0,    2,  216,

 // enum data: key, value
      38, uint(Qtilities::ProjectManagement::ProjectManager::PromptUser),
      39, uint(Qtilities::ProjectManagement::ProjectManager::AutoSave),

       0        // eod
};

void Qtilities::ProjectManagement::ProjectManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProjectManager *_t = static_cast<ProjectManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modificationStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->currentProjectChanged((*reinterpret_cast< IProject*(*)>(_a[1]))); break;
        case 2: _t->projectCreationStarted(); break;
        case 3: _t->projectCreationFinished(); break;
        case 4: _t->projectLoadingStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->projectLoadingFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->projectSavingStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->projectSavingFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->projectClosingStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->projectClosingFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->recentProjectsChanged((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 11: _t->customProjectPathsChanged(); break;
        case 12: _t->projectSaveRequestedWithoutOpenProject(); break;
        case 13: _t->clearRecentProjects(); break;
        case 14: { QStringList _r = _t->removeNonExistingRecentProjects();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->handle_actionProjectNew(); break;
        case 16: _t->handle_actionProjectOpen(); break;
        case 17: _t->handle_actionProjectClose(); break;
        case 18: _t->handle_actionProjectSave(); break;
        case 19: _t->handle_actionProjectSaveAs(); break;
        case 20: _t->handle_projectStateChanged(); break;
        case 21: _t->handleApplicationBusyStateChanged(); break;
        case 22: _t->refreshRecentProjects(); break;
        case 23: _t->handleRecentProjectActionTriggered(); break;
        case 24: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< IModificationNotifier::NotificationTargets(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 25: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< IModificationNotifier::NotificationTargets(*)>(_a[2]))); break;
        case 26: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProjectManager::*_t)(bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectManager::modificationStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ProjectManager::*_t)(IProject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectManager::currentProjectChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ProjectManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectManager::projectCreationStarted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ProjectManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectManager::projectCreationFinished)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ProjectManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectManager::projectLoadingStarted)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ProjectManager::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectManager::projectLoadingFinished)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ProjectManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectManager::projectSavingStarted)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (ProjectManager::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectManager::projectSavingFinished)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (ProjectManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectManager::projectClosingStarted)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (ProjectManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectManager::projectClosingFinished)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (ProjectManager::*_t)(const QStringList & , const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectManager::recentProjectsChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (ProjectManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectManager::customProjectPathsChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (ProjectManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectManager::projectSaveRequestedWithoutOpenProject)) {
                *result = 12;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::ProjectManagement::ProjectManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__ProjectManagement__ProjectManager.data,
      qt_meta_data_Qtilities__ProjectManagement__ProjectManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::ProjectManagement::ProjectManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::ProjectManagement::ProjectManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__ProjectManagement__ProjectManager.stringdata0))
        return static_cast<void*>(const_cast< ProjectManager*>(this));
    if (!strcmp(_clname, "IModificationNotifier"))
        return static_cast< IModificationNotifier*>(const_cast< ProjectManager*>(this));
    if (!strcmp(_clname, "ITaskContainer"))
        return static_cast< ITaskContainer*>(const_cast< ProjectManager*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.IModificationNotifier/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IModificationNotifier*>(const_cast< ProjectManager*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::ProjectManagement::ProjectManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::ProjectManagement::ProjectManager::modificationStateChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Qtilities::ProjectManagement::ProjectManager *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::ProjectManagement::ProjectManager::currentProjectChanged(IProject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qtilities::ProjectManagement::ProjectManager::projectCreationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Qtilities::ProjectManagement::ProjectManager::projectCreationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Qtilities::ProjectManagement::ProjectManager::projectLoadingStarted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Qtilities::ProjectManagement::ProjectManager::projectLoadingFinished(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Qtilities::ProjectManagement::ProjectManager::projectSavingStarted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Qtilities::ProjectManagement::ProjectManager::projectSavingFinished(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Qtilities::ProjectManagement::ProjectManager::projectClosingStarted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Qtilities::ProjectManagement::ProjectManager::projectClosingFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Qtilities::ProjectManagement::ProjectManager::recentProjectsChanged(const QStringList & _t1, const QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Qtilities::ProjectManagement::ProjectManager::customProjectPathsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Qtilities::ProjectManagement::ProjectManager::projectSaveRequestedWithoutOpenProject()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
