/********************************************************************************
** Form generated from reading UI file 'TaskSummaryWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSUMMARYWIDGET_H
#define UI_TASKSUMMARYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskSummaryWidget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *singleWidgetsHolder;
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetSingleWidgetItemsHolder;

    void setupUi(QMainWindow *TaskSummaryWidget)
    {
        if (TaskSummaryWidget->objectName().isEmpty())
            TaskSummaryWidget->setObjectName(QStringLiteral("TaskSummaryWidget"));
        TaskSummaryWidget->resize(412, 69);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskSummaryWidget->sizePolicy().hasHeightForWidth());
        TaskSummaryWidget->setSizePolicy(sizePolicy);
        TaskSummaryWidget->setMaximumSize(QSize(16777215, 16777215));
        TaskSummaryWidget->setDockNestingEnabled(true);
        widget = new QWidget(TaskSummaryWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        singleWidgetsHolder = new QWidget();
        singleWidgetsHolder->setObjectName(QStringLiteral("singleWidgetsHolder"));
        singleWidgetsHolder->setGeometry(QRect(0, 0, 412, 69));
        verticalLayout_2 = new QVBoxLayout(singleWidgetsHolder);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widgetSingleWidgetItemsHolder = new QWidget(singleWidgetsHolder);
        widgetSingleWidgetItemsHolder->setObjectName(QStringLiteral("widgetSingleWidgetItemsHolder"));

        verticalLayout_2->addWidget(widgetSingleWidgetItemsHolder);

        scrollArea->setWidget(singleWidgetsHolder);

        verticalLayout->addWidget(scrollArea);

        TaskSummaryWidget->setCentralWidget(widget);

        retranslateUi(TaskSummaryWidget);

        QMetaObject::connectSlotsByName(TaskSummaryWidget);
    } // setupUi

    void retranslateUi(QMainWindow *TaskSummaryWidget)
    {
        TaskSummaryWidget->setWindowTitle(QApplication::translate("TaskSummaryWidget", "Task Summary Widget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TaskSummaryWidget: public Ui_TaskSummaryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKSUMMARYWIDGET_H
