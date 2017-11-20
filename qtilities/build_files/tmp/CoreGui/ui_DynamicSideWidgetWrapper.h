/********************************************************************************
** Form generated from reading UI file 'DynamicSideWidgetWrapper.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DYNAMICSIDEWIDGETWRAPPER_H
#define UI_DYNAMICSIDEWIDGETWRAPPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DynamicSideWidgetWrapper
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QComboBox *widgetCombo;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnNew;
    QToolButton *btnClose;
    QWidget *centralwidget;

    void setupUi(QWidget *DynamicSideWidgetWrapper)
    {
        if (DynamicSideWidgetWrapper->objectName().isEmpty())
            DynamicSideWidgetWrapper->setObjectName(QStringLiteral("DynamicSideWidgetWrapper"));
        DynamicSideWidgetWrapper->resize(294, 313);
        verticalLayout = new QVBoxLayout(DynamicSideWidgetWrapper);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(DynamicSideWidgetWrapper);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 1, 0, 2);
        widgetCombo = new QComboBox(frame);
        widgetCombo->setObjectName(QStringLiteral("widgetCombo"));

        horizontalLayout->addWidget(widgetCombo);

        horizontalSpacer = new QSpacerItem(2, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnNew = new QToolButton(frame);
        btnNew->setObjectName(QStringLiteral("btnNew"));
        btnNew->setAutoRaise(true);

        horizontalLayout->addWidget(btnNew);

        btnClose = new QToolButton(frame);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setAutoRaise(true);

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addWidget(frame);

        centralwidget = new QWidget(DynamicSideWidgetWrapper);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(centralwidget);


        retranslateUi(DynamicSideWidgetWrapper);

        QMetaObject::connectSlotsByName(DynamicSideWidgetWrapper);
    } // setupUi

    void retranslateUi(QWidget *DynamicSideWidgetWrapper)
    {
        DynamicSideWidgetWrapper->setWindowTitle(QApplication::translate("DynamicSideWidgetWrapper", "MainWindow", Q_NULLPTR));
        btnNew->setText(QApplication::translate("DynamicSideWidgetWrapper", "...", Q_NULLPTR));
        btnClose->setText(QApplication::translate("DynamicSideWidgetWrapper", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DynamicSideWidgetWrapper: public Ui_DynamicSideWidgetWrapper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DYNAMICSIDEWIDGETWRAPPER_H
