/****************************************************************************
** Meta object code from reading C++ file 'ExtensionSystemConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ExtensionSystem/source/ExtensionSystemConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExtensionSystemConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__ExtensionSystem__ExtensionSystemConfig_t {
    QByteArrayData data[10];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__ExtensionSystem__ExtensionSystemConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__ExtensionSystem__ExtensionSystemConfig_t qt_meta_stringdata_Qtilities__ExtensionSystem__ExtensionSystemConfig = {
    {
QT_MOC_LITERAL(0, 0, 49), // "Qtilities::ExtensionSystem::E..."
QT_MOC_LITERAL(1, 50, 23), // "handleBtnDetailsClicked"
QT_MOC_LITERAL(2, 74, 0), // ""
QT_MOC_LITERAL(3, 75, 22), // "handleSelectionChanged"
QT_MOC_LITERAL(4, 98, 15), // "QList<QObject*>"
QT_MOC_LITERAL(5, 114, 9), // "selection"
QT_MOC_LITERAL(6, 124, 28), // "handleSelectionDoubleClicked"
QT_MOC_LITERAL(7, 153, 16), // "setStatusMessage"
QT_MOC_LITERAL(8, 170, 14), // "status_message"
QT_MOC_LITERAL(9, 185, 17) // "updatePluginPaths"

    },
    "Qtilities::ExtensionSystem::ExtensionSystemConfig\0"
    "handleBtnDetailsClicked\0\0"
    "handleSelectionChanged\0QList<QObject*>\0"
    "selection\0handleSelectionDoubleClicked\0"
    "setStatusMessage\0status_message\0"
    "updatePluginPaths"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__ExtensionSystem__ExtensionSystemConfig[] = {

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
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,
       7,    1,   46,    2, 0x0a /* Public */,
       9,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QObjectStar,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

       0        // eod
};

void Qtilities::ExtensionSystem::ExtensionSystemConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExtensionSystemConfig *_t = static_cast<ExtensionSystemConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleBtnDetailsClicked(); break;
        case 1: _t->handleSelectionChanged((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 2: _t->handleSelectionDoubleClicked((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->setStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updatePluginPaths(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        }
    }
}

const QMetaObject Qtilities::ExtensionSystem::ExtensionSystemConfig::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtilities__ExtensionSystem__ExtensionSystemConfig.data,
      qt_meta_data_Qtilities__ExtensionSystem__ExtensionSystemConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::ExtensionSystem::ExtensionSystemConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::ExtensionSystem::ExtensionSystemConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__ExtensionSystem__ExtensionSystemConfig.stringdata0))
        return static_cast<void*>(const_cast< ExtensionSystemConfig*>(this));
    if (!strcmp(_clname, "IConfigPage"))
        return static_cast< IConfigPage*>(const_cast< ExtensionSystemConfig*>(this));
    if (!strcmp(_clname, "com.Qtilities.CoreGui.IConfigPage/1.0"))
        return static_cast< Qtilities::CoreGui::Interfaces::IConfigPage*>(const_cast< ExtensionSystemConfig*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtilities::ExtensionSystem::ExtensionSystemConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
