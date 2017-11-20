/********************************************************************************
** Form generated from reading UI file 'GenericPropertyPathEditorListWrapper.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERICPROPERTYPATHEDITORLISTWRAPPER_H
#define UI_GENERICPROPERTYPATHEDITORLISTWRAPPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GenericPropertyPathEditorListWrapper
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *listHolder;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GenericPropertyPathEditorListWrapper)
    {
        if (GenericPropertyPathEditorListWrapper->objectName().isEmpty())
            GenericPropertyPathEditorListWrapper->setObjectName(QStringLiteral("GenericPropertyPathEditorListWrapper"));
        GenericPropertyPathEditorListWrapper->resize(784, 301);
        GenericPropertyPathEditorListWrapper->setWindowTitle(QStringLiteral("Dialog"));
        verticalLayout = new QVBoxLayout(GenericPropertyPathEditorListWrapper);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listHolder = new QWidget(GenericPropertyPathEditorListWrapper);
        listHolder->setObjectName(QStringLiteral("listHolder"));

        verticalLayout->addWidget(listHolder);

        buttonBox = new QDialogButtonBox(GenericPropertyPathEditorListWrapper);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GenericPropertyPathEditorListWrapper);

        QMetaObject::connectSlotsByName(GenericPropertyPathEditorListWrapper);
    } // setupUi

    void retranslateUi(QDialog *GenericPropertyPathEditorListWrapper)
    {
        Q_UNUSED(GenericPropertyPathEditorListWrapper);
    } // retranslateUi

};

namespace Ui {
    class GenericPropertyPathEditorListWrapper: public Ui_GenericPropertyPathEditorListWrapper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERICPROPERTYPATHEDITORLISTWRAPPER_H
