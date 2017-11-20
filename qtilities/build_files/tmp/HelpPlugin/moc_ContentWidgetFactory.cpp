/****************************************************************************
** Meta object code from reading C++ file 'ContentWidgetFactory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Plugins/HelpPlugin/source/ContentWidgetFactory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContentWidgetFactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qtilities__Plugins__Help__ContentWidgetFactory_t {
    QByteArrayData data[5];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Plugins__Help__ContentWidgetFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Plugins__Help__ContentWidgetFactory_t qt_meta_stringdata_Qtilities__Plugins__Help__ContentWidgetFactory = {
    {
QT_MOC_LITERAL(0, 0, 46), // "Qtilities::Plugins::Help::Con..."
QT_MOC_LITERAL(1, 47, 16), // "newWidgetCreated"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 8), // "QWidget*"
QT_MOC_LITERAL(4, 74, 6) // "widget"

    },
    "Qtilities::Plugins::Help::ContentWidgetFactory\0"
    "newWidgetCreated\0\0QWidget*\0widget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Plugins__Help__ContentWidgetFactory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Qtilities::Plugins::Help::ContentWidgetFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContentWidgetFactory *_t = static_cast<ContentWidgetFactory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newWidgetCreated((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
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
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ContentWidgetFactory::*_t)(QWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContentWidgetFactory::newWidgetCreated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::Plugins::Help::ContentWidgetFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Plugins__Help__ContentWidgetFactory.data,
      qt_meta_data_Qtilities__Plugins__Help__ContentWidgetFactory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qtilities::Plugins::Help::ContentWidgetFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Plugins::Help::ContentWidgetFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Plugins__Help__ContentWidgetFactory.stringdata0))
        return static_cast<void*>(const_cast< ContentWidgetFactory*>(this));
    if (!strcmp(_clname, "ISideViewerWidget"))
        return static_cast< ISideViewerWidget*>(const_cast< ContentWidgetFactory*>(this));
    if (!strcmp(_clname, "com.Qtilities.CoreGui.ISideViewerWidget/1.0"))
        return static_cast< Qtilities::CoreGui::Interfaces::ISideViewerWidget*>(const_cast< ContentWidgetFactory*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::Plugins::Help::ContentWidgetFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Qtilities::Plugins::Help::ContentWidgetFactory::newWidgetCreated(QWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
