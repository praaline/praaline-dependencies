/****************************************************************************
** Meta object code from reading C++ file 'WidgetLoggerEngineFrontend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/WidgetLoggerEngineFrontend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WidgetLoggerEngineFrontend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__MessagesPlainTextEditTab_t {
    QByteArrayData data[22];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__MessagesPlainTextEditTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__MessagesPlainTextEditTab_t qt_meta_stringdata_Qtilities__CoreGui__MessagesPlainTextEditTab = {
    {
QT_MOC_LITERAL(0, 0, 44), // "Qtilities::CoreGui::MessagesP..."
QT_MOC_LITERAL(1, 45, 13), // "appendMessage"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 7), // "message"
QT_MOC_LITERAL(4, 68, 19), // "handle_FindPrevious"
QT_MOC_LITERAL(5, 88, 15), // "handle_FindNext"
QT_MOC_LITERAL(6, 104, 11), // "handle_Save"
QT_MOC_LITERAL(7, 116, 15), // "handle_Settings"
QT_MOC_LITERAL(8, 132, 12), // "handle_Print"
QT_MOC_LITERAL(9, 145, 15), // "handle_PrintPDF"
QT_MOC_LITERAL(10, 161, 19), // "handle_PrintPreview"
QT_MOC_LITERAL(11, 181, 12), // "handle_Clear"
QT_MOC_LITERAL(12, 194, 15), // "handle_LineWrap"
QT_MOC_LITERAL(13, 210, 16), // "handle_FreezeLog"
QT_MOC_LITERAL(14, 227, 11), // "handle_Copy"
QT_MOC_LITERAL(15, 239, 21), // "handle_SearchShortcut"
QT_MOC_LITERAL(16, 261, 16), // "handle_SelectAll"
QT_MOC_LITERAL(17, 278, 12), // "printPreview"
QT_MOC_LITERAL(18, 291, 9), // "QPrinter*"
QT_MOC_LITERAL(19, 301, 7), // "printer"
QT_MOC_LITERAL(20, 309, 25), // "handleSearchStringChanged"
QT_MOC_LITERAL(21, 335, 13) // "filter_string"

    },
    "Qtilities::CoreGui::MessagesPlainTextEditTab\0"
    "appendMessage\0\0message\0handle_FindPrevious\0"
    "handle_FindNext\0handle_Save\0handle_Settings\0"
    "handle_Print\0handle_PrintPDF\0"
    "handle_PrintPreview\0handle_Clear\0"
    "handle_LineWrap\0handle_FreezeLog\0"
    "handle_Copy\0handle_SearchShortcut\0"
    "handle_SelectAll\0printPreview\0QPrinter*\0"
    "printer\0handleSearchStringChanged\0"
    "filter_string"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__MessagesPlainTextEditTab[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       4,    0,   97,    2, 0x0a /* Public */,
       5,    0,   98,    2, 0x0a /* Public */,
       6,    0,   99,    2, 0x0a /* Public */,
       7,    0,  100,    2, 0x0a /* Public */,
       8,    0,  101,    2, 0x0a /* Public */,
       9,    0,  102,    2, 0x0a /* Public */,
      10,    0,  103,    2, 0x0a /* Public */,
      11,    0,  104,    2, 0x0a /* Public */,
      12,    0,  105,    2, 0x0a /* Public */,
      13,    0,  106,    2, 0x0a /* Public */,
      14,    0,  107,    2, 0x0a /* Public */,
      15,    0,  108,    2, 0x0a /* Public */,
      16,    0,  109,    2, 0x0a /* Public */,
      17,    1,  110,    2, 0x0a /* Public */,
      20,    1,  113,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QString,   21,

       0        // eod
};

