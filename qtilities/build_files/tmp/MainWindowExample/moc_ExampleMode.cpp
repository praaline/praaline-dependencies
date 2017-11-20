/****************************************************************************
** Meta object code from reading C++ file 'ExampleMode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Examples/MainWindowExample/ExampleMode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExampleMode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qtilities__Examples__MainWindow__ExampleMode_t {
    QByteArrayData data[11];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Examples__MainWindow__ExampleMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Examples__MainWindow__ExampleMode_t qt_meta_stringdata_Qtilities__Examples__MainWindow__ExampleMode = {
    {
QT_MOC_LITERAL(0, 0, 44), // "Qtilities::Examples::MainWind..."
QT_MOC_LITERAL(1, 45, 15), // "modeIconChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 10), // "toggleDock"
QT_MOC_LITERAL(4, 73, 6), // "toggle"
QT_MOC_LITERAL(5, 80, 8), // "loadFile"
QT_MOC_LITERAL(6, 89, 9), // "file_name"
QT_MOC_LITERAL(7, 99, 25), // "handleNewFileSystemWidget"
QT_MOC_LITERAL(8, 125, 8), // "QWidget*"
QT_MOC_LITERAL(9, 134, 6), // "widget"
QT_MOC_LITERAL(10, 141, 14) // "toggleModeIcon"

    },
    "Qtilities::Examples::MainWindow::ExampleMode\0"
    "modeIconChanged\0\0toggleDock\0toggle\0"
    "loadFile\0file_name\0handleNewFileSystemWidget\0"
    "QWidget*\0widget\0toggleModeIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Examples__MainWindow__ExampleMode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,
       7,    1,   46,    2, 0x0a /* Public */,
      10,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void Qtilities::Examples::MainWindow::ExampleMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExampleMode *_t = static_cast<ExampleMode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modeIconChanged(); break;
        case 1: _t->toggleDock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->loadFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->handleNewFileSystemWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 4: _t->toggleModeIcon(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            typedef void (ExampleMode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExampleMode::modeIconChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::Examples::MainWindow::ExampleMode::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Qtilities__Examples__MainWindow__ExampleMode.data,
      qt_meta_data_Qtilities__Examples__MainWindow__ExampleMode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qtilities::Examples::MainWindow::ExampleMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Examples::MainWindow::ExampleMode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Examples__MainWindow__ExampleMode.stringdata0))
        return static_cast<void*>(const_cast< ExampleMode*>(this));
    if (!strcmp(_clname, "IMode"))
        return static_cast< IMode*>(const_cast< ExampleMode*>(this));
    if (!strcmp(_clname, "com.Qtilities.CoreGui.IMode/1.0"))
        return static_cast< Qtilities::CoreGui::Interfaces::IMode*>(const_cast< ExampleMode*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Qtilities::Examples::MainWindow::ExampleMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::Examples::MainWindow::ExampleMode::modeIconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
