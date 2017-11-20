/****************************************************************************
** Meta object code from reading C++ file 'ObjectScopeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/ObjectScopeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObjectScopeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__ObjectScopeWidget_t {
    QByteArrayData data[20];
    char stringdata0[381];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__ObjectScopeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__ObjectScopeWidget_t qt_meta_stringdata_Qtilities__CoreGui__ObjectScopeWidget = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Qtilities::CoreGui::ObjectSco..."
QT_MOC_LITERAL(1, 38, 9), // "setObject"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 3), // "obj"
QT_MOC_LITERAL(4, 53, 17), // "QPointer<QObject>"
QT_MOC_LITERAL(5, 71, 15), // "QList<QObject*>"
QT_MOC_LITERAL(6, 87, 7), // "objects"
QT_MOC_LITERAL(7, 95, 25), // "QList<QPointer<QObject> >"
QT_MOC_LITERAL(8, 121, 14), // "updateContents"
QT_MOC_LITERAL(9, 136, 21), // "handleObjectDestroyed"
QT_MOC_LITERAL(10, 158, 36), // "handle_observerWidgetSelectio..."
QT_MOC_LITERAL(11, 195, 36), // "handle_actionRemoveContext_tr..."
QT_MOC_LITERAL(12, 232, 40), // "handle_actionDetachToSelectio..."
QT_MOC_LITERAL(13, 273, 25), // "handle_currentItemChanged"
QT_MOC_LITERAL(14, 299, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(15, 317, 7), // "current"
QT_MOC_LITERAL(16, 325, 9), // "ColumnIDs"
QT_MOC_LITERAL(17, 335, 10), // "NameColumn"
QT_MOC_LITERAL(18, 346, 22), // "UsesInstanceNameColumn"
QT_MOC_LITERAL(19, 369, 11) // "OwnerColumn"

    },
    "Qtilities::CoreGui::ObjectScopeWidget\0"
    "setObject\0\0obj\0QPointer<QObject>\0"
    "QList<QObject*>\0objects\0"
    "QList<QPointer<QObject> >\0updateContents\0"
    "handleObjectDestroyed\0"
    "handle_observerWidgetSelectionChange\0"
    "handle_actionRemoveContext_triggered\0"
    "handle_actionDetachToSelection_triggered\0"
    "handle_currentItemChanged\0QTableWidgetItem*\0"
    "current\0ColumnIDs\0NameColumn\0"
    "UsesInstanceNameColumn\0OwnerColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__ObjectScopeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       1,   86, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       1,    1,   67,    2, 0x0a /* Public */,
       1,    1,   70,    2, 0x0a /* Public */,
       1,    1,   73,    2, 0x0a /* Public */,
       8,    0,   76,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x0a /* Public */,
      10,    1,   78,    2, 0x0a /* Public */,
      11,    0,   81,    2, 0x0a /* Public */,
      12,    0,   82,    2, 0x0a /* Public */,
      13,    1,   83,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, 0x80000000 | 4,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 7,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

 // enums: name, flags, count, data
      16, 0x0,    3,   90,

 // enum data: key, value
      17, uint(Qtilities::CoreGui::ObjectScopeWidget::NameColumn),
      18, uint(Qtilities::CoreGui::ObjectScopeWidget::UsesInstanceNameColumn),
      19, uint(Qtilities::CoreGui::ObjectScopeWidget::OwnerColumn),

       0        // eod
};

void Qtilities::CoreGui::ObjectScopeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObjectScopeWidget *_t = static_cast<ObjectScopeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->setObject((*reinterpret_cast< QPointer<QObject>(*)>(_a[1]))); break;
        case 2: _t->setObject((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 3: _t->setObject((*reinterpret_cast< QList<QPointer<QObject> >(*)>(_a[1]))); break;
        case 4: _t->updateContents(); break;
        case 5: _t->handleObjectDestroyed(); break;
        case 6: _t->handle_observerWidgetSelectionChange((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 7: _t->handle_actionRemoveContext_triggered(); break;
        case 8: _t->handle_actionDetachToSelection_triggered(); break;
        case 9: _t->handle_currentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPointer<QObject> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPointer<QObject> > >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        }
    }
}

const QMetaObject Qtilities::CoreGui::ObjectScopeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__ObjectScopeWidget.data,
      qt_meta_data_Qtilities__CoreGui__ObjectScopeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::ObjectScopeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::ObjectScopeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__ObjectScopeWidget.stringdata0))
        return static_cast<void*>(const_cast< ObjectScopeWidget*>(this));
    if (!strcmp(_clname, "IContext"))
        return static_cast< IContext*>(const_cast< ObjectScopeWidget*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.IContext/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IContext*>(const_cast< ObjectScopeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtilities::CoreGui::ObjectScopeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
