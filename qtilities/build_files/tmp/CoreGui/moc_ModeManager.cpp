/****************************************************************************
** Meta object code from reading C++ file 'ModeManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/ModeManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModeManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__ModeManager_t {
    QByteArrayData data[22];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__ModeManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__ModeManager_t qt_meta_stringdata_Qtilities__CoreGui__ModeManager = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Qtilities::CoreGui::ModeManager"
QT_MOC_LITERAL(1, 32, 19), // "changeCentralWidget"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 8), // "QWidget*"
QT_MOC_LITERAL(4, 62, 18), // "new_central_widget"
QT_MOC_LITERAL(5, 81, 24), // "modeListItemSizesChanged"
QT_MOC_LITERAL(6, 106, 17), // "activeModeChanged"
QT_MOC_LITERAL(7, 124, 11), // "new_mode_id"
QT_MOC_LITERAL(8, 136, 11), // "old_mode_id"
QT_MOC_LITERAL(9, 148, 21), // "handleModeIconChanged"
QT_MOC_LITERAL(10, 170, 13), // "setActiveMode"
QT_MOC_LITERAL(11, 184, 7), // "mode_id"
QT_MOC_LITERAL(12, 192, 12), // "refresh_list"
QT_MOC_LITERAL(13, 205, 9), // "mode_name"
QT_MOC_LITERAL(14, 215, 6), // "IMode*"
QT_MOC_LITERAL(15, 222, 10), // "mode_iface"
QT_MOC_LITERAL(16, 233, 20), // "switchToPreviousMode"
QT_MOC_LITERAL(17, 254, 32), // "handleModeListCurrentItemChanged"
QT_MOC_LITERAL(18, 287, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(19, 304, 8), // "new_item"
QT_MOC_LITERAL(20, 313, 8), // "old_item"
QT_MOC_LITERAL(21, 322, 27) // "handleModeShortcutActivated"

    },
    "Qtilities::CoreGui::ModeManager\0"
    "changeCentralWidget\0\0QWidget*\0"
    "new_central_widget\0modeListItemSizesChanged\0"
    "activeModeChanged\0new_mode_id\0old_mode_id\0"
    "handleModeIconChanged\0setActiveMode\0"
    "mode_id\0refresh_list\0mode_name\0IMode*\0"
    "mode_iface\0switchToPreviousMode\0"
    "handleModeListCurrentItemChanged\0"
    "QListWidgetItem*\0new_item\0old_item\0"
    "handleModeShortcutActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__ModeManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    2,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   88,    2, 0x0a /* Public */,
      10,    2,   89,    2, 0x0a /* Public */,
      10,    1,   94,    2, 0x2a /* Public | MethodCloned */,
      10,    2,   97,    2, 0x0a /* Public */,
      10,    1,  102,    2, 0x2a /* Public | MethodCloned */,
      10,    2,  105,    2, 0x0a /* Public */,
      10,    1,  110,    2, 0x2a /* Public | MethodCloned */,
      16,    0,  113,    2, 0x0a /* Public */,
      17,    2,  114,    2, 0x08 /* Private */,
      21,    0,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   13,   12,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,   15,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   19,   20,
    QMetaType::Void,

       0        // eod
};

void Qtilities::CoreGui::ModeManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModeManager *_t = static_cast<ModeManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeCentralWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->modeListItemSizesChanged(); break;
        case 2: _t->activeModeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->handleModeIconChanged(); break;
        case 4: _t->setActiveMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->setActiveMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setActiveMode((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->setActiveMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setActiveMode((*reinterpret_cast< IMode*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->setActiveMode((*reinterpret_cast< IMode*(*)>(_a[1]))); break;
        case 10: { bool _r = _t->switchToPreviousMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->handleModeListCurrentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 12: _t->handleModeShortcutActivated(); break;
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
        {
            typedef void (ModeManager::*_t)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModeManager::changeCentralWidget)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ModeManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModeManager::modeListItemSizesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ModeManager::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModeManager::activeModeChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::ModeManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__ModeManager.data,
      qt_meta_data_Qtilities__CoreGui__ModeManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::ModeManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::ModeManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__ModeManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qtilities::CoreGui::ModeManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::ModeManager::changeCentralWidget(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::CoreGui::ModeManager::modeListItemSizesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Qtilities::CoreGui::ModeManager::activeModeChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
