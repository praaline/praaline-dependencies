/****************************************************************************
** Meta object code from reading C++ file 'CodeEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/CodeEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CodeEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__CodeEditor_t {
    QByteArrayData data[14];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__CodeEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__CodeEditor_t qt_meta_stringdata_Qtilities__CoreGui__CodeEditor = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Qtilities::CoreGui::CodeEditor"
QT_MOC_LITERAL(1, 31, 25), // "updateLineNumberAreaWidth"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 13), // "newBlockCount"
QT_MOC_LITERAL(4, 72, 20), // "updateLineNumberArea"
QT_MOC_LITERAL(5, 93, 4), // "rect"
QT_MOC_LITERAL(6, 98, 2), // "dy"
QT_MOC_LITERAL(7, 101, 20), // "highlightCurrentLine"
QT_MOC_LITERAL(8, 122, 13), // "highlightLine"
QT_MOC_LITERAL(9, 136, 11), // "QTextCursor"
QT_MOC_LITERAL(10, 148, 6), // "cursor"
QT_MOC_LITERAL(11, 155, 14), // "highlightWords"
QT_MOC_LITERAL(12, 170, 5), // "words"
QT_MOC_LITERAL(13, 176, 5) // "brush"

    },
    "Qtilities::CoreGui::CodeEditor\0"
    "updateLineNumberAreaWidth\0\0newBlockCount\0"
    "updateLineNumberArea\0rect\0dy\0"
    "highlightCurrentLine\0highlightLine\0"
    "QTextCursor\0cursor\0highlightWords\0"
    "words\0brush"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__CodeEditor[] = {

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
       1,    1,   39,    2, 0x0a /* Public */,
       4,    2,   42,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,
      11,    2,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QRect, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QBrush,   12,   13,

       0        // eod
};

void Qtilities::CoreGui::CodeEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CodeEditor *_t = static_cast<CodeEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLineNumberAreaWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateLineNumberArea((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->highlightCurrentLine(); break;
        case 3: _t->highlightLine((*reinterpret_cast< QTextCursor(*)>(_a[1]))); break;
        case 4: _t->highlightWords((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject Qtilities::CoreGui::CodeEditor::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__CodeEditor.data,
      qt_meta_data_Qtilities__CoreGui__CodeEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::CodeEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::CodeEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__CodeEditor.stringdata0))
        return static_cast<void*>(const_cast< CodeEditor*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int Qtilities::CoreGui::CodeEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
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
