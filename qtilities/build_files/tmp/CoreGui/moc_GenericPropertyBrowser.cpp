/****************************************************************************
** Meta object code from reading C++ file 'GenericPropertyBrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/GenericPropertyBrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GenericPropertyBrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__GenericPropertyBrowser_t {
    QByteArrayData data[28];
    char stringdata0[578];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__GenericPropertyBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__GenericPropertyBrowser_t qt_meta_stringdata_Qtilities__CoreGui__GenericPropertyBrowser = {
    {
QT_MOC_LITERAL(0, 0, 42), // "Qtilities::CoreGui::GenericPr..."
QT_MOC_LITERAL(1, 43, 22), // "toggleAdvancedSettings"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 4), // "show"
QT_MOC_LITERAL(4, 72, 17), // "toggleSwitchNames"
QT_MOC_LITERAL(5, 90, 7), // "refresh"
QT_MOC_LITERAL(6, 98, 25), // "handle_intPropertyChanged"
QT_MOC_LITERAL(7, 124, 11), // "QtProperty*"
QT_MOC_LITERAL(8, 136, 8), // "property"
QT_MOC_LITERAL(9, 145, 5), // "value"
QT_MOC_LITERAL(10, 151, 28), // "handle_doublePropertyChanged"
QT_MOC_LITERAL(11, 180, 28), // "handle_stringPropertyChanged"
QT_MOC_LITERAL(12, 209, 26), // "handle_enumPropertyChanged"
QT_MOC_LITERAL(13, 236, 5), // "index"
QT_MOC_LITERAL(14, 242, 26), // "handle_boolPropertyChanged"
QT_MOC_LITERAL(15, 269, 26), // "handle_pathPropertyChanged"
QT_MOC_LITERAL(16, 296, 19), // "handleObjectDeleted"
QT_MOC_LITERAL(17, 316, 26), // "handlePropertyValueChanged"
QT_MOC_LITERAL(18, 343, 16), // "GenericProperty*"
QT_MOC_LITERAL(19, 360, 29), // "handlePropertyEditableChanged"
QT_MOC_LITERAL(20, 390, 37), // "handlePropertyContextDependen..."
QT_MOC_LITERAL(21, 428, 35), // "handlePropertyPossibleValuesC..."
QT_MOC_LITERAL(22, 464, 33), // "handlePropertyDefaultValueCha..."
QT_MOC_LITERAL(23, 498, 25), // "handlePropertyNoteChanged"
QT_MOC_LITERAL(24, 524, 11), // "BrowserType"
QT_MOC_LITERAL(25, 536, 11), // "TreeBrowser"
QT_MOC_LITERAL(26, 548, 15), // "GroupBoxBrowser"
QT_MOC_LITERAL(27, 564, 13) // "ButtonBrowser"

    },
    "Qtilities::CoreGui::GenericPropertyBrowser\0"
    "toggleAdvancedSettings\0\0show\0"
    "toggleSwitchNames\0refresh\0"
    "handle_intPropertyChanged\0QtProperty*\0"
    "property\0value\0handle_doublePropertyChanged\0"
    "handle_stringPropertyChanged\0"
    "handle_enumPropertyChanged\0index\0"
    "handle_boolPropertyChanged\0"
    "handle_pathPropertyChanged\0"
    "handleObjectDeleted\0handlePropertyValueChanged\0"
    "GenericProperty*\0handlePropertyEditableChanged\0"
    "handlePropertyContextDependentChanged\0"
    "handlePropertyPossibleValuesChanged\0"
    "handlePropertyDefaultValueChanged\0"
    "handlePropertyNoteChanged\0BrowserType\0"
    "TreeBrowser\0GroupBoxBrowser\0ButtonBrowser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__GenericPropertyBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       1,  150, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       4,    1,   97,    2, 0x0a /* Public */,
       5,    0,  100,    2, 0x0a /* Public */,
       6,    2,  101,    2, 0x08 /* Private */,
      10,    2,  106,    2, 0x08 /* Private */,
      11,    2,  111,    2, 0x08 /* Private */,
      12,    2,  116,    2, 0x08 /* Private */,
      14,    2,  121,    2, 0x08 /* Private */,
      15,    2,  126,    2, 0x08 /* Private */,
      16,    0,  131,    2, 0x08 /* Private */,
      17,    1,  132,    2, 0x08 /* Private */,
      19,    1,  135,    2, 0x08 /* Private */,
      20,    1,  138,    2, 0x08 /* Private */,
      21,    1,  141,    2, 0x08 /* Private */,
      22,    1,  144,    2, 0x08 /* Private */,
      23,    1,  147,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    9,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Double,    8,    9,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,   13,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    8,    9,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,    8,
    QMetaType::Void, 0x80000000 | 18,    8,
    QMetaType::Void, 0x80000000 | 18,    8,
    QMetaType::Void, 0x80000000 | 18,    8,
    QMetaType::Void, 0x80000000 | 18,    8,
    QMetaType::Void, 0x80000000 | 18,    8,

 // enums: name, flags, count, data
      24, 0x0,    3,  154,

 // enum data: key, value
      25, uint(Qtilities::CoreGui::GenericPropertyBrowser::TreeBrowser),
      26, uint(Qtilities::CoreGui::GenericPropertyBrowser::GroupBoxBrowser),
      27, uint(Qtilities::CoreGui::GenericPropertyBrowser::ButtonBrowser),

       0        // eod
};

void Qtilities::CoreGui::GenericPropertyBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GenericPropertyBrowser *_t = static_cast<GenericPropertyBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleAdvancedSettings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->toggleSwitchNames((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->refresh(); break;
        case 3: _t->handle_intPropertyChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->handle_doublePropertyChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->handle_stringPropertyChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->handle_enumPropertyChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->handle_boolPropertyChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->handle_pathPropertyChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->handleObjectDeleted(); break;
        case 10: _t->handlePropertyValueChanged((*reinterpret_cast< GenericProperty*(*)>(_a[1]))); break;
        case 11: _t->handlePropertyEditableChanged((*reinterpret_cast< GenericProperty*(*)>(_a[1]))); break;
        case 12: _t->handlePropertyContextDependentChanged((*reinterpret_cast< GenericProperty*(*)>(_a[1]))); break;
        case 13: _t->handlePropertyPossibleValuesChanged((*reinterpret_cast< GenericProperty*(*)>(_a[1]))); break;
        case 14: _t->handlePropertyDefaultValueChanged((*reinterpret_cast< GenericProperty*(*)>(_a[1]))); break;
        case 15: _t->handlePropertyNoteChanged((*reinterpret_cast< GenericProperty*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GenericProperty* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GenericProperty* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GenericProperty* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GenericProperty* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GenericProperty* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GenericProperty* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Qtilities::CoreGui::GenericPropertyBrowser::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__GenericPropertyBrowser.data,
      qt_meta_data_Qtilities__CoreGui__GenericPropertyBrowser,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::GenericPropertyBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::GenericPropertyBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__GenericPropertyBrowser.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Qtilities::CoreGui::GenericPropertyBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
