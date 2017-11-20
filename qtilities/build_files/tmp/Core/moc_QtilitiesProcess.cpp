/****************************************************************************
** Meta object code from reading C++ file 'QtilitiesProcess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/QtilitiesProcess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtilitiesProcess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__QtilitiesProcess_t {
    QByteArrayData data[14];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__QtilitiesProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__QtilitiesProcess_t qt_meta_stringdata_Qtilities__Core__QtilitiesProcess = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Qtilities::Core::QtilitiesPro..."
QT_MOC_LITERAL(1, 34, 25), // "manualAppendLastRunBuffer"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 18), // "readStandardOutput"
QT_MOC_LITERAL(4, 80, 17), // "readStandardError"
QT_MOC_LITERAL(5, 98, 12), // "procFinished"
QT_MOC_LITERAL(6, 111, 9), // "exit_code"
QT_MOC_LITERAL(7, 121, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(8, 142, 11), // "exit_status"
QT_MOC_LITERAL(9, 154, 9), // "procError"
QT_MOC_LITERAL(10, 164, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(11, 187, 5), // "error"
QT_MOC_LITERAL(12, 193, 12), // "stopTimedOut"
QT_MOC_LITERAL(13, 206, 11) // "stopProcess"

    },
    "Qtilities::Core::QtilitiesProcess\0"
    "manualAppendLastRunBuffer\0\0"
    "readStandardOutput\0readStandardError\0"
    "procFinished\0exit_code\0QProcess::ExitStatus\0"
    "exit_status\0procError\0QProcess::ProcessError\0"
    "error\0stopTimedOut\0stopProcess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__QtilitiesProcess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x09 /* Protected */,
       3,    0,   50,    2, 0x09 /* Protected */,
       4,    0,   51,    2, 0x09 /* Protected */,
       5,    2,   52,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,
      12,    0,   60,    2, 0x08 /* Private */,
      13,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Qtilities::Core::QtilitiesProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtilitiesProcess *_t = static_cast<QtilitiesProcess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->manualAppendLastRunBuffer(); break;
        case 1: _t->readStandardOutput(); break;
        case 2: _t->readStandardError(); break;
        case 3: _t->procFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 4: _t->procError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 5: _t->stopTimedOut(); break;
        case 6: _t->stopProcess(); break;
        default: ;
        }
    }
}

const QMetaObject Qtilities::Core::QtilitiesProcess::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_Qtilities__Core__QtilitiesProcess.data,
      qt_meta_data_Qtilities__Core__QtilitiesProcess,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::QtilitiesProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::QtilitiesProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__QtilitiesProcess.stringdata0))
        return static_cast<void*>(const_cast< QtilitiesProcess*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.ITask/1.0"))
        return static_cast< Qtilities::Core::Interfaces::ITask*>(const_cast< QtilitiesProcess*>(this));
    return Task::qt_metacast(_clname);
}

int Qtilities::Core::QtilitiesProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
