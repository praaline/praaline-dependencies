/********************************************************************************
** Form generated from reading UI file 'ProjectManagementConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
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
            ProjectManagementConfig->setObjectName(QLatin1String("ProjectManagementConfig"));
        ProjectManagementConfig->resize(559, 525);
        verticalLayout_2 = new QVBoxLayout(ProjectManagementConfig);
        verticalLayout_2->setObjectName(QLatin1String("verticalLayout_2"));
        chkOpenLastProject = new QGroupBox(ProjectManagementConfig);
        chkOpenLastProject->setObjectName(QLatin1String("chkOpenLastProject"));
        chkOpenLastProject->setCheckable(true);
        horizontalLayout_3 = new QHBoxLayout(chkOpenLastProject);
        horizontalLayout_3->setObjectName(QLatin1String("horizontalLayout_3"));
        chkCreateNewOnStartup = new QCheckBox(chkOpenLastProject);
        chkCreateNewOnStartup->setObjectName(QLatin1String("chkCreateNewOnStartup"));

        horizontalLayout_3->addWidget(chkCreateNewOnStartup);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnClearRecentProjectList = new QPushButton(chkOpenLastProject);
        btnClearRecentProjectList->setObjectName(QLatin1String("btnClearRecentProjectList"));

        horizontalLayout_3->addWidget(btnClearRecentProjectList);


        verticalLayout_2->addWidget(chkOpenLastProject);

        chkSaveModifiedProjects = new QGroupBox(ProjectManagementConfig);
        chkSaveModifiedProjects->setObjectName(QLatin1String("chkSaveModifiedProjects"));
        chkSaveModifiedProjects->setCheckable(true);
        verticalLayout = new QVBoxLayout(chkSaveModifiedProjects);
        verticalLayout->setObjectName(QLatin1String("verticalLayout"));
        radioPromptUserToSave = new QRadioButton(chkSaveModifiedProjects);
        radioPromptUserToSave->setObjectName(QLatin1String("radioPromptUserToSave"));

        verticalLayout->addWidget(radioPromptUserToSave);

        radioSaveAutomatically = new QRadioButton(chkSaveModifiedProjects);
        radioSaveAutomatically->setObjectName(QLatin1String("radioSaveAutomatically"));

        verticalLayout->addWidget(radioSaveAutomatically);


        verticalLayout_2->addWidget(chkSaveModifiedProjects);

        chkUseCustomProjectsPath = new QGroupBox(ProjectManagementConfig);
        chkUseCustomProjectsPath->setObjectName(QLatin1String("chkUseCustomProjectsPath"));
        chkUseCustomProjectsPath->setCheckable(true);
        gridLayout = new QGridLayout(chkUseCustomProjectsPath);
        gridLayout->setObjectName(QLatin1String("gridLayout"));
        tableCustomPaths = new QTableWidget(chkUseCustomProjectsPath);
        tableCustomPaths->setObjectName(QLatin1String("tableCustomPaths"));
        tableCustomPaths->setAlternatingRowColors(true);
        tableCustomPaths->setShowGrid(false);

        gridLayout->addWidget(tableCustomPaths, 0, 0, 1, 3);

        btnRemove = new QPushButton(chkUseCustomProjectsPath);
        btnRemove->setObjectName(QLatin1String("btnRemove"));

        gridLayout->addWidget(btnRemove, 1, 1, 1, 1);

        btnAdd = new QPushButton(chkUseCustomProjectsPath);
        btnAdd->setObjectName(QLatin1String("btnAdd"));

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
        ProjectManagementConfig->setWindowTitle(QApplication::translate("ProjectManagementConfig", "Form", nullptr));
        chkOpenLastProject->setTitle(QApplication::translate("ProjectManagementConfig", "Open last project when application starts:", nullptr));
        chkCreateNewOnStartup->setText(QApplication::translate("ProjectManagementConfig", "Create empty project if no last project is available", nullptr));
        btnClearRecentProjectList->setText(QApplication::translate("ProjectManagementConfig", "Clear Recent Project List", nullptr));
        chkSaveModifiedProjects->setTitle(QApplication::translate("ProjectManagementConfig", "Check for modified open projects when application closes:", nullptr));
        radioPromptUserToSave->setText(QApplication::translate("ProjectManagementConfig", "Ask if projects must be saved", nullptr));
        radioSaveAutomatically->setText(QApplication::translate("ProjectManagementConfig", "Automatically save projects", nullptr));
#ifndef QT_NO_TOOLTIP
        chkUseCustomProjectsPath->setToolTip(QApplication::translate("ProjectManagementConfig", "If a custom projects path is not used, projects will be saved in a folder called Projects in your session path.", nullptr));
#endif // QT_NO_TOOLTIP
        chkUseCustomProjectsPath->setTitle(QApplication::translate("ProjectManagementConfig", "Use custom projects paths:", nullptr));
        btnRemove->setText(QApplication::translate("ProjectManagementConfig", "Remove", nullptr));
        btnAdd->setText(QApplication::translate("ProjectManagementConfig", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectManagementConfig: public Ui_ProjectManagementConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTMANAGEMENTCONFIG_H
