/****************************************************************************
** Meta object code from reading C++ file 'CodeEditorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/CodeEditorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CodeEditorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__CodeEditorWidget_t {
    QByteArrayData data[51];
    char stringdata0[765];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__CodeEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__CodeEditorWidget_t qt_meta_stringdata_Qtilities__CoreGui__CodeEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 36), // "Qtilities::CoreGui::CodeEdito..."
QT_MOC_LITERAL(1, 37, 24), // "modificationStateChanged"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 11), // "is_modified"
QT_MOC_LITERAL(4, 75, 15), // "fileNameChanged"
QT_MOC_LITERAL(5, 91, 13), // "new_file_name"
QT_MOC_LITERAL(6, 105, 20), // "setModificationState"
QT_MOC_LITERAL(7, 126, 9), // "new_state"
QT_MOC_LITERAL(8, 136, 42), // "IModificationNotifier::Notifi..."
QT_MOC_LITERAL(9, 179, 19), // "force_notifications"
QT_MOC_LITERAL(10, 199, 9), // "actionNew"
QT_MOC_LITERAL(11, 209, 10), // "actionOpen"
QT_MOC_LITERAL(12, 220, 10), // "actionSave"
QT_MOC_LITERAL(13, 231, 12), // "actionSaveAs"
QT_MOC_LITERAL(14, 244, 11), // "actionPrint"
QT_MOC_LITERAL(15, 256, 18), // "actionPrintPreview"
QT_MOC_LITERAL(16, 275, 14), // "actionPrintPdf"
QT_MOC_LITERAL(17, 290, 18), // "showEditorSettings"
QT_MOC_LITERAL(18, 309, 13), // "showSearchBox"
QT_MOC_LITERAL(19, 323, 12), // "printPreview"
QT_MOC_LITERAL(20, 336, 9), // "QPrinter*"
QT_MOC_LITERAL(21, 346, 7), // "printer"
QT_MOC_LITERAL(22, 354, 27), // "handleSettingsUpdateRequest"
QT_MOC_LITERAL(23, 382, 10), // "request_id"
QT_MOC_LITERAL(24, 393, 16), // "updateSaveAction"
QT_MOC_LITERAL(25, 410, 29), // "handleFileChangedNotification"
QT_MOC_LITERAL(26, 440, 4), // "path"
QT_MOC_LITERAL(27, 445, 11), // "ActionFlags"
QT_MOC_LITERAL(28, 457, 13), // "ActionNoHints"
QT_MOC_LITERAL(29, 471, 9), // "ActionNew"
QT_MOC_LITERAL(30, 481, 14), // "ActionOpenFile"
QT_MOC_LITERAL(31, 496, 14), // "ActionSaveFile"
QT_MOC_LITERAL(32, 511, 16), // "ActionSaveFileAs"
QT_MOC_LITERAL(33, 528, 11), // "ActionPrint"
QT_MOC_LITERAL(34, 540, 18), // "ActionPrintPreview"
QT_MOC_LITERAL(35, 559, 14), // "ActionPrintPDF"
QT_MOC_LITERAL(36, 574, 10), // "ActionUndo"
QT_MOC_LITERAL(37, 585, 10), // "ActionRedo"
QT_MOC_LITERAL(38, 596, 9), // "ActionCut"
QT_MOC_LITERAL(39, 606, 10), // "ActionCopy"
QT_MOC_LITERAL(40, 617, 11), // "ActionPaste"
QT_MOC_LITERAL(41, 629, 11), // "ActionClear"
QT_MOC_LITERAL(42, 641, 15), // "ActionSelectAll"
QT_MOC_LITERAL(43, 657, 10), // "ActionFind"
QT_MOC_LITERAL(44, 668, 14), // "ActionAllHints"
QT_MOC_LITERAL(45, 683, 12), // "DisplayFlags"
QT_MOC_LITERAL(46, 696, 18), // "NoDisplayFlagsHint"
QT_MOC_LITERAL(47, 715, 6), // "Editor"
QT_MOC_LITERAL(48, 722, 9), // "SearchBox"
QT_MOC_LITERAL(49, 732, 13), // "ActionToolBar"
QT_MOC_LITERAL(50, 746, 18) // "AllDisplayFlagHint"

    },
    "Qtilities::CoreGui::CodeEditorWidget\0"
    "modificationStateChanged\0\0is_modified\0"
    "fileNameChanged\0new_file_name\0"
    "setModificationState\0new_state\0"
    "IModificationNotifier::NotificationTargets\0"
    "force_notifications\0actionNew\0actionOpen\0"
    "actionSave\0actionSaveAs\0actionPrint\0"
    "actionPrintPreview\0actionPrintPdf\0"
    "showEditorSettings\0showSearchBox\0"
    "printPreview\0QPrinter*\0printer\0"
    "handleSettingsUpdateRequest\0request_id\0"
    "updateSaveAction\0handleFileChangedNotification\0"
    "path\0ActionFlags\0ActionNoHints\0ActionNew\0"
    "ActionOpenFile\0ActionSaveFile\0"
    "ActionSaveFileAs\0ActionPrint\0"
    "ActionPrintPreview\0ActionPrintPDF\0"
    "ActionUndo\0ActionRedo\0ActionCut\0"
    "ActionCopy\0ActionPaste\0ActionClear\0"
    "ActionSelectAll\0ActionFind\0ActionAllHints\0"
    "DisplayFlags\0NoDisplayFlagsHint\0Editor\0"
    "SearchBox\0ActionToolBar\0AllDisplayFlagHint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__CodeEditorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       2,  144, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    1,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,  110,    2, 0x0a /* Public */,
       6,    2,  117,    2, 0x2a /* Public | MethodCloned */,
       6,    1,  122,    2, 0x2a /* Public | MethodCloned */,
      10,    0,  125,    2, 0x0a /* Public */,
      11,    0,  126,    2, 0x0a /* Public */,
      12,    0,  127,    2, 0x0a /* Public */,
      13,    0,  128,    2, 0x0a /* Public */,
      14,    0,  129,    2, 0x0a /* Public */,
      15,    0,  130,    2, 0x0a /* Public */,
      16,    0,  131,    2, 0x0a /* Public */,
      17,    0,  132,    2, 0x0a /* Public */,
      18,    0,  133,    2, 0x0a /* Public */,
      19,    1,  134,    2, 0x0a /* Public */,
      22,    1,  137,    2, 0x0a /* Public */,
      24,    0,  140,    2, 0x08 /* Private */,
      25,    1,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 8, QMetaType::Bool,    7,    2,    9,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 8,    7,    2,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,

 // enums: name, flags, count, data
      27, 0x1,   17,  152,
      45, 0x1,    5,  186,

 // enum data: key, value
      28, uint(Qtilities::CoreGui::CodeEditorWidget::ActionNoHints),
      29, uint(Qtilities::CoreGui::CodeEditorWidget::ActionNew),
      30, uint(Qtilities::CoreGui::CodeEditorWidget::ActionOpenFile),
      31, uint(Qtilities::CoreGui::CodeEditorWidget::ActionSaveFile),
      32, uint(Qtilities::CoreGui::CodeEditorWidget::ActionSaveFileAs),
      33, uint(Qtilities::CoreGui::CodeEditorWidget::ActionPrint),
      34, uint(Qtilities::CoreGui::CodeEditorWidget::ActionPrintPreview),
      35, uint(Qtilities::CoreGui::CodeEditorWidget::ActionPrintPDF),
      36, uint(Qtilities::CoreGui::CodeEditorWidget::ActionUndo),
      37, uint(Qtilities::CoreGui::CodeEditorWidget::ActionRedo),
      38, uint(Qtilities::CoreGui::CodeEditorWidget::ActionCut),
      39, uint(Qtilities::CoreGui::CodeEditorWidget::ActionCopy),
      40, uint(Qtilities::CoreGui::CodeEditorWidget::ActionPaste),
      41, uint(Qtilities::CoreGui::CodeEditorWidget::ActionClear),
      42, uint(Qtilities::CoreGui::CodeEditorWidget::ActionSelectAll),
      43, uint(Qtilities::CoreGui::CodeEditorWidget::ActionFind),
      44, uint(Qtilities::CoreGui::CodeEditorWidget::ActionAllHints),
      46, uint(Qtilities::CoreGui::CodeEditorWidget::NoDisplayFlagsHint),
      47, uint(Qtilities::CoreGui::CodeEditorWidget::Editor),
      48, uint(Qtilities::CoreGui::CodeEditorWidget::SearchBox),
      49, uint(Qtilities::CoreGui::CodeEditorWidget::ActionToolBar),
      50, uint(Qtilities::CoreGui::CodeEditorWidget::AllDisplayFlagHint),

       0        // eod
};

