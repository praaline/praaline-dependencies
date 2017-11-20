/********************************************************************************
** Form generated from reading UI file 'GenericPropertyPathEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERICPROPERTYPATHEDITOR_H
#define UI_GENERICPROPERTYPATHEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GenericPropertyPathEditor
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtEditor;
    QToolButton *btnBrowse;

    void setupUi(QWidget *GenericPropertyPathEditor)
    {
        if (GenericPropertyPathEditor->objectName().isEmpty())
            GenericPropertyPathEditor->setObjectName(QStringLiteral("GenericPropertyPathEditor"));
        GenericPropertyPathEditor->resize(158, 20);
        GenericPropertyPathEditor->setWindowTitle(QStringLiteral("Form"));
        horizontalLayout = new QHBoxLayout(GenericPropertyPathEditor);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        txtEditor = new QLineEdit(GenericPropertyPathEditor);
        txtEditor->setObjectName(QStringLiteral("txtEditor"));

        horizontalLayout->addWidget(txtEditor);

        btnBrowse = new QToolButton(GenericPropertyPathEditor);
        btnBrowse->setObjectName(QStringLiteral("btnBrowse"));
        btnBrowse->setText(QStringLiteral("..."));

        horizontalLayout->addWidget(btnBrowse);


        retranslateUi(GenericPropertyPathEditor);

        QMetaObject::connectSlotsByName(GenericPropertyPathEditor);
    } // setupUi

    void retranslateUi(QWidget *GenericPropertyPathEditor)
    {
        Q_UNUSED(GenericPropertyPathEditor);
    } // retranslateUi

};

namespace Ui {
    class GenericPropertyPathEditor: public Ui_GenericPropertyPathEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERICPROPERTYPATHEDITOR_H
