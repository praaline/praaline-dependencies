/********************************************************************************
** Form generated from reading UI file 'DebugWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGWIDGET_H
#define UI_DEBUGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebugWidget
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *labelVersion;
    QLabel *label;
    QToolButton *btnRefreshViews;
    QFrame *line;
    QTabWidget *tabWidgetDebug;
    QWidget *tabObjectPool;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QWidget *widgetObjectPoolHolder;
    QWidget *widgetObjectInfo;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxPropertyBrowser;
    QGridLayout *gridLayout_30;
    QTabWidget *tabWidget;
    QWidget *tabObjectProperties;
    QGridLayout *gridLayout_31;
    QWidget *objectPropertyBrowserHolder;
    QWidget *tabDynamicObjectProperties;
    QGridLayout *gridLayout_32;
    QWidget *objectDynamicPropertyBrowserHolder;
    QCheckBox *chkRefreshProperties;
    QGroupBox *groupBoxInheritanceList;
    QGridLayout *gridLayout_28;
    QListView *objectInheritanceList;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_26;
    QWidget *widgetObjectScopeHolder;
    QGroupBox *groupBox_21;
    QGridLayout *gridLayout_25;
    QLabel *lblConanLabel;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnAnalyzeCurrentObject;
    QSpacerItem *horizontalSpacer_10;
    QLabel *lblConanExcluded;
    QWidget *tabApplicationState;
    QGridLayout *gridLayout_4;
    QToolBox *toolBox;
    QWidget *pageFactories;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listFactories;
    QListWidget *listFactoryItemIDs;
    QWidget *pageTaskActivity;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QFrame *line_2;
    QWidget *widgetTasksSummaryHolder;
    QWidget *pageModes;
    QGridLayout *gridLayout_5;
    QLabel *label_11;
    QFrame *line_4;
    QTableWidget *tableModes;
    QWidget *pageContexts;
    QGridLayout *gridLayout_29;
    QWidget *widgetContextsHolder;
    QWidget *widgetContextsContents;
    QGridLayout *gridLayout_13;
    QLabel *label_6;
    QFrame *line_6;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_12;
    QTableWidget *tableContextsAll;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btnContextSetActive;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_11;
    QPushButton *btnContextsBroadcast;
    QTableWidget *tableContextsActive;
    QPushButton *btnContextsClear;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btnContextUnregisterSelected;
    QWidget *pageActions;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QFrame *line_7;
    QHBoxLayout *horizontalLayout_5;
    QWidget *commandEditorHolder;
    QGroupBox *groupBox_22;
    QGridLayout *gridLayout_14;
    QWidget *actionContainersHolder;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_15;
    QLabel *lblCommandType;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnAnalyzeAction;
    QTableWidget *tableSelectedActionOverview;
    QWidget *pageProjects;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_20;
    QGridLayout *gridLayout_33;
    QFormLayout *formLayout;
    QLabel *label_8;
    QLineEdit *txtProjectsCurrentFileName;
    QLabel *label_9;
    QListWidget *listProjectsCurrentItems;
    QLabel *label_12;
    QListWidget *listProjectsRecent;
    QLabel *label_14;
    QListWidget *listProjectsRegisteredItems;
    QToolButton *btnProjectsCurrentOpenPath;
    QToolButton *btnProjectsCurrentOpenFile;
    QSpacerItem *horizontalSpacer_11;
    QWidget *tabPluginManagement;
    QGridLayout *gridLayout_27;
    QToolBox *toolBoxPluginManagement;
    QWidget *pageCurrentState;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_24;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_10;
    QListWidget *listPluginsCoreCurrent;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_16;
    QListWidget *listPluginsActiveCurrent;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_17;
    QListWidget *listPluginsInactiveCurrent;
    QGroupBox *groupBox_15;
    QGridLayout *gridLayout_18;
    QListWidget *listPluginsFilteredCurrent;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_23;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QLineEdit *txtPluginsActiveSet;
    QToolButton *btnExplorePluginCurrentConfigSetPath;
    QToolButton *btnEditPluginCurrentConfigSet;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_16;
    QGridLayout *gridLayout_19;
    QListWidget *listPluginsCoreCurrentSet;
    QGroupBox *groupBox_17;
    QGridLayout *gridLayout_20;
    QListWidget *listPluginsActiveCurrentSet;
    QGroupBox *groupBox_18;
    QGridLayout *gridLayout_21;
    QListWidget *listPluginsInactiveCurrentSet;
    QGroupBox *groupBox_19;
    QGridLayout *gridLayout_22;
    QListWidget *listPluginsFilteredCurrentSet;
    QWidget *pageCreateCustomSets;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLineEdit *txtPluginsEditSet;
    QLabel *lblPluginInfoIcon;
    QLabel *lblPluginInfoMessage;
    QSpacerItem *horizontalSpacer_9;
    QToolButton *btnExplorePluginConfigSetPath;
    QToolButton *btnEditPluginConfigSet;
    QToolButton *btnOpenPluginConfigSet;
    QToolButton *btnSaveNewPluginConfigSet;
    QToolButton *btnSavePluginConfigSet;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_8;
    QListWidget *listPluginsCoreEditSet;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QToolButton *btnRemoveActivePlugin;
    QToolButton *btnAddActivePlugin;
    QWidget *listPluginsActiveHolder;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *btnRemoveInactivePlugin;
    QToolButton *btnAddInactivePlugin;
    QWidget *listPluginsInactiveHolder;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QToolButton *btnRemoveFilterExpression;
    QToolButton *btnAddFilterExpression;
    QSpacerItem *horizontalSpacer_2;
    QWidget *listPluginsFilteredHolder;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *DebugWidget)
    {
        if (DebugWidget->objectName().isEmpty())
            DebugWidget->setObjectName(QStringLiteral("DebugWidget"));
        DebugWidget->resize(1055, 575);
        centralwidget = new QWidget(DebugWidget);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(label_2);

        labelVersion = new QLabel(centralwidget);
        labelVersion->setObjectName(QStringLiteral("labelVersion"));
        QFont font1;
        font1.setPointSize(10);
        labelVersion->setFont(font1);
        labelVersion->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(labelVersion);


        gridLayout_6->addLayout(horizontalLayout, 0, 0, 1, 2);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);
        label->setWordWrap(true);

        gridLayout_6->addWidget(label, 1, 0, 1, 1);

        btnRefreshViews = new QToolButton(centralwidget);
        btnRefreshViews->setObjectName(QStringLiteral("btnRefreshViews"));
        btnRefreshViews->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_6->addWidget(btnRefreshViews, 1, 1, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 2, 0, 1, 2);

        tabWidgetDebug = new QTabWidget(centralwidget);
        tabWidgetDebug->setObjectName(QStringLiteral("tabWidgetDebug"));
        tabObjectPool = new QWidget();
        tabObjectPool->setObjectName(QStringLiteral("tabObjectPool"));
        verticalLayout_4 = new QVBoxLayout(tabObjectPool);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        splitter = new QSplitter(tabObjectPool);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        widgetObjectPoolHolder = new QWidget(splitter);
        widgetObjectPoolHolder->setObjectName(QStringLiteral("widgetObjectPoolHolder"));
        splitter->addWidget(widgetObjectPoolHolder);
        widgetObjectInfo = new QWidget(splitter);
        widgetObjectInfo->setObjectName(QStringLiteral("widgetObjectInfo"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetObjectInfo->sizePolicy().hasHeightForWidth());
        widgetObjectInfo->setSizePolicy(sizePolicy);
        widgetObjectInfo->setMinimumSize(QSize(400, 0));
        widgetObjectInfo->setMaximumSize(QSize(400, 16777215));
        verticalLayout_3 = new QVBoxLayout(widgetObjectInfo);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        groupBoxPropertyBrowser = new QGroupBox(widgetObjectInfo);
        groupBoxPropertyBrowser->setObjectName(QStringLiteral("groupBoxPropertyBrowser"));
        gridLayout_30 = new QGridLayout(groupBoxPropertyBrowser);
        gridLayout_30->setObjectName(QStringLiteral("gridLayout_30"));
        tabWidget = new QTabWidget(groupBoxPropertyBrowser);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabObjectProperties = new QWidget();
        tabObjectProperties->setObjectName(QStringLiteral("tabObjectProperties"));
        gridLayout_31 = new QGridLayout(tabObjectProperties);
        gridLayout_31->setObjectName(QStringLiteral("gridLayout_31"));
        objectPropertyBrowserHolder = new QWidget(tabObjectProperties);
        objectPropertyBrowserHolder->setObjectName(QStringLiteral("objectPropertyBrowserHolder"));

        gridLayout_31->addWidget(objectPropertyBrowserHolder, 0, 0, 1, 1);

        tabWidget->addTab(tabObjectProperties, QString());
        tabDynamicObjectProperties = new QWidget();
        tabDynamicObjectProperties->setObjectName(QStringLiteral("tabDynamicObjectProperties"));
        gridLayout_32 = new QGridLayout(tabDynamicObjectProperties);
        gridLayout_32->setObjectName(QStringLiteral("gridLayout_32"));
        objectDynamicPropertyBrowserHolder = new QWidget(tabDynamicObjectProperties);
        objectDynamicPropertyBrowserHolder->setObjectName(QStringLiteral("objectDynamicPropertyBrowserHolder"));

        gridLayout_32->addWidget(objectDynamicPropertyBrowserHolder, 0, 0, 1, 1);

        tabWidget->addTab(tabDynamicObjectProperties, QString());

        gridLayout_30->addWidget(tabWidget, 1, 0, 1, 1);

        chkRefreshProperties = new QCheckBox(groupBoxPropertyBrowser);
        chkRefreshProperties->setObjectName(QStringLiteral("chkRefreshProperties"));
        chkRefreshProperties->setChecked(true);

        gridLayout_30->addWidget(chkRefreshProperties, 2, 0, 1, 1);


        verticalLayout_3->addWidget(groupBoxPropertyBrowser);

        groupBoxInheritanceList = new QGroupBox(widgetObjectInfo);
        groupBoxInheritanceList->setObjectName(QStringLiteral("groupBoxInheritanceList"));
        gridLayout_28 = new QGridLayout(groupBoxInheritanceList);
        gridLayout_28->setObjectName(QStringLiteral("gridLayout_28"));
        objectInheritanceList = new QListView(groupBoxInheritanceList);
        objectInheritanceList->setObjectName(QStringLiteral("objectInheritanceList"));
        objectInheritanceList->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_28->addWidget(objectInheritanceList, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBoxInheritanceList);

        groupBox_9 = new QGroupBox(widgetObjectInfo);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        gridLayout_26 = new QGridLayout(groupBox_9);
        gridLayout_26->setObjectName(QStringLiteral("gridLayout_26"));
        widgetObjectScopeHolder = new QWidget(groupBox_9);
        widgetObjectScopeHolder->setObjectName(QStringLiteral("widgetObjectScopeHolder"));

        gridLayout_26->addWidget(widgetObjectScopeHolder, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_9);

        groupBox_21 = new QGroupBox(widgetObjectInfo);
        groupBox_21->setObjectName(QStringLiteral("groupBox_21"));
        gridLayout_25 = new QGridLayout(groupBox_21);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        lblConanLabel = new QLabel(groupBox_21);
        lblConanLabel->setObjectName(QStringLiteral("lblConanLabel"));
        lblConanLabel->setAlignment(Qt::AlignCenter);
        lblConanLabel->setWordWrap(true);
        lblConanLabel->setOpenExternalLinks(true);

        gridLayout_25->addWidget(lblConanLabel, 0, 0, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_25->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        btnAnalyzeCurrentObject = new QPushButton(groupBox_21);
        btnAnalyzeCurrentObject->setObjectName(QStringLiteral("btnAnalyzeCurrentObject"));

        gridLayout_25->addWidget(btnAnalyzeCurrentObject, 1, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_25->addItem(horizontalSpacer_10, 1, 2, 1, 1);

        lblConanExcluded = new QLabel(groupBox_21);
        lblConanExcluded->setObjectName(QStringLiteral("lblConanExcluded"));
        lblConanExcluded->setAlignment(Qt::AlignCenter);

        gridLayout_25->addWidget(lblConanExcluded, 2, 0, 1, 3);


        verticalLayout_3->addWidget(groupBox_21);

        splitter->addWidget(widgetObjectInfo);

        verticalLayout_4->addWidget(splitter);

        tabWidgetDebug->addTab(tabObjectPool, QString());
        tabApplicationState = new QWidget();
        tabApplicationState->setObjectName(QStringLiteral("tabApplicationState"));
        gridLayout_4 = new QGridLayout(tabApplicationState);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        toolBox = new QToolBox(tabApplicationState);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        pageFactories = new QWidget();
        pageFactories->setObjectName(QStringLiteral("pageFactories"));
        pageFactories->setGeometry(QRect(0, 0, 160, 280));
        gridLayout = new QGridLayout(pageFactories);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        label_4 = new QLabel(pageFactories);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 0, 0, 1, 2);

        line_3 = new QFrame(pageFactories);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        listFactories = new QListWidget(pageFactories);
        listFactories->setObjectName(QStringLiteral("listFactories"));

        horizontalLayout_2->addWidget(listFactories);

        listFactoryItemIDs = new QListWidget(pageFactories);
        listFactoryItemIDs->setObjectName(QStringLiteral("listFactoryItemIDs"));

        horizontalLayout_2->addWidget(listFactoryItemIDs);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        toolBox->addItem(pageFactories, QStringLiteral("Factories"));
        pageTaskActivity = new QWidget();
        pageTaskActivity->setObjectName(QStringLiteral("pageTaskActivity"));
        pageTaskActivity->setGeometry(QRect(0, 0, 306, 38));
        verticalLayout_7 = new QVBoxLayout(pageTaskActivity);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(pageTaskActivity);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_7->addWidget(label_5);

        line_2 = new QFrame(pageTaskActivity);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_2);

        widgetTasksSummaryHolder = new QWidget(pageTaskActivity);
        widgetTasksSummaryHolder->setObjectName(QStringLiteral("widgetTasksSummaryHolder"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetTasksSummaryHolder->sizePolicy().hasHeightForWidth());
        widgetTasksSummaryHolder->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(widgetTasksSummaryHolder);

        toolBox->addItem(pageTaskActivity, QStringLiteral("Task Activity History"));
        pageModes = new QWidget();
        pageModes->setObjectName(QStringLiteral("pageModes"));
        pageModes->setGeometry(QRect(0, 0, 83, 304));
        gridLayout_5 = new QGridLayout(pageModes);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(3, 3, 3, 3);
        label_11 = new QLabel(pageModes);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setWordWrap(true);

        gridLayout_5->addWidget(label_11, 0, 0, 1, 2);

        line_4 = new QFrame(pageModes);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_4, 1, 0, 1, 2);

        tableModes = new QTableWidget(pageModes);
        if (tableModes->columnCount() < 5)
            tableModes->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableModes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableModes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableModes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableModes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableModes->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableModes->setObjectName(QStringLiteral("tableModes"));

        gridLayout_5->addWidget(tableModes, 2, 0, 1, 2);

        toolBox->addItem(pageModes, QStringLiteral("Application Modes"));
        pageContexts = new QWidget();
        pageContexts->setObjectName(QStringLiteral("pageContexts"));
        pageContexts->setGeometry(QRect(0, 0, 1013, 286));
        gridLayout_29 = new QGridLayout(pageContexts);
        gridLayout_29->setObjectName(QStringLiteral("gridLayout_29"));
        gridLayout_29->setContentsMargins(3, 3, 3, 3);
        widgetContextsHolder = new QWidget(pageContexts);
        widgetContextsHolder->setObjectName(QStringLiteral("widgetContextsHolder"));

        gridLayout_29->addWidget(widgetContextsHolder, 0, 0, 1, 1);

        widgetContextsContents = new QWidget(pageContexts);
        widgetContextsContents->setObjectName(QStringLiteral("widgetContextsContents"));
        gridLayout_13 = new QGridLayout(widgetContextsContents);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        label_6 = new QLabel(widgetContextsContents);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_13->addWidget(label_6, 0, 0, 1, 1);

        line_6 = new QFrame(widgetContextsContents);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_13->addWidget(line_6, 1, 0, 1, 2);

        groupBox_5 = new QGroupBox(widgetContextsContents);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_12 = new QGridLayout(groupBox_5);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        tableContextsAll = new QTableWidget(groupBox_5);
        if (tableContextsAll->columnCount() < 2)
            tableContextsAll->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableContextsAll->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableContextsAll->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        tableContextsAll->setObjectName(QStringLiteral("tableContextsAll"));

        gridLayout_12->addWidget(tableContextsAll, 0, 0, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(261, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        btnContextSetActive = new QPushButton(groupBox_5);
        btnContextSetActive->setObjectName(QStringLiteral("btnContextSetActive"));

        gridLayout_12->addWidget(btnContextSetActive, 1, 1, 1, 1);


        gridLayout_13->addWidget(groupBox_5, 2, 0, 1, 1);

        groupBox_6 = new QGroupBox(widgetContextsContents);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_11 = new QGridLayout(groupBox_6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        btnContextsBroadcast = new QPushButton(groupBox_6);
        btnContextsBroadcast->setObjectName(QStringLiteral("btnContextsBroadcast"));

        gridLayout_11->addWidget(btnContextsBroadcast, 1, 4, 1, 1);

        tableContextsActive = new QTableWidget(groupBox_6);
        if (tableContextsActive->columnCount() < 2)
            tableContextsActive->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableContextsActive->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableContextsActive->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        tableContextsActive->setObjectName(QStringLiteral("tableContextsActive"));

        gridLayout_11->addWidget(tableContextsActive, 0, 0, 1, 5);

        btnContextsClear = new QPushButton(groupBox_6);
        btnContextsClear->setObjectName(QStringLiteral("btnContextsClear"));

        gridLayout_11->addWidget(btnContextsClear, 1, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(195, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_7, 1, 1, 1, 1);

        btnContextUnregisterSelected = new QPushButton(groupBox_6);
        btnContextUnregisterSelected->setObjectName(QStringLiteral("btnContextUnregisterSelected"));

        gridLayout_11->addWidget(btnContextUnregisterSelected, 1, 3, 1, 1);


        gridLayout_13->addWidget(groupBox_6, 2, 1, 1, 1);


        gridLayout_29->addWidget(widgetContextsContents, 1, 0, 1, 1);

        toolBox->addItem(pageContexts, QStringLiteral("Contexts"));
        pageActions = new QWidget();
        pageActions->setObjectName(QStringLiteral("pageActions"));
        pageActions->setGeometry(QRect(0, 0, 356, 230));
        verticalLayout_6 = new QVBoxLayout(pageActions);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 9, -1, 9);
        label_7 = new QLabel(pageActions);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_6->addWidget(label_7);

        line_7 = new QFrame(pageActions);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        commandEditorHolder = new QWidget(pageActions);
        commandEditorHolder->setObjectName(QStringLiteral("commandEditorHolder"));

        horizontalLayout_5->addWidget(commandEditorHolder);

        groupBox_22 = new QGroupBox(pageActions);
        groupBox_22->setObjectName(QStringLiteral("groupBox_22"));
        gridLayout_14 = new QGridLayout(groupBox_22);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        actionContainersHolder = new QWidget(groupBox_22);
        actionContainersHolder->setObjectName(QStringLiteral("actionContainersHolder"));

        gridLayout_14->addWidget(actionContainersHolder, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox_22);


        verticalLayout_6->addLayout(horizontalLayout_5);

        groupBox_7 = new QGroupBox(pageActions);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_15 = new QGridLayout(groupBox_7);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        lblCommandType = new QLabel(groupBox_7);
        lblCommandType->setObjectName(QStringLiteral("lblCommandType"));

        gridLayout_15->addWidget(lblCommandType, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(717, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        btnAnalyzeAction = new QPushButton(groupBox_7);
        btnAnalyzeAction->setObjectName(QStringLiteral("btnAnalyzeAction"));

        gridLayout_15->addWidget(btnAnalyzeAction, 0, 2, 1, 1);

        tableSelectedActionOverview = new QTableWidget(groupBox_7);
        if (tableSelectedActionOverview->columnCount() < 8)
            tableSelectedActionOverview->setColumnCount(8);
        tableSelectedActionOverview->setObjectName(QStringLiteral("tableSelectedActionOverview"));
        tableSelectedActionOverview->setEnabled(false);
        tableSelectedActionOverview->setColumnCount(8);

        gridLayout_15->addWidget(tableSelectedActionOverview, 1, 0, 1, 3);


        verticalLayout_6->addWidget(groupBox_7);

        toolBox->addItem(pageActions, QStringLiteral("Action Management"));
        pageProjects = new QWidget();
        pageProjects->setObjectName(QStringLiteral("pageProjects"));
        pageProjects->setGeometry(QRect(0, 0, 381, 310));
        verticalLayout_5 = new QVBoxLayout(pageProjects);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox_20 = new QGroupBox(pageProjects);
        groupBox_20->setObjectName(QStringLiteral("groupBox_20"));
        gridLayout_33 = new QGridLayout(groupBox_20);
        gridLayout_33->setObjectName(QStringLiteral("gridLayout_33"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_8 = new QLabel(groupBox_20);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_8);

        txtProjectsCurrentFileName = new QLineEdit(groupBox_20);
        txtProjectsCurrentFileName->setObjectName(QStringLiteral("txtProjectsCurrentFileName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtProjectsCurrentFileName);

        label_9 = new QLabel(groupBox_20);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_9);

        listProjectsCurrentItems = new QListWidget(groupBox_20);
        listProjectsCurrentItems->setObjectName(QStringLiteral("listProjectsCurrentItems"));

        formLayout->setWidget(1, QFormLayout::FieldRole, listProjectsCurrentItems);

        label_12 = new QLabel(groupBox_20);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_12);

        listProjectsRecent = new QListWidget(groupBox_20);
        listProjectsRecent->setObjectName(QStringLiteral("listProjectsRecent"));

        formLayout->setWidget(2, QFormLayout::FieldRole, listProjectsRecent);

        label_14 = new QLabel(groupBox_20);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_14);

        listProjectsRegisteredItems = new QListWidget(groupBox_20);
        listProjectsRegisteredItems->setObjectName(QStringLiteral("listProjectsRegisteredItems"));

        formLayout->setWidget(3, QFormLayout::FieldRole, listProjectsRegisteredItems);


        gridLayout_33->addLayout(formLayout, 0, 0, 2, 1);

        btnProjectsCurrentOpenPath = new QToolButton(groupBox_20);
        btnProjectsCurrentOpenPath->setObjectName(QStringLiteral("btnProjectsCurrentOpenPath"));

        gridLayout_33->addWidget(btnProjectsCurrentOpenPath, 0, 1, 1, 1);

        btnProjectsCurrentOpenFile = new QToolButton(groupBox_20);
        btnProjectsCurrentOpenFile->setObjectName(QStringLiteral("btnProjectsCurrentOpenFile"));

        gridLayout_33->addWidget(btnProjectsCurrentOpenFile, 0, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(125, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_33->addItem(horizontalSpacer_11, 1, 1, 1, 2);


        verticalLayout_5->addWidget(groupBox_20);

        toolBox->addItem(pageProjects, QStringLiteral("Project Management"));

        gridLayout_4->addWidget(toolBox, 0, 1, 1, 1);

        tabWidgetDebug->addTab(tabApplicationState, QString());
        tabPluginManagement = new QWidget();
        tabPluginManagement->setObjectName(QStringLiteral("tabPluginManagement"));
        gridLayout_27 = new QGridLayout(tabPluginManagement);
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        toolBoxPluginManagement = new QToolBox(tabPluginManagement);
        toolBoxPluginManagement->setObjectName(QStringLiteral("toolBoxPluginManagement"));
        pageCurrentState = new QWidget();
        pageCurrentState->setObjectName(QStringLiteral("pageCurrentState"));
        pageCurrentState->setGeometry(QRect(0, 0, 1013, 394));
        verticalLayout = new QVBoxLayout(pageCurrentState);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_11 = new QGroupBox(pageCurrentState);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        gridLayout_24 = new QGridLayout(groupBox_11);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        groupBox_8 = new QGroupBox(groupBox_11);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setEnabled(true);
        gridLayout_10 = new QGridLayout(groupBox_8);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        listPluginsCoreCurrent = new QListWidget(groupBox_8);
        listPluginsCoreCurrent->setObjectName(QStringLiteral("listPluginsCoreCurrent"));

        gridLayout_10->addWidget(listPluginsCoreCurrent, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox_8);

        groupBox_13 = new QGroupBox(groupBox_11);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setEnabled(true);
        gridLayout_16 = new QGridLayout(groupBox_13);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        listPluginsActiveCurrent = new QListWidget(groupBox_13);
        listPluginsActiveCurrent->setObjectName(QStringLiteral("listPluginsActiveCurrent"));

        gridLayout_16->addWidget(listPluginsActiveCurrent, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox_13);

        groupBox_14 = new QGroupBox(groupBox_11);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        groupBox_14->setEnabled(true);
        gridLayout_17 = new QGridLayout(groupBox_14);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        listPluginsInactiveCurrent = new QListWidget(groupBox_14);
        listPluginsInactiveCurrent->setObjectName(QStringLiteral("listPluginsInactiveCurrent"));

        gridLayout_17->addWidget(listPluginsInactiveCurrent, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox_14);

        groupBox_15 = new QGroupBox(groupBox_11);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        groupBox_15->setEnabled(true);
        gridLayout_18 = new QGridLayout(groupBox_15);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        listPluginsFilteredCurrent = new QListWidget(groupBox_15);
        listPluginsFilteredCurrent->setObjectName(QStringLiteral("listPluginsFilteredCurrent"));

        gridLayout_18->addWidget(listPluginsFilteredCurrent, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox_15);


        gridLayout_24->addLayout(horizontalLayout_6, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_11);

        groupBox_12 = new QGroupBox(pageCurrentState);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        gridLayout_23 = new QGridLayout(groupBox_12);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_13 = new QLabel(groupBox_12);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_9->addWidget(label_13);

        txtPluginsActiveSet = new QLineEdit(groupBox_12);
        txtPluginsActiveSet->setObjectName(QStringLiteral("txtPluginsActiveSet"));
        txtPluginsActiveSet->setEnabled(true);

        horizontalLayout_9->addWidget(txtPluginsActiveSet);


        gridLayout_23->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        btnExplorePluginCurrentConfigSetPath = new QToolButton(groupBox_12);
        btnExplorePluginCurrentConfigSetPath->setObjectName(QStringLiteral("btnExplorePluginCurrentConfigSetPath"));
        btnExplorePluginCurrentConfigSetPath->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_23->addWidget(btnExplorePluginCurrentConfigSetPath, 0, 1, 1, 1);

        btnEditPluginCurrentConfigSet = new QToolButton(groupBox_12);
        btnEditPluginCurrentConfigSet->setObjectName(QStringLiteral("btnEditPluginCurrentConfigSet"));
        btnEditPluginCurrentConfigSet->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_23->addWidget(btnEditPluginCurrentConfigSet, 0, 2, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        groupBox_16 = new QGroupBox(groupBox_12);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        groupBox_16->setEnabled(true);
        gridLayout_19 = new QGridLayout(groupBox_16);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        listPluginsCoreCurrentSet = new QListWidget(groupBox_16);
        listPluginsCoreCurrentSet->setObjectName(QStringLiteral("listPluginsCoreCurrentSet"));

        gridLayout_19->addWidget(listPluginsCoreCurrentSet, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(groupBox_16);

        groupBox_17 = new QGroupBox(groupBox_12);
        groupBox_17->setObjectName(QStringLiteral("groupBox_17"));
        groupBox_17->setEnabled(true);
        gridLayout_20 = new QGridLayout(groupBox_17);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        listPluginsActiveCurrentSet = new QListWidget(groupBox_17);
        listPluginsActiveCurrentSet->setObjectName(QStringLiteral("listPluginsActiveCurrentSet"));

        gridLayout_20->addWidget(listPluginsActiveCurrentSet, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(groupBox_17);

        groupBox_18 = new QGroupBox(groupBox_12);
        groupBox_18->setObjectName(QStringLiteral("groupBox_18"));
        groupBox_18->setEnabled(true);
        gridLayout_21 = new QGridLayout(groupBox_18);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        listPluginsInactiveCurrentSet = new QListWidget(groupBox_18);
        listPluginsInactiveCurrentSet->setObjectName(QStringLiteral("listPluginsInactiveCurrentSet"));

        gridLayout_21->addWidget(listPluginsInactiveCurrentSet, 0, 1, 1, 1);


        horizontalLayout_7->addWidget(groupBox_18);

        groupBox_19 = new QGroupBox(groupBox_12);
        groupBox_19->setObjectName(QStringLiteral("groupBox_19"));
        groupBox_19->setEnabled(true);
        gridLayout_22 = new QGridLayout(groupBox_19);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        listPluginsFilteredCurrentSet = new QListWidget(groupBox_19);
        listPluginsFilteredCurrentSet->setObjectName(QStringLiteral("listPluginsFilteredCurrentSet"));

        gridLayout_22->addWidget(listPluginsFilteredCurrentSet, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(groupBox_19);


        gridLayout_23->addLayout(horizontalLayout_7, 1, 0, 1, 3);


        verticalLayout->addWidget(groupBox_12);

        toolBoxPluginManagement->addItem(pageCurrentState, QStringLiteral("Current State:"));
        pageCreateCustomSets = new QWidget();
        pageCreateCustomSets->setObjectName(QStringLiteral("pageCreateCustomSets"));
        pageCreateCustomSets->setGeometry(QRect(0, 0, 451, 267));
        verticalLayout_2 = new QVBoxLayout(pageCreateCustomSets);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_10 = new QGroupBox(pageCreateCustomSets);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        gridLayout_9 = new QGridLayout(groupBox_10);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_10 = new QLabel(groupBox_10);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(label_10);

        txtPluginsEditSet = new QLineEdit(groupBox_10);
        txtPluginsEditSet->setObjectName(QStringLiteral("txtPluginsEditSet"));
        txtPluginsEditSet->setEnabled(true);

        horizontalLayout_4->addWidget(txtPluginsEditSet);


        gridLayout_9->addLayout(horizontalLayout_4, 0, 0, 1, 8);

        lblPluginInfoIcon = new QLabel(groupBox_10);
        lblPluginInfoIcon->setObjectName(QStringLiteral("lblPluginInfoIcon"));

        gridLayout_9->addWidget(lblPluginInfoIcon, 1, 0, 1, 1);

        lblPluginInfoMessage = new QLabel(groupBox_10);
        lblPluginInfoMessage->setObjectName(QStringLiteral("lblPluginInfoMessage"));
        lblPluginInfoMessage->setWordWrap(false);

        gridLayout_9->addWidget(lblPluginInfoMessage, 1, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(208, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_9, 1, 2, 1, 1);

        btnExplorePluginConfigSetPath = new QToolButton(groupBox_10);
        btnExplorePluginConfigSetPath->setObjectName(QStringLiteral("btnExplorePluginConfigSetPath"));
        btnExplorePluginConfigSetPath->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_9->addWidget(btnExplorePluginConfigSetPath, 1, 3, 1, 1);

        btnEditPluginConfigSet = new QToolButton(groupBox_10);
        btnEditPluginConfigSet->setObjectName(QStringLiteral("btnEditPluginConfigSet"));
        btnEditPluginConfigSet->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_9->addWidget(btnEditPluginConfigSet, 1, 4, 1, 1);

        btnOpenPluginConfigSet = new QToolButton(groupBox_10);
        btnOpenPluginConfigSet->setObjectName(QStringLiteral("btnOpenPluginConfigSet"));
        btnOpenPluginConfigSet->setEnabled(true);

        gridLayout_9->addWidget(btnOpenPluginConfigSet, 1, 5, 1, 1);

        btnSaveNewPluginConfigSet = new QToolButton(groupBox_10);
        btnSaveNewPluginConfigSet->setObjectName(QStringLiteral("btnSaveNewPluginConfigSet"));
        btnSaveNewPluginConfigSet->setEnabled(true);
        btnSaveNewPluginConfigSet->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_9->addWidget(btnSaveNewPluginConfigSet, 1, 6, 1, 1);

        btnSavePluginConfigSet = new QToolButton(groupBox_10);
        btnSavePluginConfigSet->setObjectName(QStringLiteral("btnSavePluginConfigSet"));
        btnSavePluginConfigSet->setEnabled(true);

        gridLayout_9->addWidget(btnSavePluginConfigSet, 1, 7, 1, 1);

        line_5 = new QFrame(groupBox_10);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line_5, 2, 0, 1, 8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_4 = new QGroupBox(groupBox_10);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setEnabled(true);
        gridLayout_8 = new QGridLayout(groupBox_4);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        listPluginsCoreEditSet = new QListWidget(groupBox_4);
        listPluginsCoreEditSet->setObjectName(QStringLiteral("listPluginsCoreEditSet"));

        gridLayout_8->addWidget(listPluginsCoreEditSet, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_4);

        groupBox = new QGroupBox(groupBox_10);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(166, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        btnRemoveActivePlugin = new QToolButton(groupBox);
        btnRemoveActivePlugin->setObjectName(QStringLiteral("btnRemoveActivePlugin"));
        btnRemoveActivePlugin->setAutoRaise(true);

        gridLayout_7->addWidget(btnRemoveActivePlugin, 1, 1, 1, 1);

        btnAddActivePlugin = new QToolButton(groupBox);
        btnAddActivePlugin->setObjectName(QStringLiteral("btnAddActivePlugin"));
        btnAddActivePlugin->setAutoRaise(true);

        gridLayout_7->addWidget(btnAddActivePlugin, 1, 2, 1, 1);

        listPluginsActiveHolder = new QWidget(groupBox);
        listPluginsActiveHolder->setObjectName(QStringLiteral("listPluginsActiveHolder"));

        gridLayout_7->addWidget(listPluginsActiveHolder, 0, 0, 1, 3);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(groupBox_10);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(true);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(167, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        btnRemoveInactivePlugin = new QToolButton(groupBox_2);
        btnRemoveInactivePlugin->setObjectName(QStringLiteral("btnRemoveInactivePlugin"));
        btnRemoveInactivePlugin->setAutoRaise(true);

        gridLayout_3->addWidget(btnRemoveInactivePlugin, 1, 1, 1, 1);

        btnAddInactivePlugin = new QToolButton(groupBox_2);
        btnAddInactivePlugin->setObjectName(QStringLiteral("btnAddInactivePlugin"));
        btnAddInactivePlugin->setAutoRaise(true);

        gridLayout_3->addWidget(btnAddInactivePlugin, 1, 2, 1, 1);

        listPluginsInactiveHolder = new QWidget(groupBox_2);
        listPluginsInactiveHolder->setObjectName(QStringLiteral("listPluginsInactiveHolder"));

        gridLayout_3->addWidget(listPluginsInactiveHolder, 0, 0, 1, 3);


        horizontalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox_10);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setEnabled(true);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        btnRemoveFilterExpression = new QToolButton(groupBox_3);
        btnRemoveFilterExpression->setObjectName(QStringLiteral("btnRemoveFilterExpression"));
        btnRemoveFilterExpression->setAutoRaise(true);

        gridLayout_2->addWidget(btnRemoveFilterExpression, 1, 1, 1, 1);

        btnAddFilterExpression = new QToolButton(groupBox_3);
        btnAddFilterExpression->setObjectName(QStringLiteral("btnAddFilterExpression"));
        btnAddFilterExpression->setAutoRaise(true);

        gridLayout_2->addWidget(btnAddFilterExpression, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(172, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        listPluginsFilteredHolder = new QWidget(groupBox_3);
        listPluginsFilteredHolder->setObjectName(QStringLiteral("listPluginsFilteredHolder"));

        gridLayout_2->addWidget(listPluginsFilteredHolder, 0, 0, 1, 3);


        horizontalLayout_3->addWidget(groupBox_3);


        gridLayout_9->addLayout(horizontalLayout_3, 3, 0, 1, 8);


        verticalLayout_2->addWidget(groupBox_10);

        textEdit = new QTextEdit(pageCreateCustomSets);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(16777215, 150));
        textEdit->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit);

        toolBoxPluginManagement->addItem(pageCreateCustomSets, QStringLiteral("Create Custom Configuration Sets:"));

        gridLayout_27->addWidget(toolBoxPluginManagement, 0, 0, 2, 1);

        tabWidgetDebug->addTab(tabPluginManagement, QString());

        gridLayout_6->addWidget(tabWidgetDebug, 3, 0, 1, 2);

        DebugWidget->setCentralWidget(centralwidget);

        retranslateUi(DebugWidget);
        QObject::connect(chkRefreshProperties, SIGNAL(toggled(bool)), objectPropertyBrowserHolder, SLOT(setEnabled(bool)));
        QObject::connect(chkRefreshProperties, SIGNAL(toggled(bool)), objectDynamicPropertyBrowserHolder, SLOT(setEnabled(bool)));

        tabWidgetDebug->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(3);
        toolBoxPluginManagement->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DebugWidget);
    } // setupUi

    void retranslateUi(QMainWindow *DebugWidget)
    {
        DebugWidget->setWindowTitle(QApplication::translate("DebugWidget", "MainWindow", Q_NULLPTR));
        label_3->setText(QApplication::translate("DebugWidget", "Qtilities Debug Mode:", Q_NULLPTR));
        label_2->setText(QApplication::translate("DebugWidget", "Qtilities Version: ", Q_NULLPTR));
        labelVersion->setText(QApplication::translate("DebugWidget", "XXX", Q_NULLPTR));
        label->setText(QApplication::translate("DebugWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The debug plugin helps with debugging of Qtilities applications. To do a manual refresh of the information below, click the refresh button on the right.</p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnRefreshViews->setToolTip(QApplication::translate("DebugWidget", "Refresh Views", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRefreshViews->setText(QString());
        groupBoxPropertyBrowser->setTitle(QApplication::translate("DebugWidget", "Object Properties", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabObjectProperties), QApplication::translate("DebugWidget", "Static Properties", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabDynamicObjectProperties), QApplication::translate("DebugWidget", "Dynamic Properties", Q_NULLPTR));
        chkRefreshProperties->setText(QApplication::translate("DebugWidget", "Refresh properties when selected object changes.", Q_NULLPTR));
        groupBoxInheritanceList->setTitle(QApplication::translate("DebugWidget", "Inheritance", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("DebugWidget", "Scope Overview", Q_NULLPTR));
        groupBox_21->setTitle(QApplication::translate("DebugWidget", "Signal and Slot Analysis", Q_NULLPTR));
        lblConanLabel->setText(QApplication::translate("DebugWidget", "Conan Label", Q_NULLPTR));
        btnAnalyzeCurrentObject->setText(QApplication::translate("DebugWidget", "Analyze Selected Object", Q_NULLPTR));
        lblConanExcluded->setText(QApplication::translate("DebugWidget", "TextLabel", Q_NULLPTR));
        tabWidgetDebug->setTabText(tabWidgetDebug->indexOf(tabObjectPool), QApplication::translate("DebugWidget", "Global Object Pool", Q_NULLPTR));
        label_4->setText(QApplication::translate("DebugWidget", "This page provides an overview of all the factories registered in the object manager as well as the registered tags in each factory. ", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(pageFactories), QApplication::translate("DebugWidget", "Factories", Q_NULLPTR));
        label_5->setText(QApplication::translate("DebugWidget", "This page provides an overview of the tasks in your application:", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(pageTaskActivity), QApplication::translate("DebugWidget", "Task Activity History", Q_NULLPTR));
        label_11->setText(QApplication::translate("DebugWidget", "This page provides an overview of all the modes registered in your application.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableModes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DebugWidget", "Mode Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableModes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DebugWidget", "Mode ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableModes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DebugWidget", "Mode Shortcut", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableModes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DebugWidget", "Context String", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableModes->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DebugWidget", "Help ID", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(pageModes), QApplication::translate("DebugWidget", "Application Modes", Q_NULLPTR));
        label_6->setText(QApplication::translate("DebugWidget", "This page provides an overview of the context manager's current state:", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("DebugWidget", "All Registered Contexts:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableContextsAll->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("DebugWidget", "Context ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableContextsAll->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("DebugWidget", "Context Name", Q_NULLPTR));
        btnContextSetActive->setText(QApplication::translate("DebugWidget", "Set Selected Active", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("DebugWidget", "Active Contexts:", Q_NULLPTR));
        btnContextsBroadcast->setText(QApplication::translate("DebugWidget", "Broadcast State", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableContextsActive->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("DebugWidget", "Context ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableContextsActive->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("DebugWidget", "Context Name", Q_NULLPTR));
        btnContextsClear->setText(QApplication::translate("DebugWidget", "Clear", Q_NULLPTR));
        btnContextUnregisterSelected->setText(QApplication::translate("DebugWidget", "Unregister Selected", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(pageContexts), QApplication::translate("DebugWidget", "Contexts", Q_NULLPTR));
        label_7->setText(QApplication::translate("DebugWidget", "This page provides an overview of the action manager's current state:", Q_NULLPTR));
        groupBox_22->setTitle(QApplication::translate("DebugWidget", "Action Containers:", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("DebugWidget", "Selected Command Overview:", Q_NULLPTR));
        lblCommandType->setText(QApplication::translate("DebugWidget", "Command Type: ", Q_NULLPTR));
        btnAnalyzeAction->setText(QApplication::translate("DebugWidget", "Analyze Signal and Slot Connections", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(pageActions), QApplication::translate("DebugWidget", "Action Management", Q_NULLPTR));
        groupBox_20->setTitle(QApplication::translate("DebugWidget", "Project Management State:", Q_NULLPTR));
        label_8->setText(QApplication::translate("DebugWidget", "Current Project Path:", Q_NULLPTR));
        label_9->setText(QApplication::translate("DebugWidget", "Current Project Items:", Q_NULLPTR));
        label_12->setText(QApplication::translate("DebugWidget", "Recent Projects:", Q_NULLPTR));
        label_14->setText(QApplication::translate("DebugWidget", "Registered Projects Items:", Q_NULLPTR));
        btnProjectsCurrentOpenPath->setText(QApplication::translate("DebugWidget", "Open Path", Q_NULLPTR));
        btnProjectsCurrentOpenFile->setText(QApplication::translate("DebugWidget", "Open File", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(pageProjects), QApplication::translate("DebugWidget", "Project Management", Q_NULLPTR));
        tabWidgetDebug->setTabText(tabWidgetDebug->indexOf(tabApplicationState), QApplication::translate("DebugWidget", "Application State", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("DebugWidget", "Current System State", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("DebugWidget", "Core Plugins", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("DebugWidget", "Active Plugins", Q_NULLPTR));
        groupBox_14->setTitle(QApplication::translate("DebugWidget", "In-Active Plugins", Q_NULLPTR));
        groupBox_15->setTitle(QApplication::translate("DebugWidget", "Filtered Plugins:", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("DebugWidget", "Current Configuration Set", Q_NULLPTR));
        label_13->setText(QApplication::translate("DebugWidget", "Active Configuration Set:", Q_NULLPTR));
        btnExplorePluginCurrentConfigSetPath->setText(QApplication::translate("DebugWidget", "Explore Path", Q_NULLPTR));
        btnEditPluginCurrentConfigSet->setText(QApplication::translate("DebugWidget", "Edit Config File", Q_NULLPTR));
        groupBox_16->setTitle(QApplication::translate("DebugWidget", "Core Plugins", Q_NULLPTR));
        groupBox_17->setTitle(QApplication::translate("DebugWidget", "Active Plugins", Q_NULLPTR));
        groupBox_18->setTitle(QApplication::translate("DebugWidget", "In-Active Plugins", Q_NULLPTR));
        groupBox_19->setTitle(QApplication::translate("DebugWidget", "Plugin Filter Expressions", Q_NULLPTR));
        toolBoxPluginManagement->setItemText(toolBoxPluginManagement->indexOf(pageCurrentState), QApplication::translate("DebugWidget", "Current State:", Q_NULLPTR));
        groupBox_10->setTitle(QString());
        label_10->setText(QApplication::translate("DebugWidget", "Configuration Set:", Q_NULLPTR));
        lblPluginInfoIcon->setText(QApplication::translate("DebugWidget", "...", Q_NULLPTR));
        lblPluginInfoMessage->setText(QApplication::translate("DebugWidget", "...", Q_NULLPTR));
        btnExplorePluginConfigSetPath->setText(QApplication::translate("DebugWidget", "Explore Path", Q_NULLPTR));
        btnEditPluginConfigSet->setText(QApplication::translate("DebugWidget", "Edit Config File", Q_NULLPTR));
        btnOpenPluginConfigSet->setText(QApplication::translate("DebugWidget", "Open", Q_NULLPTR));
        btnSaveNewPluginConfigSet->setText(QApplication::translate("DebugWidget", "Save As", Q_NULLPTR));
        btnSavePluginConfigSet->setText(QApplication::translate("DebugWidget", "Save", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("DebugWidget", "Core Plugins", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DebugWidget", "Active Plugins", Q_NULLPTR));
        btnRemoveActivePlugin->setText(QString());
        btnAddActivePlugin->setText(QString());
        groupBox_2->setTitle(QApplication::translate("DebugWidget", "In-Active Plugins", Q_NULLPTR));
        btnRemoveInactivePlugin->setText(QString());
        btnAddInactivePlugin->setText(QString());
        groupBox_3->setTitle(QApplication::translate("DebugWidget", "Plugin Filter Expressions", Q_NULLPTR));
        btnRemoveFilterExpression->setText(QString());
        btnAddFilterExpression->setText(QString());
        textEdit->setHtml(QApplication::translate("DebugWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Plugin Classification:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Core Plugins:</span><span style=\" font-size:8pt;\"> These</span><span style=\" font-size:8pt; color:#c0c0c0;\""
                        "> </span><span style=\" font-size:8pt;\">plugins</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">form</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">the</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">core</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">of</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">an</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">application.</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">Thus</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">they</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">must</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\""
                        ">always</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">be</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">treated</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">as</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">active</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">plugins</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">(thus</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">loaded</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">and</span><span style=\" font-size:8pt; color:#c0c0c0;\"> </span><span style=\" font-size:8pt;\">initialized). Note that core plugins does not form part of plugin configuration sets since they must be set in your application code b"
                        "efore plugins are loaded.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Active Plugins:  </span><span style=\" font-size:8pt;\">Active plugins are loaded and initialized. The list contains name of plugins which are currently loaded, with names as returned by the IPlugin::pluginName() implementation. Active plugins does not form part of .pconfig files since all plugins which does not fall under in-active plugins or filtered plugins will be loaded and initialized.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">In-Active Plugins:</span><span style=\" font-size:8pt;\"> In-Active plugins are loaded but not initialized. The list contains name of plugins to be filtered, as returned by the IPlugin::pluginName() implementation.</span></p>\n"
"<p s"
                        "tyle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Filtered Plugins:</span><span style=\" font-size:8pt;\"> Filtered plugins are plugins that are skipped during plugin loading. The list contains wildcard regular expressions (See </span><span style=\" font-size:8pt; color:#800080;\">QRegExp</span><span style=\" font-size:8pt; color:#000000;\">::</span><span style=\" font-size:8pt; color:#800080;\">Wildcard</span><span style=\" font-size:8pt;\">) compared to plugin file names. Thus if a plugin's file name matches the wildcard, it will not be loaded.</span></p></body></html>", Q_NULLPTR));
        toolBoxPluginManagement->setItemText(toolBoxPluginManagement->indexOf(pageCreateCustomSets), QApplication::translate("DebugWidget", "Create Custom Configuration Sets:", Q_NULLPTR));
        tabWidgetDebug->setTabText(tabWidgetDebug->indexOf(tabPluginManagement), QApplication::translate("DebugWidget", "Plugin Management", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DebugWidget: public Ui_DebugWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGWIDGET_H
