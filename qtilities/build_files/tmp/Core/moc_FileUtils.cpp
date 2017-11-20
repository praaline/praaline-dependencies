/****************************************************************************
** Meta object code from reading C++ file 'FileUtils.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/FileUtils.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileUtils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__FileUtils_t {
    QByteArrayData data[6];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__FileUtils_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__FileUtils_t qt_meta_stringdata_Qtilities__Core__FileUtils = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Qtilities::Core::FileUtils"
QT_MOC_LITERAL(1, 27, 25), // "findFilesUnderDirLauncher"
QT_MOC_LITERAL(2, 53, 13), // "QFileInfoList"
QT_MOC_LITERAL(3, 67, 0), // ""
QT_MOC_LITERAL(4, 68, 14), // "ContainedTasks"
QT_MOC_LITERAL(5, 83, 21) // "TaskFindFilesUnderDir"

    },
    "Qtilities::Core::FileUtils\0"
    "findFilesUnderDirLauncher\0QFileInfoList\0"
    "\0ContainedTasks\0TaskFindFilesUnderDir"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__FileUtils[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   20, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2,

 // enums: name, flags, count, data
       4, 0x0,    1,   24,

 // enum data: key, value
       5, uint(Qtilities::Core::FileUtils::TaskFindFilesUnderDir),

       0        // eod
};

void Qtilities::Core::FileUtils::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileUtils *_t = static_cast<FileUtils *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QFileInfoList _r = _t->findFilesUnderDirLauncher();
            if (_a[0]) *reinterpret_cast< QFileInfoList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject Qtilities::Core::FileUtils::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Core__FileUtils.data,
      qt_meta_data_Qtilities__Core__FileUtils,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::FileUtils::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::FileUtils::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__FileUtils.stringdata0))
        return static_cast<void*>(const_cast< FileUtils*>(this));
    if (!strcmp(_clname, "ITaskContainer"))
        return static_cast< ITaskContainer*>(const_cast< FileUtils*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.ITaskContainer/1.0"))
        return static_cast< Qtilities::Core::Interfaces::ITaskContainer*>(const_cast< FileUtils*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::Core::FileUtils::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
