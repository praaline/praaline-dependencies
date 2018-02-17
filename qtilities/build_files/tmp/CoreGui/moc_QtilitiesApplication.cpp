/****************************************************************************
** Meta object code from reading C++ file 'QtilitiesApplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/QtilitiesApplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtilitiesApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__QtilitiesApplication_t {
    QByteArrayData data[9];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__QtilitiesApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__QtilitiesApplication_t qt_meta_stringdata_Qtilities__CoreGui__QtilitiesApplication = {
    {
QT_MOC_LITERAL(0, 0, 40), // "Qtilities::CoreGui::Qtilities..."
QT_MOC_LITERAL(1, 41, 21), // "settingsUpdateRequest"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 10), // "request_id"
QT_MOC_LITERAL(4, 75, 16), // "busyStateChanged"
QT_MOC_LITERAL(5, 92, 7), // "is_busy"
QT_MOC_LITERAL(6, 100, 14), // "aboutQtilities"
QT_MOC_LITERAL(7, 115, 8), // "QWidget*"
QT_MOC_LITERAL(8, 124, 4) // "show"

    },
    "Qtilities::CoreGui::QtilitiesApplication\0"
    "settingsUpdateRequest\0\0request_id\0"
    "busyStateChanged\0is_busy\0aboutQtilities\0"
    "QWidget*\0show"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__QtilitiesApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    0x80000000 | 7, QMetaType::Bool,    8,
    0x80000000 | 7,

       0        // eod
};

void Qtilities::CoreGui::QtilitiesApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtilitiesApplication *_t = static_cast<QtilitiesApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingsUpdateRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->busyStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { QWidget* _r = _t->aboutQtilities((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 3: { QWidget* _r = _t->aboutQtilities();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtilitiesApplication::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtilitiesApplication::settingsUpdateRequest)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QtilitiesApplication::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtilitiesApplication::busyStateChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::QtilitiesApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__QtilitiesApplication.data,
      qt_meta_data_Qtilities__CoreGui__QtilitiesApplication,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::QtilitiesApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::QtilitiesApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__QtilitiesApplication.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int Qtilities::CoreGui::QtilitiesApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::QtilitiesApplication::settingsUpdateRequest(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::CoreGui::QtilitiesApplication::busyStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
