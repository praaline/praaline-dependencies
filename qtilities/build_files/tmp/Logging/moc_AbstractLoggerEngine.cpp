/****************************************************************************
** Meta object code from reading C++ file 'AbstractLoggerEngine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Logging/source/AbstractLoggerEngine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractLoggerEngine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Logging__AbstractLoggerEngine_t {
    QByteArrayData data[13];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Logging__AbstractLoggerEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Logging__AbstractLoggerEngine_t qt_meta_stringdata_Qtilities__Logging__AbstractLoggerEngine = {
    {
QT_MOC_LITERAL(0, 0, 40), // "Qtilities::Logging::AbstractL..."
QT_MOC_LITERAL(1, 41, 8), // "finalize"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 11), // "newMessages"
QT_MOC_LITERAL(4, 63, 11), // "engine_name"
QT_MOC_LITERAL(5, 75, 19), // "Logger::MessageType"
QT_MOC_LITERAL(6, 95, 12), // "message_type"
QT_MOC_LITERAL(7, 108, 27), // "Logger::MessageContextFlags"
QT_MOC_LITERAL(8, 136, 15), // "message_context"
QT_MOC_LITERAL(9, 152, 8), // "messages"
QT_MOC_LITERAL(10, 161, 19), // "EnabledMessageTypes"
QT_MOC_LITERAL(11, 181, 44), // "Qtilities::Logging::Logger::M..."
QT_MOC_LITERAL(12, 226, 16) // "FormattingEngine"

    },
    "Qtilities::Logging::AbstractLoggerEngine\0"
    "finalize\0\0newMessages\0engine_name\0"
    "Logger::MessageType\0message_type\0"
    "Logger::MessageContextFlags\0message_context\0"
    "messages\0EnabledMessageTypes\0"
    "Qtilities::Logging::Logger::MessageTypeFlags\0"
    "FormattingEngine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Logging__AbstractLoggerEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    4,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5, 0x80000000 | 7, QMetaType::QVariantList,    4,    6,    8,    9,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x0009510b,
      12, QMetaType::QString, 0x00095001,

       0        // eod
};

void Qtilities::Logging::AbstractLoggerEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractLoggerEngine *_t = static_cast<AbstractLoggerEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finalize(); break;
        case 1: _t->newMessages((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Logger::MessageType(*)>(_a[2])),(*reinterpret_cast< Logger::MessageContextFlags(*)>(_a[3])),(*reinterpret_cast< const QList<QVariant>(*)>(_a[4]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AbstractLoggerEngine *_t = static_cast<AbstractLoggerEngine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qtilities::Logging::Logger::MessageTypeFlags*>(_v) = _t->getEnabledMessageTypes(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->formattingEngineName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AbstractLoggerEngine *_t = static_cast<AbstractLoggerEngine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabledMessageTypes(*reinterpret_cast< Qtilities::Logging::Logger::MessageTypeFlags*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_Qtilities__Logging__AbstractLoggerEngine[] = {
        &Qtilities::Logging::Logger::staticMetaObject,
    nullptr
};

const QMetaObject Qtilities::Logging::AbstractLoggerEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Logging__AbstractLoggerEngine.data,
      qt_meta_data_Qtilities__Logging__AbstractLoggerEngine,  qt_static_metacall, qt_meta_extradata_Qtilities__Logging__AbstractLoggerEngine, nullptr}
};


const QMetaObject *Qtilities::Logging::AbstractLoggerEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Logging::AbstractLoggerEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Logging__AbstractLoggerEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qtilities::Logging::AbstractLoggerEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
