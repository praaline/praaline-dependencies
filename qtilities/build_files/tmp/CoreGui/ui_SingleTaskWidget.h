/********************************************************************************
** Form generated from reading UI file 'SingleTaskWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLETASKWIDGET_H
#define UI_SINGLETASKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SingleTaskWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widgetLeftButtonsHolder;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *btnStart;
    QToolButton *btnShowLog;
    QLabel *lblTaskName;
    QSpacerItem *middleSpacer;
    QProgressBar *progressBar;
    QWidget *widgetRightButtonsHolder;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnPause;
    QToolButton *btnStop;

    void setupUi(QWidget *SingleTaskWidget)
    {
        if (SingleTaskWidget->objectName().isEmpty())
            SingleTaskWidget->setObjectName(QStringLiteral("SingleTaskWidget"));
        SingleTaskWidget->resize(393, 20);
        SingleTaskWidget->setProperty("dockNestingEnabled", QVariant(false));
        horizontalLayout = new QHBoxLayout(SingleTaskWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widgetLeftButtonsHolder = new QWidget(SingleTaskWidget);
        widgetLeftButtonsHolder->setObjectName(QStringLiteral("widgetLeftButtonsHolder"));
        widgetLeftButtonsHolder->setMinimumSize(QSize(0, 0));
        widgetLeftButtonsHolder->setMaximumSize(QSize(16777215, 16777215));
        widgetLeftButtonsHolder->setLayoutDirection(Qt::RightToLeft);
        horizontalLayout_3 = new QHBoxLayout(widgetLeftButtonsHolder);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnStart = new QToolButton(widgetLeftButtonsHolder);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnStart->sizePolicy().hasHeightForWidth());
        btnStart->setSizePolicy(sizePolicy);
        btnStart->setMinimumSize(QSize(20, 20));
        btnStart->setMaximumSize(QSize(16777215, 20));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/task_stop_22x22.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnStart->setIcon(icon);
        btnStart->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnStart->setAutoRaise(true);

        horizontalLayout_3->addWidget(btnStart);

        btnShowLog = new QToolButton(widgetLeftButtonsHolder);
        btnShowLog->setObjectName(QStringLiteral("btnShowLog"));
        sizePolicy.setHeightForWidth(btnShowLog->sizePolicy().hasHeightForWidth());
        btnShowLog->setSizePolicy(sizePolicy);
        btnShowLog->setMinimumSize(QSize(20, 20));
        btnShowLog->setMaximumSize(QSize(16777215, 20));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/delete_red_16x16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnShowLog->setIcon(icon1);
        btnShowLog->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnShowLog->setAutoRaise(true);

        horizontalLayout_3->addWidget(btnShowLog);


        horizontalLayout->addWidget(widgetLeftButtonsHolder);

        lblTaskName = new QLabel(SingleTaskWidget);
        lblTaskName->setObjectName(QStringLiteral("lblTaskName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblTaskName->sizePolicy().hasHeightForWidth());
        lblTaskName->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lblTaskName->setFont(font);

        horizontalLayout->addWidget(lblTaskName);

        middleSpacer = new QSpacerItem(2, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(middleSpacer);

        progressBar = new QProgressBar(SingleTaskWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy2);
        progressBar->setMinimumSize(QSize(100, 0));
        progressBar->setMaximumSize(QSize(16777215, 8));
        QFont font1;
        font1.setPointSize(6);
        progressBar->setFont(font1);
        progressBar->setValue(24);
        progressBar->setTextVisible(false);

        horizontalLayout->addWidget(progressBar);

        widgetRightButtonsHolder = new QWidget(SingleTaskWidget);
        widgetRightButtonsHolder->setObjectName(QStringLiteral("widgetRightButtonsHolder"));
        widgetRightButtonsHolder->setMinimumSize(QSize(42, 0));
        widgetRightButtonsHolder->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_2 = new QHBoxLayout(widgetRightButtonsHolder);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnPause = new QToolButton(widgetRightButtonsHolder);
        btnPause->setObjectName(QStringLiteral("btnPause"));
        sizePolicy.setHeightForWidth(btnPause->sizePolicy().hasHeightForWidth());
        btnPause->setSizePolicy(sizePolicy);
        btnPause->setMinimumSize(QSize(20, 20));
        btnPause->setMaximumSize(QSize(16777215, 20));
        btnPause->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnPause->setAutoRaise(true);

        horizontalLayout_2->addWidget(btnPause);

        btnStop = new QToolButton(widgetRightButtonsHolder);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        sizePolicy.setHeightForWidth(btnStop->sizePolicy().hasHeightForWidth());
        btnStop->setSizePolicy(sizePolicy);
        btnStop->setMinimumSize(QSize(20, 20));
        btnStop->setMaximumSize(QSize(16777215, 20));
        btnStop->setIcon(icon1);
        btnStop->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnStop->setAutoRaise(true);

        horizontalLayout_2->addWidget(btnStop);


        horizontalLayout->addWidget(widgetRightButtonsHolder);


        retranslateUi(SingleTaskWidget);

        QMetaObject::connectSlotsByName(SingleTaskWidget);
    } // setupUi

    void retranslateUi(QWidget *SingleTaskWidget)
    {
        SingleTaskWidget->setWindowTitle(QApplication::translate("SingleTaskWidget", "SingleTaskWidget", Q_NULLPTR));
        btnStart->setText(QString());
        btnShowLog->setText(QString());
        lblTaskName->setText(QApplication::translate("SingleTaskWidget", "Task Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnPause->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btnPause->setText(QString());
        btnStop->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SingleTaskWidget: public Ui_SingleTaskWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLETASKWIDGET_H
