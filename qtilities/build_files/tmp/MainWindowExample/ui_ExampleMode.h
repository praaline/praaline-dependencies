/********************************************************************************
** Form generated from reading UI file 'ExampleMode.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPLEMODE_H
#define UI_EXAMPLEMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExampleMode
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *splitterParent;

    void setupUi(QMainWindow *ExampleMode)
    {
        if (ExampleMode->objectName().isEmpty())
            ExampleMode->setObjectName(QStringLiteral("ExampleMode"));
        ExampleMode->resize(480, 394);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExampleMode->sizePolicy().hasHeightForWidth());
        ExampleMode->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(ExampleMode);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitterParent = new QWidget(centralwidget);
        splitterParent->setObjectName(QStringLiteral("splitterParent"));

        verticalLayout->addWidget(splitterParent);

        ExampleMode->setCentralWidget(centralwidget);

        retranslateUi(ExampleMode);

        QMetaObject::connectSlotsByName(ExampleMode);
    } // setupUi

    void retranslateUi(QMainWindow *ExampleMode)
    {
        ExampleMode->setWindowTitle(QApplication::translate("ExampleMode", "Environments Widget", 0));
    } // retranslateUi

};

namespace Ui {
    class ExampleMode: public Ui_ExampleMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLEMODE_H
