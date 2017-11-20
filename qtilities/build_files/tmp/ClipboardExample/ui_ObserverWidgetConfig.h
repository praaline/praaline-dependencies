/********************************************************************************
** Form generated from reading UI file 'ObserverWidgetConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSERVERWIDGETCONFIG_H
#define UI_OBSERVERWIDGETCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObserverWidgetConfig
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupContentsViewer;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboWidgetMode1;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBoxRowHeight1;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkShowGrid1;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *checkConfirmDeletes1;
    QGroupBox *groupContentsViewer_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *comboWidgetMode2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QSpinBox *spinBoxRowHeight2;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *checkShowGrid2;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *checkConfirmDeletes2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ObserverWidgetConfig)
    {
        if (ObserverWidgetConfig->objectName().isEmpty())
            ObserverWidgetConfig->setObjectName(QStringLiteral("ObserverWidgetConfig"));
        ObserverWidgetConfig->resize(400, 348);
        verticalLayout = new QVBoxLayout(ObserverWidgetConfig);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupContentsViewer = new QGroupBox(ObserverWidgetConfig);
        groupContentsViewer->setObjectName(QStringLiteral("groupContentsViewer"));
        gridLayout = new QGridLayout(groupContentsViewer);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupContentsViewer);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(44, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        comboWidgetMode1 = new QComboBox(groupContentsViewer);
        comboWidgetMode1->setObjectName(QStringLiteral("comboWidgetMode1"));
        comboWidgetMode1->setMinimumSize(QSize(150, 0));
        comboWidgetMode1->setMaximumSize(QSize(150, 16777215));

        gridLayout->addWidget(comboWidgetMode1, 0, 2, 1, 1);

        label_2 = new QLabel(groupContentsViewer);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(104, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        spinBoxRowHeight1 = new QSpinBox(groupContentsViewer);
        spinBoxRowHeight1->setObjectName(QStringLiteral("spinBoxRowHeight1"));
        spinBoxRowHeight1->setMinimum(17);
        spinBoxRowHeight1->setMaximum(30);

        gridLayout->addWidget(spinBoxRowHeight1, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(203, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 0, 1, 2);

        checkShowGrid1 = new QCheckBox(groupContentsViewer);
        checkShowGrid1->setObjectName(QStringLiteral("checkShowGrid1"));

        gridLayout->addWidget(checkShowGrid1, 2, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(203, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 3, 0, 1, 2);

        checkConfirmDeletes1 = new QCheckBox(groupContentsViewer);
        checkConfirmDeletes1->setObjectName(QStringLiteral("checkConfirmDeletes1"));

        gridLayout->addWidget(checkConfirmDeletes1, 3, 2, 1, 1);


        verticalLayout->addWidget(groupContentsViewer);

        groupContentsViewer_2 = new QGroupBox(ObserverWidgetConfig);
        groupContentsViewer_2->setObjectName(QStringLiteral("groupContentsViewer_2"));
        gridLayout_2 = new QGridLayout(groupContentsViewer_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(groupContentsViewer_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(44, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        comboWidgetMode2 = new QComboBox(groupContentsViewer_2);
        comboWidgetMode2->setObjectName(QStringLiteral("comboWidgetMode2"));
        comboWidgetMode2->setMinimumSize(QSize(150, 0));
        comboWidgetMode2->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(comboWidgetMode2, 0, 2, 1, 1);

        label_4 = new QLabel(groupContentsViewer_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(44, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 1, 1, 1);

        spinBoxRowHeight2 = new QSpinBox(groupContentsViewer_2);
        spinBoxRowHeight2->setObjectName(QStringLiteral("spinBoxRowHeight2"));
        spinBoxRowHeight2->setMinimum(17);
        spinBoxRowHeight2->setMaximum(30);

        gridLayout_2->addWidget(spinBoxRowHeight2, 1, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(143, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 2, 0, 1, 2);

        checkShowGrid2 = new QCheckBox(groupContentsViewer_2);
        checkShowGrid2->setObjectName(QStringLiteral("checkShowGrid2"));

        gridLayout_2->addWidget(checkShowGrid2, 2, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(203, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 3, 0, 1, 2);

        checkConfirmDeletes2 = new QCheckBox(groupContentsViewer_2);
        checkConfirmDeletes2->setObjectName(QStringLiteral("checkConfirmDeletes2"));

        gridLayout_2->addWidget(checkConfirmDeletes2, 3, 2, 1, 1);


        verticalLayout->addWidget(groupContentsViewer_2);

        verticalSpacer = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(comboWidgetMode1);
        label_2->setBuddy(spinBoxRowHeight1);
        label_3->setBuddy(comboWidgetMode2);
        label_4->setBuddy(spinBoxRowHeight2);
#endif // QT_NO_SHORTCUT

        retranslateUi(ObserverWidgetConfig);

        QMetaObject::connectSlotsByName(ObserverWidgetConfig);
    } // setupUi

    void retranslateUi(QWidget *ObserverWidgetConfig)
    {
        ObserverWidgetConfig->setWindowTitle(QApplication::translate("ObserverWidgetConfig", "Form", 0));
        groupContentsViewer->setTitle(QApplication::translate("ObserverWidgetConfig", "Top Widget:", 0));
        label->setText(QApplication::translate("ObserverWidgetConfig", "Default mode:", 0));
        comboWidgetMode1->clear();
        comboWidgetMode1->insertItems(0, QStringList()
         << QApplication::translate("ObserverWidgetConfig", "Table View", 0)
         << QApplication::translate("ObserverWidgetConfig", "Tree View", 0)
        );
        label_2->setText(QApplication::translate("ObserverWidgetConfig", "Default row heigth:", 0));
        checkShowGrid1->setText(QApplication::translate("ObserverWidgetConfig", "Show Grid", 0));
        checkConfirmDeletes1->setText(QApplication::translate("ObserverWidgetConfig", "Confirm Deletes", 0));
        groupContentsViewer_2->setTitle(QApplication::translate("ObserverWidgetConfig", "Bottom Widget:", 0));
        label_3->setText(QApplication::translate("ObserverWidgetConfig", "Default mode:", 0));
        comboWidgetMode2->clear();
        comboWidgetMode2->insertItems(0, QStringList()
         << QApplication::translate("ObserverWidgetConfig", "Table View", 0)
         << QApplication::translate("ObserverWidgetConfig", "Tree View", 0)
        );
        label_4->setText(QApplication::translate("ObserverWidgetConfig", "Default row heigth:", 0));
        checkShowGrid2->setText(QApplication::translate("ObserverWidgetConfig", "Show Grid", 0));
        checkConfirmDeletes2->setText(QApplication::translate("ObserverWidgetConfig", "Confirm Deletes", 0));
    } // retranslateUi

};

namespace Ui {
    class ObserverWidgetConfig: public Ui_ObserverWidgetConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSERVERWIDGETCONFIG_H
