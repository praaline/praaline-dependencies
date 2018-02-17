/****************************************************************************
** Meta object code from reading C++ file 'ObserverTreeModelBuilder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/ObserverTreeModelBuilder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObserverTreeModelBuilder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__ObserverTreeModelBuilder_t {
    QByteArrayData data[11];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__ObserverTreeModelBuilder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__ObserverTreeModelBuilder_t qt_meta_stringdata_Qtilities__CoreGui__ObserverTreeModelBuilder = {
    {
QT_MOC_LITERAL(0, 0, 44), // "Qtilities::CoreGui::ObserverT..."
QT_MOC_LITERAL(1, 45, 14), // "buildCompleted"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 17), // "ObserverTreeItem*"
QT_MOC_LITERAL(4, 79, 4), // "item"
QT_MOC_LITERAL(5, 84, 10), // "startBuild"
QT_MOC_LITERAL(6, 95, 19), // "setUseObserverHints"
QT_MOC_LITERAL(7, 115, 18), // "use_observer_hints"
QT_MOC_LITERAL(8, 134, 14), // "setActiveHints"
QT_MOC_LITERAL(9, 149, 14), // "ObserverHints*"
QT_MOC_LITERAL(10, 164, 12) // "active_hints"

    },
    "Qtilities::CoreGui::ObserverTreeModelBuilder\0"
    "buildCompleted\0\0ObserverTreeItem*\0"
    "item\0startBuild\0setUseObserverHints\0"
    "use_observer_hints\0setActiveHints\0"
    "ObserverHints*\0active_hints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__ObserverTreeModelBuilder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x0a /* Public */,
       6,    1,   38,    2, 0x0a /* Public */,
       8,    1,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void Qtilities::CoreGui::ObserverTreeModelBuilder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObserverTreeModelBuilder *_t = static_cast<ObserverTreeModelBuilder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buildCompleted((*reinterpret_cast< ObserverTreeItem*(*)>(_a[1]))); break;
        case 1: _t->startBuild(); break;
        case 2: _t->setUseObserverHints((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setActiveHints((*reinterpret_cast< ObserverHints*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ObserverTreeItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ObserverHints* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ObserverTreeModelBuilder::*_t)(ObserverTreeItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObserverTreeModelBuilder::buildCompleted)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::ObserverTreeModelBuilder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__ObserverTreeModelBuilder.data,
      qt_meta_data_Qtilities__CoreGui__ObserverTreeModelBuilder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::ObserverTreeModelBuilder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::ObserverTreeModelBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__ObserverTreeModelBuilder.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qtilities::CoreGui::ObserverTreeModelBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::ObserverTreeModelBuilder::buildCompleted(ObserverTreeItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
