/****************************************************************************
** Meta object code from reading C++ file 'ObjectManagementModeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Examples/ObjectManagement/ObjectManagementModeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObjectManagementModeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qtilities__Examples__ObjectManagement__ObjectManagementModeWidget_t {
    QByteArrayData data[19];
    char stringdata0[371];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__Examples__ObjectManagement__ObjectManagementModeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__Examples__ObjectManagement__ObjectManagementModeWidget_t qt_meta_stringdata_Qtilities__Examples__ObjectManagement__ObjectManagementModeWidget = {
    {
QT_MOC_LITERAL(0, 0, 65), // "Qtilities::Examples::ObjectMa..."
QT_MOC_LITERAL(1, 66, 17), // "addExampleObjects"
QT_MOC_LITERAL(2, 84, 0), // ""
QT_MOC_LITERAL(3, 85, 13), // "createDotFile"
QT_MOC_LITERAL(4, 99, 16), // "addDotProperties"
QT_MOC_LITERAL(5, 116, 19), // "removeDotProperties"
QT_MOC_LITERAL(6, 136, 18), // "queryDotProperties"
QT_MOC_LITERAL(7, 155, 19), // "addObject_triggered"
QT_MOC_LITERAL(8, 175, 8), // "observer"
QT_MOC_LITERAL(9, 184, 16), // "selectionChanged"
QT_MOC_LITERAL(10, 201, 15), // "QList<QObject*>"
QT_MOC_LITERAL(11, 217, 13), // "new_selection"
QT_MOC_LITERAL(12, 231, 31), // "handle_newObserverWidgetCreated"
QT_MOC_LITERAL(13, 263, 15), // "ObserverWidget*"
QT_MOC_LITERAL(14, 279, 10), // "new_widget"
QT_MOC_LITERAL(15, 290, 23), // "handle_actionShowWidget"
QT_MOC_LITERAL(16, 314, 23), // "handle_actionHideWidget"
QT_MOC_LITERAL(17, 338, 26), // "handle_sliderWidgetOpacity"
QT_MOC_LITERAL(18, 365, 5) // "value"

    },
    "Qtilities::Examples::ObjectManagement::ObjectManagementModeWidget\0"
    "addExampleObjects\0\0createDotFile\0"
    "addDotProperties\0removeDotProperties\0"
    "queryDotProperties\0addObject_triggered\0"
    "observer\0selectionChanged\0QList<QObject*>\0"
    "new_selection\0handle_newObserverWidgetCreated\0"
    "ObserverWidget*\0new_widget\0"
    "handle_actionShowWidget\0handle_actionHideWidget\0"
    "handle_sliderWidgetOpacity\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__Examples__ObjectManagement__ObjectManagementModeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
       7,    0,   82,    2, 0x28 /* Private | MethodCloned */,
       9,    1,   83,    2, 0x08 /* Private */,
      12,    1,   86,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,
      16,    0,   90,    2, 0x08 /* Private */,
      17,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void Qtilities::Examples::ObjectManagement::ObjectManagementModeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObjectManagementModeWidget *_t = static_cast<ObjectManagementModeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addExampleObjects(); break;
        case 1: _t->createDotFile(); break;
        case 2: _t->addDotProperties(); break;
        case 3: _t->removeDotProperties(); break;
        case 4: _t->queryDotProperties(); break;
        case 5: _t->addObject_triggered((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->addObject_triggered(); break;
        case 7: _t->selectionChanged((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 8: _t->handle_newObserverWidgetCreated((*reinterpret_cast< ObserverWidget*(*)>(_a[1]))); break;
        case 9: _t->handle_actionShowWidget(); break;
        case 10: _t->handle_actionHideWidget(); break;
        case 11: _t->handle_sliderWidgetOpacity((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ObserverWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Qtilities::Examples::ObjectManagement::ObjectManagementModeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtilities__Examples__ObjectManagement__ObjectManagementModeWidget.data,
      qt_meta_data_Qtilities__Examples__ObjectManagement__ObjectManagementModeWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qtilities::Examples::ObjectManagement::ObjectManagementModeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::Examples::ObjectManagement::ObjectManagementModeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__Examples__ObjectManagement__ObjectManagementModeWidget.stringdata0))
        return static_cast<void*>(const_cast< ObjectManagementModeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtilities::Examples::ObjectManagement::ObjectManagementModeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
