/********************************************************************************
** Form generated from reading UI file 'QtilitiesMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTILITIESMAINWINDOW_H
#define UI_QTILITIESMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtilitiesMainWindow
{
public:
    QAction *actionExit;
    QAction *actionAdd_Example_Objects;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtilitiesMainWindow)
    {
        if (QtilitiesMainWindow->objectName().isEmpty())
            QtilitiesMainWindow->setObjectName(QLatin1String("QtilitiesMainWindow"));
        QtilitiesMainWindow->resize(665, 400);
        QtilitiesMainWindow->setDockNestingEnabled(true);
        actionExit = new QAction(QtilitiesMainWindow);
        actionExit->setObjectName(QLatin1String("actionExit"));
        actionAdd_Example_Objects = new QAction(QtilitiesMainWindow);
        actionAdd_Example_Objects->setObjectName(QLatin1String("actionAdd_Example_Objects"));
        centralWidget = new QWidget(QtilitiesMainWindow);
        centralWidget->setObjectName(QLatin1String("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QLatin1String("gridLayout"));
        QtilitiesMainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtilitiesMainWindow);
        statusBar->setObjectName(QLatin1String("statusBar"));
        QtilitiesMainWindow->setStatusBar(statusBar);

        retranslateUi(QtilitiesMainWindow);

        QMetaObject::connectSlotsByName(QtilitiesMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QtilitiesMainWindow)
    {
        QtilitiesMainWindow->setWindowTitle(QApplication::translate("QtilitiesMainWindow", "Qtilities Main Window", nullptr));
        actionExit->setText(QApplication::translate("QtilitiesMainWindow", "Exit", nullptr));
        actionAdd_Example_Objects->setText(QApplication::translate("QtilitiesMainWindow", "Add Example Objects", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtilitiesMainWindow: public Ui_QtilitiesMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTILITIESMAINWINDOW_H
