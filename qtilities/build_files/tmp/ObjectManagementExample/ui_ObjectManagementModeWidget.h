/********************************************************************************
** Form generated from reading UI file 'ObjectManagementModeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTMANAGEMENTMODEWIDGET_H
#define UI_OBJECTMANAGEMENTMODEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObjectManagementModeWidget
{
public:
    QAction *actionExit;
    QAction *actionAdd_Example_Objects;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *collectionDetailsWidget;

    void setupUi(QWidget *ObjectManagementModeWidget)
    {
        if (ObjectManagementModeWidget->objectName().isEmpty())
            ObjectManagementModeWidget->setObjectName(QStringLiteral("ObjectManagementModeWidget"));
        ObjectManagementModeWidget->resize(457, 357);
        actionExit = new QAction(ObjectManagementModeWidget);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAdd_Example_Objects = new QAction(ObjectManagementModeWidget);
        actionAdd_Example_Objects->setObjectName(QStringLiteral("actionAdd_Example_Objects"));
        centralWidget = new QWidget(ObjectManagementModeWidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        collectionDetailsWidget = new QWidget(centralWidget);
        collectionDetailsWidget->setObjectName(QStringLiteral("collectionDetailsWidget"));

        verticalLayout->addWidget(collectionDetailsWidget);


        retranslateUi(ObjectManagementModeWidget);

        QMetaObject::connectSlotsByName(ObjectManagementModeWidget);
    } // setupUi

    void retranslateUi(QWidget *ObjectManagementModeWidget)
    {
        ObjectManagementModeWidget->setWindowTitle(QApplication::translate("ObjectManagementModeWidget", "Qtilities Library - Object Managment Example", 0));
        actionExit->setText(QApplication::translate("ObjectManagementModeWidget", "Exit", 0));
        actionAdd_Example_Objects->setText(QApplication::translate("ObjectManagementModeWidget", "Add Example Objects", 0));
    } // retranslateUi

};

namespace Ui {
    class ObjectManagementModeWidget: public Ui_ObjectManagementModeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTMANAGEMENTMODEWIDGET_H
