/****************************************************************************
** Meta object code from reading C++ file 'HelpManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/HelpManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HelpManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__HelpManager_t {
    QByteArrayData data[10];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__HelpManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__HelpManager_t qt_meta_stringdata_Qtilities__CoreGui__HelpManager = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Qtilities::CoreGui::HelpManager"
QT_MOC_LITERAL(1, 32, 22), // "registeredFilesChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 5), // "files"
QT_MOC_LITERAL(4, 62, 24), // "forwardRequestUrlDisplay"
QT_MOC_LITERAL(5, 87, 3), // "url"
QT_MOC_LITERAL(6, 91, 14), // "ensure_visible"
QT_MOC_LITERAL(7, 106, 15), // "homePageChanged"
QT_MOC_LITERAL(8, 122, 10), // "logMessage"
QT_MOC_LITERAL(9, 133, 7) // "message"

    },
    "Qtilities::CoreGui::HelpManager\0"
    "registeredFilesChanged\0\0files\0"
    "forwardRequestUrlDisplay\0url\0"
    "ensure_visible\0homePageChanged\0"
    "logMessage\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__HelpManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x26 /* Public | MethodCloned */,
       7,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::QUrl,    5,
    QMetaType::Void, QMetaType::QUrl,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void Qtilities::CoreGui::HelpManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpManager *_t = static_cast<HelpManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->registeredFilesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->forwardRequestUrlDisplay((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->forwardRequestUrlDisplay((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->homePageChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HelpManager::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpManager::registeredFilesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HelpManager::*_t)(const QUrl & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpManager::forwardRequestUrlDisplay)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HelpManager::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HelpManager::homePageChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::HelpManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__HelpManager.data,
      qt_meta_data_Qtilities__CoreGui__HelpManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::HelpManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::HelpManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__HelpManager.stringdata0))
        return static_cast<void*>(const_cast< HelpManager*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::CoreGui::HelpManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::HelpManager::registeredFilesChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::CoreGui::HelpManager::forwardRequestUrlDisplay(const QUrl & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void Qtilities::CoreGui::HelpManager::homePageChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
