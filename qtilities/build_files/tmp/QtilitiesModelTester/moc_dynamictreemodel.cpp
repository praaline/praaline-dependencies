/****************************************************************************
** Meta object code from reading C++ file 'dynamictreemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Tools/QtilitiesModelTester/dynamictreemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dynamictreemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DynamicTreeModel_t {
    QByteArrayData data[4];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DynamicTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DynamicTreeModel_t qt_meta_stringdata_DynamicTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DynamicTreeModel"
QT_MOC_LITERAL(1, 17, 12), // "findParentId"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8) // "searchId"

    },
    "DynamicTreeModel\0findParentId\0\0searchId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DynamicTreeModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::LongLong, QMetaType::LongLong,    3,

       0        // eod
};

void DynamicTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DynamicTreeModel *_t = static_cast<DynamicTreeModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { qint64 _r = _t->findParentId((*reinterpret_cast< qint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject DynamicTreeModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_DynamicTreeModel.data,
      qt_meta_data_DynamicTreeModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DynamicTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DynamicTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DynamicTreeModel.stringdata0))
        return static_cast<void*>(const_cast< DynamicTreeModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int DynamicTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ModelChangeCommand_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelChangeCommand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelChangeCommand_t qt_meta_stringdata_ModelChangeCommand = {
    {
QT_MOC_LITERAL(0, 0, 18) // "ModelChangeCommand"

    },
    "ModelChangeCommand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelChangeCommand[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ModelChangeCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ModelChangeCommand::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModelChangeCommand.data,
      qt_meta_data_ModelChangeCommand,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModelChangeCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelChangeCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModelChangeCommand.stringdata0))
        return static_cast<void*>(const_cast< ModelChangeCommand*>(this));
    return QObject::qt_metacast(_clname);
}

int ModelChangeCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ModelInsertCommand_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelInsertCommand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelInsertCommand_t qt_meta_stringdata_ModelInsertCommand = {
    {
QT_MOC_LITERAL(0, 0, 18) // "ModelInsertCommand"

    },
    "ModelInsertCommand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelInsertCommand[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ModelInsertCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ModelInsertCommand::staticMetaObject = {
    { &ModelChangeCommand::staticMetaObject, qt_meta_stringdata_ModelInsertCommand.data,
      qt_meta_data_ModelInsertCommand,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModelInsertCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelInsertCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModelInsertCommand.stringdata0))
        return static_cast<void*>(const_cast< ModelInsertCommand*>(this));
    return ModelChangeCommand::qt_metacast(_clname);
}

int ModelInsertCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelChangeCommand::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ModelMoveCommand_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelMoveCommand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelMoveCommand_t qt_meta_stringdata_ModelMoveCommand = {
    {
QT_MOC_LITERAL(0, 0, 16) // "ModelMoveCommand"

    },
    "ModelMoveCommand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelMoveCommand[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ModelMoveCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ModelMoveCommand::staticMetaObject = {
    { &ModelChangeCommand::staticMetaObject, qt_meta_stringdata_ModelMoveCommand.data,
      qt_meta_data_ModelMoveCommand,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModelMoveCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelMoveCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModelMoveCommand.stringdata0))
        return static_cast<void*>(const_cast< ModelMoveCommand*>(this));
    return ModelChangeCommand::qt_metacast(_clname);
}

int ModelMoveCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelChangeCommand::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ModelResetCommand_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelResetCommand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelResetCommand_t qt_meta_stringdata_ModelResetCommand = {
    {
QT_MOC_LITERAL(0, 0, 17) // "ModelResetCommand"

    },
    "ModelResetCommand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelResetCommand[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ModelResetCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ModelResetCommand::staticMetaObject = {
    { &ModelMoveCommand::staticMetaObject, qt_meta_stringdata_ModelResetCommand.data,
      qt_meta_data_ModelResetCommand,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModelResetCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelResetCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModelResetCommand.stringdata0))
        return static_cast<void*>(const_cast< ModelResetCommand*>(this));
    return ModelMoveCommand::qt_metacast(_clname);
}

int ModelResetCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelMoveCommand::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ModelResetCommandFixed_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelResetCommandFixed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelResetCommandFixed_t qt_meta_stringdata_ModelResetCommandFixed = {
    {
QT_MOC_LITERAL(0, 0, 22) // "ModelResetCommandFixed"

    },
    "ModelResetCommandFixed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelResetCommandFixed[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ModelResetCommandFixed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ModelResetCommandFixed::staticMetaObject = {
    { &ModelMoveCommand::staticMetaObject, qt_meta_stringdata_ModelResetCommandFixed.data,
      qt_meta_data_ModelResetCommandFixed,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModelResetCommandFixed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelResetCommandFixed::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModelResetCommandFixed.stringdata0))
        return static_cast<void*>(const_cast< ModelResetCommandFixed*>(this));
    return ModelMoveCommand::qt_metacast(_clname);
}

int ModelResetCommandFixed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelMoveCommand::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
