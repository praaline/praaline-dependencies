/********************************************************************************
** Form generated from reading UI file 'GroupedConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPEDCONFIGPAGE_H
#define UI_GROUPEDCONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupedConfigPage
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *groupedTab;

    void setupUi(QWidget *GroupedConfigPage)
    {
        if (GroupedConfigPage->objectName().isEmpty())
            GroupedConfigPage->setObjectName(QStringLiteral("GroupedConfigPage"));
        GroupedConfigPage->resize(400, 300);
        GroupedConfigPage->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(GroupedConfigPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupedTab = new QTabWidget(GroupedConfigPage);
        groupedTab->setObjectName(QStringLiteral("groupedTab"));

        verticalLayout->addWidget(groupedTab);


        retranslateUi(GroupedConfigPage);

        groupedTab->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(GroupedConfigPage);
    } // setupUi

    void retranslateUi(QWidget *GroupedConfigPage)
    {
        Q_UNUSED(GroupedConfigPage);
    } // retranslateUi

};

namespace Ui {
    class GroupedConfigPage: public Ui_GroupedConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPEDCONFIGPAGE_H
