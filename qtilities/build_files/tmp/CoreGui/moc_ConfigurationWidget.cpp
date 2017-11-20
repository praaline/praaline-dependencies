/****************************************************************************
** Meta object code from reading C++ file 'ConfigurationWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/ConfigurationWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConfigurationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__ConfigPageModeWrapper_t {
    QByteArrayData data[1];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__ConfigPageModeWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__ConfigPageModeWrapper_t qt_meta_stringdata_Qtilities__CoreGui__ConfigPageModeWrapper = {
    {
QT_MOC_LITERAL(0, 0, 41) // "Qtilities::CoreGui::ConfigPag..."

    },
    "Qtilities::CoreGui::ConfigPageModeWrapper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__ConfigPageModeWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Qtilities::CoreGui::ConfigPageModeWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Qtilities::CoreGui::ConfigPageModeWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__ConfigPageModeWrapper.data,
      qt_meta_data_Qtilities__CoreGui__ConfigPageModeWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::ConfigPageModeWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::ConfigPageModeWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__ConfigPageModeWrapper.stringdata0))
        return static_cast<void*>(const_cast< ConfigPageModeWrapper*>(this));
    if (!strcmp(_clname, "IMode"))
        return static_cast< IMode*>(const_cast< ConfigPageModeWrapper*>(this));
    if (!strcmp(_clname, "com.Qtilities.CoreGui.IMode/1.0"))
        return static_cast< Qtilities::CoreGui::Interfaces::IMode*>(const_cast< ConfigPageModeWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtilities::CoreGui::ConfigPageModeWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Qtilities__CoreGui__ConfigurationWidget_t {
    QByteArrayData data[18];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__ConfigurationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__ConfigurationWidget_t qt_meta_stringdata_Qtilities__CoreGui__ConfigurationWidget = {
    {
QT_MOC_LITERAL(0, 0, 39), // "Qtilities::CoreGui::Configura..."
QT_MOC_LITERAL(1, 40, 11), // "appliedPage"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 12), // "IConfigPage*"
QT_MOC_LITERAL(4, 66, 10), // "conig_page"
QT_MOC_LITERAL(5, 77, 33), // "handleModeWidgetActiveModeCha..."
QT_MOC_LITERAL(6, 111, 23), // "handleActiveItemChanges"
QT_MOC_LITERAL(7, 135, 15), // "QList<QObject*>"
QT_MOC_LITERAL(8, 151, 12), // "active_pages"
QT_MOC_LITERAL(9, 164, 30), // "handleActiveGroupedPageChanged"
QT_MOC_LITERAL(10, 195, 23), // "new_active_grouped_page"
QT_MOC_LITERAL(11, 219, 13), // "setActivePage"
QT_MOC_LITERAL(12, 233, 16), // "active_page_name"
QT_MOC_LITERAL(13, 250, 14), // "activePageName"
QT_MOC_LITERAL(14, 265, 15), // "activePageIFace"
QT_MOC_LITERAL(15, 281, 20), // "on_buttonBox_clicked"
QT_MOC_LITERAL(16, 302, 16), // "QAbstractButton*"
QT_MOC_LITERAL(17, 319, 6) // "button"

    },
    "Qtilities::CoreGui::ConfigurationWidget\0"
    "appliedPage\0\0IConfigPage*\0conig_page\0"
    "handleModeWidgetActiveModeChanged\0"
    "handleActiveItemChanges\0QList<QObject*>\0"
    "active_pages\0handleActiveGroupedPageChanged\0"
    "new_active_grouped_page\0setActivePage\0"
    "active_page_name\0activePageName\0"
    "activePageIFace\0on_buttonBox_clicked\0"
    "QAbstractButton*\0button"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__ConfigurationWidget[] = {

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
       5,    0,   57,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x0a /* Public */,
      11,    1,   64,    2, 0x0a /* Public */,
      13,    0,   67,    2, 0x0a /* Public */,
      14,    0,   68,    2, 0x0a /* Public */,
      15,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::QString,
    0x80000000 | 3,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void Qtilities::CoreGui::ConfigurationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConfigurationWidget *_t = static_cast<ConfigurationWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appliedPage((*reinterpret_cast< IConfigPage*(*)>(_a[1]))); break;
        case 1: _t->handleModeWidgetActiveModeChanged(); break;
        case 2: _t->handleActiveItemChanges((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 3: _t->handleActiveGroupedPageChanged((*reinterpret_cast< IConfigPage*(*)>(_a[1]))); break;
        case 4: _t->setActivePage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { QString _r = _t->activePageName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { IConfigPage* _r = _t->activePageIFace();
            if (_a[0]) *reinterpret_cast< IConfigPage**>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ConfigurationWidget::*_t)(IConfigPage * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConfigurationWidget::appliedPage)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::ConfigurationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__ConfigurationWidget.data,
      qt_meta_data_Qtilities__CoreGui__ConfigurationWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::ConfigurationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::ConfigurationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__ConfigurationWidget.stringdata0))
        return static_cast<void*>(const_cast< ConfigurationWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtilities::CoreGui::ConfigurationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::ConfigurationWidget::appliedPage(IConfigPage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
