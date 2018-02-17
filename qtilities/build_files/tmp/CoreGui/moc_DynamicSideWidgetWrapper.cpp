/****************************************************************************
** Meta object code from reading C++ file 'DynamicSideWidgetWrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/DynamicSideWidgetWrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DynamicSideWidgetWrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__DynamicSideWidgetWrapper_t {
    QByteArrayData data[13];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__DynamicSideWidgetWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__DynamicSideWidgetWrapper_t qt_meta_stringdata_Qtilities__CoreGui__DynamicSideWidgetWrapper = {
    {
QT_MOC_LITERAL(0, 0, 44), // "Qtilities::CoreGui::DynamicSi..."
QT_MOC_LITERAL(1, 45, 18), // "currentTextChanged"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 4), // "text"
QT_MOC_LITERAL(4, 70, 20), // "newSideWidgetRequest"
QT_MOC_LITERAL(5, 91, 18), // "aboutToBeDestroyed"
QT_MOC_LITERAL(6, 110, 8), // "QWidget*"
QT_MOC_LITERAL(7, 119, 6), // "widget"
QT_MOC_LITERAL(8, 126, 25), // "handleCurrentIndexChanged"
QT_MOC_LITERAL(9, 152, 22), // "updateAvailableWidgets"
QT_MOC_LITERAL(10, 175, 32), // "QMap<QString,ISideViewerWidget*>"
QT_MOC_LITERAL(11, 208, 14), // "text_iface_map"
QT_MOC_LITERAL(12, 223, 5) // "close"

    },
    "Qtilities::CoreGui::DynamicSideWidgetWrapper\0"
    "currentTextChanged\0\0text\0newSideWidgetRequest\0"
    "aboutToBeDestroyed\0QWidget*\0widget\0"
    "handleCurrentIndexChanged\0"
    "updateAvailableWidgets\0"
    "QMap<QString,ISideViewerWidget*>\0"
    "text_iface_map\0close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__DynamicSideWidgetWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   51,    2, 0x0a /* Public */,
       9,    1,   54,    2, 0x0a /* Public */,
      12,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void Qtilities::CoreGui::DynamicSideWidgetWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DynamicSideWidgetWrapper *_t = static_cast<DynamicSideWidgetWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->newSideWidgetRequest(); break;
        case 2: _t->aboutToBeDestroyed((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 3: _t->handleCurrentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateAvailableWidgets((*reinterpret_cast< QMap<QString,ISideViewerWidget*>(*)>(_a[1]))); break;
        case 5: _t->close(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
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
            typedef void (DynamicSideWidgetWrapper::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DynamicSideWidgetWrapper::currentTextChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DynamicSideWidgetWrapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DynamicSideWidgetWrapper::newSideWidgetRequest)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DynamicSideWidgetWrapper::*_t)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DynamicSideWidgetWrapper::aboutToBeDestroyed)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::DynamicSideWidgetWrapper::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__DynamicSideWidgetWrapper.data,
      qt_meta_data_Qtilities__CoreGui__DynamicSideWidgetWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::DynamicSideWidgetWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::DynamicSideWidgetWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__DynamicSideWidgetWrapper.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Qtilities::CoreGui::DynamicSideWidgetWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::DynamicSideWidgetWrapper::currentTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::CoreGui::DynamicSideWidgetWrapper::newSideWidgetRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Qtilities::CoreGui::DynamicSideWidgetWrapper::aboutToBeDestroyed(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
