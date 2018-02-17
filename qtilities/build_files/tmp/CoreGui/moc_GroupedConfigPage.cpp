/****************************************************************************
** Meta object code from reading C++ file 'GroupedConfigPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/GroupedConfigPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GroupedConfigPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__GroupedConfigPage_t {
    QByteArrayData data[9];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__GroupedConfigPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__GroupedConfigPage_t qt_meta_stringdata_Qtilities__CoreGui__GroupedConfigPage = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Qtilities::CoreGui::GroupedCo..."
QT_MOC_LITERAL(1, 38, 11), // "appliedPage"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 12), // "IConfigPage*"
QT_MOC_LITERAL(4, 64, 10), // "conig_page"
QT_MOC_LITERAL(5, 75, 24), // "activeGroupedPageChanged"
QT_MOC_LITERAL(6, 100, 11), // "config_page"
QT_MOC_LITERAL(7, 112, 24), // "handleCurrentPageChanged"
QT_MOC_LITERAL(8, 137, 9) // "new_index"

    },
    "Qtilities::CoreGui::GroupedConfigPage\0"
    "appliedPage\0\0IConfigPage*\0conig_page\0"
    "activeGroupedPageChanged\0config_page\0"
    "handleCurrentPageChanged\0new_index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__GroupedConfigPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void Qtilities::CoreGui::GroupedConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GroupedConfigPage *_t = static_cast<GroupedConfigPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appliedPage((*reinterpret_cast< IConfigPage*(*)>(_a[1]))); break;
        case 1: _t->activeGroupedPageChanged((*reinterpret_cast< IConfigPage*(*)>(_a[1]))); break;
        case 2: _t->handleCurrentPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GroupedConfigPage::*_t)(IConfigPage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupedConfigPage::appliedPage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GroupedConfigPage::*_t)(IConfigPage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupedConfigPage::activeGroupedPageChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::GroupedConfigPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__GroupedConfigPage.data,
      qt_meta_data_Qtilities__CoreGui__GroupedConfigPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::GroupedConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::GroupedConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__GroupedConfigPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IConfigPage"))
        return static_cast< IConfigPage*>(this);
    if (!strcmp(_clname, "com.Qtilities.CoreGui.IConfigPage/1.0"))
        return static_cast< Qtilities::CoreGui::Interfaces::IConfigPage*>(this);
    return QWidget::qt_metacast(_clname);
}

int Qtilities::CoreGui::GroupedConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Qtilities::CoreGui::GroupedConfigPage::appliedPage(IConfigPage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::CoreGui::GroupedConfigPage::activeGroupedPageChanged(IConfigPage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
