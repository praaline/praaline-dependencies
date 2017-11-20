/****************************************************************************
**
** Copyright (c) 2009-2013, Jaco Naudé
**
** This file is part of Qtilities.
**
** For licensing information, please see
** http://jpnaude.github.io/Qtilities/page_licensing.html
**
****************************************************************************/

#include "HelpMode.h"
#include "ContentWidgetFactory.h"
#include "IndexWidgetFactory.h"
#include "SearchWidgetFactory.h"
#include "HelpPluginConstants.h"
#include "Browser.h"

#include <QtilitiesCoreApplication>

#include <QtGui>
#include <QtHelp>

#include <QByteArray>
#include <QHelpContentItem>
#include <QHelpContentModel>
#include <QHelpContentWidget>
#include <QHelpEngine>
#include <QHelpIndexWidget>
#include <QHelpSearchEngine>
#include <QHelpSearchQueryWidget>
#include <QHelpSearchResultWidget>
#include <QNetworkAccessManager>
#include <QNetworkProxy>
#include <QPointer>
#include <QtDebug>
#include <QTimer>
#include <QUrl>
#include <QWebEnginePage>
#include <QWebEngineView>
#include <QWebEngineProfile>
#include <QWebEngineUrlSchemeHandler>
#include <QWebEngineUrlRequestJob>

#include <QtilitiesCoreGui>
using namespace QtilitiesCoreGui;
using namespace Qtilities::Plugins::Help::Constants;
using namespace Qtilities::Plugins::Help;

qti_private_QHelpUrlSchemeHandler::qti_private_QHelpUrlSchemeHandler(QHelpEngineCore* helpEngine, QObject *parent) :
    QWebEngineUrlSchemeHandler(parent),
    d_help_engine(helpEngine)
{
    Q_ASSERT(helpEngine);
}

void qti_private_QHelpUrlSchemeHandler::requestStarted(QWebEngineUrlRequestJob *request)
{
    if (d_help_engine) {
        QBuffer *buffer = new QBuffer;
        connect(request, SIGNAL(destroyed()), buffer, SLOT(deleteLater()));

        QByteArray rawData = d_help_engine->fileData(request->requestUrl());
        buffer->setData(rawData);

        request->reply("text/html", buffer);
    }
}

struct Qtilities::Plugins::Help::HelpModeData {
    HelpModeData() : initialized(false),
        side_viewer_dock(0),
        side_viewer_widget(0),
        actionShowDock(0),
        content_widget(0),
        index_widget(0),
        search_widget(0),
        browser(0) {}

    bool initialized;
    QDockWidget* side_viewer_dock;
    DynamicSideWidgetViewer* side_viewer_widget;
    QAction* actionShowDock;
    ContentWidgetFactory* content_widget;
    IndexWidgetFactory* index_widget;
    SearchWidgetFactory* search_widget;
    Browser* browser;
    QIcon mode_icon;
};

HelpMode::HelpMode(QWidget *parent) :
    QMainWindow(parent)
{
    d = new HelpModeData;
    setObjectName("Help Mode");
}

bool HelpMode::eventFilter(QObject *object, QEvent *event) {
    if (object == d->side_viewer_dock && event->type() == QEvent::Close) {
        d->actionShowDock->setChecked(false);
    }

    return false;
}

