/********************************************************************************
** Form generated from reading UI file 'ObjectScopeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTSCOPEWIDGET_H
#define UI_OBJECTSCOPEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObjectScopeWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widgetName;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *nameLayout;
    QSpacerItem *nameSpacerLeft;
    QLabel *txtName;
    QSpacerItem *nameSpacerRight;
    QFrame *lineName;
    QVBoxLayout *textInfoLayout;
    QFormLayout *formLayout;
    QLabel *txtOwnership;
    QLabel *label;
    QFormLayout *formLayout_2;
    QLabel *txtObserverLimit;
    QLabel *ObserverLimit;
    QTableWidget *observerTable;

    void setupUi(QWidget *ObjectScopeWidget)
    {
        if (ObjectScopeWidget->objectName().isEmpty())
            ObjectScopeWidget->setObjectName(QStringLiteral("ObjectScopeWidget"));
        ObjectScopeWidget->resize(240, 426);
        verticalLayout_3 = new QVBoxLayout(ObjectScopeWidget);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widgetName = new QWidget(ObjectScopeWidget);
        widgetName->setObjectName(QStringLiteral("widgetName"));
        verticalLayout_2 = new QVBoxLayout(widgetName);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        nameLayout = new QHBoxLayout();
        nameLayout->setObjectName(QStringLiteral("nameLayout"));
        nameSpacerLeft = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        nameLayout->addItem(nameSpacerLeft);

        txtName = new QLabel(widgetName);
        txtName->setObjectName(QStringLiteral("txtName"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        txtName->setFont(font);

        nameLayout->addWidget(txtName);

        nameSpacerRight = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        nameLayout->addItem(nameSpacerRight);


        verticalLayout_2->addLayout(nameLayout);

        lineName = new QFrame(widgetName);
        lineName->setObjectName(QStringLiteral("lineName"));
        lineName->setFrameShape(QFrame::HLine);
        lineName->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(lineName);


        verticalLayout_3->addWidget(widgetName);

        textInfoLayout = new QVBoxLayout();
        textInfoLayout->setSpacing(3);
        textInfoLayout->setObjectName(QStringLiteral("textInfoLayout"));
        textInfoLayout->setContentsMargins(6, 6, 6, -1);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        txtOwnership = new QLabel(ObjectScopeWidget);
        txtOwnership->setObjectName(QStringLiteral("txtOwnership"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtOwnership);

        label = new QLabel(ObjectScopeWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);


        textInfoLayout->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        txtObserverLimit = new QLabel(ObjectScopeWidget);
        txtObserverLimit->setObjectName(QStringLiteral("txtObserverLimit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtObserverLimit);

        ObserverLimit = new QLabel(ObjectScopeWidget);
        ObserverLimit->setObjectName(QStringLiteral("ObserverLimit"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, ObserverLimit);


        textInfoLayout->addLayout(formLayout_2);


        verticalLayout_3->addLayout(textInfoLayout);

        observerTable = new QTableWidget(ObjectScopeWidget);
        if (observerTable->columnCount() < 1)
            observerTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        observerTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        observerTable->setObjectName(QStringLiteral("observerTable"));
        observerTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        observerTable->setAlternatingRowColors(true);
        observerTable->setSelectionMode(QAbstractItemView::SingleSelection);
        observerTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        observerTable->setShowGrid(false);
        observerTable->setSortingEnabled(false);
        observerTable->horizontalHeader()->setStretchLastSection(true);
        observerTable->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(observerTable);

        observerTable->raise();
        widgetName->raise();

        retranslateUi(ObjectScopeWidget);

        QMetaObject::connectSlotsByName(ObjectScopeWidget);
    } // setupUi

    void retranslateUi(QWidget *ObjectScopeWidget)
    {
        ObjectScopeWidget->setWindowTitle(QApplication::translate("ObjectScopeWidget", "Object Scope & Context Details", Q_NULLPTR));
        txtName->setText(QApplication::translate("ObjectScopeWidget", "No Scope Information", Q_NULLPTR));
        txtOwnership->setText(QApplication::translate("ObjectScopeWidget", "Not set", Q_NULLPTR));
        label->setText(QApplication::translate("ObjectScopeWidget", "Ownership:", Q_NULLPTR));
        txtObserverLimit->setText(QApplication::translate("ObjectScopeWidget", "Not set", Q_NULLPTR));
        ObserverLimit->setText(QApplication::translate("ObjectScopeWidget", "Context Limit:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = observerTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ObjectScopeWidget", "Context List", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ObjectScopeWidget: public Ui_ObjectScopeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTSCOPEWIDGET_H
