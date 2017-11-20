/****************************************************************************
** Meta object code from reading C++ file 'TestSubjectIterator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Testing/source/TestSubjectIterator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestSubjectIterator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Testing__TestSubjectIterator_t {
    QByteArrayData data[7];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Testing__TestSubjectIterator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Testing__TestSubjectIterator_t qt_meta_stringdata_Qtilities__Testing__TestSubjectIterator = {
    {
QT_MOC_LITERAL(0, 0, 39), // "Qtilities::Testing::TestSubje..."
QT_MOC_LITERAL(1, 40, 28), // "testIterationSimpleFromStart"
QT_MOC_LITERAL(2, 69, 0), // ""
QT_MOC_LITERAL(3, 70, 29), // "testIterationSimpleFromMiddle"
QT_MOC_LITERAL(4, 100, 20), // "testIterationComplex"
QT_MOC_LITERAL(5, 121, 36), // "testIterationObserverWithoutC..."
QT_MOC_LITERAL(6, 158, 18) // "testIterationConst"

    },
    "Qtilities::Testing::TestSubjectIterator\0"
    "testIterationSimpleFromStart\0\0"
    "testIterationSimpleFromMiddle\0"
    "testIterationComplex\0"
    "testIterationObserverWithoutChildren\0"
    "testIterationConst"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Testing__TestSubjectIterator[] = {

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

void Qtilities::Testing::TestSubjectIterator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestSubjectIterator *_t = static_cast<TestSubjectIterator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testIterationSimpleFromStart(); break;
        case 1: _t->testIterationSimpleFromMiddle(); break;
        case 2: _t->testIterationComplex(); break;
        case 3: _t->testIterationObserverWithoutChildren(); break;
        case 4: _t->testIterationConst(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::Testing::TestSubjectIterator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Testing__TestSubjectIterator.data,
      qt_meta_data_Qtilities__Testing__TestSubjectIterator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Testing::TestSubjectIterator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Testing::TestSubjectIterator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Testing__TestSubjectIterator.stringdata0))
        return static_cast<void*>(const_cast< TestSubjectIterator*>(this));
    if (!strcmp(_clname, "ITestable"))
        return static_cast< ITestable*>(const_cast< TestSubjectIterator*>(this));
    if (!strcmp(_clname, "com.Qtilities.Testing.ITestable/1.0"))
        return static_cast< Qtilities::Testing::Interfaces::ITestable*>(const_cast< TestSubjectIterator*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::Testing::TestSubjectIterator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
