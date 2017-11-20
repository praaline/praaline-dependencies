/********************************************************************************
** Form generated from reading UI file 'CommandEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDEDITOR_H
#define UI_COMMANDEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommandEditor
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxCommands;
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetCommandsHolder;

    void setupUi(QWidget *CommandEditor)
    {
        if (CommandEditor->objectName().isEmpty())
            CommandEditor->setObjectName(QStringLiteral("CommandEditor"));
        CommandEditor->resize(547, 456);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CommandEditor->sizePolicy().hasHeightForWidth());
        CommandEditor->setSizePolicy(sizePolicy);
        CommandEditor->setMinimumSize(QSize(400, 0));
        verticalLayout_3 = new QVBoxLayout(CommandEditor);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBoxCommands = new QGroupBox(CommandEditor);
        groupBoxCommands->setObjectName(QStringLiteral("groupBoxCommands"));
        verticalLayout_2 = new QVBoxLayout(groupBoxCommands);
        verticalLayout_2->setSpacing(3);
#ifndef Q_OS_MAC
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
#endif
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widgetCommandsHolder = new QWidget(groupBoxCommands);
        widgetCommandsHolder->setObjectName(QStringLiteral("widgetCommandsHolder"));

        verticalLayout_2->addWidget(widgetCommandsHolder);


        verticalLayout_3->addWidget(groupBoxCommands);


        retranslateUi(CommandEditor);

        QMetaObject::connectSlotsByName(CommandEditor);
    } // setupUi

    void retranslateUi(QWidget *CommandEditor)
    {
        CommandEditor->setWindowTitle(QApplication::translate("CommandEditor", "Command Shortcut Editor", Q_NULLPTR));
        groupBoxCommands->setTitle(QApplication::translate("CommandEditor", "Shortcuts:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CommandEditor: public Ui_CommandEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDEDITOR_H
