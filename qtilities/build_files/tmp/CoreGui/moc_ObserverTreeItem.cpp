/****************************************************************************
** Meta object code from reading C++ file 'ObserverTreeItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/ObserverTreeItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObserverTreeItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__ObserverTreeItem_t {
    QByteArrayData data[13];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__ObserverTreeItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__ObserverTreeItem_t qt_meta_stringdata_Qtilities__CoreGui__ObserverTreeItem = {
    {
QT_MOC_LITERAL(0, 0, 36), // "Qtilities::CoreGui::ObserverT..."
QT_MOC_LITERAL(1, 37, 14), // "newObjectAdded"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 3), // "obj"
QT_MOC_LITERAL(4, 57, 17), // "ObserverTreeItem*"
QT_MOC_LITERAL(5, 75, 8), // "new_item"
QT_MOC_LITERAL(6, 84, 12), // "TreeItemType"
QT_MOC_LITERAL(7, 97, 11), // "InvalidType"
QT_MOC_LITERAL(8, 109, 8), // "TreeItem"
QT_MOC_LITERAL(9, 118, 8), // "TreeNode"
QT_MOC_LITERAL(10, 127, 12), // "CategoryItem"
QT_MOC_LITERAL(11, 140, 12), // "AllItemTypes"
QT_MOC_LITERAL(12, 153, 17) // "TreeItemTypeFlags"

    },
    "Qtilities::CoreGui::ObserverTreeItem\0"
    "newObjectAdded\0\0obj\0ObserverTreeItem*\0"
    "new_item\0TreeItemType\0InvalidType\0"
    "TreeItem\0TreeNode\0CategoryItem\0"
    "AllItemTypes\0TreeItemTypeFlags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__ObserverTreeItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       2,   24, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 4,    3,    5,

 // enums: name, flags, count, data
       6, 0x0,    5,   32,
      12, 0x1,    5,   42,

 // enum data: key, value
       7, uint(Qtilities::CoreGui::ObserverTreeItem::InvalidType),
       8, uint(Qtilities::CoreGui::ObserverTreeItem::TreeItem),
       9, uint(Qtilities::CoreGui::ObserverTreeItem::TreeNode),
      10, uint(Qtilities::CoreGui::ObserverTreeItem::CategoryItem),
      11, uint(Qtilities::CoreGui::ObserverTreeItem::AllItemTypes),
       7, uint(Qtilities::CoreGui::ObserverTreeItem::InvalidType),
       8, uint(Qtilities::CoreGui::ObserverTreeItem::TreeItem),
       9, uint(Qtilities::CoreGui::ObserverTreeItem::TreeNode),
      10, uint(Qtilities::CoreGui::ObserverTreeItem::CategoryItem),
      11, uint(Qtilities::CoreGui::ObserverTreeItem::AllItemTypes),

       0        // eod
};

void Qtilities::CoreGui::ObserverTreeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObserverTreeItem *_t = static_cast<ObserverTreeItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newObjectAdded((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< ObserverTreeItem*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ObserverTreeItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ObserverTreeItem::*_t)(QObject * , ObserverTreeItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObserverTreeItem::newObjectAdded)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::ObserverTreeItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__ObserverTreeItem.data,
      qt_meta_data_Qtilities__CoreGui__ObserverTreeItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::ObserverTreeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::ObserverTreeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__ObserverTreeItem.stringdata0))
        return static_cast<void*>(const_cast< ObserverTreeItem*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::CoreGui::ObserverTreeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::ObserverTreeItem::newObjectAdded(QObject * _t1, ObserverTreeItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
