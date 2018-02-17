/****************************************************************************
** Meta object code from reading C++ file 'LoggerConfigWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/LoggerConfigWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoggerConfigWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__LoggerConfigWidget_t {
    QByteArrayData data[20];
    char stringdata0[551];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__LoggerConfigWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__LoggerConfigWidget_t qt_meta_stringdata_Qtilities__CoreGui__LoggerConfigWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Qtilities::CoreGui::LoggerCon..."
QT_MOC_LITERAL(1, 39, 29), // "handle_NewLoggerEngineRequest"
QT_MOC_LITERAL(2, 69, 0), // ""
QT_MOC_LITERAL(3, 70, 32), // "handle_RemoveLoggerEngineRequest"
QT_MOC_LITERAL(4, 103, 31), // "handle_LoggerEngineTableClicked"
QT_MOC_LITERAL(5, 135, 5), // "index"
QT_MOC_LITERAL(6, 141, 41), // "handle_FormattingEnginesCurre..."
QT_MOC_LITERAL(7, 183, 10), // "currentRow"
QT_MOC_LITERAL(8, 194, 55), // "handle_ComboBoxLoggerFormatti..."
QT_MOC_LITERAL(9, 250, 31), // "handle_CheckBoxToggleAllClicked"
QT_MOC_LITERAL(10, 282, 7), // "checked"
QT_MOC_LITERAL(11, 290, 43), // "handle_CheckBoxRememberSessio..."
QT_MOC_LITERAL(12, 334, 47), // "handle_ComboBoxGlobalLogLevel..."
QT_MOC_LITERAL(13, 382, 4), // "text"
QT_MOC_LITERAL(14, 387, 27), // "handle_BtnSaveConfigClicked"
QT_MOC_LITERAL(15, 415, 27), // "handle_BtnLoadConfigClicked"
QT_MOC_LITERAL(16, 443, 22), // "handle_BtnApplyClicked"
QT_MOC_LITERAL(17, 466, 22), // "resizeCommandTableRows"
QT_MOC_LITERAL(18, 489, 21), // "on_btnViewLog_clicked"
QT_MOC_LITERAL(19, 511, 39) // "on_tableViewLoggerEngines_dou..."

    },
    "Qtilities::CoreGui::LoggerConfigWidget\0"
    "handle_NewLoggerEngineRequest\0\0"
    "handle_RemoveLoggerEngineRequest\0"
    "handle_LoggerEngineTableClicked\0index\0"
    "handle_FormattingEnginesCurrentRowChanged\0"
    "currentRow\0"
    "handle_ComboBoxLoggerFormattingEngineCurrentIndexChange\0"
    "handle_CheckBoxToggleAllClicked\0checked\0"
    "handle_CheckBoxRememberSessionConfigClicked\0"
    "handle_ComboBoxGlobalLogLevelCurrentIndexChange\0"
    "text\0handle_BtnSaveConfigClicked\0"
    "handle_BtnLoadConfigClicked\0"
    "handle_BtnApplyClicked\0resizeCommandTableRows\0"
    "on_btnViewLog_clicked\0"
    "on_tableViewLoggerEngines_doubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__LoggerConfigWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    1,   86,    2, 0x08 /* Private */,
       6,    1,   89,    2, 0x08 /* Private */,
       8,    1,   92,    2, 0x08 /* Private */,
       9,    1,   95,    2, 0x08 /* Private */,
      11,    1,   98,    2, 0x08 /* Private */,
      12,    1,  101,    2, 0x08 /* Private */,
      14,    0,  104,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,
      16,    0,  106,    2, 0x08 /* Private */,
      17,    0,  107,    2, 0x08 /* Private */,
      18,    0,  108,    2, 0x08 /* Private */,
      19,    1,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,

       0        // eod
};

void Qtilities::CoreGui::LoggerConfigWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoggerConfigWidget *_t = static_cast<LoggerConfigWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handle_NewLoggerEngineRequest(); break;
        case 1: _t->handle_RemoveLoggerEngineRequest(); break;
        case 2: _t->handle_LoggerEngineTableClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->handle_FormattingEnginesCurrentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->handle_ComboBoxLoggerFormattingEngineCurrentIndexChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->handle_CheckBoxToggleAllClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->handle_CheckBoxRememberSessionConfigClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->handle_ComboBoxGlobalLogLevelCurrentIndexChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->handle_BtnSaveConfigClicked(); break;
        case 9: _t->handle_BtnLoadConfigClicked(); break;
        case 10: _t->handle_BtnApplyClicked(); break;
        case 11: _t->resizeCommandTableRows(); break;
        case 12: _t->on_btnViewLog_clicked(); break;
        case 13: _t->on_tableViewLoggerEngines_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Qtilities::CoreGui::LoggerConfigWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__LoggerConfigWidget.data,
      qt_meta_data_Qtilities__CoreGui__LoggerConfigWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::LoggerConfigWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::LoggerConfigWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__LoggerConfigWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IConfigPage"))
        return static_cast< IConfigPage*>(this);
    if (!strcmp(_clname, "com.Qtilities.CoreGui.IConfigPage/1.0"))
        return static_cast< Qtilities::CoreGui::Interfaces::IConfigPage*>(this);
    return QWidget::qt_metacast(_clname);
}

int Qtilities::CoreGui::LoggerConfigWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
