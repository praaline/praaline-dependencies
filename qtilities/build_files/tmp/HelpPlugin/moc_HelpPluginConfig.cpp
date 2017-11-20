/****************************************************************************
** Meta object code from reading C++ file 'HelpPluginConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Plugins/HelpPlugin/source/HelpPluginConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HelpPluginConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qtilities__Plugins__Help__HelpPluginConfig_t {
    QByteArrayData data[4];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Plugins__Help__HelpPluginConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Plugins__Help__HelpPluginConfig_t qt_meta_stringdata_Qtilities__Plugins__Help__HelpPluginConfig = {
    {
QT_MOC_LITERAL(0, 0, 42), // "Qtilities::Plugins::Help::Hel..."
QT_MOC_LITERAL(1, 43, 18), // "handleFilesChanged"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 5) // "files"

    },
    "Qtilities::Plugins::Help::HelpPluginConfig\0"
    "handleFilesChanged\0\0files"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Plugins__Help__HelpPluginConfig[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

       0        // eod
};

void Qtilities::Plugins::Help::HelpPluginConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpPluginConfig *_t = static_cast<HelpPluginConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleFilesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Qtilities::Plugins::Help::HelpPluginConfig::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtilities__Plugins__Help__HelpPluginConfig.data,
      qt_meta_data_Qtilities__Plugins__Help__HelpPluginConfig,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qtilities::Plugins::Help::HelpPluginConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Plugins::Help::HelpPluginConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Plugins__Help__HelpPluginConfig.stringdata0))
        return static_cast<void*>(const_cast< HelpPluginConfig*>(this));
    if (!strcmp(_clname, "IConfigPage"))
        return static_cast< IConfigPage*>(const_cast< HelpPluginConfig*>(this));
    if (!strcmp(_clname, "com.Qtilities.CoreGui.IConfigPage/1.0"))
        return static_cast< Qtilities::CoreGui::Interfaces::IConfigPage*>(const_cast< HelpPluginConfig*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtilities::Plugins::Help::HelpPluginConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
