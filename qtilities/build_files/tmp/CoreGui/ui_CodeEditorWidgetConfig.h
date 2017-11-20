/********************************************************************************
** Form generated from reading UI file 'CodeEditorWidgetConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
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
            CodeEditorWidgetConfig->setObjectName(QStringLiteral("CodeEditorWidgetConfig"));
        CodeEditorWidgetConfig->resize(400, 300);
        verticalLayout = new QVBoxLayout(CodeEditorWidgetConfig);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(CodeEditorWidgetConfig);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        fontComboBox = new QFontComboBox(groupBox);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        horizontalLayout->addWidget(fontComboBox);

        fontSizeComboBox = new QComboBox(groupBox);
        fontSizeComboBox->setObjectName(QStringLiteral("fontSizeComboBox"));
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
        CodeEditorWidgetConfig->setWindowTitle(QApplication::translate("CodeEditorWidgetConfig", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CodeEditorWidgetConfig", "Font", Q_NULLPTR));
        label->setText(QApplication::translate("CodeEditorWidgetConfig", "Editor Font", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CodeEditorWidgetConfig: public Ui_CodeEditorWidgetConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODEEDITORWIDGETCONFIG_H
