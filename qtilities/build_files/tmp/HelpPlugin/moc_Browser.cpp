/****************************************************************************
** Meta object code from reading C++ file 'Browser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Plugins/HelpPlugin/source/Browser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Browser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qtilities__Plugins__Help__Browser_t {
    QByteArrayData data[17];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Plugins__Help__Browser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Plugins__Help__Browser_t qt_meta_stringdata_Qtilities__Plugins__Help__Browser = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Qtilities::Plugins::Help::Bro..."
QT_MOC_LITERAL(1, 34, 13), // "newUrlEntered"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 3), // "url"
QT_MOC_LITERAL(4, 53, 14), // "handle_loadUrl"
QT_MOC_LITERAL(5, 68, 17), // "handle_urlChanged"
QT_MOC_LITERAL(6, 86, 15), // "handle_finished"
QT_MOC_LITERAL(7, 102, 2), // "ok"
QT_MOC_LITERAL(8, 105, 13), // "showSearchBox"
QT_MOC_LITERAL(9, 119, 25), // "handleSearchStringChanged"
QT_MOC_LITERAL(10, 145, 13), // "search_string"
QT_MOC_LITERAL(11, 159, 26), // "handleSearchOptionsChanged"
QT_MOC_LITERAL(12, 186, 19), // "handleSearchForward"
QT_MOC_LITERAL(13, 206, 21), // "handleSearchBackwards"
QT_MOC_LITERAL(14, 228, 17), // "handleSearchClose"
QT_MOC_LITERAL(15, 246, 18), // "handleLoadProgress"
QT_MOC_LITERAL(16, 265, 5) // "value"

    },
    "Qtilities::Plugins::Help::Browser\0"
    "newUrlEntered\0\0url\0handle_loadUrl\0"
    "handle_urlChanged\0handle_finished\0ok\0"
    "showSearchBox\0handleSearchStringChanged\0"
    "search_string\0handleSearchOptionsChanged\0"
    "handleSearchForward\0handleSearchBackwards\0"
    "handleSearchClose\0handleLoadProgress\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Plugins__Help__Browser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   72,    2, 0x08 /* Private */,
       5,    1,   73,    2, 0x08 /* Private */,
       6,    1,   76,    2, 0x08 /* Private */,
       8,    0,   79,    2, 0x08 /* Private */,
       9,    1,   80,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,
      14,    0,   86,    2, 0x08 /* Private */,
      15,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,

       0        // eod
};

void Qtilities::Plugins::Help::Browser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Browser *_t = static_cast<Browser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newUrlEntered((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->handle_loadUrl(); break;
        case 2: _t->handle_urlChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 3: _t->handle_finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showSearchBox(); break;
        case 5: _t->handleSearchStringChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->handleSearchOptionsChanged(); break;
        case 7: _t->handleSearchForward(); break;
        case 8: _t->handleSearchBackwards(); break;
        case 9: _t->handleSearchClose(); break;
        case 10: _t->handleLoadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Browser::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Browser::newUrlEntered)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::Plugins::Help::Browser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtilities__Plugins__Help__Browser.data,
      qt_meta_data_Qtilities__Plugins__Help__Browser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qtilities::Plugins::Help::Browser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Plugins::Help::Browser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Plugins__Help__Browser.stringdata0))
        return static_cast<void*>(const_cast< Browser*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtilities::Plugins::Help::Browser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::Plugins::Help::Browser::newUrlEntered(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
