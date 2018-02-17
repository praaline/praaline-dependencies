/****************************************************************************
** Meta object code from reading C++ file 'Command.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/Command.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Command.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__Command_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__Command_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__Command_t qt_meta_stringdata_Qtilities__CoreGui__Command = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Qtilities::CoreGui::Command"
QT_MOC_LITERAL(1, 28, 18), // "keySequenceChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11) // "KeySequence"

    },
    "Qtilities::CoreGui::Command\0"
    "keySequenceChanged\0\0KeySequence"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__Command[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QKeySequence, 0x00095103,

       0        // eod
};

void Qtilities::CoreGui::Command::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Command *_t = static_cast<Command *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keySequenceChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Command::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Command::keySequenceChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Command *_t = static_cast<Command *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QKeySequence*>(_v) = _t->keySequence(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Command *_t = static_cast<Command *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setKeySequence(*reinterpret_cast< QKeySequence*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::CoreGui::Command::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__Command.data,
      qt_meta_data_Qtilities__CoreGui__Command,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::Command::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::Command::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__Command.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qtilities::CoreGui::Command::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Qtilities::CoreGui::Command::keySequenceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Qtilities__CoreGui__ProxyAction_t {
    QByteArrayData data[3];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__ProxyAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__ProxyAction_t qt_meta_stringdata_Qtilities__CoreGui__ProxyAction = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Qtilities::CoreGui::ProxyAction"
QT_MOC_LITERAL(1, 32, 20), // "updateFrontendAction"
QT_MOC_LITERAL(2, 53, 0) // ""

    },
    "Qtilities::CoreGui::ProxyAction\0"
    "updateFrontendAction\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__ProxyAction[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Qtilities::CoreGui::ProxyAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProxyAction *_t = static_cast<ProxyAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateFrontendAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::CoreGui::ProxyAction::staticMetaObject = {
    { &Command::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__ProxyAction.data,
      qt_meta_data_Qtilities__CoreGui__ProxyAction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::ProxyAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::ProxyAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__ProxyAction.stringdata0))
        return static_cast<void*>(this);
    return Command::qt_metacast(_clname);
}

int Qtilities::CoreGui::ProxyAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Command::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Qtilities__CoreGui__ShortcutCommand_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__ShortcutCommand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__ShortcutCommand_t qt_meta_stringdata_Qtilities__CoreGui__ShortcutCommand = {
    {
QT_MOC_LITERAL(0, 0, 35) // "Qtilities::CoreGui::ShortcutC..."

    },
    "Qtilities::CoreGui::ShortcutCommand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__ShortcutCommand[] = {

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

void Qtilities::CoreGui::ShortcutCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::CoreGui::ShortcutCommand::staticMetaObject = {
    { &Command::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__ShortcutCommand.data,
      qt_meta_data_Qtilities__CoreGui__ShortcutCommand,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::ShortcutCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::ShortcutCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__ShortcutCommand.stringdata0))
        return static_cast<void*>(this);
    return Command::qt_metacast(_clname);
}

int Qtilities::CoreGui::ShortcutCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Command::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
