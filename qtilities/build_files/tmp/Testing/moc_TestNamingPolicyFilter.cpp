/****************************************************************************
** Meta object code from reading C++ file 'TestNamingPolicyFilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Testing/source/TestNamingPolicyFilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestNamingPolicyFilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Testing__TestNamingPolicyFilter_t {
    QByteArrayData data[8];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Testing__TestNamingPolicyFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Testing__TestNamingPolicyFilter_t qt_meta_stringdata_Qtilities__Testing__TestNamingPolicyFilter = {
    {
QT_MOC_LITERAL(0, 0, 42), // "Qtilities::Testing::TestNamin..."
QT_MOC_LITERAL(1, 43, 22), // "testPropertyManagement"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 25), // "testSetUniquenessPolicies"
QT_MOC_LITERAL(4, 93, 36), // "testRejectUniquenessResolutio..."
QT_MOC_LITERAL(5, 130, 40), // "testAutoRenameUniquenessResol..."
QT_MOC_LITERAL(6, 171, 34), // "testRejectValidityResolutionP..."
QT_MOC_LITERAL(7, 206, 35) // "testProcessingCycleValidation..."

    },
    "Qtilities::Testing::TestNamingPolicyFilter\0"
    "testPropertyManagement\0\0"
    "testSetUniquenessPolicies\0"
    "testRejectUniquenessResolutionPolicy\0"
    "testAutoRenameUniquenessResolutionPolicy\0"
    "testRejectValidityResolutionPolicy\0"
    "testProcessingCycleValidationChecks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Testing__TestNamingPolicyFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Qtilities::Testing::TestNamingPolicyFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestNamingPolicyFilter *_t = static_cast<TestNamingPolicyFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testPropertyManagement(); break;
        case 1: _t->testSetUniquenessPolicies(); break;
        case 2: _t->testRejectUniquenessResolutionPolicy(); break;
        case 3: _t->testAutoRenameUniquenessResolutionPolicy(); break;
        case 4: _t->testRejectValidityResolutionPolicy(); break;
        case 5: _t->testProcessingCycleValidationChecks(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::Testing::TestNamingPolicyFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Testing__TestNamingPolicyFilter.data,
      qt_meta_data_Qtilities__Testing__TestNamingPolicyFilter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Testing::TestNamingPolicyFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Testing::TestNamingPolicyFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Testing__TestNamingPolicyFilter.stringdata0))
        return static_cast<void*>(const_cast< TestNamingPolicyFilter*>(this));
    if (!strcmp(_clname, "ITestable"))
        return static_cast< ITestable*>(const_cast< TestNamingPolicyFilter*>(this));
    if (!strcmp(_clname, "com.Qtilities.Testing.ITestable/1.0"))
        return static_cast< Qtilities::Testing::Interfaces::ITestable*>(const_cast< TestNamingPolicyFilter*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::Testing::TestNamingPolicyFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
