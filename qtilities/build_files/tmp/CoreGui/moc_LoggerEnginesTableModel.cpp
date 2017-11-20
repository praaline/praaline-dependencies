/****************************************************************************
** Meta object code from reading C++ file 'LoggerEnginesTableModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/LoggerEnginesTableModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoggerEnginesTableModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__qti_private_LoggerEnginesTableModel_t {
    QByteArrayData data[5];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__qti_private_LoggerEnginesTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__qti_private_LoggerEnginesTableModel_t qt_meta_stringdata_Qtilities__CoreGui__qti_private_LoggerEnginesTableModel = {
    {
QT_MOC_LITERAL(0, 0, 55), // "Qtilities::CoreGui::qti_priva..."
QT_MOC_LITERAL(1, 56, 14), // "requestRefresh"
QT_MOC_LITERAL(2, 71, 0), // ""
QT_MOC_LITERAL(3, 72, 9), // "ColumnIDs"
QT_MOC_LITERAL(4, 82, 10) // "NameColumn"

    },
    "Qtilities::CoreGui::qti_private_LoggerEnginesTableModel\0"
    "requestRefresh\0\0ColumnIDs\0NameColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__qti_private_LoggerEnginesTableModel[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // enums: name, flags, count, data
       3, 0x0,    1,   24,

 // enum data: key, value
       4, uint(Qtilities::CoreGui::qti_private_LoggerEnginesTableModel::NameColumn),

       0        // eod
};

void Qtilities::CoreGui::qti_private_LoggerEnginesTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qti_private_LoggerEnginesTableModel *_t = static_cast<qti_private_LoggerEnginesTableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestRefresh(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::CoreGui::qti_private_LoggerEnginesTableModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__qti_private_LoggerEnginesTableModel.data,
      qt_meta_data_Qtilities__CoreGui__qti_private_LoggerEnginesTableModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::qti_private_LoggerEnginesTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::qti_private_LoggerEnginesTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__qti_private_LoggerEnginesTableModel.stringdata0))
        return static_cast<void*>(const_cast< qti_private_LoggerEnginesTableModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int Qtilities::CoreGui::qti_private_LoggerEnginesTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