void Qtilities::CoreGui::MessagesPlainTextEditTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MessagesPlainTextEditTab *_t = static_cast<MessagesPlainTextEditTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appendMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->handle_FindPrevious(); break;
        case 2: _t->handle_FindNext(); break;
        case 3: _t->handle_Save(); break;
        case 4: _t->handle_Settings(); break;
        case 5: _t->handle_Print(); break;
        case 6: _t->handle_PrintPDF(); break;
        case 7: _t->handle_PrintPreview(); break;
        case 8: _t->handle_Clear(); break;
        case 9: _t->handle_LineWrap(); break;
        case 10: _t->handle_FreezeLog(); break;
        case 11: _t->handle_Copy(); break;
        case 12: _t->handle_SearchShortcut(); break;
        case 13: _t->handle_SelectAll(); break;
        case 14: _t->printPreview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 15: _t->handleSearchStringChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Qtilities::CoreGui::MessagesPlainTextEditTab::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__MessagesPlainTextEditTab.data,
      qt_meta_data_Qtilities__CoreGui__MessagesPlainTextEditTab,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::MessagesPlainTextEditTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::MessagesPlainTextEditTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__MessagesPlainTextEditTab.stringdata0))
        return static_cast<void*>(const_cast< MessagesPlainTextEditTab*>(this));
    if (!strcmp(_clname, "IContext"))
        return static_cast< IContext*>(const_cast< MessagesPlainTextEditTab*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.IContext/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IContext*>(const_cast< MessagesPlainTextEditTab*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Qtilities::CoreGui::MessagesPlainTextEditTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
struct qt_meta_stringdata_Qtilities__CoreGui__WidgetLoggerEngineFrontend_t {
    QByteArrayData data[12];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__WidgetLoggerEngineFrontend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__WidgetLoggerEngineFrontend_t qt_meta_stringdata_Qtilities__CoreGui__WidgetLoggerEngineFrontend = {
    {
QT_MOC_LITERAL(0, 0, 46), // "Qtilities::CoreGui::WidgetLog..."
QT_MOC_LITERAL(1, 47, 13), // "appendMessage"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 7), // "message"
QT_MOC_LITERAL(4, 70, 19), // "Logger::MessageType"
QT_MOC_LITERAL(5, 90, 12), // "message_type"
QT_MOC_LITERAL(6, 103, 5), // "clear"
QT_MOC_LITERAL(7, 109, 28), // "handle_dockVisibilityChanged"
QT_MOC_LITERAL(8, 138, 7), // "visible"
QT_MOC_LITERAL(9, 146, 15), // "setLineWrapMode"
QT_MOC_LITERAL(10, 162, 28), // "QPlainTextEdit::LineWrapMode"
QT_MOC_LITERAL(11, 191, 4) // "mode"

    },
    "Qtilities::CoreGui::WidgetLoggerEngineFrontend\0"
    "appendMessage\0\0message\0Logger::MessageType\0"
    "message_type\0clear\0handle_dockVisibilityChanged\0"
    "visible\0setLineWrapMode\0"
    "QPlainTextEdit::LineWrapMode\0mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__WidgetLoggerEngineFrontend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x0a /* Public */,
       1,    1,   44,    2, 0x2a /* Public | MethodCloned */,
       6,    0,   47,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x0a /* Public */,
       9,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void Qtilities::CoreGui::WidgetLoggerEngineFrontend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WidgetLoggerEngineFrontend *_t = static_cast<WidgetLoggerEngineFrontend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appendMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Logger::MessageType(*)>(_a[2]))); break;
        case 1: _t->appendMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->handle_dockVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setLineWrapMode((*reinterpret_cast< QPlainTextEdit::LineWrapMode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Qtilities::CoreGui::WidgetLoggerEngineFrontend::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__WidgetLoggerEngineFrontend.data,
      qt_meta_data_Qtilities__CoreGui__WidgetLoggerEngineFrontend,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::WidgetLoggerEngineFrontend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::WidgetLoggerEngineFrontend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__WidgetLoggerEngineFrontend.stringdata0))
        return static_cast<void*>(const_cast< WidgetLoggerEngineFrontend*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Qtilities::CoreGui::WidgetLoggerEngineFrontend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
