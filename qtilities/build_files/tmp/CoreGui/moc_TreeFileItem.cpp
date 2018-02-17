/****************************************************************************
** Meta object code from reading C++ file 'TreeFileItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/TreeFileItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TreeFileItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__TreeFileItem_t {
    QByteArrayData data[8];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__TreeFileItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__TreeFileItem_t qt_meta_stringdata_Qtilities__CoreGui__TreeFileItem = {
    {
QT_MOC_LITERAL(0, 0, 32), // "Qtilities::CoreGui::TreeFileItem"
QT_MOC_LITERAL(1, 33, 15), // "filePathChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 13), // "new_file_path"
QT_MOC_LITERAL(4, 64, 11), // "PathDisplay"
QT_MOC_LITERAL(5, 76, 15), // "DisplayFileName"
QT_MOC_LITERAL(6, 92, 15), // "DisplayFilePath"
QT_MOC_LITERAL(7, 108, 21) // "DisplayActualFilePath"

    },
    "Qtilities::CoreGui::TreeFileItem\0"
    "filePathChanged\0\0new_file_path\0"
    "PathDisplay\0DisplayFileName\0DisplayFilePath\0"
    "DisplayActualFilePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__TreeFileItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   22, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // enums: name, flags, count, data
       4, 0x0,    3,   26,

 // enum data: key, value
       5, uint(Qtilities::CoreGui::TreeFileItem::DisplayFileName),
       6, uint(Qtilities::CoreGui::TreeFileItem::DisplayFilePath),
       7, uint(Qtilities::CoreGui::TreeFileItem::DisplayActualFilePath),

       0        // eod
};

void Qtilities::CoreGui::TreeFileItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TreeFileItem *_t = static_cast<TreeFileItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filePathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TreeFileItem::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TreeFileItem::filePathChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::TreeFileItem::staticMetaObject = {
    { &TreeItemBase::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__TreeFileItem.data,
      qt_meta_data_Qtilities__CoreGui__TreeFileItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::TreeFileItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::TreeFileItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__TreeFileItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "com.Qtilities.Core.IExportable/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IExportable*>(this);
    return TreeItemBase::qt_metacast(_clname);
}

int Qtilities::CoreGui::TreeFileItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TreeItemBase::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Qtilities::CoreGui::TreeFileItem::filePathChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
