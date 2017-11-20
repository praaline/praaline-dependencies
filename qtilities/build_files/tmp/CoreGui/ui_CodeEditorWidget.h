/********************************************************************************
** Form generated from reading UI file 'CodeEditorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODEEDITORWIDGET_H
#define UI_CODEEDITORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>

QT_BEGIN_NAMESPACE

class Ui_CodeEditorWidget
{
public:

    void setupUi(QMainWindow *CodeEditorWidget)
    {
        if (CodeEditorWidget->objectName().isEmpty())
            CodeEditorWidget->setObjectName(QStringLiteral("CodeEditorWidget"));
        CodeEditorWidget->resize(500, 363);

        retranslateUi(CodeEditorWidget);

        QMetaObject::connectSlotsByName(CodeEditorWidget);
    } // setupUi

    void retranslateUi(QMainWindow *CodeEditorWidget)
    {
        CodeEditorWidget->setWindowTitle(QApplication::translate("CodeEditorWidget", "Code Editor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CodeEditorWidget: public Ui_CodeEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODEEDITORWIDGET_H
