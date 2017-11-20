/****************************************************************************
** Meta object code from reading C++ file 'SideWidgetFileSystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/SideWidgetFileSystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SideWidgetFileSystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__SideWidgetFileSystem_t {
    QByteArrayData data[13];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__SideWidgetFileSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__SideWidgetFileSystem_t qt_meta_stringdata_Qtilities__CoreGui__SideWidgetFileSystem = {
    {
QT_MOC_LITERAL(0, 0, 40), // "Qtilities::CoreGui::SideWidge..."
QT_MOC_LITERAL(1, 41, 13), // "requestEditor"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 9), // "file_name"
QT_MOC_LITERAL(4, 66, 21), // "handleRootPathChanged"
QT_MOC_LITERAL(5, 88, 7), // "newPath"
QT_MOC_LITERAL(6, 96, 15), // "handleBtnBrowse"
QT_MOC_LITERAL(7, 112, 19), // "handleDoubleClicked"
QT_MOC_LITERAL(8, 132, 5), // "index"
QT_MOC_LITERAL(9, 138, 18), // "on_btnCdUp_clicked"
QT_MOC_LITERAL(10, 157, 33), // "on_txtCurrentPath_editingFini..."
QT_MOC_LITERAL(11, 191, 13), // "handleClicked"
QT_MOC_LITERAL(12, 205, 25) // "on_treeView_doubleClicked"

    },
    "Qtilities::CoreGui::SideWidgetFileSystem\0"
    "requestEditor\0\0file_name\0handleRootPathChanged\0"
    "newPath\0handleBtnBrowse\0handleDoubleClicked\0"
    "index\0on_btnCdUp_clicked\0"
    "on_txtCurrentPath_editingFinished\0"
    "handleClicked\0on_treeView_doubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__SideWidgetFileSystem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   57,    2, 0x08 /* Private */,
       6,    0,   60,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    1,   66,    2, 0x08 /* Private */,
      12,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void, QMetaType::QModelIndex,    8,

       0        // eod
};

void Qtilities::CoreGui::SideWidgetFileSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SideWidgetFileSystem *_t = static_cast<SideWidgetFileSystem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestEditor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->handleRootPathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->handleBtnBrowse(); break;
        case 3: _t->handleDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_btnCdUp_clicked(); break;
        case 5: _t->on_txtCurrentPath_editingFinished(); break;
        case 6: _t->handleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_treeView_doubleClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SideWidgetFileSystem::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SideWidgetFileSystem::requestEditor)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::SideWidgetFileSystem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__SideWidgetFileSystem.data,
      qt_meta_data_Qtilities__CoreGui__SideWidgetFileSystem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::SideWidgetFileSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::SideWidgetFileSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__SideWidgetFileSystem.stringdata0))
        return static_cast<void*>(const_cast< SideWidgetFileSystem*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtilities::CoreGui::SideWidgetFileSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::SideWidgetFileSystem::requestEditor(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
