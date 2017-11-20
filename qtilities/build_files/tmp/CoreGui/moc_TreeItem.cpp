/****************************************************************************
** Meta object code from reading C++ file 'TreeItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/TreeItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TreeItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__TreeItem_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__TreeItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__TreeItem_t qt_meta_stringdata_Qtilities__CoreGui__TreeItem = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Qtilities::CoreGui::TreeItem"
QT_MOC_LITERAL(1, 29, 4), // "Font"
QT_MOC_LITERAL(2, 34, 14), // "ForegroundRole"
QT_MOC_LITERAL(3, 49, 14), // "BackgroundRole"
QT_MOC_LITERAL(4, 64, 4), // "Size"
QT_MOC_LITERAL(5, 69, 9), // "StatusTip"
QT_MOC_LITERAL(6, 79, 7), // "ToolTip"
QT_MOC_LITERAL(7, 87, 9), // "WhatsThis"
QT_MOC_LITERAL(8, 97, 8) // "Category"

    },
    "Qtilities::CoreGui::TreeItem\0Font\0"
    "ForegroundRole\0BackgroundRole\0Size\0"
    "StatusTip\0ToolTip\0WhatsThis\0Category"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__TreeItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QFont, 0x00095103,
       2, QMetaType::QColor, 0x00095003,
       3, QMetaType::QColor, 0x00095003,
       4, QMetaType::QSize, 0x00095003,
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095003,

       0        // eod
};

void Qtilities::CoreGui::TreeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        TreeItem *_t = static_cast<TreeItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFont*>(_v) = _t->getFont(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getForegroundColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 3: *reinterpret_cast< QSize*>(_v) = _t->getSizeHint(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getStatusTip(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getToolTip(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getWhatsThis(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getCategoryString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TreeItem *_t = static_cast<TreeItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 1: _t->setForegroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setSizeHint(*reinterpret_cast< QSize*>(_v)); break;
        case 4: _t->setStatusTip(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setToolTip(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setWhatsThis(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setCategoryString(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::CoreGui::TreeItem::staticMetaObject = {
    { &TreeItemBase::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__TreeItem.data,
      qt_meta_data_Qtilities__CoreGui__TreeItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::TreeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::TreeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__TreeItem.stringdata0))
        return static_cast<void*>(const_cast< TreeItem*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.IExportable/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IExportable*>(const_cast< TreeItem*>(this));
    return TreeItemBase::qt_metacast(_clname);
}

int Qtilities::CoreGui::TreeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TreeItemBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
