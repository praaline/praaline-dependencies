/****************************************************************************
** Meta object code from reading C++ file 'TestFileSetInfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Testing/source/TestFileSetInfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestFileSetInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Testing__TestFileSetInfo_t {
    QByteArrayData data[3];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Testing__TestFileSetInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Testing__TestFileSetInfo_t qt_meta_stringdata_Qtilities__Testing__TestFileSetInfo = {
    {
QT_MOC_LITERAL(0, 0, 35), // "Qtilities::Testing::TestFileS..."
QT_MOC_LITERAL(1, 36, 11), // "testGetHash"
QT_MOC_LITERAL(2, 48, 0) // ""

    },
    "Qtilities::Testing::TestFileSetInfo\0"
    "testGetHash\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Testing__TestFileSetInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Qtilities::Testing::TestFileSetInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestFileSetInfo *_t = static_cast<TestFileSetInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testGetHash(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::Testing::TestFileSetInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Testing__TestFileSetInfo.data,
      qt_meta_data_Qtilities__Testing__TestFileSetInfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Testing::TestFileSetInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Testing::TestFileSetInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Testing__TestFileSetInfo.stringdata0))
        return static_cast<void*>(const_cast< TestFileSetInfo*>(this));
    if (!strcmp(_clname, "ITestable"))
        return static_cast< ITestable*>(const_cast< TestFileSetInfo*>(this));
    if (!strcmp(_clname, "com.Qtilities.Testing.ITestable/1.0"))
        return static_cast< Qtilities::Testing::Interfaces::ITestable*>(const_cast< TestFileSetInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::Testing::TestFileSetInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
