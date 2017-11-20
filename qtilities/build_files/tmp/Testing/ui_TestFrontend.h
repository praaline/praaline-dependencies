/********************************************************************************
** Form generated from reading UI file 'TestFrontend.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTFRONTEND_H
#define UI_TESTFRONTEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestFrontend
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QWidget *widgetTestListHolder;
    QLabel *txtResults;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnExecute;
    QPushButton *btnShowLog;
    QPushButton *btnClose;

    void setupUi(QWidget *TestFrontend)
    {
        if (TestFrontend->objectName().isEmpty())
            TestFrontend->setObjectName(QStringLiteral("TestFrontend"));
        TestFrontend->resize(517, 615);
        TestFrontend->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(TestFrontend);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(TestFrontend);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 6);

        groupBox = new QGroupBox(TestFrontend);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setTitle(QStringLiteral("Registered Tests:"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widgetTestListHolder = new QWidget(groupBox);
        widgetTestListHolder->setObjectName(QStringLiteral("widgetTestListHolder"));

        verticalLayout->addWidget(widgetTestListHolder);


        gridLayout->addWidget(groupBox, 1, 0, 1, 6);

        txtResults = new QLabel(TestFrontend);
        txtResults->setObjectName(QStringLiteral("txtResults"));

        gridLayout->addWidget(txtResults, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(301, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 2);

        btnExecute = new QPushButton(TestFrontend);
        btnExecute->setObjectName(QStringLiteral("btnExecute"));
        btnExecute->setText(QStringLiteral("Execute"));

        gridLayout->addWidget(btnExecute, 2, 5, 1, 1);

        btnShowLog = new QPushButton(TestFrontend);
        btnShowLog->setObjectName(QStringLiteral("btnShowLog"));
        btnShowLog->setText(QStringLiteral("Show Log"));

        gridLayout->addWidget(btnShowLog, 2, 4, 1, 1);

        btnClose = new QPushButton(TestFrontend);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setText(QStringLiteral("Close"));

        gridLayout->addWidget(btnClose, 2, 3, 1, 1);


        retranslateUi(TestFrontend);
        QObject::connect(btnClose, SIGNAL(clicked()), TestFrontend, SLOT(close()));

        QMetaObject::connectSlotsByName(TestFrontend);
    } // setupUi

    void retranslateUi(QWidget *TestFrontend)
    {
        label->setText(QApplication::translate("TestFrontend", "Qtilities Unit Tester", Q_NULLPTR));
        txtResults->setText(QApplication::translate("TestFrontend", "Test results: Press \"Execute\" to run tests.", Q_NULLPTR));
        Q_UNUSED(TestFrontend);
    } // retranslateUi

};

namespace Ui {
    class TestFrontend: public Ui_TestFrontend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTFRONTEND_H
