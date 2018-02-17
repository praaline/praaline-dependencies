/********************************************************************************
** Form generated from reading UI file 'ExtensionSystemConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTENSIONSYSTEMCONFIG_H
#define UI_EXTENSIONSYSTEMCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExtensionSystemConfig
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabLoadedPlugins;
    QGridLayout *gridLayout;
    QWidget *widgetPluginListHolder;
    QPushButton *btnPluginDetails;
    QLabel *lblStatusMessage;
    QWidget *tabPaths;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelPluginPaths;
    QListWidget *listPluginPaths;

    void setupUi(QWidget *ExtensionSystemConfig)
    {
        if (ExtensionSystemConfig->objectName().isEmpty())
            ExtensionSystemConfig->setObjectName(QLatin1String("ExtensionSystemConfig"));
        ExtensionSystemConfig->resize(496, 586);
        gridLayout_2 = new QGridLayout(ExtensionSystemConfig);
        gridLayout_2->setObjectName(QLatin1String("gridLayout_2"));
        tabWidget = new QTabWidget(ExtensionSystemConfig);
        tabWidget->setObjectName(QLatin1String("tabWidget"));
        tabLoadedPlugins = new QWidget();
        tabLoadedPlugins->setObjectName(QLatin1String("tabLoadedPlugins"));
        gridLayout = new QGridLayout(tabLoadedPlugins);
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QLatin1String("gridLayout"));
        widgetPluginListHolder = new QWidget(tabLoadedPlugins);
        widgetPluginListHolder->setObjectName(QLatin1String("widgetPluginListHolder"));

        gridLayout->addWidget(widgetPluginListHolder, 0, 0, 1, 2);

        btnPluginDetails = new QPushButton(tabLoadedPlugins);
        btnPluginDetails->setObjectName(QLatin1String("btnPluginDetails"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnPluginDetails->sizePolicy().hasHeightForWidth());
        btnPluginDetails->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnPluginDetails, 1, 1, 1, 1);

        lblStatusMessage = new QLabel(tabLoadedPlugins);
        lblStatusMessage->setObjectName(QLatin1String("lblStatusMessage"));
        lblStatusMessage->setWordWrap(true);

        gridLayout->addWidget(lblStatusMessage, 1, 0, 1, 1);

        tabWidget->addTab(tabLoadedPlugins, QString());
        tabPaths = new QWidget();
        tabPaths->setObjectName(QLatin1String("tabPaths"));
        verticalLayout_3 = new QVBoxLayout(tabPaths);
        verticalLayout_3->setObjectName(QLatin1String("verticalLayout_3"));
        labelPluginPaths = new QLabel(tabPaths);
        labelPluginPaths->setObjectName(QLatin1String("labelPluginPaths"));
        labelPluginPaths->setMinimumSize(QSize(0, 18));
        labelPluginPaths->setMaximumSize(QSize(16777215, 18));

        verticalLayout_3->addWidget(labelPluginPaths);

        listPluginPaths = new QListWidget(tabPaths);
        listPluginPaths->setObjectName(QLatin1String("listPluginPaths"));

        verticalLayout_3->addWidget(listPluginPaths);

        tabWidget->addTab(tabPaths, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(ExtensionSystemConfig);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ExtensionSystemConfig);
    } // setupUi

    void retranslateUi(QWidget *ExtensionSystemConfig)
    {
        ExtensionSystemConfig->setWindowTitle(QApplication::translate("ExtensionSystemConfig", "About Plugins", nullptr));
        btnPluginDetails->setText(QApplication::translate("ExtensionSystemConfig", "Details", nullptr));
        lblStatusMessage->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabLoadedPlugins), QApplication::translate("ExtensionSystemConfig", "Loaded Plugins", nullptr));
        labelPluginPaths->setText(QApplication::translate("ExtensionSystemConfig", "Plugins loaded from 1 path:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPaths), QApplication::translate("ExtensionSystemConfig", "Plugin Paths", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExtensionSystemConfig: public Ui_ExtensionSystemConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTENSIONSYSTEMCONFIG_H
