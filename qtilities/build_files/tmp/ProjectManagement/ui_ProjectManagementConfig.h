/********************************************************************************
** Form generated from reading UI file 'ProjectManagementConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTMANAGEMENTCONFIG_H
#define UI_PROJECTMANAGEMENTCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectManagementConfig
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *chkOpenLastProject;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *chkCreateNewOnStartup;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClearRecentProjectList;
    QGroupBox *chkSaveModifiedProjects;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioPromptUserToSave;
    QRadioButton *radioSaveAutomatically;
    QGroupBox *chkUseCustomProjectsPath;
    QGridLayout *gridLayout;
    QTableWidget *tableCustomPaths;
    QPushButton *btnRemove;
    QPushButton *btnAdd;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ProjectManagementConfig)
    {
        if (ProjectManagementConfig->objectName().isEmpty())
            ProjectManagementConfig->setObjectName(QStringLiteral("ProjectManagementConfig"));
        ProjectManagementConfig->resize(559, 525);
        verticalLayout_2 = new QVBoxLayout(ProjectManagementConfig);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        chkOpenLastProject = new QGroupBox(ProjectManagementConfig);
        chkOpenLastProject->setObjectName(QStringLiteral("chkOpenLastProject"));
        chkOpenLastProject->setCheckable(true);
        horizontalLayout_3 = new QHBoxLayout(chkOpenLastProject);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        chkCreateNewOnStartup = new QCheckBox(chkOpenLastProject);
        chkCreateNewOnStartup->setObjectName(QStringLiteral("chkCreateNewOnStartup"));

        horizontalLayout_3->addWidget(chkCreateNewOnStartup);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnClearRecentProjectList = new QPushButton(chkOpenLastProject);
        btnClearRecentProjectList->setObjectName(QStringLiteral("btnClearRecentProjectList"));

        horizontalLayout_3->addWidget(btnClearRecentProjectList);


        verticalLayout_2->addWidget(chkOpenLastProject);

        chkSaveModifiedProjects = new QGroupBox(ProjectManagementConfig);
        chkSaveModifiedProjects->setObjectName(QStringLiteral("chkSaveModifiedProjects"));
        chkSaveModifiedProjects->setCheckable(true);
        verticalLayout = new QVBoxLayout(chkSaveModifiedProjects);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioPromptUserToSave = new QRadioButton(chkSaveModifiedProjects);
        radioPromptUserToSave->setObjectName(QStringLiteral("radioPromptUserToSave"));

        verticalLayout->addWidget(radioPromptUserToSave);

        radioSaveAutomatically = new QRadioButton(chkSaveModifiedProjects);
        radioSaveAutomatically->setObjectName(QStringLiteral("radioSaveAutomatically"));

        verticalLayout->addWidget(radioSaveAutomatically);


        verticalLayout_2->addWidget(chkSaveModifiedProjects);

        chkUseCustomProjectsPath = new QGroupBox(ProjectManagementConfig);
        chkUseCustomProjectsPath->setObjectName(QStringLiteral("chkUseCustomProjectsPath"));
        chkUseCustomProjectsPath->setCheckable(true);
        gridLayout = new QGridLayout(chkUseCustomProjectsPath);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableCustomPaths = new QTableWidget(chkUseCustomProjectsPath);
        tableCustomPaths->setObjectName(QStringLiteral("tableCustomPaths"));
        tableCustomPaths->setAlternatingRowColors(true);
        tableCustomPaths->setShowGrid(false);

        gridLayout->addWidget(tableCustomPaths, 0, 0, 1, 3);

        btnRemove = new QPushButton(chkUseCustomProjectsPath);
        btnRemove->setObjectName(QStringLiteral("btnRemove"));

        gridLayout->addWidget(btnRemove, 1, 1, 1, 1);

        btnAdd = new QPushButton(chkUseCustomProjectsPath);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        gridLayout->addWidget(btnAdd, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(356, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);


        verticalLayout_2->addWidget(chkUseCustomProjectsPath);

        QWidget::setTabOrder(chkOpenLastProject, chkCreateNewOnStartup);
        QWidget::setTabOrder(chkCreateNewOnStartup, chkSaveModifiedProjects);
        QWidget::setTabOrder(chkSaveModifiedProjects, radioPromptUserToSave);
        QWidget::setTabOrder(radioPromptUserToSave, radioSaveAutomatically);
        QWidget::setTabOrder(radioSaveAutomatically, chkUseCustomProjectsPath);

        retranslateUi(ProjectManagementConfig);
        QObject::connect(chkSaveModifiedProjects, SIGNAL(toggled(bool)), radioPromptUserToSave, SLOT(setEnabled(bool)));
        QObject::connect(chkSaveModifiedProjects, SIGNAL(toggled(bool)), radioSaveAutomatically, SLOT(setEnabled(bool)));
        QObject::connect(chkOpenLastProject, SIGNAL(toggled(bool)), chkCreateNewOnStartup, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ProjectManagementConfig);
    } // setupUi

    void retranslateUi(QWidget *ProjectManagementConfig)
    {
        ProjectManagementConfig->setWindowTitle(QApplication::translate("ProjectManagementConfig", "Form", Q_NULLPTR));
        chkOpenLastProject->setTitle(QApplication::translate("ProjectManagementConfig", "Open last project when application starts:", Q_NULLPTR));
        chkCreateNewOnStartup->setText(QApplication::translate("ProjectManagementConfig", "Create empty project if no last project is available", Q_NULLPTR));
        btnClearRecentProjectList->setText(QApplication::translate("ProjectManagementConfig", "Clear Recent Project List", Q_NULLPTR));
        chkSaveModifiedProjects->setTitle(QApplication::translate("ProjectManagementConfig", "Check for modified open projects when application closes:", Q_NULLPTR));
        radioPromptUserToSave->setText(QApplication::translate("ProjectManagementConfig", "Ask if projects must be saved", Q_NULLPTR));
        radioSaveAutomatically->setText(QApplication::translate("ProjectManagementConfig", "Automatically save projects", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        chkUseCustomProjectsPath->setToolTip(QApplication::translate("ProjectManagementConfig", "If a custom projects path is not used, projects will be saved in a folder called Projects in your session path.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        chkUseCustomProjectsPath->setTitle(QApplication::translate("ProjectManagementConfig", "Use custom projects paths:", Q_NULLPTR));
        btnRemove->setText(QApplication::translate("ProjectManagementConfig", "Remove", Q_NULLPTR));
        btnAdd->setText(QApplication::translate("ProjectManagementConfig", "Add", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProjectManagementConfig: public Ui_ProjectManagementConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTMANAGEMENTCONFIG_H
