/****************************************************************************
** Meta object code from reading C++ file 'TaskSummaryWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/TaskSummaryWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskSummaryWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__TaskSummaryWidget_t {
    QByteArrayData data[21];
    char stringdata0[433];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__TaskSummaryWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__TaskSummaryWidget_t qt_meta_stringdata_Qtilities__CoreGui__TaskSummaryWidget = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Qtilities::CoreGui::TaskSumma..."
QT_MOC_LITERAL(1, 38, 29), // "numberOfDisplayedTasksChanged"
QT_MOC_LITERAL(2, 68, 0), // ""
QT_MOC_LITERAL(3, 69, 23), // "number_of_visible_tasks"
QT_MOC_LITERAL(4, 93, 7), // "addTask"
QT_MOC_LITERAL(5, 101, 3), // "obj"
QT_MOC_LITERAL(6, 105, 22), // "handleTaskStateChanged"
QT_MOC_LITERAL(7, 128, 31), // "handleSingleTaskWidgetDestroyed"
QT_MOC_LITERAL(8, 160, 21), // "handleTaskTypeChanged"
QT_MOC_LITERAL(9, 182, 12), // "hideIfNeeded"
QT_MOC_LITERAL(10, 195, 18), // "TaskDisplayOptions"
QT_MOC_LITERAL(11, 214, 20), // "DisplayOnlyBusyTasks"
QT_MOC_LITERAL(12, 235, 15), // "DisplayAllTasks"
QT_MOC_LITERAL(13, 251, 16), // "TaskRemoveOption"
QT_MOC_LITERAL(14, 268, 17), // "RemoveWhenDeleted"
QT_MOC_LITERAL(15, 286, 31), // "RemoveWhenCompletedSuccessfully"
QT_MOC_LITERAL(16, 318, 43), // "RemoveWhenCompletedSuccessful..."
QT_MOC_LITERAL(17, 362, 16), // "RemoveWhenFailed"
QT_MOC_LITERAL(18, 379, 17), // "RemoveWhenStopped"
QT_MOC_LITERAL(19, 397, 13), // "RemoveDefault"
QT_MOC_LITERAL(20, 411, 21) // "TaskRemoveOptionFlags"

    },
    "Qtilities::CoreGui::TaskSummaryWidget\0"
    "numberOfDisplayedTasksChanged\0\0"
    "number_of_visible_tasks\0addTask\0obj\0"
    "handleTaskStateChanged\0"
    "handleSingleTaskWidgetDestroyed\0"
    "handleTaskTypeChanged\0hideIfNeeded\0"
    "TaskDisplayOptions\0DisplayOnlyBusyTasks\0"
    "DisplayAllTasks\0TaskRemoveOption\0"
    "RemoveWhenDeleted\0RemoveWhenCompletedSuccessfully\0"
    "RemoveWhenCompletedSuccessfullyWithWarnings\0"
    "RemoveWhenFailed\0RemoveWhenStopped\0"
    "RemoveDefault\0TaskRemoveOptionFlags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__TaskSummaryWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       3,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      10, 0x0,    2,   66,
      13, 0x0,    6,   70,
      20, 0x1,    6,   82,

 // enum data: key, value
      11, uint(Qtilities::CoreGui::TaskSummaryWidget::DisplayOnlyBusyTasks),
      12, uint(Qtilities::CoreGui::TaskSummaryWidget::DisplayAllTasks),
      14, uint(Qtilities::CoreGui::TaskSummaryWidget::RemoveWhenDeleted),
      15, uint(Qtilities::CoreGui::TaskSummaryWidget::RemoveWhenCompletedSuccessfully),
      16, uint(Qtilities::CoreGui::TaskSummaryWidget::RemoveWhenCompletedSuccessfullyWithWarnings),
      17, uint(Qtilities::CoreGui::TaskSummaryWidget::RemoveWhenFailed),
      18, uint(Qtilities::CoreGui::TaskSummaryWidget::RemoveWhenStopped),
      19, uint(Qtilities::CoreGui::TaskSummaryWidget::RemoveDefault),
      14, uint(Qtilities::CoreGui::TaskSummaryWidget::RemoveWhenDeleted),
      15, uint(Qtilities::CoreGui::TaskSummaryWidget::RemoveWhenCompletedSuccessfully),
      16, uint(Qtilities::CoreGui::TaskSummaryWidget::RemoveWhenCompletedSuccessfullyWithWarnings),
      17, uint(Qtilities::CoreGui::TaskSummaryWidget::RemoveWhenFailed),
      18, uint(Qtilities::CoreGui::TaskSummaryWidget::RemoveWhenStopped),
      19, uint(Qtilities::CoreGui::TaskSummaryWidget::RemoveDefault),

       0        // eod
};

void Qtilities::CoreGui::TaskSummaryWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TaskSummaryWidget *_t = static_cast<TaskSummaryWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numberOfDisplayedTasksChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->addTask((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->handleTaskStateChanged(); break;
        case 3: _t->handleSingleTaskWidgetDestroyed(); break;
        case 4: _t->handleTaskTypeChanged(); break;
        case 5: _t->hideIfNeeded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TaskSummaryWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TaskSummaryWidget::numberOfDisplayedTasksChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::TaskSummaryWidget::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__TaskSummaryWidget.data,
      qt_meta_data_Qtilities__CoreGui__TaskSummaryWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::TaskSummaryWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::TaskSummaryWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__TaskSummaryWidget.stringdata0))
        return static_cast<void*>(const_cast< TaskSummaryWidget*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Qtilities::CoreGui::TaskSummaryWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::TaskSummaryWidget::numberOfDisplayedTasksChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