void HelpMode::initiallize() {
    // Create and dock the dynamic side widget viewer
    d->side_viewer_dock = new QDockWidget(tr("Help Widgets"));
    d->side_viewer_widget = new DynamicSideWidgetViewer(MODE_HELP_ID);
    connect(d->side_viewer_widget,SIGNAL(toggleVisibility(bool)),SLOT(toggleDock(bool)));
    d->side_viewer_dock->setWidget(d->side_viewer_widget);
    Qt::DockWidgetAreas allowed_areas = 0;
    allowed_areas |= Qt::LeftDockWidgetArea;
    allowed_areas |= Qt::RightDockWidgetArea;
    d->side_viewer_dock->setAllowedAreas(allowed_areas);
    addDockWidget(Qt::LeftDockWidgetArea,d->side_viewer_dock);
    d->side_viewer_dock->installEventFilter(this);

    // Set the default mode icon:
    d->mode_icon = QIcon(HELP_MODE_ICON_48x48);

    // Actions
    d->actionShowDock = new QAction(QIcon(),tr("Help Widgets"),this);
    d->actionShowDock->setCheckable(true);
    d->actionShowDock->setChecked(true);
    connect(d->side_viewer_widget,SIGNAL(toggleVisibility(bool)),d->actionShowDock,SLOT(setChecked(bool)));
    connect(d->actionShowDock,SIGNAL(triggered(bool)),SLOT(toggleDock(bool)));

    QList<int> context;
    context.push_front(CONTEXT_MANAGER->contextID(qti_def_CONTEXT_STANDARD));
    Command* command = ACTION_MANAGER->registerAction("HelpMode.DynamicDockWidget",d->actionShowDock,context);
    bool existed;
    ActionContainer* view_menu = ACTION_MANAGER->createMenu(qti_action_VIEW,existed);
    if (!existed) {
        ActionContainer* menu_bar = ACTION_MANAGER->createMenuBar(qti_action_MENUBAR_STANDARD,existed);
        menu_bar->addMenu(view_menu,qti_action_ABOUT);
        view_menu->addAction(command);
    } else
        view_menu->addAction(command);

    d->browser = new Browser(QUrl(),this);
    setCentralWidget(d->browser);

    // Set URL handling for Qt Help
    qti_private_QHelpUrlSchemeHandler* qthelpHandler = new qti_private_QHelpUrlSchemeHandler(HELP_MANAGER->helpEngine(), this);
    QWebEngineProfile::defaultProfile()->installUrlSchemeHandler("qthelp", qthelpHandler);

    // - Register Contents Widget Factory
    d->content_widget = new ContentWidgetFactory(HELP_MANAGER->helpEngine());
    d->content_widget->setObjectName("Help Plugin: Content Widget");
    d->content_widget->setObjectOriginID("Help Plugin");
    connect(d->content_widget,SIGNAL(newWidgetCreated(QWidget*)),SLOT(handleNewHelpWidget(QWidget*)));
    OBJECT_MANAGER->registerObject(d->content_widget,QtilitiesCategory("GUI::Side Viewer Widgets (ISideViewerWidget)","::"));

    // - Register Index Widget Factory
    d->index_widget = new IndexWidgetFactory(HELP_MANAGER->helpEngine());
    d->index_widget->setObjectName("Help Plugin: Index Widget");
    d->index_widget->setObjectOriginID("Help Plugin");
    connect(d->index_widget,SIGNAL(newWidgetCreated(QWidget*)),SLOT(handleNewHelpWidget(QWidget*)));
    OBJECT_MANAGER->registerObject(d->index_widget,QtilitiesCategory("GUI::Side Viewer Widgets (ISideViewerWidget)","::"));

    // - Register Search Widget Factory
    QHelpSearchEngine* helpSearchEngine = HELP_MANAGER->helpEngine()->searchEngine();
    d->search_widget = new SearchWidgetFactory(helpSearchEngine);
    d->search_widget->setObjectOriginID("Help Plugin");
    d->search_widget->setObjectName("Help Plugin: Search Engine Widget");
    connect(d->search_widget,SIGNAL(newWidgetCreated(QWidget*)),SLOT(handleNewHelpWidget(QWidget*)));
    OBJECT_MANAGER->registerObject(d->search_widget,QtilitiesCategory("GUI::Side Viewer Widgets (ISideViewerWidget)","::"));

    // Load the home page:
    if (HELP_MANAGER->homePage().isValid())
        d->browser->webView()->load(HELP_MANAGER->homePage());

    connect(HELP_MANAGER,SIGNAL(forwardRequestUrlDisplay(QUrl,bool)),SLOT(handleUrlRequest(QUrl,bool)),Qt::UniqueConnection);
    connect(HELP_MANAGER,SIGNAL(homePageChanged(QUrl)),SLOT(handleHomePageChanged(QUrl)));
}

void HelpMode::toggleDock(bool toggle) {
    if (toggle) {
        d->side_viewer_dock->show();
    } else {
        d->side_viewer_dock->hide();
    }
}

HelpMode::~HelpMode() {
    delete d;
}

QWidget* HelpMode::modeWidget() {
    return this;
}

void HelpMode::initializeMode() {
    if (d->initialized)
        return;

    // Check all objects in the global object pool.
    QMap<QString, ISideViewerWidget*> text_iface_map;
    QList<QObject*> widgets = OBJECT_MANAGER->registeredInterfaces("ISideViewerWidget");
    for (int i = 0; i < widgets.count(); ++i) {
        ISideViewerWidget* side_viewer_widget = qobject_cast<ISideViewerWidget*> (widgets.at(i));
        if (side_viewer_widget) {
            text_iface_map[side_viewer_widget->widgetLabel()] = side_viewer_widget;
        }
    }

    d->side_viewer_widget->setIFaceMap(text_iface_map,true);
    d->initialized = true;
}

QIcon HelpMode::modeIcon() const {
    return d->mode_icon;
}

bool HelpMode::setModeIcon(QIcon icon) {
    d->mode_icon = icon;
    return true;
}

QString HelpMode::modeName() const {
    return tr("Help");
}

void HelpMode::handleNewHelpWidget(QWidget* widget) {
    // Check which widget was created:
    QHelpContentWidget* content_widget = qobject_cast<QHelpContentWidget*> (widget);
    if (content_widget) {
        connect(content_widget,SIGNAL(linkActivated(const QUrl&)),SLOT(handleUrl(const QUrl&)),Qt::UniqueConnection);
        return;
    }
    QHelpIndexWidget* index_widget = qobject_cast<QHelpIndexWidget*> (widget);
    if (index_widget) {
        connect(index_widget,SIGNAL(linkActivated(const QUrl&, const QString&)),SLOT(handleUrl(const QUrl&)),Qt::UniqueConnection);
        return;
    }
    QHelpSearchResultWidget* result_widget = qobject_cast<QHelpSearchResultWidget*> (widget);
    if (result_widget) {
        connect(result_widget,SIGNAL(requestShowLink(QUrl)),SLOT(handleUrl(const QUrl&)),Qt::UniqueConnection);
        return;
    }
}

void HelpMode::handleUrl(const QUrl& url) {
    d->browser->webView()->load(url);
}

void HelpMode::handleUrlRequest(const QUrl &url, bool ensure_visible) {
    handleUrl(url);
    if (ensure_visible) {
        QtilitiesMainWindow* main_window = qobject_cast<QtilitiesMainWindow*> (QtilitiesApplication::mainWindow());
        if (main_window) {
            if (main_window->modeManager()) {
                main_window->modeManager()->setActiveMode(modeName());
            }
        }
    }
}

void HelpMode::handleHomePageChanged(const QUrl &url) {
    if (d->browser && url.isValid())
        d->browser->webView()->load(url);
}
