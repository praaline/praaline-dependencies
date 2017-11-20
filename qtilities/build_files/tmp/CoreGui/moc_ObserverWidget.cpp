/****************************************************************************
** Meta object code from reading C++ file 'ObserverWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CoreGui/source/ObserverWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObserverWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtilities__CoreGui__ObserverWidget_t {
    QByteArrayData data[107];
    char stringdata0[2068];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtilities__CoreGui__ObserverWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtilities__CoreGui__ObserverWidget_t qt_meta_stringdata_Qtilities__CoreGui__ObserverWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "Qtilities::CoreGui::ObserverW..."
QT_MOC_LITERAL(1, 35, 20), // "expandedNodesChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 10), // "node_names"
QT_MOC_LITERAL(4, 68, 22), // "expandedObjectsChanged"
QT_MOC_LITERAL(5, 91, 25), // "QList<QPointer<QObject> >"
QT_MOC_LITERAL(6, 117, 7), // "objects"
QT_MOC_LITERAL(7, 125, 22), // "observerContextChanged"
QT_MOC_LITERAL(8, 148, 9), // "Observer*"
QT_MOC_LITERAL(9, 158, 11), // "new_context"
QT_MOC_LITERAL(10, 170, 20), // "readOnlyStateChanged"
QT_MOC_LITERAL(11, 191, 9), // "read_only"
QT_MOC_LITERAL(12, 201, 18), // "displayModeChanged"
QT_MOC_LITERAL(13, 220, 22), // "Qtilities::DisplayMode"
QT_MOC_LITERAL(14, 243, 12), // "display_mode"
QT_MOC_LITERAL(15, 256, 22), // "selectedObjectsChanged"
QT_MOC_LITERAL(16, 279, 15), // "QList<QObject*>"
QT_MOC_LITERAL(17, 295, 16), // "selected_objects"
QT_MOC_LITERAL(18, 312, 16), // "selection_parent"
QT_MOC_LITERAL(19, 329, 21), // "treeModelBuildStarted"
QT_MOC_LITERAL(20, 351, 19), // "treeModelBuildEnded"
QT_MOC_LITERAL(21, 371, 26), // "addActionNewItem_triggered"
QT_MOC_LITERAL(22, 398, 6), // "object"
QT_MOC_LITERAL(23, 405, 15), // "parent_observer"
QT_MOC_LITERAL(24, 421, 18), // "doubleClickRequest"
QT_MOC_LITERAL(25, 440, 24), // "newObserverWidgetCreated"
QT_MOC_LITERAL(26, 465, 15), // "ObserverWidget*"
QT_MOC_LITERAL(27, 481, 10), // "new_widget"
QT_MOC_LITERAL(28, 492, 14), // "contextDeleted"
QT_MOC_LITERAL(29, 507, 20), // "contextDetachHandler"
QT_MOC_LITERAL(30, 528, 33), // "Observer::SubjectChangeIndica..."
QT_MOC_LITERAL(31, 562, 10), // "indication"
QT_MOC_LITERAL(32, 573, 3), // "obj"
QT_MOC_LITERAL(33, 577, 15), // "resetProxyModel"
QT_MOC_LITERAL(34, 593, 12), // "adaptColumns"
QT_MOC_LITERAL(35, 606, 7), // "topleft"
QT_MOC_LITERAL(36, 614, 11), // "bottomRight"
QT_MOC_LITERAL(37, 626, 32), // "handleTreeModelBuildAboutToStart"
QT_MOC_LITERAL(38, 659, 14), // "handleExpanded"
QT_MOC_LITERAL(39, 674, 5), // "index"
QT_MOC_LITERAL(40, 680, 15), // "handleCollapsed"
QT_MOC_LITERAL(41, 696, 13), // "resizeColumns"
QT_MOC_LITERAL(42, 710, 11), // "expandNodes"
QT_MOC_LITERAL(43, 722, 13), // "expandObjects"
QT_MOC_LITERAL(44, 736, 16), // "expandCategories"
QT_MOC_LITERAL(45, 753, 14), // "category_names"
QT_MOC_LITERAL(46, 768, 15), // "QModelIndexList"
QT_MOC_LITERAL(47, 784, 7), // "indexes"
QT_MOC_LITERAL(48, 792, 22), // "setTreeSelectionParent"
QT_MOC_LITERAL(49, 815, 8), // "observer"
QT_MOC_LITERAL(50, 824, 24), // "handleTreeRebuildStarted"
QT_MOC_LITERAL(51, 849, 26), // "handleTreeRebuildCompleted"
QT_MOC_LITERAL(52, 876, 25), // "emit_tree_build_completed"
QT_MOC_LITERAL(53, 902, 33), // "updateSelectionFromActivityFi..."
QT_MOC_LITERAL(54, 936, 26), // "updateGlobalActiveSubjects"
QT_MOC_LITERAL(55, 963, 13), // "selectObjects"
QT_MOC_LITERAL(56, 977, 12), // "selectObject"
QT_MOC_LITERAL(57, 990, 16), // "selectCategories"
QT_MOC_LITERAL(58, 1007, 24), // "QList<QtilitiesCategory>"
QT_MOC_LITERAL(59, 1032, 10), // "categories"
QT_MOC_LITERAL(60, 1043, 14), // "selectCategory"
QT_MOC_LITERAL(61, 1058, 17), // "QtilitiesCategory"
QT_MOC_LITERAL(62, 1076, 8), // "category"
QT_MOC_LITERAL(63, 1085, 14), // "clearSelection"
QT_MOC_LITERAL(64, 1100, 19), // "resizeTableViewRows"
QT_MOC_LITERAL(65, 1120, 6), // "height"
QT_MOC_LITERAL(66, 1127, 26), // "handleSelectionModelChange"
QT_MOC_LITERAL(67, 1154, 34), // "setPreferredPropertyEditorDoc..."
QT_MOC_LITERAL(68, 1189, 18), // "Qt::DockWidgetArea"
QT_MOC_LITERAL(69, 1208, 25), // "property_editor_dock_area"
QT_MOC_LITERAL(70, 1234, 30), // "setPreferredPropertyEditorType"
QT_MOC_LITERAL(71, 1265, 34), // "ObjectPropertyBrowser::Browse..."
QT_MOC_LITERAL(72, 1300, 20), // "property_editor_type"
QT_MOC_LITERAL(73, 1321, 26), // "setPreferredPropertyFilter"
QT_MOC_LITERAL(74, 1348, 11), // "filter_list"
QT_MOC_LITERAL(75, 1360, 15), // "inversed_filter"
QT_MOC_LITERAL(76, 1376, 41), // "setPreferredDynamicPropertyEd..."
QT_MOC_LITERAL(77, 1418, 37), // "setPreferredDynamicPropertyEd..."
QT_MOC_LITERAL(78, 1456, 41), // "ObjectDynamicPropertyBrowser:..."
QT_MOC_LITERAL(79, 1498, 15), // "selectionDetach"
QT_MOC_LITERAL(80, 1514, 18), // "selectionDetachAll"
QT_MOC_LITERAL(81, 1533, 15), // "selectionDelete"
QT_MOC_LITERAL(82, 1549, 18), // "selectionDeleteAll"
QT_MOC_LITERAL(83, 1568, 7), // "refresh"
QT_MOC_LITERAL(84, 1576, 15), // "selectionPushUp"
QT_MOC_LITERAL(85, 1592, 18), // "selectionPushUpNew"
QT_MOC_LITERAL(86, 1611, 17), // "selectionPushDown"
QT_MOC_LITERAL(87, 1629, 20), // "selectionPushDownNew"
QT_MOC_LITERAL(88, 1650, 17), // "toggleDisplayMode"
QT_MOC_LITERAL(89, 1668, 13), // "selectionCopy"
QT_MOC_LITERAL(90, 1682, 12), // "selectionCut"
QT_MOC_LITERAL(91, 1695, 28), // "handle_actionPaste_triggered"
QT_MOC_LITERAL(92, 1724, 15), // "toggleSearchBox"
QT_MOC_LITERAL(93, 1740, 30), // "setSearchBoxCheckedItemFilters"
QT_MOC_LITERAL(94, 1771, 35), // "ObserverTreeItem::TreeItemTyp..."
QT_MOC_LITERAL(95, 1807, 17), // "item_filter_flags"
QT_MOC_LITERAL(96, 1825, 27), // "searchBoxCheckedItemFilters"
QT_MOC_LITERAL(97, 1853, 15), // "viewCollapseAll"
QT_MOC_LITERAL(98, 1869, 13), // "viewExpandAll"
QT_MOC_LITERAL(99, 1883, 26), // "handleSearchOptionsChanged"
QT_MOC_LITERAL(100, 1910, 25), // "handleSearchStringChanged"
QT_MOC_LITERAL(101, 1936, 13), // "filter_string"
QT_MOC_LITERAL(102, 1950, 28), // "handleSearchItemTypesChanged"
QT_MOC_LITERAL(103, 1979, 14), // "refreshActions"
QT_MOC_LITERAL(104, 1994, 27), // "handleLayoutChangeCompleted"
QT_MOC_LITERAL(105, 2022, 30), // "handle_actionNewItem_triggered"
QT_MOC_LITERAL(106, 2053, 14) // "selectionDebug"

    },
    "Qtilities::CoreGui::ObserverWidget\0"
    "expandedNodesChanged\0\0node_names\0"
    "expandedObjectsChanged\0QList<QPointer<QObject> >\0"
    "objects\0observerContextChanged\0Observer*\0"
    "new_context\0readOnlyStateChanged\0"
    "read_only\0displayModeChanged\0"
    "Qtilities::DisplayMode\0display_mode\0"
    "selectedObjectsChanged\0QList<QObject*>\0"
    "selected_objects\0selection_parent\0"
    "treeModelBuildStarted\0treeModelBuildEnded\0"
    "addActionNewItem_triggered\0object\0"
    "parent_observer\0doubleClickRequest\0"
    "newObserverWidgetCreated\0ObserverWidget*\0"
    "new_widget\0contextDeleted\0"
    "contextDetachHandler\0"
    "Observer::SubjectChangeIndication\0"
    "indication\0obj\0resetProxyModel\0"
    "adaptColumns\0topleft\0bottomRight\0"
    "handleTreeModelBuildAboutToStart\0"
    "handleExpanded\0index\0handleCollapsed\0"
    "resizeColumns\0expandNodes\0expandObjects\0"
    "expandCategories\0category_names\0"
    "QModelIndexList\0indexes\0setTreeSelectionParent\0"
    "observer\0handleTreeRebuildStarted\0"
    "handleTreeRebuildCompleted\0"
    "emit_tree_build_completed\0"
    "updateSelectionFromActivityFilter\0"
    "updateGlobalActiveSubjects\0selectObjects\0"
    "selectObject\0selectCategories\0"
    "QList<QtilitiesCategory>\0categories\0"
    "selectCategory\0QtilitiesCategory\0"
    "category\0clearSelection\0resizeTableViewRows\0"
    "height\0handleSelectionModelChange\0"
    "setPreferredPropertyEditorDockArea\0"
    "Qt::DockWidgetArea\0property_editor_dock_area\0"
    "setPreferredPropertyEditorType\0"
    "ObjectPropertyBrowser::BrowserType\0"
    "property_editor_type\0setPreferredPropertyFilter\0"
    "filter_list\0inversed_filter\0"
    "setPreferredDynamicPropertyEditorDockArea\0"
    "setPreferredDynamicPropertyEditorType\0"
    "ObjectDynamicPropertyBrowser::BrowserType\0"
    "selectionDetach\0selectionDetachAll\0"
    "selectionDelete\0selectionDeleteAll\0"
    "refresh\0selectionPushUp\0selectionPushUpNew\0"
    "selectionPushDown\0selectionPushDownNew\0"
    "toggleDisplayMode\0selectionCopy\0"
    "selectionCut\0handle_actionPaste_triggered\0"
    "toggleSearchBox\0setSearchBoxCheckedItemFilters\0"
    "ObserverTreeItem::TreeItemTypeFlags\0"
    "item_filter_flags\0searchBoxCheckedItemFilters\0"
    "viewCollapseAll\0viewExpandAll\0"
    "handleSearchOptionsChanged\0"
    "handleSearchStringChanged\0filter_string\0"
    "handleSearchItemTypesChanged\0"
    "refreshActions\0handleLayoutChangeCompleted\0"
    "handle_actionNewItem_triggered\0"
    "selectionDebug"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtilities__CoreGui__ObserverWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      72,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  374,    2, 0x06 /* Public */,
       4,    1,  377,    2, 0x06 /* Public */,
       7,    1,  380,    2, 0x06 /* Public */,
      10,    1,  383,    2, 0x06 /* Public */,
      12,    1,  386,    2, 0x06 /* Public */,
      15,    2,  389,    2, 0x06 /* Public */,
      15,    1,  394,    2, 0x26 /* Public | MethodCloned */,
      19,    0,  397,    2, 0x06 /* Public */,
      20,    0,  398,    2, 0x06 /* Public */,
      21,    2,  399,    2, 0x06 /* Public */,
      21,    1,  404,    2, 0x26 /* Public | MethodCloned */,
      24,    2,  407,    2, 0x06 /* Public */,
      24,    1,  412,    2, 0x26 /* Public | MethodCloned */,
      25,    1,  415,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    0,  418,    2, 0x08 /* Private */,
      29,    2,  419,    2, 0x08 /* Private */,
      33,    0,  424,    2, 0x08 /* Private */,
      34,    2,  425,    2, 0x08 /* Private */,
      37,    0,  430,    2, 0x08 /* Private */,
      38,    1,  431,    2, 0x08 /* Private */,
      40,    1,  434,    2, 0x08 /* Private */,
      41,    0,  437,    2, 0x0a /* Public */,
      42,    1,  438,    2, 0x0a /* Public */,
      43,    1,  441,    2, 0x0a /* Public */,
      44,    1,  444,    2, 0x0a /* Public */,
      42,    1,  447,    2, 0x0a /* Public */,
      48,    1,  450,    2, 0x08 /* Private */,
      50,    0,  453,    2, 0x08 /* Private */,
      51,    1,  454,    2, 0x08 /* Private */,
      51,    0,  457,    2, 0x28 /* Private | MethodCloned */,
      53,    1,  458,    2, 0x08 /* Private */,
      54,    0,  461,    2, 0x0a /* Public */,
      55,    1,  462,    2, 0x0a /* Public */,
      56,    1,  465,    2, 0x0a /* Public */,
      57,    1,  468,    2, 0x0a /* Public */,
      60,    1,  471,    2, 0x0a /* Public */,
      63,    0,  474,    2, 0x0a /* Public */,
      55,    1,  475,    2, 0x0a /* Public */,
      64,    1,  478,    2, 0x0a /* Public */,
      64,    0,  481,    2, 0x2a /* Public | MethodCloned */,
      66,    0,  482,    2, 0x0a /* Public */,
      67,    1,  483,    2, 0x0a /* Public */,
      70,    1,  486,    2, 0x0a /* Public */,
      73,    2,  489,    2, 0x0a /* Public */,
      73,    1,  494,    2, 0x2a /* Public | MethodCloned */,
      76,    1,  497,    2, 0x0a /* Public */,
      77,    1,  500,    2, 0x0a /* Public */,
      79,    0,  503,    2, 0x0a /* Public */,
      80,    0,  504,    2, 0x0a /* Public */,
      81,    0,  505,    2, 0x0a /* Public */,
      82,    0,  506,    2, 0x0a /* Public */,
      83,    0,  507,    2, 0x0a /* Public */,
      84,    0,  508,    2, 0x0a /* Public */,
      85,    0,  509,    2, 0x0a /* Public */,
      86,    0,  510,    2, 0x0a /* Public */,
      87,    0,  511,    2, 0x0a /* Public */,
      88,    0,  512,    2, 0x0a /* Public */,
      89,    0,  513,    2, 0x0a /* Public */,
      90,    0,  514,    2, 0x0a /* Public */,
      91,    0,  515,    2, 0x0a /* Public */,
      92,    0,  516,    2, 0x0a /* Public */,
      93,    1,  517,    2, 0x0a /* Public */,
      96,    0,  520,    2, 0x0a /* Public */,
      97,    0,  521,    2, 0x0a /* Public */,
      98,    0,  522,    2, 0x0a /* Public */,
      99,    0,  523,    2, 0x0a /* Public */,
     100,    1,  524,    2, 0x0a /* Public */,
     102,    0,  527,    2, 0x0a /* Public */,
     103,    0,  528,    2, 0x0a /* Public */,
     104,    0,  529,    2, 0x08 /* Private */,
     105,    0,  530,    2, 0x08 /* Private */,
     106,    0,  531,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 8,   17,   18,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 8,   22,   23,
    QMetaType::Void, QMetaType::QObjectStar,   22,
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 8,   22,   23,
    QMetaType::Void, QMetaType::QObjectStar,   22,
    QMetaType::Void, 0x80000000 | 26,   27,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 5,   31,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   35,   36,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   39,
    QMetaType::Void, QMetaType::QModelIndex,   39,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QStringList,   45,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void, 0x80000000 | 8,   49,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,    6,
    QMetaType::Void, QMetaType::QObjectStar,   22,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 68,   69,
    QMetaType::Void, 0x80000000 | 71,   72,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Bool,   74,   75,
    QMetaType::Void, QMetaType::QStringList,   74,
    QMetaType::Void, 0x80000000 | 68,   69,
    QMetaType::Void, 0x80000000 | 78,   72,
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
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 94,   95,
    0x80000000 | 94,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  101,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Qtilities::CoreGui::ObserverWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObserverWidget *_t = static_cast<ObserverWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->expandedNodesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->expandedObjectsChanged((*reinterpret_cast< const QList<QPointer<QObject> >(*)>(_a[1]))); break;
        case 2: _t->observerContextChanged((*reinterpret_cast< Observer*(*)>(_a[1]))); break;
        case 3: _t->readOnlyStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->displayModeChanged((*reinterpret_cast< Qtilities::DisplayMode(*)>(_a[1]))); break;
        case 5: _t->selectedObjectsChanged((*reinterpret_cast< QList<QObject*>(*)>(_a[1])),(*reinterpret_cast< Observer*(*)>(_a[2]))); break;
        case 6: _t->selectedObjectsChanged((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 7: _t->treeModelBuildStarted(); break;
        case 8: _t->treeModelBuildEnded(); break;
        case 9: _t->addActionNewItem_triggered((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< Observer*(*)>(_a[2]))); break;
        case 10: _t->addActionNewItem_triggered((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 11: _t->doubleClickRequest((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< Observer*(*)>(_a[2]))); break;
        case 12: _t->doubleClickRequest((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 13: _t->newObserverWidgetCreated((*reinterpret_cast< ObserverWidget*(*)>(_a[1]))); break;
        case 14: _t->contextDeleted(); break;
        case 15: _t->contextDetachHandler((*reinterpret_cast< Observer::SubjectChangeIndication(*)>(_a[1])),(*reinterpret_cast< QList<QPointer<QObject> >(*)>(_a[2]))); break;
        case 16: _t->resetProxyModel(); break;
        case 17: _t->adaptColumns((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 18: _t->handleTreeModelBuildAboutToStart(); break;
        case 19: _t->handleExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 20: _t->handleCollapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 21: _t->resizeColumns(); break;
        case 22: _t->expandNodes((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 23: _t->expandObjects((*reinterpret_cast< const QList<QPointer<QObject> >(*)>(_a[1]))); break;
        case 24: _t->expandCategories((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 25: _t->expandNodes((*reinterpret_cast< QModelIndexList(*)>(_a[1]))); break;
        case 26: _t->setTreeSelectionParent((*reinterpret_cast< Observer*(*)>(_a[1]))); break;
        case 27: _t->handleTreeRebuildStarted(); break;
        case 28: _t->handleTreeRebuildCompleted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->handleTreeRebuildCompleted(); break;
        case 30: _t->updateSelectionFromActivityFilter((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 31: _t->updateGlobalActiveSubjects(); break;
        case 32: _t->selectObjects((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 33: _t->selectObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 34: _t->selectCategories((*reinterpret_cast< QList<QtilitiesCategory>(*)>(_a[1]))); break;
        case 35: _t->selectCategory((*reinterpret_cast< QtilitiesCategory(*)>(_a[1]))); break;
        case 36: _t->clearSelection(); break;
        case 37: _t->selectObjects((*reinterpret_cast< QList<QPointer<QObject> >(*)>(_a[1]))); break;
        case 38: _t->resizeTableViewRows((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->resizeTableViewRows(); break;
        case 40: _t->handleSelectionModelChange(); break;
        case 41: _t->setPreferredPropertyEditorDockArea((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 42: _t->setPreferredPropertyEditorType((*reinterpret_cast< ObjectPropertyBrowser::BrowserType(*)>(_a[1]))); break;
        case 43: _t->setPreferredPropertyFilter((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 44: _t->setPreferredPropertyFilter((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 45: _t->setPreferredDynamicPropertyEditorDockArea((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 46: _t->setPreferredDynamicPropertyEditorType((*reinterpret_cast< ObjectDynamicPropertyBrowser::BrowserType(*)>(_a[1]))); break;
        case 47: _t->selectionDetach(); break;
        case 48: _t->selectionDetachAll(); break;
        case 49: _t->selectionDelete(); break;
        case 50: _t->selectionDeleteAll(); break;
        case 51: _t->refresh(); break;
        case 52: _t->selectionPushUp(); break;
        case 53: _t->selectionPushUpNew(); break;
        case 54: _t->selectionPushDown(); break;
        case 55: _t->selectionPushDownNew(); break;
        case 56: _t->toggleDisplayMode(); break;
        case 57: _t->selectionCopy(); break;
        case 58: _t->selectionCut(); break;
        case 59: _t->handle_actionPaste_triggered(); break;
        case 60: _t->toggleSearchBox(); break;
        case 61: _t->setSearchBoxCheckedItemFilters((*reinterpret_cast< ObserverTreeItem::TreeItemTypeFlags(*)>(_a[1]))); break;
        case 62: { ObserverTreeItem::TreeItemTypeFlags _r = _t->searchBoxCheckedItemFilters();
            if (_a[0]) *reinterpret_cast< ObserverTreeItem::TreeItemTypeFlags*>(_a[0]) = std::move(_r); }  break;
        case 63: _t->viewCollapseAll(); break;
        case 64: _t->viewExpandAll(); break;
        case 65: _t->handleSearchOptionsChanged(); break;
        case 66: _t->handleSearchStringChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 67: _t->handleSearchItemTypesChanged(); break;
        case 68: _t->refreshActions(); break;
        case 69: _t->handleLayoutChangeCompleted(); break;
        case 70: _t->handle_actionNewItem_triggered(); break;
        case 71: _t->selectionDebug(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPointer<QObject> > >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Observer* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Observer* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Observer* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Observer* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ObserverWidget* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPointer<QObject> > >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPointer<QObject> > >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Observer* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPointer<QObject> > >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ObserverWidget::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObserverWidget::expandedNodesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ObserverWidget::*_t)(const QList<QPointer<QObject> > & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObserverWidget::expandedObjectsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ObserverWidget::*_t)(Observer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObserverWidget::observerContextChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ObserverWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObserverWidget::readOnlyStateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ObserverWidget::*_t)(Qtilities::DisplayMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObserverWidget::displayModeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ObserverWidget::*_t)(QList<QObject*> , Observer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObserverWidget::selectedObjectsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ObserverWidget::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObserverWidget::treeModelBuildStarted)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (ObserverWidget::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObserverWidget::treeModelBuildEnded)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (ObserverWidget::*_t)(QObject * , Observer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObserverWidget::addActionNewItem_triggered)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (ObserverWidget::*_t)(QObject * , Observer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObserverWidget::doubleClickRequest)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (ObserverWidget::*_t)(ObserverWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObserverWidget::newObserverWidgetCreated)) {
                *result = 13;
                return;
            }
        }
    }
}

const QMetaObject Qtilities::CoreGui::ObserverWidget::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Qtilities__CoreGui__ObserverWidget.data,
      qt_meta_data_Qtilities__CoreGui__ObserverWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qtilities::CoreGui::ObserverWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtilities::CoreGui::ObserverWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtilities__CoreGui__ObserverWidget.stringdata0))
        return static_cast<void*>(const_cast< ObserverWidget*>(this));
    if (!strcmp(_clname, "IContext"))
        return static_cast< IContext*>(const_cast< ObserverWidget*>(this));
    if (!strcmp(_clname, "com.Qtilities.Core.IContext/1.0"))
        return static_cast< Qtilities::Core::Interfaces::IContext*>(const_cast< ObserverWidget*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Qtilities::CoreGui::ObserverWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 72)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 72;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 72)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 72;
    }
    return _id;
}

// SIGNAL 0
void Qtilities::CoreGui::ObserverWidget::expandedNodesChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtilities::CoreGui::ObserverWidget::expandedObjectsChanged(const QList<QPointer<QObject> > & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qtilities::CoreGui::ObserverWidget::observerContextChanged(Observer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qtilities::CoreGui::ObserverWidget::readOnlyStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qtilities::CoreGui::ObserverWidget::displayModeChanged(Qtilities::DisplayMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Qtilities::CoreGui::ObserverWidget::selectedObjectsChanged(QList<QObject*> _t1, Observer * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 7
void Qtilities::CoreGui::ObserverWidget::treeModelBuildStarted()const
{
    QMetaObject::activate(const_cast< Qtilities::CoreGui::ObserverWidget *>(this), &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Qtilities::CoreGui::ObserverWidget::treeModelBuildEnded()const
{
    QMetaObject::activate(const_cast< Qtilities::CoreGui::ObserverWidget *>(this), &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Qtilities::CoreGui::ObserverWidget::addActionNewItem_triggered(QObject * _t1, Observer * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 11
void Qtilities::CoreGui::ObserverWidget::doubleClickRequest(QObject * _t1, Observer * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 13
void Qtilities::CoreGui::ObserverWidget::newObserverWidgetCreated(ObserverWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
