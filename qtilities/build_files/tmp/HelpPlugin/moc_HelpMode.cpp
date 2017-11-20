/****************************************************************************
** Meta object code from reading C++ file 'HelpMode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Plugins/HelpPlugin/source/HelpMode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HelpMode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qtilities__Plugins__Help__qti_private_QHelpUrlSchemeHandler_t {
    QByteArrayData data[1];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Plugins__Help__qti_private_QHelpUrlSchemeHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Plugins__Help__qti_private_QHelpUrlSchemeHandler_t qt_meta_stringdata_Qtilities__Plugins__Help__qti_private_QHelpUrlSchemeHandler = {
    {
QT_MOC_LITERAL(0, 0, 59) // "Qtilities::Plugins::Help::qti..."

    },
    "Qtilities::Plugins::Help::qti_private_QHelpUrlSchemeHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Plugins__Help__qti_private_QHelpUrlSchemeHandler[] = {

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

void Qtilities::Plugins::Help::qti_private_QHelpUrlSchemeHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::Plugins::Help::qti_private_QHelpUrlSchemeHandler::staticMetaObject = {
    { &QWebEngineUrlSchemeHandler::staticMetaObject, qt_meta_stringdata_Qtilities__Plugins__Help__qti_private_QHelpUrlSchemeHandler.data,
      qt_meta_data_Qtilities__Plugins__Help__qti_private_QHelpUrlSchemeHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qtilities::Plugins::Help::qti_private_QHelpUrlSchemeHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Plugins::Help::qti_private_QHelpUrlSchemeHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Plugins__Help__qti_private_QHelpUrlSchemeHandler.stringdata0))
        return static_cast<void*>(const_cast< qti_private_QHelpUrlSchemeHandler*>(this));
    return QWebEngineUrlSchemeHandler::qt_metacast(_clname);
}

int Qtilities::Plugins::Help::qti_private_QHelpUrlSchemeHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebEngineUrlSchemeHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Qtilities__Plugins__Help__HelpMode_t {
    QByteArrayData data[12];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Plugins__Help__HelpMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Plugins__Help__HelpMode_t qt_meta_stringdata_Qtilities__Plugins__Help__HelpMode = {
    {
QT_MOC_LITERAL(0, 0, 34), // "Qtilities::Plugins::Help::Hel..."
QT_MOC_LITERAL(1, 35, 10), // "toggleDock"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 6), // "toggle"
QT_MOC_LITERAL(4, 54, 19), // "handleNewHelpWidget"
QT_MOC_LITERAL(5, 74, 8), // "QWidget*"
QT_MOC_LITERAL(6, 83, 6), // "widget"
QT_MOC_LITERAL(7, 90, 9), // "handleUrl"
QT_MOC_LITERAL(8, 100, 3), // "url"
QT_MOC_LITERAL(9, 104, 16), // "handleUrlRequest"
QT_MOC_LITERAL(10, 121, 14), // "ensure_visible"
QT_MOC_LITERAL(11, 136, 21) // "handleHomePageChanged"

    },
    "Qtilities::Plugins::Help::HelpMode\0"
    "toggleDock\0\0toggle\0handleNewHelpWidget\0"
    "QWidget*\0widget\0handleUrl\0url\0"
    "handleUrlRequest\0ensure_visible\0"
    "handleHomePageChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Plugins__Help__HelpMode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,
       9,    2,   48,    2, 0x0a /* Public */,
      11,    1,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool,    8,   10,
    QMetaType::Void, QMetaType::QUrl,    8,

       0        // eod
};

void Qtilities::Plugins::Help::HelpMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpMode *_t = static_cast<HelpMode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleDock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->handleNewHelpWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->handleUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->handleUrlRequest((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->handleHomePageChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Qtilities::Plugins::Help::HelpMode::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Qtilities__Plugins__Help__HelpMode.data,
      qt_meta_data_Qtilities__Plugins__Help__HelpMode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qtilities::Plugins::Help::HelpMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Plugins::Help::HelpMode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Plugins__Help__HelpMode.stringdata0))
        return static_cast<void*>(const_cast< HelpMode*>(this));
    if (!strcmp(_clname, "IMode"))
        return static_cast< IMode*>(const_cast< HelpMode*>(this));
    if (!strcmp(_clname, "com.Qtilities.CoreGui.IMode/1.0"))
        return static_cast< Qtilities::CoreGui::Interfaces::IMode*>(const_cast< HelpMode*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Qtilities::Plugins::Help::HelpMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
