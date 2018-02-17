/****************************************************************************
** Meta object code from reading C++ file 'ProjectManagementConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ProjectManagement/source/ProjectManagementConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProjectManagementConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__ProjectManagement__ProjectManagementConfig_t {
    QByteArrayData data[19];
    char stringdata0[439];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__ProjectManagement__ProjectManagementConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__ProjectManagement__ProjectManagementConfig_t qt_meta_stringdata_Qtilities__ProjectManagement__ProjectManagementConfig = {
    {
QT_MOC_LITERAL(0, 0, 53), // "Qtilities::ProjectManagement:..."
QT_MOC_LITERAL(1, 54, 24), // "handleCurrentItemChanged"
QT_MOC_LITERAL(2, 79, 0), // ""
QT_MOC_LITERAL(3, 80, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(4, 98, 7), // "current"
QT_MOC_LITERAL(5, 106, 8), // "previous"
QT_MOC_LITERAL(6, 115, 36), // "handleActiveCustomProjectPath..."
QT_MOC_LITERAL(7, 152, 4), // "item"
QT_MOC_LITERAL(8, 157, 25), // "handle_chkOpenLastProject"
QT_MOC_LITERAL(9, 183, 6), // "toggle"
QT_MOC_LITERAL(10, 190, 28), // "handle_chkCreateNewOnStartup"
QT_MOC_LITERAL(11, 219, 32), // "handle_btnClearRecentProjectList"
QT_MOC_LITERAL(12, 252, 30), // "handle_chkSaveModifiedProjects"
QT_MOC_LITERAL(13, 283, 28), // "handle_radioPromptUserToSave"
QT_MOC_LITERAL(14, 312, 29), // "handle_radioSaveAutomatically"
QT_MOC_LITERAL(15, 342, 31), // "handle_chkUseCustomProjectsPath"
QT_MOC_LITERAL(16, 374, 20), // "on_btnRemove_clicked"
QT_MOC_LITERAL(17, 395, 17), // "on_btnAdd_clicked"
QT_MOC_LITERAL(18, 413, 25) // "refreshCustomProjectPaths"

    },
    "Qtilities::ProjectManagement::ProjectManagementConfig\0"
    "handleCurrentItemChanged\0\0QTableWidgetItem*\0"
    "current\0previous\0handleActiveCustomProjectPathChanged\0"
    "item\0handle_chkOpenLastProject\0toggle\0"
    "handle_chkCreateNewOnStartup\0"
    "handle_btnClearRecentProjectList\0"
    "handle_chkSaveModifiedProjects\0"
    "handle_radioPromptUserToSave\0"
    "handle_radioSaveAutomatically\0"
    "handle_chkUseCustomProjectsPath\0"
    "on_btnRemove_clicked\0on_btnAdd_clicked\0"
    "refreshCustomProjectPaths"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__ProjectManagement__ProjectManagementConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x0a /* Public */,
       6,    1,   79,    2, 0x0a /* Public */,
       8,    1,   82,    2, 0x0a /* Public */,
      10,    1,   85,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    1,   89,    2, 0x0a /* Public */,
      13,    1,   92,    2, 0x0a /* Public */,
      14,    1,   95,    2, 0x0a /* Public */,
      15,    1,   98,    2, 0x0a /* Public */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Qtilities::ProjectManagement::ProjectManagementConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProjectManagementConfig *_t = static_cast<ProjectManagementConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleCurrentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->handleActiveCustomProjectPathChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->handle_chkOpenLastProject((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->handle_chkCreateNewOnStartup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->handle_btnClearRecentProjectList(); break;
        case 5: _t->handle_chkSaveModifiedProjects((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->handle_radioPromptUserToSave((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->handle_radioSaveAutomatically((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->handle_chkUseCustomProjectsPath((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_btnRemove_clicked(); break;
        case 10: _t->on_btnAdd_clicked(); break;
        case 11: _t->refreshCustomProjectPaths(); break;
        default: ;
        }
    }
}

const QMetaObject Qtilities::ProjectManagement::ProjectManagementConfig::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtilities__ProjectManagement__ProjectManagementConfig.data,
      qt_meta_data_Qtilities__ProjectManagement__ProjectManagementConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::ProjectManagement::ProjectManagementConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::ProjectManagement::ProjectManagementConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__ProjectManagement__ProjectManagementConfig.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IConfigPage"))
        return static_cast< IConfigPage*>(this);
    if (!strcmp(_clname, "com.Qtilities.CoreGui.IConfigPage/1.0"))
        return static_cast< Qtilities::CoreGui::Interfaces::IConfigPage*>(this);
    return QWidget::qt_metacast(_clname);
}

int Qtilities::ProjectManagement::ProjectManagementConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
