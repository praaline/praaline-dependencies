/********************************************************************************
** Form generated from reading UI file 'ConfigurationWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATIONWIDGET_H
#define UI_CONFIGURATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigurationWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetTopModeWidgetHolder;
    QWidget *widgetObsWidgetHolder;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitterLeftRightDisplay;
    QWidget *configPagesWidgetHolder;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QFrame *configWidget;
    QLabel *lblPageIcon;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblPageHeader;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *ConfigurationWidget)
    {
        if (ConfigurationWidget->objectName().isEmpty())
            ConfigurationWidget->setObjectName(QStringLiteral("ConfigurationWidget"));
        ConfigurationWidget->resize(795, 521);
        verticalLayout = new QVBoxLayout(ConfigurationWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetTopModeWidgetHolder = new QWidget(ConfigurationWidget);
        widgetTopModeWidgetHolder->setObjectName(QStringLiteral("widgetTopModeWidgetHolder"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetTopModeWidgetHolder->sizePolicy().hasHeightForWidth());
        widgetTopModeWidgetHolder->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetTopModeWidgetHolder);

        widgetObsWidgetHolder = new QWidget(ConfigurationWidget);
        widgetObsWidgetHolder->setObjectName(QStringLiteral("widgetObsWidgetHolder"));
        horizontalLayout = new QHBoxLayout(widgetObsWidgetHolder);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        splitterLeftRightDisplay = new QSplitter(widgetObsWidgetHolder);
        splitterLeftRightDisplay->setObjectName(QStringLiteral("splitterLeftRightDisplay"));
        splitterLeftRightDisplay->setOrientation(Qt::Horizontal);
        configPagesWidgetHolder = new QWidget(splitterLeftRightDisplay);
        configPagesWidgetHolder->setObjectName(QStringLiteral("configPagesWidgetHolder"));
        configPagesWidgetHolder->setMinimumSize(QSize(210, 0));
        configPagesWidgetHolder->setMaximumSize(QSize(210, 16777215));
        splitterLeftRightDisplay->addWidget(configPagesWidgetHolder);
        layoutWidget = new QWidget(splitterLeftRightDisplay);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        configWidget = new QFrame(layoutWidget);
        configWidget->setObjectName(QStringLiteral("configWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(configWidget->sizePolicy().hasHeightForWidth());
        configWidget->setSizePolicy(sizePolicy1);
        configWidget->setMaximumSize(QSize(16777215, 16777215));
        configWidget->setFrameShape(QFrame::NoFrame);
        configWidget->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(configWidget, 1, 0, 1, 3);

        lblPageIcon = new QLabel(layoutWidget);
        lblPageIcon->setObjectName(QStringLiteral("lblPageIcon"));
        lblPageIcon->setMinimumSize(QSize(32, 32));
        lblPageIcon->setMaximumSize(QSize(32, 32));

        gridLayout->addWidget(lblPageIcon, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(383, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        lblPageHeader = new QLabel(layoutWidget);
        lblPageHeader->setObjectName(QStringLiteral("lblPageHeader"));
        lblPageHeader->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        lblPageHeader->setFont(font);
        lblPageHeader->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lblPageHeader, 0, 1, 1, 1);

        splitterLeftRightDisplay->addWidget(layoutWidget);

        horizontalLayout->addWidget(splitterLeftRightDisplay);


        verticalLayout->addWidget(widgetObsWidgetHolder);

        frame = new QFrame(ConfigurationWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addWidget(frame);


        retranslateUi(ConfigurationWidget);

        QMetaObject::connectSlotsByName(ConfigurationWidget);
    } // setupUi

    void retranslateUi(QWidget *ConfigurationWidget)
    {
        ConfigurationWidget->setWindowTitle(QApplication::translate("ConfigurationWidget", "Settings", Q_NULLPTR));
        lblPageIcon->setText(QString());
        lblPageHeader->setText(QApplication::translate("ConfigurationWidget", "No Page Selected", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConfigurationWidget: public Ui_ConfigurationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATIONWIDGET_H
