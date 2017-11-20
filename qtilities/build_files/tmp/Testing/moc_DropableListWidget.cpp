/****************************************************************************
** Meta object code from reading C++ file 'DropableListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Testing/source/DropableListWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DropableListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__Testing__qti_private_DropableListWidget_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Testing__qti_private_DropableListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Testing__qti_private_DropableListWidget_t qt_meta_stringdata_Qtilities__Testing__qti_private_DropableListWidget = {
    {
QT_MOC_LITERAL(0, 0, 50), // "Qtilities::Testing::qti_priva..."
QT_MOC_LITERAL(1, 51, 10), // "newMessage"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 19), // "Logger::MessageType"
QT_MOC_LITERAL(4, 83, 4), // "type"
QT_MOC_LITERAL(5, 88, 3), // "msg"
QT_MOC_LITERAL(6, 92, 11), // "listChanged"
QT_MOC_LITERAL(7, 104, 7) // "list_id"

    },
    "Qtilities::Testing::qti_private_DropableListWidget\0"
    "newMessage\0\0Logger::MessageType\0type\0"
    "msg\0listChanged\0list_id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Testing__qti_private_DropableListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       6,    1,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void Qtilities::Testing::qti_private_DropableListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qti_private_DropableListWidget *_t = static_cast<qti_private_DropableListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< Logger::MessageType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->listChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (qti_private_DropableListWidget::*_t)(Logger::MessageType , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&qti_private_DropableListWidget::newMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (qti_private_DropableListWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&qti_private_DropableListWidget::listChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::Testing::qti_private_DropableListWidget::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_Qtilities__Testing__qti_private_DropableListWidget.data,
      qt_meta_data_Qtilities__Testing__qti_private_DropableListWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::Testing::qti_private_DropableListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Testing::qti_private_DropableListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Testing__qti_private_DropableListWidget.stringdata0))
        return static_cast<void*>(const_cast< qti_private_DropableListWidget*>(this));
    return QListView::qt_metacast(_clname);
}

int Qtilities::Testing::qti_private_DropableListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::Testing::qti_private_DropableListWidget::newMessage(Logger::MessageType _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::Testing::qti_private_DropableListWidget::listChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
