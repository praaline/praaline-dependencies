/********************************************************************************
** Form generated from reading UI file 'LoggerConfigWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGGERCONFIGWIDGET_H
#define UI_LOGGERCONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoggerConfigWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboGlobalLogLevel;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *widgetLoggerEngines;
    QGridLayout *gridLayout_3;
    QTableView *tableViewLoggerEngines;
    QGroupBox *groupBoxEngineDetails;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QPlainTextEdit *txtLoggerEngineStatus;
    QLabel *label_3;
    QPlainTextEdit *txtLoggerEngineDescription;
    QLabel *label_6;
    QLabel *label_5;
    QComboBox *comboBoxLoggerFormattingEngine;
    QLineEdit *txtMessageContexts;
    QPushButton *btnAddLoggerEngine;
    QPushButton *btnRemoveLoggerEngine;
    QCheckBox *checkBoxToggleAll;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnViewLog;
    QWidget *widgetFormattingEngines;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidgetFormattingEngines;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QTextEdit *txtFormattingEnginePreview;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxRememberSession;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnLoadConfig;
    QPushButton *btnSaveConfig;
    QPushButton *btnApply;

    void setupUi(QWidget *LoggerConfigWidget)
    {
        if (LoggerConfigWidget->objectName().isEmpty())
            LoggerConfigWidget->setObjectName(QStringLiteral("LoggerConfigWidget"));
        LoggerConfigWidget->resize(513, 497);
        verticalLayout_2 = new QVBoxLayout(LoggerConfigWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(LoggerConfigWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(240, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        comboGlobalLogLevel = new QComboBox(groupBox);
        comboGlobalLogLevel->setObjectName(QStringLiteral("comboGlobalLogLevel"));
        comboGlobalLogLevel->setMinimumSize(QSize(100, 0));
        comboGlobalLogLevel->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(comboGlobalLogLevel, 0, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_4 = new QGroupBox(LoggerConfigWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tabWidget = new QTabWidget(groupBox_4);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        widgetLoggerEngines = new QWidget();
        widgetLoggerEngines->setObjectName(QStringLiteral("widgetLoggerEngines"));
        gridLayout_3 = new QGridLayout(widgetLoggerEngines);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableViewLoggerEngines = new QTableView(widgetLoggerEngines);
        tableViewLoggerEngines->setObjectName(QStringLiteral("tableViewLoggerEngines"));
        tableViewLoggerEngines->setMinimumSize(QSize(180, 0));
        tableViewLoggerEngines->setShowGrid(false);
        tableViewLoggerEngines->setSortingEnabled(false);

        gridLayout_3->addWidget(tableViewLoggerEngines, 1, 0, 1, 4);

        groupBoxEngineDetails = new QGroupBox(widgetLoggerEngines);
        groupBoxEngineDetails->setObjectName(QStringLiteral("groupBoxEngineDetails"));
        groupBoxEngineDetails->setEnabled(false);
        groupBoxEngineDetails->setFlat(false);
        groupBoxEngineDetails->setCheckable(false);
        gridLayout_5 = new QGridLayout(groupBoxEngineDetails);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_2 = new QLabel(groupBoxEngineDetails);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        txtLoggerEngineStatus = new QPlainTextEdit(groupBoxEngineDetails);
        txtLoggerEngineStatus->setObjectName(QStringLiteral("txtLoggerEngineStatus"));
        txtLoggerEngineStatus->setMinimumSize(QSize(0, 0));
        txtLoggerEngineStatus->setMaximumSize(QSize(16777215, 16777215));
        txtLoggerEngineStatus->setReadOnly(true);

        gridLayout_5->addWidget(txtLoggerEngineStatus, 1, 0, 1, 3);

        label_3 = new QLabel(groupBoxEngineDetails);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 2, 0, 1, 1);

        txtLoggerEngineDescription = new QPlainTextEdit(groupBoxEngineDetails);
        txtLoggerEngineDescription->setObjectName(QStringLiteral("txtLoggerEngineDescription"));
        txtLoggerEngineDescription->setMaximumSize(QSize(16777215, 16777215));
        txtLoggerEngineDescription->setReadOnly(true);

        gridLayout_5->addWidget(txtLoggerEngineDescription, 3, 0, 1, 3);

        label_6 = new QLabel(groupBoxEngineDetails);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_5->addWidget(label_6, 4, 0, 1, 1);

        label_5 = new QLabel(groupBoxEngineDetails);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 5, 0, 1, 1);

        comboBoxLoggerFormattingEngine = new QComboBox(groupBoxEngineDetails);
        comboBoxLoggerFormattingEngine->setObjectName(QStringLiteral("comboBoxLoggerFormattingEngine"));

        gridLayout_5->addWidget(comboBoxLoggerFormattingEngine, 5, 2, 1, 1);

        txtMessageContexts = new QLineEdit(groupBoxEngineDetails);
        txtMessageContexts->setObjectName(QStringLiteral("txtMessageContexts"));
        txtMessageContexts->setReadOnly(true);

        gridLayout_5->addWidget(txtMessageContexts, 4, 2, 1, 1);


        gridLayout_3->addWidget(groupBoxEngineDetails, 0, 4, 4, 4);

        btnAddLoggerEngine = new QPushButton(widgetLoggerEngines);
        btnAddLoggerEngine->setObjectName(QStringLiteral("btnAddLoggerEngine"));
        btnAddLoggerEngine->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(btnAddLoggerEngine, 2, 2, 1, 1);

        btnRemoveLoggerEngine = new QPushButton(widgetLoggerEngines);
        btnRemoveLoggerEngine->setObjectName(QStringLiteral("btnRemoveLoggerEngine"));
        btnRemoveLoggerEngine->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(btnRemoveLoggerEngine, 2, 3, 1, 1);

        checkBoxToggleAll = new QCheckBox(widgetLoggerEngines);
        checkBoxToggleAll->setObjectName(QStringLiteral("checkBoxToggleAll"));

        gridLayout_3->addWidget(checkBoxToggleAll, 0, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        btnViewLog = new QPushButton(widgetLoggerEngines);
        btnViewLog->setObjectName(QStringLiteral("btnViewLog"));

        gridLayout_3->addWidget(btnViewLog, 2, 1, 1, 1);

        tabWidget->addTab(widgetLoggerEngines, QString());
        widgetFormattingEngines = new QWidget();
        widgetFormattingEngines->setObjectName(QStringLiteral("widgetFormattingEngines"));
        verticalLayout_3 = new QVBoxLayout(widgetFormattingEngines);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        listWidgetFormattingEngines = new QListWidget(widgetFormattingEngines);
        listWidgetFormattingEngines->setObjectName(QStringLiteral("listWidgetFormattingEngines"));

        verticalLayout_3->addWidget(listWidgetFormattingEngines);

        groupBox_3 = new QGroupBox(widgetFormattingEngines);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(false);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        txtFormattingEnginePreview = new QTextEdit(groupBox_3);
        txtFormattingEnginePreview->setObjectName(QStringLiteral("txtFormattingEnginePreview"));

        gridLayout_2->addWidget(txtFormattingEnginePreview, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_3);

        tabWidget->addTab(widgetFormattingEngines, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 4);


        verticalLayout_2->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(LoggerConfigWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout = new QVBoxLayout(groupBox_5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBoxRememberSession = new QCheckBox(groupBox_5);
        checkBoxRememberSession->setObjectName(QStringLiteral("checkBoxRememberSession"));

        horizontalLayout->addWidget(checkBoxRememberSession);

        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnLoadConfig = new QPushButton(groupBox_5);
        btnLoadConfig->setObjectName(QStringLiteral("btnLoadConfig"));

        horizontalLayout->addWidget(btnLoadConfig);

        btnSaveConfig = new QPushButton(groupBox_5);
        btnSaveConfig->setObjectName(QStringLiteral("btnSaveConfig"));

        horizontalLayout->addWidget(btnSaveConfig);

        btnApply = new QPushButton(groupBox_5);
        btnApply->setObjectName(QStringLiteral("btnApply"));

        horizontalLayout->addWidget(btnApply);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox_5);

        QWidget::setTabOrder(comboGlobalLogLevel, tabWidget);
        QWidget::setTabOrder(tabWidget, checkBoxToggleAll);
        QWidget::setTabOrder(checkBoxToggleAll, btnAddLoggerEngine);
        QWidget::setTabOrder(btnAddLoggerEngine, btnRemoveLoggerEngine);
        QWidget::setTabOrder(btnRemoveLoggerEngine, comboBoxLoggerFormattingEngine);
        QWidget::setTabOrder(comboBoxLoggerFormattingEngine, checkBoxRememberSession);
        QWidget::setTabOrder(checkBoxRememberSession, btnLoadConfig);
        QWidget::setTabOrder(btnLoadConfig, btnSaveConfig);
        QWidget::setTabOrder(btnSaveConfig, btnApply);
        QWidget::setTabOrder(btnApply, tableViewLoggerEngines);
        QWidget::setTabOrder(tableViewLoggerEngines, txtLoggerEngineStatus);
        QWidget::setTabOrder(txtLoggerEngineStatus, txtLoggerEngineDescription);
        QWidget::setTabOrder(txtLoggerEngineDescription, listWidgetFormattingEngines);
        QWidget::setTabOrder(listWidgetFormattingEngines, txtFormattingEnginePreview);

        retranslateUi(LoggerConfigWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LoggerConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *LoggerConfigWidget)
    {
        LoggerConfigWidget->setWindowTitle(QApplication::translate("LoggerConfigWidget", "Logging Configuration", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("LoggerConfigWidget", "General Settings:", Q_NULLPTR));
        label->setText(QApplication::translate("LoggerConfigWidget", "Global Logging Verbosity", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("LoggerConfigWidget", "Log Engines and Formatting:", Q_NULLPTR));
        groupBoxEngineDetails->setTitle(QApplication::translate("LoggerConfigWidget", "Engine Details:", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoggerConfigWidget", "Status:", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoggerConfigWidget", "Description:", Q_NULLPTR));
        label_6->setText(QApplication::translate("LoggerConfigWidget", "Message Contexts", Q_NULLPTR));
        label_5->setText(QApplication::translate("LoggerConfigWidget", "Formatting Engine:", Q_NULLPTR));
        btnAddLoggerEngine->setText(QApplication::translate("LoggerConfigWidget", "Add", Q_NULLPTR));
        btnRemoveLoggerEngine->setText(QApplication::translate("LoggerConfigWidget", "Remove", Q_NULLPTR));
        checkBoxToggleAll->setText(QApplication::translate("LoggerConfigWidget", "Enable / Disable All", Q_NULLPTR));
        btnViewLog->setText(QApplication::translate("LoggerConfigWidget", "View", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widgetLoggerEngines), QApplication::translate("LoggerConfigWidget", "Logger Engines", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("LoggerConfigWidget", "Formatting Preview:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widgetFormattingEngines), QApplication::translate("LoggerConfigWidget", "Formatting Engines", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("LoggerConfigWidget", "Current Configuration:", Q_NULLPTR));
        checkBoxRememberSession->setText(QApplication::translate("LoggerConfigWidget", "Remember configuration for next session.", Q_NULLPTR));
        btnLoadConfig->setText(QApplication::translate("LoggerConfigWidget", "Import", Q_NULLPTR));
        btnSaveConfig->setText(QApplication::translate("LoggerConfigWidget", "Export", Q_NULLPTR));
        btnApply->setText(QApplication::translate("LoggerConfigWidget", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoggerConfigWidget: public Ui_LoggerConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGGERCONFIGWIDGET_H
