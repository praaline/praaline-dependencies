/****************************************************************************
** Meta object code from reading C++ file 'ObjectPropertyBrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/ObjectPropertyBrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObjectPropertyBrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__ObjectPropertyBrowser_t {
    QByteArrayData data[18];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__ObjectPropertyBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__ObjectPropertyBrowser_t qt_meta_stringdata_Qtilities__CoreGui__ObjectPropertyBrowser = {
    {
QT_MOC_LITERAL(0, 0, 41), // "Qtilities::CoreGui::ObjectPro..."
QT_MOC_LITERAL(1, 42, 7), // "refresh"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 11), // "has_changes"
QT_MOC_LITERAL(4, 63, 9), // "setObject"
QT_MOC_LITERAL(5, 73, 3), // "obj"
QT_MOC_LITERAL(6, 77, 15), // "monitor_changes"
QT_MOC_LITERAL(7, 93, 17), // "QPointer<QObject>"
QT_MOC_LITERAL(8, 111, 15), // "QList<QObject*>"
QT_MOC_LITERAL(9, 127, 7), // "objects"
QT_MOC_LITERAL(10, 135, 25), // "QList<QPointer<QObject> >"
QT_MOC_LITERAL(11, 161, 23), // "handle_property_changed"
QT_MOC_LITERAL(12, 185, 11), // "QtProperty*"
QT_MOC_LITERAL(13, 197, 19), // "handleObjectDeleted"
QT_MOC_LITERAL(14, 217, 11), // "BrowserType"
QT_MOC_LITERAL(15, 229, 11), // "TreeBrowser"
QT_MOC_LITERAL(16, 241, 15), // "GroupBoxBrowser"
QT_MOC_LITERAL(17, 257, 13) // "ButtonBrowser"

    },
    "Qtilities::CoreGui::ObjectPropertyBrowser\0"
    "refresh\0\0has_changes\0setObject\0obj\0"
    "monitor_changes\0QPointer<QObject>\0"
    "QList<QObject*>\0objects\0"
    "QList<QPointer<QObject> >\0"
    "handle_property_changed\0QtProperty*\0"
    "handleObjectDeleted\0BrowserType\0"
    "TreeBrowser\0GroupBoxBrowser\0ButtonBrowser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__ObjectPropertyBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       1,  116, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       1,    0,   77,    2, 0x2a /* Public | MethodCloned */,
       4,    2,   78,    2, 0x0a /* Public */,
       4,    1,   83,    2, 0x2a /* Public | MethodCloned */,
       4,    2,   86,    2, 0x0a /* Public */,
       4,    1,   91,    2, 0x2a /* Public | MethodCloned */,
       4,    2,   94,    2, 0x0a /* Public */,
       4,    1,   99,    2, 0x2a /* Public | MethodCloned */,
       4,    2,  102,    2, 0x0a /* Public */,
       4,    1,  107,    2, 0x2a /* Public | MethodCloned */,
      11,    2,  110,    2, 0x08 /* Private */,
      13,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::QObjectStar,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    5,    6,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,    9,    6,
    QMetaType::Void, 0x80000000 | 10,    9,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QVariant,    2,    2,
    QMetaType::Void,

 // enums: name, flags, count, data
      14, 0x0,    3,  120,

 // enum data: key, value
      15, uint(Qtilities::CoreGui::ObjectPropertyBrowser::TreeBrowser),
      16, uint(Qtilities::CoreGui::ObjectPropertyBrowser::GroupBoxBrowser),
      17, uint(Qtilities::CoreGui::ObjectPropertyBrowser::ButtonBrowser),

       0        // eod
};

void Qtilities::CoreGui::ObjectPropertyBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObjectPropertyBrowser *_t = static_cast<ObjectPropertyBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->refresh(); break;
        case 2: _t->setObject((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->setObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->setObject((*reinterpret_cast< QPointer<QObject>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->setObject((*reinterpret_cast< QPointer<QObject>(*)>(_a[1]))); break;
        case 6: _t->setObject((*reinterpret_cast< QList<QObject*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->setObject((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 8: _t->setObject((*reinterpret_cast< QList<QPointer<QObject> >(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->setObject((*reinterpret_cast< QList<QPointer<QObject> >(*)>(_a[1]))); break;
        case 10: _t->handle_property_changed((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 11: _t->handleObjectDeleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPointer<QObject> >(); break;
            }
            break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPointer<QObject> > >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPointer<QObject> > >(); break;
            }
            break;
        }
    }
}

const QMetaObject Qtilities::CoreGui::ObjectPropertyBrowser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__ObjectPropertyBrowser.data,
      qt_meta_data_Qtilities__CoreGui__ObjectPropertyBrowser,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::ObjectPropertyBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::ObjectPropertyBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__ObjectPropertyBrowser.stringdata0))
        return static_cast<void*>(const_cast< ObjectPropertyBrowser*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtilities::CoreGui::ObjectPropertyBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
