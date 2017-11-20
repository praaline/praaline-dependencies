/********************************************************************************
** Form generated from reading UI file 'HelpPluginConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPPLUGINCONFIG_H
#define UI_HELPPLUGINCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpPluginConfig
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QWidget *widgetFilesHolder;

    void setupUi(QWidget *HelpPluginConfig)
    {
        if (HelpPluginConfig->objectName().isEmpty())
            HelpPluginConfig->setObjectName(QStringLiteral("HelpPluginConfig"));
        HelpPluginConfig->resize(559, 367);
        verticalLayout_2 = new QVBoxLayout(HelpPluginConfig);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(HelpPluginConfig);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widgetFilesHolder = new QWidget(groupBox);
        widgetFilesHolder->setObjectName(QStringLiteral("widgetFilesHolder"));

        verticalLayout->addWidget(widgetFilesHolder);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(HelpPluginConfig);

        QMetaObject::connectSlotsByName(HelpPluginConfig);
    } // setupUi

    void retranslateUi(QWidget *HelpPluginConfig)
    {
        HelpPluginConfig->setWindowTitle(QApplication::translate("HelpPluginConfig", "Form", 0));
        groupBox->setTitle(QApplication::translate("HelpPluginConfig", "Registered Documentation", 0));
    } // retranslateUi

};

namespace Ui {
    class HelpPluginConfig: public Ui_HelpPluginConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPPLUGINCONFIG_H
