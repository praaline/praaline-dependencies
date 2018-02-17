/****************************************************************************
** Meta object code from reading C++ file 'ObjectDynamicPropertyBrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/ObjectDynamicPropertyBrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObjectDynamicPropertyBrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__ObjectDynamicPropertyBrowser_t {
    QByteArrayData data[24];
    char stringdata0[395];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__ObjectDynamicPropertyBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__ObjectDynamicPropertyBrowser_t qt_meta_stringdata_Qtilities__CoreGui__ObjectDynamicPropertyBrowser = {
    {
QT_MOC_LITERAL(0, 0, 48), // "Qtilities::CoreGui::ObjectDyn..."
QT_MOC_LITERAL(1, 49, 13), // "propertyAdded"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 13), // "property_name"
QT_MOC_LITERAL(4, 78, 15), // "propertyRemoved"
QT_MOC_LITERAL(5, 94, 7), // "refresh"
QT_MOC_LITERAL(6, 102, 9), // "setObject"
QT_MOC_LITERAL(7, 112, 3), // "obj"
QT_MOC_LITERAL(8, 116, 15), // "monitor_changes"
QT_MOC_LITERAL(9, 132, 17), // "QPointer<QObject>"
QT_MOC_LITERAL(10, 150, 15), // "QList<QObject*>"
QT_MOC_LITERAL(11, 166, 7), // "objects"
QT_MOC_LITERAL(12, 174, 25), // "QList<QPointer<QObject> >"
QT_MOC_LITERAL(13, 200, 30), // "propertyChangedFromBrowserSide"
QT_MOC_LITERAL(14, 231, 11), // "QtProperty*"
QT_MOC_LITERAL(15, 243, 29), // "propertyChangedFromObjectSide"
QT_MOC_LITERAL(16, 273, 8), // "modified"
QT_MOC_LITERAL(17, 282, 19), // "handleObjectDeleted"
QT_MOC_LITERAL(18, 302, 17), // "handleAddProperty"
QT_MOC_LITERAL(19, 320, 20), // "handleRemoveProperty"
QT_MOC_LITERAL(20, 341, 11), // "BrowserType"
QT_MOC_LITERAL(21, 353, 11), // "TreeBrowser"
QT_MOC_LITERAL(22, 365, 15), // "GroupBoxBrowser"
QT_MOC_LITERAL(23, 381, 13) // "ButtonBrowser"

    },
    "Qtilities::CoreGui::ObjectDynamicPropertyBrowser\0"
    "propertyAdded\0\0property_name\0"
    "propertyRemoved\0refresh\0setObject\0obj\0"
    "monitor_changes\0QPointer<QObject>\0"
    "QList<QObject*>\0objects\0"
    "QList<QPointer<QObject> >\0"
    "propertyChangedFromBrowserSide\0"
    "QtProperty*\0propertyChangedFromObjectSide\0"
    "modified\0handleObjectDeleted\0"
    "handleAddProperty\0handleRemoveProperty\0"
    "BrowserType\0TreeBrowser\0GroupBoxBrowser\0"
    "ButtonBrowser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__ObjectDynamicPropertyBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       1,  150, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  105,    2, 0x0a /* Public */,
       6,    2,  106,    2, 0x0a /* Public */,
       6,    1,  111,    2, 0x2a /* Public | MethodCloned */,
       6,    2,  114,    2, 0x0a /* Public */,
       6,    1,  119,    2, 0x2a /* Public | MethodCloned */,
       6,    2,  122,    2, 0x0a /* Public */,
       6,    1,  127,    2, 0x2a /* Public | MethodCloned */,
       6,    2,  130,    2, 0x0a /* Public */,
       6,    1,  135,    2, 0x2a /* Public | MethodCloned */,
      13,    2,  138,    2, 0x08 /* Private */,
      15,    1,  143,    2, 0x08 /* Private */,
      15,    0,  146,    2, 0x28 /* Private | MethodCloned */,
      17,    0,  147,    2, 0x08 /* Private */,
      18,    0,  148,    2, 0x08 /* Private */,
      19,    0,  149,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Bool,    7,    8,
    QMetaType::Void, QMetaType::QObjectStar,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,    7,    8,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,   11,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Bool,   11,    8,
    QMetaType::Void, 0x80000000 | 12,   11,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      20, 0x0,    3,  154,

 // enum data: key, value
      21, uint(Qtilities::CoreGui::ObjectDynamicPropertyBrowser::TreeBrowser),
      22, uint(Qtilities::CoreGui::ObjectDynamicPropertyBrowser::GroupBoxBrowser),
      23, uint(Qtilities::CoreGui::ObjectDynamicPropertyBrowser::ButtonBrowser),

       0        // eod
};

void Qtilities::CoreGui::ObjectDynamicPropertyBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObjectDynamicPropertyBrowser *_t = static_cast<ObjectDynamicPropertyBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->propertyRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->refresh(); break;
        case 3: _t->setObject((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->setObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 5: _t->setObject((*reinterpret_cast< QPointer<QObject>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->setObject((*reinterpret_cast< QPointer<QObject>(*)>(_a[1]))); break;
        case 7: _t->setObject((*reinterpret_cast< QList<QObject*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->setObject((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 9: _t->setObject((*reinterpret_cast< QList<QPointer<QObject> >(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->setObject((*reinterpret_cast< QList<QPointer<QObject> >(*)>(_a[1]))); break;
        case 11: _t->propertyChangedFromBrowserSide((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 12: _t->propertyChangedFromObjectSide((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->propertyChangedFromObjectSide(); break;
        case 14: _t->handleObjectDeleted(); break;
        case 15: _t->handleAddProperty(); break;
        case 16: _t->handleRemoveProperty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPointer<QObject> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPointer<QObject> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPointer<QObject> > >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPointer<QObject> > >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ObjectDynamicPropertyBrowser::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectDynamicPropertyBrowser::propertyAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ObjectDynamicPropertyBrowser::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectDynamicPropertyBrowser::propertyRemoved)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::ObjectDynamicPropertyBrowser::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__ObjectDynamicPropertyBrowser.data,
      qt_meta_data_Qtilities__CoreGui__ObjectDynamicPropertyBrowser,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::ObjectDynamicPropertyBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::ObjectDynamicPropertyBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__ObjectDynamicPropertyBrowser.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Qtilities::CoreGui::ObjectDynamicPropertyBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::ObjectDynamicPropertyBrowser::propertyAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::CoreGui::ObjectDynamicPropertyBrowser::propertyRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
