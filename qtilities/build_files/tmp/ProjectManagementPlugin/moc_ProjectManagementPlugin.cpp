/****************************************************************************
** Meta object code from reading C++ file 'ProjectManagementPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Plugins/ProjectManagementPlugin/source/ProjectManagementPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProjectManagementPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Plugins__ProjectManagement__ProjectManagementPlugin_t {
    QByteArrayData data[3];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Plugins__ProjectManagement__ProjectManagementPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Plugins__ProjectManagement__ProjectManagementPlugin_t qt_meta_stringdata_Qtilities__Plugins__ProjectManagement__ProjectManagementPlugin = {
    {
QT_MOC_LITERAL(0, 0, 62), // "Qtilities::Plugins::ProjectMa..."
QT_MOC_LITERAL(1, 63, 26), // "handle_projectStateChanged"
QT_MOC_LITERAL(2, 90, 0) // ""

    },
    "Qtilities::Plugins::ProjectManagement::ProjectManagementPlugin\0"
    "handle_projectStateChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Plugins__ProjectManagement__ProjectManagementPlugin[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Qtilities::Plugins::ProjectManagement::ProjectManagementPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProjectManagementPlugin *_t = static_cast<ProjectManagementPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handle_projectStateChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::Plugins::ProjectManagement::ProjectManagementPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__Plugins__ProjectManagement__ProjectManagementPlugin.data,
      qt_meta_data_Qtilities__Plugins__ProjectManagement__ProjectManagementPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Plugins::ProjectManagement::ProjectManagementPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Plugins::ProjectManagement::ProjectManagementPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Plugins__ProjectManagement__ProjectManagementPlugin.stringdata0))
        return static_cast<void*>(const_cast< ProjectManagementPlugin*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< ProjectManagementPlugin*>(this));
    if (!strcmp(_clname, "com.Qtilities.ExtensionSystem.IPlugin/1.0"))
        return static_cast< Qtilities::ExtensionSystem::Interfaces::IPlugin*>(const_cast< ProjectManagementPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::Plugins::ProjectManagement::ProjectManagementPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa4, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '%',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    'i',  'l',  'i',  't',  'i',  'e',  's',  '.', 
    'P',  'r',  'o',  'j',  'e',  'c',  't',  'M', 
    'a',  'n',  'a',  'g',  'e',  'm',  'e',  'n', 
    't',  'P',  'l',  'u',  'g',  'i',  'n',  0x00,
    0x1b, 0x0a, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x17, 0x00, 'P',  'r',  'o',  'j',  'e',  'c', 
    't',  'M',  'a',  'n',  'a',  'g',  'e',  'm', 
    'e',  'n',  't',  'P',  'l',  'u',  'g',  'i', 
    'n',  0x00, 0x00, 0x00, ':',  ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x13, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, '@',  0x00, 0x00, 0x00,
    '|',  0x00, 0x00, 0x00, 'l',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa4, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '%',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    'i',  'l',  'i',  't',  'i',  'e',  's',  '.', 
    'P',  'r',  'o',  'j',  'e',  'c',  't',  'M', 
    'a',  'n',  'a',  'g',  'e',  'm',  'e',  'n', 
    't',  'P',  'l',  'u',  'g',  'i',  'n',  0x00,
    0x15, 0x0a, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x9b, 0x0d, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x17, 0x00, 'P',  'r', 
    'o',  'j',  'e',  'c',  't',  'M',  'a',  'n', 
    'a',  'g',  'e',  'm',  'e',  'n',  't',  'P', 
    'l',  'u',  'g',  'i',  'n',  0x00, 0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '@',  0x00, 0x00, 0x00, '\\', 0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace Qtilities;
using namespace Qtilities::Plugins;
using namespace Qtilities::Plugins::ProjectManagement;
QT_MOC_EXPORT_PLUGIN(Qtilities::Plugins::ProjectManagement::ProjectManagementPlugin, ProjectManagementPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
