/****************************************************************************
** Meta object code from reading C++ file 'TestVersionNumber.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Testing/source/TestVersionNumber.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestVersionNumber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Testing__TestVersionNumber_t {
    QByteArrayData data[10];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Testing__TestVersionNumber_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Testing__TestVersionNumber_t qt_meta_stringdata_Qtilities__Testing__TestVersionNumber = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Qtilities::Testing::TestVersi..."
QT_MOC_LITERAL(1, 38, 17), // "testOperatorEqual"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 20), // "testOperatorNotEqual"
QT_MOC_LITERAL(4, 78, 18), // "testOperatorAssign"
QT_MOC_LITERAL(5, 97, 18), // "testOperatorBigger"
QT_MOC_LITERAL(6, 116, 23), // "testOperatorBiggerEqual"
QT_MOC_LITERAL(7, 140, 19), // "testOperatorSmaller"
QT_MOC_LITERAL(8, 160, 24), // "testOperatorSmallerEqual"
QT_MOC_LITERAL(9, 185, 12) // "testToString"

    },
    "Qtilities::Testing::TestVersionNumber\0"
    "testOperatorEqual\0\0testOperatorNotEqual\0"
    "testOperatorAssign\0testOperatorBigger\0"
    "testOperatorBiggerEqual\0testOperatorSmaller\0"
    "testOperatorSmallerEqual\0testToString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Testing__TestVersionNumber[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Qtilities::Testing::TestVersionNumber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestVersionNumber *_t = static_cast<TestVersionNumber *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testOperatorEqual(); break;
        case 1: _t->testOperatorNotEqual(); break;
        case 2: _t->testOperatorAssign(); break;
        case 3: _t->testOperatorBigger(); break;
        case 4: _t->testOperatorBiggerEqual(); break;
        case 5: _t->testOperatorSmaller(); break;
        case 6: _t->testOperatorSmallerEqual(); break;
        case 7: _t->testToString(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::Testing::TestVersionNumber::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Testing__TestVersionNumber.data,
      qt_meta_data_Qtilities__Testing__TestVersionNumber,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Testing::TestVersionNumber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Testing::TestVersionNumber::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Testing__TestVersionNumber.stringdata0))
        return static_cast<void*>(const_cast< TestVersionNumber*>(this));
    if (!strcmp(_clname, "ITestable"))
        return static_cast< ITestable*>(const_cast< TestVersionNumber*>(this));
    if (!strcmp(_clname, "com.Qtilities.Testing.ITestable/1.0"))
        return static_cast< Qtilities::Testing::Interfaces::ITestable*>(const_cast< TestVersionNumber*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::Testing::TestVersionNumber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
