/********************************************************************************
** Form generated from reading UI file 'ObserverWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSERVERWIDGET_H
#define UI_OBSERVERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObserverWidget
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widgetProgressInfo;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widgetProgressBarHolder;
    QWidget *navigationBarWidget;
    QWidget *itemParentWidget;
    QWidget *widgetSearchBox;
    QHBoxLayout *horizontalLayout;

    void setupUi(QMainWindow *ObserverWidget)
    {
        if (ObserverWidget->objectName().isEmpty())
            ObserverWidget->setObjectName(QStringLiteral("ObserverWidget"));
        ObserverWidget->resize(496, 510);
        centralwidget = new QWidget(ObserverWidget);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widgetProgressInfo = new QWidget(centralwidget);
        widgetProgressInfo->setObjectName(QStringLiteral("widgetProgressInfo"));
        gridLayout = new QGridLayout(widgetProgressInfo);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 97, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(219, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 96, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        widgetProgressBarHolder = new QWidget(widgetProgressInfo);
        widgetProgressBarHolder->setObjectName(QStringLiteral("widgetProgressBarHolder"));
        widgetProgressBarHolder->setAutoFillBackground(false);

        gridLayout->addWidget(widgetProgressBarHolder, 1, 1, 1, 1);


        verticalLayout->addWidget(widgetProgressInfo);

        navigationBarWidget = new QWidget(centralwidget);
        navigationBarWidget->setObjectName(QStringLiteral("navigationBarWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(navigationBarWidget->sizePolicy().hasHeightForWidth());
        navigationBarWidget->setSizePolicy(sizePolicy);
        navigationBarWidget->setAutoFillBackground(false);

        verticalLayout->addWidget(navigationBarWidget);

        itemParentWidget = new QWidget(centralwidget);
        itemParentWidget->setObjectName(QStringLiteral("itemParentWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(itemParentWidget->sizePolicy().hasHeightForWidth());
        itemParentWidget->setSizePolicy(sizePolicy1);
        itemParentWidget->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(itemParentWidget);

        widgetSearchBox = new QWidget(centralwidget);
        widgetSearchBox->setObjectName(QStringLiteral("widgetSearchBox"));
        sizePolicy.setHeightForWidth(widgetSearchBox->sizePolicy().hasHeightForWidth());
        widgetSearchBox->setSizePolicy(sizePolicy);
        widgetSearchBox->setMinimumSize(QSize(0, 22));
        widgetSearchBox->setMaximumSize(QSize(16777215, 22));
        horizontalLayout = new QHBoxLayout(widgetSearchBox);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout->addWidget(widgetSearchBox);

        ObserverWidget->setCentralWidget(centralwidget);

        retranslateUi(ObserverWidget);

        QMetaObject::connectSlotsByName(ObserverWidget);
    } // setupUi

    void retranslateUi(QMainWindow *ObserverWidget)
    {
        ObserverWidget->setWindowTitle(QApplication::translate("ObserverWidget", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ObserverWidget: public Ui_ObserverWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSERVERWIDGET_H
