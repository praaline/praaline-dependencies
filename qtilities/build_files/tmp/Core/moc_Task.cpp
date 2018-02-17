/****************************************************************************
** Meta object code from reading C++ file 'Task.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/Task.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Task.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__Task_t {
    QByteArrayData data[79];
    char stringdata0[1179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__Task_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__Task_t qt_meta_stringdata_Qtilities__Core__Task = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Qtilities::Core::Task"
QT_MOC_LITERAL(1, 22, 16), // "newMessageLogged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "message"
QT_MOC_LITERAL(4, 48, 19), // "Logger::MessageType"
QT_MOC_LITERAL(5, 68, 22), // "taskElapsedTimeChanged"
QT_MOC_LITERAL(6, 91, 4), // "msec"
QT_MOC_LITERAL(7, 96, 11), // "taskStarted"
QT_MOC_LITERAL(8, 108, 17), // "expected_subtasks"
QT_MOC_LITERAL(9, 126, 4), // "type"
QT_MOC_LITERAL(10, 131, 16), // "subTaskCompleted"
QT_MOC_LITERAL(11, 148, 21), // "number_task_completed"
QT_MOC_LITERAL(12, 170, 13), // "taskCompleted"
QT_MOC_LITERAL(13, 184, 17), // "ITask::TaskResult"
QT_MOC_LITERAL(14, 202, 6), // "result"
QT_MOC_LITERAL(15, 209, 10), // "taskPaused"
QT_MOC_LITERAL(16, 220, 11), // "taskResumed"
QT_MOC_LITERAL(17, 232, 11), // "taskStopped"
QT_MOC_LITERAL(18, 244, 16), // "taskAboutToPause"
QT_MOC_LITERAL(19, 261, 19), // "taskAboutToComplete"
QT_MOC_LITERAL(20, 281, 26), // "taskSubTaskAboutToComplete"
QT_MOC_LITERAL(21, 308, 15), // "taskAboutToStop"
QT_MOC_LITERAL(22, 324, 16), // "taskAboutToStart"
QT_MOC_LITERAL(23, 341, 17), // "taskAboutToResume"
QT_MOC_LITERAL(24, 359, 12), // "stateChanged"
QT_MOC_LITERAL(25, 372, 16), // "ITask::TaskState"
QT_MOC_LITERAL(26, 389, 9), // "new_state"
QT_MOC_LITERAL(27, 399, 9), // "old_state"
QT_MOC_LITERAL(28, 409, 16), // "busyStateChanged"
QT_MOC_LITERAL(29, 426, 20), // "ITask::TaskBusyState"
QT_MOC_LITERAL(30, 447, 14), // "new_busy_state"
QT_MOC_LITERAL(31, 462, 14), // "old_busy_state"
QT_MOC_LITERAL(32, 477, 15), // "taskTypeChanged"
QT_MOC_LITERAL(33, 493, 15), // "ITask::TaskType"
QT_MOC_LITERAL(34, 509, 13), // "new_task_type"
QT_MOC_LITERAL(35, 523, 20), // "displayedNameChanged"
QT_MOC_LITERAL(36, 544, 14), // "displayed_name"
QT_MOC_LITERAL(37, 559, 15), // "canStartChanged"
QT_MOC_LITERAL(38, 575, 9), // "new_value"
QT_MOC_LITERAL(39, 585, 14), // "canStopChanged"
QT_MOC_LITERAL(40, 600, 15), // "canPauseChanged"
QT_MOC_LITERAL(41, 616, 16), // "startTaskRequest"
QT_MOC_LITERAL(42, 633, 15), // "stopTaskRequest"
QT_MOC_LITERAL(43, 649, 16), // "pauseTaskRequest"
QT_MOC_LITERAL(44, 666, 17), // "resumeTaskRequest"
QT_MOC_LITERAL(45, 684, 10), // "setCanStop"
QT_MOC_LITERAL(46, 695, 8), // "can_stop"
QT_MOC_LITERAL(47, 704, 11), // "setCanStart"
QT_MOC_LITERAL(48, 716, 9), // "can_start"
QT_MOC_LITERAL(49, 726, 11), // "setCanPause"
QT_MOC_LITERAL(50, 738, 9), // "can_pause"
QT_MOC_LITERAL(51, 748, 5), // "start"
QT_MOC_LITERAL(52, 754, 4), // "stop"
QT_MOC_LITERAL(53, 759, 5), // "pause"
QT_MOC_LITERAL(54, 765, 6), // "resume"
QT_MOC_LITERAL(55, 772, 9), // "startTask"
QT_MOC_LITERAL(56, 782, 8), // "stopTask"
QT_MOC_LITERAL(57, 791, 9), // "pauseTask"
QT_MOC_LITERAL(58, 801, 10), // "resumeTask"
QT_MOC_LITERAL(59, 812, 20), // "addCompletedSubTasks"
QT_MOC_LITERAL(60, 833, 19), // "number_of_sub_tasks"
QT_MOC_LITERAL(61, 853, 12), // "completeTask"
QT_MOC_LITERAL(62, 866, 27), // "broadcastElapsedTimeChanged"
QT_MOC_LITERAL(63, 894, 4), // "Name"
QT_MOC_LITERAL(64, 899, 11), // "DisplayName"
QT_MOC_LITERAL(65, 911, 8), // "SubTasks"
QT_MOC_LITERAL(66, 920, 15), // "CurrentProgress"
QT_MOC_LITERAL(67, 936, 15), // "ClearLogOnStart"
QT_MOC_LITERAL(68, 952, 8), // "CanStart"
QT_MOC_LITERAL(69, 961, 8), // "CanPause"
QT_MOC_LITERAL(70, 970, 7), // "CanStop"
QT_MOC_LITERAL(71, 978, 12), // "TaskLifeTime"
QT_MOC_LITERAL(72, 991, 14), // "LifeTimeManual"
QT_MOC_LITERAL(73, 1006, 29), // "LifeTimeDestroyWhenSuccessful"
QT_MOC_LITERAL(74, 1036, 42), // "LifeTimeDestroyWhenSuccessful..."
QT_MOC_LITERAL(75, 1079, 26), // "LifeTimeDestroyWhenStopped"
QT_MOC_LITERAL(76, 1106, 25), // "LifeTimeDestroyWhenFailed"
QT_MOC_LITERAL(77, 1132, 28), // "LifeTimeDestroyWhenCompleted"
QT_MOC_LITERAL(78, 1161, 17) // "TaskLifeTimeFlags"

    },
    "Qtilities::Core::Task\0newMessageLogged\0"
    "\0message\0Logger::MessageType\0"
    "taskElapsedTimeChanged\0msec\0taskStarted\0"
    "expected_subtasks\0type\0subTaskCompleted\0"
    "number_task_completed\0taskCompleted\0"
    "ITask::TaskResult\0result\0taskPaused\0"
    "taskResumed\0taskStopped\0taskAboutToPause\0"
    "taskAboutToComplete\0taskSubTaskAboutToComplete\0"
    "taskAboutToStop\0taskAboutToStart\0"
    "taskAboutToResume\0stateChanged\0"
    "ITask::TaskState\0new_state\0old_state\0"
    "busyStateChanged\0ITask::TaskBusyState\0"
    "new_busy_state\0old_busy_state\0"
    "taskTypeChanged\0ITask::TaskType\0"
    "new_task_type\0displayedNameChanged\0"
    "displayed_name\0canStartChanged\0new_value\0"
    "canStopChanged\0canPauseChanged\0"
    "startTaskRequest\0stopTaskRequest\0"
    "pauseTaskRequest\0resumeTaskRequest\0"
    "setCanStop\0can_stop\0setCanStart\0"
    "can_start\0setCanPause\0can_pause\0start\0"
    "stop\0pause\0resume\0startTask\0stopTask\0"
    "pauseTask\0resumeTask\0addCompletedSubTasks\0"
    "number_of_sub_tasks\0completeTask\0"
    "broadcastElapsedTimeChanged\0Name\0"
    "DisplayName\0SubTasks\0CurrentProgress\0"
    "ClearLogOnStart\0CanStart\0CanPause\0"
    "CanStop\0TaskLifeTime\0LifeTimeManual\0"
    "LifeTimeDestroyWhenSuccessful\0"
    "LifeTimeDestroyWhenSuccessfullWithWarnings\0"
    "LifeTimeDestroyWhenStopped\0"
    "LifeTimeDestroyWhenFailed\0"
    "LifeTimeDestroyWhenCompleted\0"
    "TaskLifeTimeFlags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__Task[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      62,   14, // methods
       8,  506, // properties
       2,  530, // enums/sets
       0,    0, // constructors
       0,       // flags
      33,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  324,    2, 0x06 /* Public */,
       5,    1,  329,    2, 0x06 /* Public */,
       7,    3,  332,    2, 0x06 /* Public */,
       7,    2,  339,    2, 0x26 /* Public | MethodCloned */,
       7,    1,  344,    2, 0x26 /* Public | MethodCloned */,
       7,    0,  347,    2, 0x26 /* Public | MethodCloned */,
      10,    3,  348,    2, 0x06 /* Public */,
      10,    2,  355,    2, 0x26 /* Public | MethodCloned */,
      10,    1,  360,    2, 0x26 /* Public | MethodCloned */,
      10,    0,  363,    2, 0x26 /* Public | MethodCloned */,
      12,    3,  364,    2, 0x06 /* Public */,
      12,    2,  371,    2, 0x26 /* Public | MethodCloned */,
      12,    1,  376,    2, 0x26 /* Public | MethodCloned */,
      15,    0,  379,    2, 0x06 /* Public */,
      16,    0,  380,    2, 0x06 /* Public */,
      17,    0,  381,    2, 0x06 /* Public */,
      18,    0,  382,    2, 0x06 /* Public */,
      19,    0,  383,    2, 0x06 /* Public */,
      20,    0,  384,    2, 0x06 /* Public */,
      21,    0,  385,    2, 0x06 /* Public */,
      22,    0,  386,    2, 0x06 /* Public */,
      23,    0,  387,    2, 0x06 /* Public */,
      24,    2,  388,    2, 0x06 /* Public */,
      28,    2,  393,    2, 0x06 /* Public */,
      32,    1,  398,    2, 0x06 /* Public */,
      35,    1,  401,    2, 0x06 /* Public */,
      37,    1,  404,    2, 0x06 /* Public */,
      39,    1,  407,    2, 0x06 /* Public */,
      40,    1,  410,    2, 0x06 /* Public */,
      41,    0,  413,    2, 0x06 /* Public */,
      42,    0,  414,    2, 0x06 /* Public */,
      43,    0,  415,    2, 0x06 /* Public */,
      44,    0,  416,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      45,    1,  417,    2, 0x0a /* Public */,
      47,    1,  420,    2, 0x0a /* Public */,
      49,    1,  423,    2, 0x0a /* Public */,
      51,    0,  426,    2, 0x0a /* Public */,
      52,    0,  427,    2, 0x0a /* Public */,
      53,    0,  428,    2, 0x0a /* Public */,
      54,    0,  429,    2, 0x0a /* Public */,
      55,    3,  430,    2, 0x0a /* Public */,
      55,    2,  437,    2, 0x2a /* Public | MethodCloned */,
      55,    1,  442,    2, 0x2a /* Public | MethodCloned */,
      55,    0,  445,    2, 0x2a /* Public | MethodCloned */,
      56,    2,  446,    2, 0x0a /* Public */,
      56,    1,  451,    2, 0x2a /* Public | MethodCloned */,
      56,    0,  454,    2, 0x2a /* Public | MethodCloned */,
      57,    2,  455,    2, 0x0a /* Public */,
      57,    1,  460,    2, 0x2a /* Public | MethodCloned */,
      57,    0,  463,    2, 0x2a /* Public | MethodCloned */,
      58,    2,  464,    2, 0x0a /* Public */,
      58,    1,  469,    2, 0x2a /* Public | MethodCloned */,
      58,    0,  472,    2, 0x2a /* Public | MethodCloned */,
      59,    3,  473,    2, 0x0a /* Public */,
      59,    2,  480,    2, 0x2a /* Public | MethodCloned */,
      59,    1,  485,    2, 0x2a /* Public | MethodCloned */,
      59,    0,  488,    2, 0x2a /* Public | MethodCloned */,
      61,    3,  489,    2, 0x0a /* Public */,
      61,    2,  496,    2, 0x2a /* Public | MethodCloned */,
      61,    1,  501,    2, 0x2a /* Public | MethodCloned */,
      61,    0,  504,    2, 0x2a /* Public | MethodCloned */,
      62,    0,  505,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    2,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 4,    8,    3,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    3,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 4,   11,    3,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   11,    3,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::QString, 0x80000000 | 4,   14,    3,    9,
    QMetaType::Void, 0x80000000 | 13, QMetaType::QString,   14,    3,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25,   26,   27,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 29,   30,   31,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int, QMetaType::QString, 0x80000000 | 4,    8,    3,    9,
    QMetaType::Bool, QMetaType::Int, QMetaType::QString,    8,    3,
    QMetaType::Bool, QMetaType::Int,    8,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 4,    3,    9,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 4,    3,    9,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 4,    3,    9,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 4,   60,    3,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   60,    3,
    QMetaType::Void, QMetaType::Int,   60,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 13, QMetaType::QString, 0x80000000 | 4,   14,    3,    9,
    QMetaType::Bool, 0x80000000 | 13, QMetaType::QString,   14,    3,
    QMetaType::Bool, 0x80000000 | 13,   14,
    QMetaType::Bool,
    QMetaType::Void,

 // properties: name, type, flags
      63, QMetaType::QString, 0x00095001,
      64, QMetaType::QString, 0x00095001,
      65, QMetaType::Int, 0x00095001,
      66, QMetaType::Int, 0x00095001,
      67, QMetaType::Bool, 0x00095001,
      68, QMetaType::Bool, 0x00095001,
      69, QMetaType::Bool, 0x00095001,
      70, QMetaType::Bool, 0x00095001,

 // enums: name, flags, count, data
      71, 0x0,    6,  538,
      78, 0x1,    6,  550,

 // enum data: key, value
      72, uint(Qtilities::Core::Task::LifeTimeManual),
      73, uint(Qtilities::Core::Task::LifeTimeDestroyWhenSuccessful),
      74, uint(Qtilities::Core::Task::LifeTimeDestroyWhenSuccessfullWithWarnings),
      75, uint(Qtilities::Core::Task::LifeTimeDestroyWhenStopped),
      76, uint(Qtilities::Core::Task::LifeTimeDestroyWhenFailed),
      77, uint(Qtilities::Core::Task::LifeTimeDestroyWhenCompleted),
      72, uint(Qtilities::Core::Task::LifeTimeManual),
      73, uint(Qtilities::Core::Task::LifeTimeDestroyWhenSuccessful),
      74, uint(Qtilities::Core::Task::LifeTimeDestroyWhenSuccessfullWithWarnings),
      75, uint(Qtilities::Core::Task::LifeTimeDestroyWhenStopped),
      76, uint(Qtilities::Core::Task::LifeTimeDestroyWhenFailed),
      77, uint(Qtilities::Core::Task::LifeTimeDestroyWhenCompleted),

       0        // eod
};

