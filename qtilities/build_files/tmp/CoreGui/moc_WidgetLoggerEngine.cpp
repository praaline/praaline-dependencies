/****************************************************************************
** Meta object code from reading C++ file 'WidgetLoggerEngine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/WidgetLoggerEngine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WidgetLoggerEngine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__WidgetLoggerEngine_t {
    QByteArrayData data[19];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__WidgetLoggerEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__WidgetLoggerEngine_t qt_meta_stringdata_Qtilities__CoreGui__WidgetLoggerEngine = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Qtilities::CoreGui::WidgetLog..."
QT_MOC_LITERAL(1, 39, 10), // "logMessage"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 7), // "message"
QT_MOC_LITERAL(4, 59, 19), // "Logger::MessageType"
QT_MOC_LITERAL(5, 79, 12), // "message_type"
QT_MOC_LITERAL(6, 92, 8), // "clearLog"
QT_MOC_LITERAL(7, 101, 15), // "setLineWrapMode"
QT_MOC_LITERAL(8, 117, 28), // "QPlainTextEdit::LineWrapMode"
QT_MOC_LITERAL(9, 146, 4), // "mode"
QT_MOC_LITERAL(10, 151, 15), // "MessageDisplays"
QT_MOC_LITERAL(11, 167, 17), // "NoMessageDisplays"
QT_MOC_LITERAL(12, 185, 24), // "AllMessagesPlainTextEdit"
QT_MOC_LITERAL(13, 210, 19), // "IssuesPlainTextEdit"
QT_MOC_LITERAL(14, 230, 21), // "WarningsPlainTextEdit"
QT_MOC_LITERAL(15, 252, 19), // "ErrorsPlainTextEdit"
QT_MOC_LITERAL(16, 272, 15), // "DefaultDisplays"
QT_MOC_LITERAL(17, 288, 19), // "DefaultTaskDisplays"
QT_MOC_LITERAL(18, 308, 19) // "MessageDisplaysFlag"

    },
    "Qtilities::CoreGui::WidgetLoggerEngine\0"
    "logMessage\0\0message\0Logger::MessageType\0"
    "message_type\0clearLog\0setLineWrapMode\0"
    "QPlainTextEdit::LineWrapMode\0mode\0"
    "MessageDisplays\0NoMessageDisplays\0"
    "AllMessagesPlainTextEdit\0IssuesPlainTextEdit\0"
    "WarningsPlainTextEdit\0ErrorsPlainTextEdit\0"
    "DefaultDisplays\0DefaultTaskDisplays\0"
    "MessageDisplaysFlag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__WidgetLoggerEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       2,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       6,    0,   34,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

 // enums: name, flags, count, data
      10, 0x0,    7,   46,
      18, 0x1,    7,   60,

 // enum data: key, value
      11, uint(Qtilities::CoreGui::WidgetLoggerEngine::NoMessageDisplays),
      12, uint(Qtilities::CoreGui::WidgetLoggerEngine::AllMessagesPlainTextEdit),
      13, uint(Qtilities::CoreGui::WidgetLoggerEngine::IssuesPlainTextEdit),
      14, uint(Qtilities::CoreGui::WidgetLoggerEngine::WarningsPlainTextEdit),
      15, uint(Qtilities::CoreGui::WidgetLoggerEngine::ErrorsPlainTextEdit),
      16, uint(Qtilities::CoreGui::WidgetLoggerEngine::DefaultDisplays),
      17, uint(Qtilities::CoreGui::WidgetLoggerEngine::DefaultTaskDisplays),
      11, uint(Qtilities::CoreGui::WidgetLoggerEngine::NoMessageDisplays),
      12, uint(Qtilities::CoreGui::WidgetLoggerEngine::AllMessagesPlainTextEdit),
      13, uint(Qtilities::CoreGui::WidgetLoggerEngine::IssuesPlainTextEdit),
      14, uint(Qtilities::CoreGui::WidgetLoggerEngine::WarningsPlainTextEdit),
      15, uint(Qtilities::CoreGui::WidgetLoggerEngine::ErrorsPlainTextEdit),
      16, uint(Qtilities::CoreGui::WidgetLoggerEngine::DefaultDisplays),
      17, uint(Qtilities::CoreGui::WidgetLoggerEngine::DefaultTaskDisplays),

       0        // eod
};

void Qtilities::CoreGui::WidgetLoggerEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WidgetLoggerEngine *_t = static_cast<WidgetLoggerEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Logger::MessageType(*)>(_a[2]))); break;
        case 1: _t->clearLog(); break;
        case 2: _t->setLineWrapMode((*reinterpret_cast< QPlainTextEdit::LineWrapMode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Qtilities::CoreGui::WidgetLoggerEngine::staticMetaObject = {
    { &AbstractLoggerEngine::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__WidgetLoggerEngine.data,
      qt_meta_data_Qtilities__CoreGui__WidgetLoggerEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::WidgetLoggerEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::WidgetLoggerEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__WidgetLoggerEngine.stringdata0))
        return static_cast<void*>(const_cast< WidgetLoggerEngine*>(this));
    return AbstractLoggerEngine::qt_metacast(_clname);
}

int Qtilities::CoreGui::WidgetLoggerEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractLoggerEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