void Qtilities::CoreGui::CodeEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CodeEditorWidget *_t = static_cast<CodeEditorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modificationStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->fileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< IModificationNotifier::NotificationTargets(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< IModificationNotifier::NotificationTargets(*)>(_a[2]))); break;
        case 4: _t->setModificationState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->actionNew(); break;
        case 6: _t->actionOpen(); break;
        case 7: { bool _r = _t->actionSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->actionSaveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->actionPrint(); break;
        case 10: _t->actionPrintPreview(); break;
        case 11: _t->actionPrintPdf(); break;
        case 12: _t->showEditorSettings(); break;
        case 13: _t->showSearchBox(); break;
        case 14: _t->printPreview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 15: _t->handleSettingsUpdateRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->updateSaveAction(); break;
        case 17: _t->handleFileChangedNotification((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CodeEditorWidget::*_t)(bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeEditorWidget::modificationStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CodeEditorWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeEditorWidget::fileNameChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::CodeEditorWidget::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__CodeEditorWidget.data,
      qt_meta_data_Qtilities__CoreGui__CodeEditorWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::CodeEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::CodeEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__CodeEditorWidget.stringdata0))
        return static_cast<void*>(const_cast< CodeEditorWidget*>(this));
    if (!strcmp(_clname, "IContext"))
        return static_cast< IContext*>(const_cast< CodeEditorWidget*>(this));
    if (!strcmp(_clname, "IModificationNotifier"))
        return static_cast< IModificationNotifier*>(const_cast< CodeEditorWidget*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.IContext/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IContext*>(const_cast< CodeEditorWidget*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.IModificationNotifier/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IModificationNotifier*>(const_cast< CodeEditorWidget*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Qtilities::CoreGui::CodeEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::CodeEditorWidget::modificationStateChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Qtilities::CoreGui::CodeEditorWidget *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::CoreGui::CodeEditorWidget::fileNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
