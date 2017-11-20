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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExampleMode
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnNewTask;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QWidget *widgetResultsHolder;
    QPushButton *btnShortTask;
    QPushButton *btnLongTask;
    QPushButton *btnDoxygen;

    void setupUi(QMainWindow *ExampleMode)
    {
        if (ExampleMode->objectName().isEmpty())
            ExampleMode->setObjectName(QStringLiteral("ExampleMode"));
        ExampleMode->resize(745, 394);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExampleMode->sizePolicy().hasHeightForWidth());
        ExampleMode->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(ExampleMode);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 6);

        horizontalSpacer = new QSpacerItem(258, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        btnNewTask = new QPushButton(centralwidget);
        btnNewTask->setObjectName(QStringLiteral("btnNewTask"));

        gridLayout->addWidget(btnNewTask, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(288, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 5, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 6);

        widgetResultsHolder = new QWidget(centralwidget);
        widgetResultsHolder->setObjectName(QStringLiteral("widgetResultsHolder"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetResultsHolder->sizePolicy().hasHeightForWidth());
        widgetResultsHolder->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(widgetResultsHolder, 3, 0, 1, 6);

        btnShortTask = new QPushButton(centralwidget);
        btnShortTask->setObjectName(QStringLiteral("btnShortTask"));

        gridLayout->addWidget(btnShortTask, 1, 2, 1, 1);

        btnLongTask = new QPushButton(centralwidget);
        btnLongTask->setObjectName(QStringLiteral("btnLongTask"));

        gridLayout->addWidget(btnLongTask, 1, 3, 1, 1);

        btnDoxygen = new QPushButton(centralwidget);
        btnDoxygen->setObjectName(QStringLiteral("btnDoxygen"));

        gridLayout->addWidget(btnDoxygen, 1, 4, 1, 1);

        ExampleMode->setCentralWidget(centralwidget);

        retranslateUi(ExampleMode);

        QMetaObject::connectSlotsByName(ExampleMode);
    } // setupUi

    void retranslateUi(QMainWindow *ExampleMode)
    {
        ExampleMode->setWindowTitle(QApplication::translate("ExampleMode", "Environments Widget", 0));
        label->setText(QApplication::translate("ExampleMode", "This mode allows you to spawn new tasks. Click any of the buttons below to see what happens.", 0));
        btnNewTask->setText(QApplication::translate("ExampleMode", "Queue New Directory Search Task", 0));
        btnShortTask->setText(QApplication::translate("ExampleMode", "Start Short Timer Task", 0));
        btnLongTask->setText(QApplication::translate("ExampleMode", "Start Long Timer Task", 0));
        btnDoxygen->setText(QApplication::translate("ExampleMode", "Launch Doxygen By Specifying A Doxyfile", 0));
    } // retranslateUi

};

namespace Ui {
    class ExampleMode: public Ui_ExampleMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLEMODE_H
