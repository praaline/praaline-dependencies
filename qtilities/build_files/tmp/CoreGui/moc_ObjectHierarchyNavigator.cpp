/****************************************************************************
** Meta object code from reading C++ file 'ObjectHierarchyNavigator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/ObjectHierarchyNavigator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QStack>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObjectHierarchyNavigator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__ObjectHierarchyNavigator_t {
    QByteArrayData data[8];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__ObjectHierarchyNavigator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__ObjectHierarchyNavigator_t qt_meta_stringdata_Qtilities__CoreGui__ObjectHierarchyNavigator = {
    {
QT_MOC_LITERAL(0, 0, 44), // "Qtilities::CoreGui::ObjectHie..."
QT_MOC_LITERAL(1, 45, 16), // "setCurrentObject"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 3), // "obj"
QT_MOC_LITERAL(4, 67, 18), // "setNavigationStack"
QT_MOC_LITERAL(5, 86, 11), // "QStack<int>"
QT_MOC_LITERAL(6, 98, 16), // "navigation_stack"
QT_MOC_LITERAL(7, 115, 16) // "refreshHierarchy"

    },
    "Qtilities::CoreGui::ObjectHierarchyNavigator\0"
    "setCurrentObject\0\0obj\0setNavigationStack\0"
    "QStack<int>\0navigation_stack\0"
    "refreshHierarchy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__ObjectHierarchyNavigator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       7,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void Qtilities::CoreGui::ObjectHierarchyNavigator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObjectHierarchyNavigator *_t = static_cast<ObjectHierarchyNavigator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCurrentObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->setNavigationStack((*reinterpret_cast< QStack<int>(*)>(_a[1]))); break;
        case 2: _t->refreshHierarchy(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStack<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject Qtilities::CoreGui::ObjectHierarchyNavigator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__ObjectHierarchyNavigator.data,
      qt_meta_data_Qtilities__CoreGui__ObjectHierarchyNavigator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::ObjectHierarchyNavigator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::ObjectHierarchyNavigator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__ObjectHierarchyNavigator.stringdata0))
        return static_cast<void*>(const_cast< ObjectHierarchyNavigator*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtilities::CoreGui::ObjectHierarchyNavigator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