void Qtilities::Core::Task::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Task *_t = static_cast<Task *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newMessageLogged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Logger::MessageType(*)>(_a[2]))); break;
        case 1: _t->taskElapsedTimeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->taskStarted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Logger::MessageType(*)>(_a[3]))); break;
        case 3: _t->taskStarted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->taskStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->taskStarted(); break;
        case 6: _t->subTaskCompleted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Logger::MessageType(*)>(_a[3]))); break;
        case 7: _t->subTaskCompleted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->subTaskCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->subTaskCompleted(); break;
        case 10: _t->taskCompleted((*reinterpret_cast< ITask::TaskResult(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Logger::MessageType(*)>(_a[3]))); break;
        case 11: _t->taskCompleted((*reinterpret_cast< ITask::TaskResult(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->taskCompleted((*reinterpret_cast< ITask::TaskResult(*)>(_a[1]))); break;
        case 13: _t->taskPaused(); break;
        case 14: _t->taskResumed(); break;
        case 15: _t->taskStopped(); break;
        case 16: _t->taskAboutToPause(); break;
        case 17: _t->taskAboutToComplete(); break;
        case 18: _t->taskSubTaskAboutToComplete(); break;
        case 19: _t->taskAboutToStop(); break;
        case 20: _t->taskAboutToStart(); break;
        case 21: _t->taskAboutToResume(); break;
        case 22: _t->stateChanged((*reinterpret_cast< ITask::TaskState(*)>(_a[1])),(*reinterpret_cast< ITask::TaskState(*)>(_a[2]))); break;
        case 23: _t->busyStateChanged((*reinterpret_cast< ITask::TaskBusyState(*)>(_a[1])),(*reinterpret_cast< ITask::TaskBusyState(*)>(_a[2]))); break;
        case 24: _t->taskTypeChanged((*reinterpret_cast< ITask::TaskType(*)>(_a[1]))); break;
        case 25: _t->displayedNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->canStartChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->canStopChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->canPauseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->startTaskRequest(); break;
        case 30: _t->stopTaskRequest(); break;
        case 31: _t->pauseTaskRequest(); break;
        case 32: _t->resumeTaskRequest(); break;
        case 33: _t->setCanStop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->setCanStart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->setCanPause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->start(); break;
        case 37: _t->stop(); break;
        case 38: _t->pause(); break;
        case 39: _t->resume(); break;
        case 40: { bool _r = _t->startTask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Logger::MessageType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 41: { bool _r = _t->startTask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { bool _r = _t->startTask((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 43: { bool _r = _t->startTask();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 44: { bool _r = _t->stopTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Logger::MessageType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: { bool _r = _t->stopTask((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 46: { bool _r = _t->stopTask();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 47: { bool _r = _t->pauseTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Logger::MessageType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 48: { bool _r = _t->pauseTask((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 49: { bool _r = _t->pauseTask();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 50: { bool _r = _t->resumeTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Logger::MessageType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 51: { bool _r = _t->resumeTask((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 52: { bool _r = _t->resumeTask();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->addCompletedSubTasks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Logger::MessageType(*)>(_a[3]))); break;
        case 54: _t->addCompletedSubTasks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 55: _t->addCompletedSubTasks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->addCompletedSubTasks(); break;
        case 57: { bool _r = _t->completeTask((*reinterpret_cast< ITask::TaskResult(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Logger::MessageType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 58: { bool _r = _t->completeTask((*reinterpret_cast< ITask::TaskResult(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 59: { bool _r = _t->completeTask((*reinterpret_cast< ITask::TaskResult(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 60: { bool _r = _t->completeTask();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 61: _t->broadcastElapsedTimeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Task::*_t)(const QString & , Logger::MessageType ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::newMessageLogged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Task::*_t)(int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::taskElapsedTimeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Task::*_t)(int , const QString & , Logger::MessageType ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::taskStarted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Task::*_t)(int , const QString & , Logger::MessageType ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::subTaskCompleted)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Task::*_t)(ITask::TaskResult , const QString & , Logger::MessageType ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::taskCompleted)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Task::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::taskPaused)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (Task::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::taskResumed)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (Task::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::taskStopped)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (Task::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::taskAboutToPause)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (Task::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::taskAboutToComplete)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (Task::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::taskSubTaskAboutToComplete)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (Task::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::taskAboutToStop)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (Task::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::taskAboutToStart)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (Task::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::taskAboutToResume)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (Task::*_t)(ITask::TaskState , ITask::TaskState ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::stateChanged)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (Task::*_t)(ITask::TaskBusyState , ITask::TaskBusyState ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::busyStateChanged)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (Task::*_t)(ITask::TaskType ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::taskTypeChanged)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (Task::*_t)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::displayedNameChanged)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (Task::*_t)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::canStartChanged)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (Task::*_t)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::canStopChanged)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (Task::*_t)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::canPauseChanged)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (Task::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::startTaskRequest)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (Task::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::stopTaskRequest)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (Task::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::pauseTaskRequest)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (Task::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::resumeTaskRequest)) {
                *result = 32;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Task *_t = static_cast<Task *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->taskName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->displayName(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->numberOfSubTasks(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentProgress(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->clearLogOnStart(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->canStart(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->canPause(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->canStop(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qtilities::Core::Task::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Core__Task.data,
      qt_meta_data_Qtilities__Core__Task,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::Task::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::Task::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__Task.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ITask"))
        return static_cast< ITask*>(this);
    if (!strcmp(_clname, "com.Qtilities.Core.ITask/1.0"))
        return static_cast< Qtilities::Core::Interfaces::ITask*>(this);
    return QObject::qt_metacast(_clname);
}

int Qtilities::Core::Task::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 62)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 62;
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
void Qtilities::Core::Task::newMessageLogged(const QString & _t1, Logger::MessageType _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::Core::Task::taskElapsedTimeChanged(int _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qtilities::Core::Task::taskStarted(int _t1, const QString & _t2, Logger::MessageType _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 6
void Qtilities::Core::Task::subTaskCompleted(int _t1, const QString & _t2, Logger::MessageType _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 6, _a);
}

// SIGNAL 10
void Qtilities::Core::Task::taskCompleted(ITask::TaskResult _t1, const QString & _t2, Logger::MessageType _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 10, _a);
}

// SIGNAL 13
void Qtilities::Core::Task::taskPaused()const
{
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Qtilities::Core::Task::taskResumed()const
{
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Qtilities::Core::Task::taskStopped()const
{
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Qtilities::Core::Task::taskAboutToPause()const
{
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Qtilities::Core::Task::taskAboutToComplete()const
{
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void Qtilities::Core::Task::taskSubTaskAboutToComplete()const
{
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void Qtilities::Core::Task::taskAboutToStop()const
{
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void Qtilities::Core::Task::taskAboutToStart()const
{
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Qtilities::Core::Task::taskAboutToResume()const
{
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void Qtilities::Core::Task::stateChanged(ITask::TaskState _t1, ITask::TaskState _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Qtilities::Core::Task::busyStateChanged(ITask::TaskBusyState _t1, ITask::TaskBusyState _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Qtilities::Core::Task::taskTypeChanged(ITask::TaskType _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Qtilities::Core::Task::displayedNameChanged(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Qtilities::Core::Task::canStartChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Qtilities::Core::Task::canStopChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Qtilities::Core::Task::canPauseChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Qtilities::Core::Task *>(this), &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Qtilities::Core::Task::startTaskRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void Qtilities::Core::Task::stopTaskRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void Qtilities::Core::Task::pauseTaskRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void Qtilities::Core::Task::resumeTaskRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
