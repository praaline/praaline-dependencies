/****************************************************************************
** Meta object code from reading C++ file 'SingleTaskWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/SingleTaskWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SingleTaskWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__SingleTaskWidget_t {
    QByteArrayData data[22];
    char stringdata0[382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__SingleTaskWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__SingleTaskWidget_t qt_meta_stringdata_Qtilities__CoreGui__SingleTaskWidget = {
    {
QT_MOC_LITERAL(0, 0, 36), // "Qtilities::CoreGui::SingleTas..."
QT_MOC_LITERAL(1, 37, 18), // "hiddenByStopButton"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 21), // "setPauseButtonEnabled"
QT_MOC_LITERAL(4, 79, 7), // "enabled"
QT_MOC_LITERAL(5, 87, 20), // "setStopButtonEnabled"
QT_MOC_LITERAL(6, 108, 21), // "setStartButtonEnabled"
QT_MOC_LITERAL(7, 130, 21), // "setStartButtonVisible"
QT_MOC_LITERAL(8, 152, 10), // "is_visible"
QT_MOC_LITERAL(9, 163, 20), // "setStopButtonVisible"
QT_MOC_LITERAL(10, 184, 21), // "setPauseButtonVisible"
QT_MOC_LITERAL(11, 206, 6), // "update"
QT_MOC_LITERAL(12, 213, 21), // "on_btnShowLog_clicked"
QT_MOC_LITERAL(13, 235, 19), // "on_btnPause_clicked"
QT_MOC_LITERAL(14, 255, 18), // "on_btnStop_clicked"
QT_MOC_LITERAL(15, 274, 19), // "on_btnStart_clicked"
QT_MOC_LITERAL(16, 294, 17), // "handleTaskDeleted"
QT_MOC_LITERAL(17, 312, 15), // "updateBusyState"
QT_MOC_LITERAL(18, 328, 20), // "ITask::TaskBusyState"
QT_MOC_LITERAL(19, 349, 10), // "busy_state"
QT_MOC_LITERAL(20, 360, 16), // "setDisplayedName"
QT_MOC_LITERAL(21, 377, 4) // "name"

    },
    "Qtilities::CoreGui::SingleTaskWidget\0"
    "hiddenByStopButton\0\0setPauseButtonEnabled\0"
    "enabled\0setStopButtonEnabled\0"
    "setStartButtonEnabled\0setStartButtonVisible\0"
    "is_visible\0setStopButtonVisible\0"
    "setPauseButtonVisible\0update\0"
    "on_btnShowLog_clicked\0on_btnPause_clicked\0"
    "on_btnStop_clicked\0on_btnStart_clicked\0"
    "handleTaskDeleted\0updateBusyState\0"
    "ITask::TaskBusyState\0busy_state\0"
    "setDisplayedName\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__SingleTaskWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   90,    2, 0x0a /* Public */,
       5,    1,   93,    2, 0x0a /* Public */,
       6,    1,   96,    2, 0x0a /* Public */,
       7,    1,   99,    2, 0x0a /* Public */,
       9,    1,  102,    2, 0x0a /* Public */,
      10,    1,  105,    2, 0x0a /* Public */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    1,  114,    2, 0x08 /* Private */,
      20,    1,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QString,   21,

       0        // eod
};

void Qtilities::CoreGui::SingleTaskWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SingleTaskWidget *_t = static_cast<SingleTaskWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hiddenByStopButton(); break;
        case 1: _t->setPauseButtonEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setStopButtonEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setStartButtonEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setStartButtonVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setStopButtonVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setPauseButtonVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->update(); break;
        case 8: _t->on_btnShowLog_clicked(); break;
        case 9: _t->on_btnPause_clicked(); break;
        case 10: _t->on_btnStop_clicked(); break;
        case 11: _t->on_btnStart_clicked(); break;
        case 12: _t->handleTaskDeleted(); break;
        case 13: _t->updateBusyState((*reinterpret_cast< ITask::TaskBusyState(*)>(_a[1]))); break;
        case 14: _t->setDisplayedName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SingleTaskWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SingleTaskWidget::hiddenByStopButton)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::SingleTaskWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__SingleTaskWidget.data,
      qt_meta_data_Qtilities__CoreGui__SingleTaskWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::SingleTaskWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::SingleTaskWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__SingleTaskWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Qtilities::CoreGui::SingleTaskWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::SingleTaskWidget::hiddenByStopButton()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
