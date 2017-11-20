/****************************************************************************
** Meta object code from reading C++ file 'TestTreeIterator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Testing/source/TestTreeIterator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestTreeIterator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Testing__TestTreeIterator_t {
    QByteArrayData data[11];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Testing__TestTreeIterator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Testing__TestTreeIterator_t qt_meta_stringdata_Qtilities__Testing__TestTreeIterator = {
    {
QT_MOC_LITERAL(0, 0, 36), // "Qtilities::Testing::TestTreeI..."
QT_MOC_LITERAL(1, 37, 26), // "testIterationForwardSimple"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 28), // "testIterationForwardComplexA"
QT_MOC_LITERAL(4, 94, 28), // "testIterationForwardComplexB"
QT_MOC_LITERAL(5, 123, 36), // "testIterationForwardMultipleP..."
QT_MOC_LITERAL(6, 160, 36), // "testIterationForwardMultipleP..."
QT_MOC_LITERAL(7, 197, 38), // "testIterationBackwardsMultipl..."
QT_MOC_LITERAL(8, 236, 27), // "testIterationBackwardSimple"
QT_MOC_LITERAL(9, 264, 29), // "testIterationBackwardComplexA"
QT_MOC_LITERAL(10, 294, 36) // "testIterationForwardMultipleP..."

    },
    "Qtilities::Testing::TestTreeIterator\0"
    "testIterationForwardSimple\0\0"
    "testIterationForwardComplexA\0"
    "testIterationForwardComplexB\0"
    "testIterationForwardMultipleParentsA\0"
    "testIterationForwardMultipleParentsB\0"
    "testIterationBackwardsMultipleParentsB\0"
    "testIterationBackwardSimple\0"
    "testIterationBackwardComplexA\0"
    "testIterationForwardMultipleParentsC"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Testing__TestTreeIterator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
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

void Qtilities::Testing::TestTreeIterator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestTreeIterator *_t = static_cast<TestTreeIterator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testIterationForwardSimple(); break;
        case 1: _t->testIterationForwardComplexA(); break;
        case 2: _t->testIterationForwardComplexB(); break;
        case 3: _t->testIterationForwardMultipleParentsA(); break;
        case 4: _t->testIterationForwardMultipleParentsB(); break;
        case 5: _t->testIterationBackwardsMultipleParentsB(); break;
        case 6: _t->testIterationBackwardSimple(); break;
        case 7: _t->testIterationBackwardComplexA(); break;
        case 8: _t->testIterationForwardMultipleParentsC(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::Testing::TestTreeIterator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Testing__TestTreeIterator.data,
      qt_meta_data_Qtilities__Testing__TestTreeIterator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Testing::TestTreeIterator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Testing::TestTreeIterator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Testing__TestTreeIterator.stringdata0))
        return static_cast<void*>(const_cast< TestTreeIterator*>(this));
    if (!strcmp(_clname, "ITestable"))
        return static_cast< ITestable*>(const_cast< TestTreeIterator*>(this));
    if (!strcmp(_clname, "com.Qtilities.Testing.ITestable/1.0"))
        return static_cast< Qtilities::Testing::Interfaces::ITestable*>(const_cast< TestTreeIterator*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::Testing::TestTreeIterator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
