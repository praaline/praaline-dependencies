/****************************************************************************
** Meta object code from reading C++ file 'ExampleMode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Examples/TasksExample/ExampleMode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExampleMode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qtilities__Examples__TasksExample__ExampleMode_t {
    QByteArrayData data[7];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Examples__TasksExample__ExampleMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Examples__TasksExample__ExampleMode_t qt_meta_stringdata_Qtilities__Examples__TasksExample__ExampleMode = {
    {
QT_MOC_LITERAL(0, 0, 46), // "Qtilities::Examples::TasksExa..."
QT_MOC_LITERAL(1, 47, 21), // "on_btnNewTask_clicked"
QT_MOC_LITERAL(2, 69, 0), // ""
QT_MOC_LITERAL(3, 70, 19), // "handleTaskCompleted"
QT_MOC_LITERAL(4, 90, 23), // "on_btnShortTask_clicked"
QT_MOC_LITERAL(5, 114, 22), // "on_btnLongTask_clicked"
QT_MOC_LITERAL(6, 137, 21) // "on_btnDoxygen_clicked"

    },
    "Qtilities::Examples::TasksExample::ExampleMode\0"
    "on_btnNewTask_clicked\0\0handleTaskCompleted\0"
    "on_btnShortTask_clicked\0on_btnLongTask_clicked\0"
    "on_btnDoxygen_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Examples__TasksExample__ExampleMode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Qtilities::Examples::TasksExample::ExampleMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExampleMode *_t = static_cast<ExampleMode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnNewTask_clicked(); break;
        case 1: _t->handleTaskCompleted(); break;
        case 2: _t->on_btnShortTask_clicked(); break;
        case 3: _t->on_btnLongTask_clicked(); break;
        case 4: _t->on_btnDoxygen_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::Examples::TasksExample::ExampleMode::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Qtilities__Examples__TasksExample__ExampleMode.data,
      qt_meta_data_Qtilities__Examples__TasksExample__ExampleMode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qtilities::Examples::TasksExample::ExampleMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Examples::TasksExample::ExampleMode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Examples__TasksExample__ExampleMode.stringdata0))
        return static_cast<void*>(const_cast< ExampleMode*>(this));
    if (!strcmp(_clname, "IMode"))
        return static_cast< IMode*>(const_cast< ExampleMode*>(this));
    if (!strcmp(_clname, "com.Qtilities.CoreGui.IMode/1.0"))
        return static_cast< Qtilities::CoreGui::Interfaces::IMode*>(const_cast< ExampleMode*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Qtilities::Examples::TasksExample::ExampleMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
