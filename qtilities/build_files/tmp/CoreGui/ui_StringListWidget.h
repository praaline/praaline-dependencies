/********************************************************************************
** Form generated from reading UI file 'StringListWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRINGLISTWIDGET_H
#define UI_STRINGLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StringListWidget
{
public:
    QAction *actionExit;
    QAction *actionAdd_Example_Objects;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QListView *listView;

    void setupUi(QMainWindow *StringListWidget)
    {
        if (StringListWidget->objectName().isEmpty())
            StringListWidget->setObjectName(QStringLiteral("StringListWidget"));
        StringListWidget->resize(665, 400);
        StringListWidget->setWindowTitle(QStringLiteral("StringListWidget"));
        StringListWidget->setDockNestingEnabled(true);
        actionExit = new QAction(StringListWidget);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAdd_Example_Objects = new QAction(StringListWidget);
        actionAdd_Example_Objects->setObjectName(QStringLiteral("actionAdd_Example_Objects"));
        centralWidget = new QWidget(StringListWidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setDragDropMode(QAbstractItemView::NoDragDrop);

        gridLayout->addWidget(listView, 0, 0, 1, 1);

        StringListWidget->setCentralWidget(centralWidget);

        retranslateUi(StringListWidget);

        QMetaObject::connectSlotsByName(StringListWidget);
    } // setupUi

    void retranslateUi(QMainWindow *StringListWidget)
    {
        actionExit->setText(QApplication::translate("StringListWidget", "Exit", Q_NULLPTR));
        actionAdd_Example_Objects->setText(QApplication::translate("StringListWidget", "Add Example Objects", Q_NULLPTR));
        Q_UNUSED(StringListWidget);
    } // retranslateUi

};

namespace Ui {
    class StringListWidget: public Ui_StringListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRINGLISTWIDGET_H
