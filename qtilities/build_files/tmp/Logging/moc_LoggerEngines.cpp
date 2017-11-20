/****************************************************************************
** Meta object code from reading C++ file 'LoggerEngines.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Logging/source/LoggerEngines.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoggerEngines.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Logging__FileLoggerEngine_t {
    QByteArrayData data[7];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Logging__FileLoggerEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Logging__FileLoggerEngine_t qt_meta_stringdata_Qtilities__Logging__FileLoggerEngine = {
    {
QT_MOC_LITERAL(0, 0, 36), // "Qtilities::Logging::FileLogge..."
QT_MOC_LITERAL(1, 37, 10), // "logMessage"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 7), // "message"
QT_MOC_LITERAL(4, 57, 19), // "Logger::MessageType"
QT_MOC_LITERAL(5, 77, 12), // "message_type"
QT_MOC_LITERAL(6, 90, 8) // "FileName"

    },
    "Qtilities::Logging::FileLoggerEngine\0"
    "logMessage\0\0message\0Logger::MessageType\0"
    "message_type\0FileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Logging__FileLoggerEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00095001,

       0        // eod
};

void Qtilities::Logging::FileLoggerEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileLoggerEngine *_t = static_cast<FileLoggerEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Logger::MessageType(*)>(_a[2]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FileLoggerEngine *_t = static_cast<FileLoggerEngine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getFileName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qtilities::Logging::FileLoggerEngine::staticMetaObject = {
    { &AbstractLoggerEngine::staticMetaObject, qt_meta_stringdata_Qtilities__Logging__FileLoggerEngine.data,
      qt_meta_data_Qtilities__Logging__FileLoggerEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Logging::FileLoggerEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Logging::FileLoggerEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Logging__FileLoggerEngine.stringdata0))
        return static_cast<void*>(const_cast< FileLoggerEngine*>(this));
    if (!strcmp(_clname, "ILoggerExportable"))
        return static_cast< ILoggerExportable*>(const_cast< FileLoggerEngine*>(this));
    if (!strcmp(_clname, "com.Qtilities.Logging.ILoggerExportable/1.0"))
        return static_cast< Qtilities::Logging::Interfaces::ILoggerExportable*>(const_cast< FileLoggerEngine*>(this));
    return AbstractLoggerEngine::qt_metacast(_clname);
}

int Qtilities::Logging::FileLoggerEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractLoggerEngine::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_Qtilities__Logging__QtMsgLoggerEngine_t {
    QByteArrayData data[6];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Logging__QtMsgLoggerEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Logging__QtMsgLoggerEngine_t qt_meta_stringdata_Qtilities__Logging__QtMsgLoggerEngine = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Qtilities::Logging::QtMsgLogg..."
QT_MOC_LITERAL(1, 38, 10), // "logMessage"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 7), // "message"
QT_MOC_LITERAL(4, 58, 19), // "Logger::MessageType"
QT_MOC_LITERAL(5, 78, 12) // "message_type"

    },
    "Qtilities::Logging::QtMsgLoggerEngine\0"
    "logMessage\0\0message\0Logger::MessageType\0"
    "message_type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Logging__QtMsgLoggerEngine[] = {

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
       1,    2,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

       0        // eod
};

void Qtilities::Logging::QtMsgLoggerEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtMsgLoggerEngine *_t = static_cast<QtMsgLoggerEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Logger::MessageType(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject Qtilities::Logging::QtMsgLoggerEngine::staticMetaObject = {
    { &AbstractLoggerEngine::staticMetaObject, qt_meta_stringdata_Qtilities__Logging__QtMsgLoggerEngine.data,
      qt_meta_data_Qtilities__Logging__QtMsgLoggerEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Logging::QtMsgLoggerEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Logging::QtMsgLoggerEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Logging__QtMsgLoggerEngine.stringdata0))
        return static_cast<void*>(const_cast< QtMsgLoggerEngine*>(this));
    return AbstractLoggerEngine::qt_metacast(_clname);
}

int Qtilities::Logging::QtMsgLoggerEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractLoggerEngine::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Qtilities__Logging__ConsoleLoggerEngine_t {
    QByteArrayData data[6];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Logging__ConsoleLoggerEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Logging__ConsoleLoggerEngine_t qt_meta_stringdata_Qtilities__Logging__ConsoleLoggerEngine = {
    {
QT_MOC_LITERAL(0, 0, 39), // "Qtilities::Logging::ConsoleLo..."
QT_MOC_LITERAL(1, 40, 10), // "logMessage"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 7), // "message"
QT_MOC_LITERAL(4, 60, 19), // "Logger::MessageType"
QT_MOC_LITERAL(5, 80, 12) // "message_type"

    },
    "Qtilities::Logging::ConsoleLoggerEngine\0"
    "logMessage\0\0message\0Logger::MessageType\0"
    "message_type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Logging__ConsoleLoggerEngine[] = {

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
       1,    2,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

       0        // eod
};

void Qtilities::Logging::ConsoleLoggerEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConsoleLoggerEngine *_t = static_cast<ConsoleLoggerEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Logger::MessageType(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject Qtilities::Logging::ConsoleLoggerEngine::staticMetaObject = {
    { &AbstractLoggerEngine::staticMetaObject, qt_meta_stringdata_Qtilities__Logging__ConsoleLoggerEngine.data,
      qt_meta_data_Qtilities__Logging__ConsoleLoggerEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Logging::ConsoleLoggerEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Logging::ConsoleLoggerEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Logging__ConsoleLoggerEngine.stringdata0))
        return static_cast<void*>(const_cast< ConsoleLoggerEngine*>(this));
    return AbstractLoggerEngine::qt_metacast(_clname);
}

int Qtilities::Logging::ConsoleLoggerEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractLoggerEngine::qt_metacall(_c, _id, _a);
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
