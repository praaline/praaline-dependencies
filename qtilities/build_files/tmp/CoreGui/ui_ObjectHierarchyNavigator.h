/********************************************************************************
** Form generated from reading UI file 'ObjectHierarchyNavigator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTHIERARCHYNAVIGATOR_H
#define UI_OBJECTHIERARCHYNAVIGATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObjectHierarchyNavigator
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *navigationArea;
    QHBoxLayout *horizontalLayout;
    QLabel *lblHierarchy;

    void setupUi(QWidget *ObjectHierarchyNavigator)
    {
        if (ObjectHierarchyNavigator->objectName().isEmpty())
            ObjectHierarchyNavigator->setObjectName(QStringLiteral("ObjectHierarchyNavigator"));
        ObjectHierarchyNavigator->resize(400, 30);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(30);
        sizePolicy.setHeightForWidth(ObjectHierarchyNavigator->sizePolicy().hasHeightForWidth());
        ObjectHierarchyNavigator->setSizePolicy(sizePolicy);
        ObjectHierarchyNavigator->setMinimumSize(QSize(0, 30));
        ObjectHierarchyNavigator->setMaximumSize(QSize(16777215, 30));
        verticalLayout = new QVBoxLayout(ObjectHierarchyNavigator);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(ObjectHierarchyNavigator);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        navigationArea = new QWidget();
        navigationArea->setObjectName(QStringLiteral("navigationArea"));
        navigationArea->setGeometry(QRect(0, 0, 398, 28));
        horizontalLayout = new QHBoxLayout(navigationArea);
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lblHierarchy = new QLabel(navigationArea);
        lblHierarchy->setObjectName(QStringLiteral("lblHierarchy"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblHierarchy->setFont(font);

        horizontalLayout->addWidget(lblHierarchy);

        scrollArea->setWidget(navigationArea);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(ObjectHierarchyNavigator);

        QMetaObject::connectSlotsByName(ObjectHierarchyNavigator);
    } // setupUi

    void retranslateUi(QWidget *ObjectHierarchyNavigator)
    {
        ObjectHierarchyNavigator->setWindowTitle(QApplication::translate("ObjectHierarchyNavigator", "Form", Q_NULLPTR));
        lblHierarchy->setText(QApplication::translate("ObjectHierarchyNavigator", "Navigation stack not set.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ObjectHierarchyNavigator: public Ui_ObjectHierarchyNavigator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTHIERARCHYNAVIGATOR_H
