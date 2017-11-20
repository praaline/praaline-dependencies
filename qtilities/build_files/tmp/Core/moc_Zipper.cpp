/****************************************************************************
** Meta object code from reading C++ file 'Zipper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Core/source/Zipper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Zipper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Core__Zipper_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Core__Zipper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Core__Zipper_t qt_meta_stringdata_Qtilities__Core__Zipper = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Qtilities::Core::Zipper"
QT_MOC_LITERAL(1, 24, 7), // "ZipMode"
QT_MOC_LITERAL(2, 32, 8), // "CopyMode"
QT_MOC_LITERAL(3, 41, 12) // "CompressMode"

    },
    "Qtilities::Core::Zipper\0ZipMode\0"
    "CopyMode\0CompressMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Core__Zipper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    2,   18,

 // enum data: key, value
       2, uint(Qtilities::Core::Zipper::CopyMode),
       3, uint(Qtilities::Core::Zipper::CompressMode),

       0        // eod
};

void Qtilities::Core::Zipper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::Core::Zipper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Core__Zipper.data,
      qt_meta_data_Qtilities__Core__Zipper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Core::Zipper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Core::Zipper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Core__Zipper.stringdata0))
        return static_cast<void*>(const_cast< Zipper*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::Core::Zipper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
