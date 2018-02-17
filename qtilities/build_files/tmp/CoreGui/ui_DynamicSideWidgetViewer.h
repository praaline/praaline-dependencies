/********************************************************************************
** Form generated from reading UI file 'DynamicSideWidgetViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DYNAMICSIDEWIDGETVIEWER_H
#define UI_DYNAMICSIDEWIDGETVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DynamicSideWidgetViewer
{
public:

    void setupUi(QWidget *DynamicSideWidgetViewer)
    {
        if (DynamicSideWidgetViewer->objectName().isEmpty())
            DynamicSideWidgetViewer->setObjectName(QLatin1String("DynamicSideWidgetViewer"));
        DynamicSideWidgetViewer->resize(215, 618);

        retranslateUi(DynamicSideWidgetViewer);

        QMetaObject::connectSlotsByName(DynamicSideWidgetViewer);
    } // setupUi

    void retranslateUi(QWidget *DynamicSideWidgetViewer)
    {
        DynamicSideWidgetViewer->setWindowTitle(QApplication::translate("DynamicSideWidgetViewer", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DynamicSideWidgetViewer: public Ui_DynamicSideWidgetViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DYNAMICSIDEWIDGETVIEWER_H
