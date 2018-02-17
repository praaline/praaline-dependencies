/****************************************************************************
** Meta object code from reading C++ file 'SideViewerWidgetFactory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/SideViewerWidgetFactory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SideViewerWidgetFactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__SideViewerWidgetFactory_t {
    QByteArrayData data[8];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__SideViewerWidgetFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__SideViewerWidgetFactory_t qt_meta_stringdata_Qtilities__CoreGui__SideViewerWidgetFactory = {
    {
QT_MOC_LITERAL(0, 0, 43), // "Qtilities::CoreGui::SideViewe..."
QT_MOC_LITERAL(1, 44, 16), // "newWidgetCreated"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 8), // "QWidget*"
QT_MOC_LITERAL(4, 71, 6), // "widget"
QT_MOC_LITERAL(5, 78, 12), // "widget_label"
QT_MOC_LITERAL(6, 91, 21), // "handleWidgetDestroyed"
QT_MOC_LITERAL(7, 113, 6) // "object"

    },
    "Qtilities::CoreGui::SideViewerWidgetFactory\0"
    "newWidgetCreated\0\0QWidget*\0widget\0"
    "widget_label\0handleWidgetDestroyed\0"
    "object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__SideViewerWidgetFactory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    7,

       0        // eod
};

void Qtilities::CoreGui::SideViewerWidgetFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SideViewerWidgetFactory *_t = static_cast<SideViewerWidgetFactory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newWidgetCreated((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->handleWidgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SideViewerWidgetFactory::*_t)(QWidget * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SideViewerWidgetFactory::newWidgetCreated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::SideViewerWidgetFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__SideViewerWidgetFactory.data,
      qt_meta_data_Qtilities__CoreGui__SideViewerWidgetFactory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::SideViewerWidgetFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::SideViewerWidgetFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__SideViewerWidgetFactory.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ISideViewerWidget"))
        return static_cast< ISideViewerWidget*>(this);
    if (!strcmp(_clname, "com.Qtilities.CoreGui.ISideViewerWidget/1.0"))
        return static_cast< Qtilities::CoreGui::Interfaces::ISideViewerWidget*>(this);
    return QObject::qt_metacast(_clname);
}

int Qtilities::CoreGui::SideViewerWidgetFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::SideViewerWidgetFactory::newWidgetCreated(QWidget * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
