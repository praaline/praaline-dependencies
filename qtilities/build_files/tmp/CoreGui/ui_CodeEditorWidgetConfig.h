/********************************************************************************
** Form generated from reading UI file 'CodeEditorWidgetConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODEEDITORWIDGETCONFIG_H
#define UI_CODEEDITORWIDGETCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CodeEditorWidgetConfig
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QFontComboBox *fontComboBox;
    QComboBox *fontSizeComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CodeEditorWidgetConfig)
    {
        if (CodeEditorWidgetConfig->objectName().isEmpty())
            CodeEditorWidgetConfig->setObjectName(QLatin1String("CodeEditorWidgetConfig"));
        CodeEditorWidgetConfig->resize(400, 300);
        verticalLayout = new QVBoxLayout(CodeEditorWidgetConfig);
        verticalLayout->setObjectName(QLatin1String("verticalLayout"));
        groupBox = new QGroupBox(CodeEditorWidgetConfig);
        groupBox->setObjectName(QLatin1String("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QLatin1String("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QLatin1String("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        fontComboBox = new QFontComboBox(groupBox);
        fontComboBox->setObjectName(QLatin1String("fontComboBox"));

        horizontalLayout->addWidget(fontComboBox);

        fontSizeComboBox = new QComboBox(groupBox);
        fontSizeComboBox->setObjectName(QLatin1String("fontSizeComboBox"));
        fontSizeComboBox->setEditable(true);

        horizontalLayout->addWidget(fontSizeComboBox);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 176, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(CodeEditorWidgetConfig);

        QMetaObject::connectSlotsByName(CodeEditorWidgetConfig);
    } // setupUi

    void retranslateUi(QWidget *CodeEditorWidgetConfig)
    {
        CodeEditorWidgetConfig->setWindowTitle(QApplication::translate("CodeEditorWidgetConfig", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("CodeEditorWidgetConfig", "Font", nullptr));
        label->setText(QApplication::translate("CodeEditorWidgetConfig", "Editor Font", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CodeEditorWidgetConfig: public Ui_CodeEditorWidgetConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODEEDITORWIDGETCONFIG_H
