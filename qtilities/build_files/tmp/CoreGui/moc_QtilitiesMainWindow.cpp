/****************************************************************************
** Meta object code from reading C++ file 'QtilitiesMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/QtilitiesMainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtilitiesMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__QtilitiesMainWindow_t {
    QByteArrayData data[19];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__QtilitiesMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__QtilitiesMainWindow_t qt_meta_stringdata_Qtilities__CoreGui__QtilitiesMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 39), // "Qtilities::CoreGui::Qtilities..."
QT_MOC_LITERAL(1, 40, 18), // "aboutToBeDestroyed"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 6), // "object"
QT_MOC_LITERAL(4, 67, 22), // "processPriorityMessage"
QT_MOC_LITERAL(5, 90, 19), // "Logger::MessageType"
QT_MOC_LITERAL(6, 110, 12), // "message_type"
QT_MOC_LITERAL(7, 123, 7), // "message"
QT_MOC_LITERAL(8, 131, 19), // "changeCurrentWidget"
QT_MOC_LITERAL(9, 151, 8), // "QWidget*"
QT_MOC_LITERAL(10, 160, 18), // "new_central_widget"
QT_MOC_LITERAL(11, 179, 15), // "updateItemSizes"
QT_MOC_LITERAL(12, 195, 10), // "ModeLayout"
QT_MOC_LITERAL(13, 206, 9), // "ModesNone"
QT_MOC_LITERAL(14, 216, 8), // "ModesTop"
QT_MOC_LITERAL(15, 225, 10), // "ModesRight"
QT_MOC_LITERAL(16, 236, 11), // "ModesBottom"
QT_MOC_LITERAL(17, 248, 9), // "ModesLeft"
QT_MOC_LITERAL(18, 258, 15) // "ModeLayoutFlags"

    },
    "Qtilities::CoreGui::QtilitiesMainWindow\0"
    "aboutToBeDestroyed\0\0object\0"
    "processPriorityMessage\0Logger::MessageType\0"
    "message_type\0message\0changeCurrentWidget\0"
    "QWidget*\0new_central_widget\0updateItemSizes\0"
    "ModeLayout\0ModesNone\0ModesTop\0ModesRight\0"
    "ModesBottom\0ModesLeft\0ModeLayoutFlags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__QtilitiesMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       2,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   37,    2, 0x0a /* Public */,
       8,    1,   42,    2, 0x08 /* Private */,
      11,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

 // enums: name, flags, count, data
      12, 0x0,    5,   54,
      18, 0x1,    5,   64,

 // enum data: key, value
      13, uint(Qtilities::CoreGui::QtilitiesMainWindow::ModesNone),
      14, uint(Qtilities::CoreGui::QtilitiesMainWindow::ModesTop),
      15, uint(Qtilities::CoreGui::QtilitiesMainWindow::ModesRight),
      16, uint(Qtilities::CoreGui::QtilitiesMainWindow::ModesBottom),
      17, uint(Qtilities::CoreGui::QtilitiesMainWindow::ModesLeft),
      13, uint(Qtilities::CoreGui::QtilitiesMainWindow::ModesNone),
      14, uint(Qtilities::CoreGui::QtilitiesMainWindow::ModesTop),
      15, uint(Qtilities::CoreGui::QtilitiesMainWindow::ModesRight),
      16, uint(Qtilities::CoreGui::QtilitiesMainWindow::ModesBottom),
      17, uint(Qtilities::CoreGui::QtilitiesMainWindow::ModesLeft),

       0        // eod
};

void Qtilities::CoreGui::QtilitiesMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtilitiesMainWindow *_t = static_cast<QtilitiesMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToBeDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->processPriorityMessage((*reinterpret_cast< Logger::MessageType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->changeCurrentWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 3: _t->updateItemSizes(); break;
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
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtilitiesMainWindow::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtilitiesMainWindow::aboutToBeDestroyed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::QtilitiesMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__QtilitiesMainWindow.data,
      qt_meta_data_Qtilities__CoreGui__QtilitiesMainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::QtilitiesMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::QtilitiesMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__QtilitiesMainWindow.stringdata0))
        return static_cast<void*>(const_cast< QtilitiesMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Qtilities::CoreGui::QtilitiesMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::QtilitiesMainWindow::aboutToBeDestroyed(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
