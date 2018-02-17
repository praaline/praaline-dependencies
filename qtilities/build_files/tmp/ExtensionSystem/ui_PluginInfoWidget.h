/********************************************************************************
** Form generated from reading UI file 'PluginInfoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGININFOWIDGET_H
#define UI_PLUGININFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginInfoWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblStateImage;
    QLabel *lblPluginName;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *lblState;
    QLabel *label_3;
    QLabel *lblVersion;
    QLabel *label_11;
    QLineEdit *txtFileName;
    QLabel *label_4;
    QPlainTextEdit *txtDescription;
    QLabel *label_6;
    QLabel *label_2;
    QListWidget *listCompatabilityVersions;
    QLabel *label_5;
    QPlainTextEdit *txtCopyright;
    QLabel *label_10;
    QPlainTextEdit *txtLicense;
    QLabel *label_7;
    QLabel *lblPublisher;
    QLabel *label_8;
    QLabel *lblWebsite;
    QLabel *label_9;
    QLabel *lblContact;
    QListWidget *listErrorMessages;
    QFrame *line_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClose;

    void setupUi(QWidget *PluginInfoWidget)
    {
        if (PluginInfoWidget->objectName().isEmpty())
            PluginInfoWidget->setObjectName(QLatin1String("PluginInfoWidget"));
        PluginInfoWidget->resize(491, 558);
        gridLayout = new QGridLayout(PluginInfoWidget);
        gridLayout->setObjectName(QLatin1String("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QLatin1String("horizontalLayout"));
        lblStateImage = new QLabel(PluginInfoWidget);
        lblStateImage->setObjectName(QLatin1String("lblStateImage"));

        horizontalLayout->addWidget(lblStateImage);

        lblPluginName = new QLabel(PluginInfoWidget);
        lblPluginName->setObjectName(QLatin1String("lblPluginName"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lblPluginName->setFont(font);

        horizontalLayout->addWidget(lblPluginName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        line = new QFrame(PluginInfoWidget);
        line->setObjectName(QLatin1String("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QLatin1String("formLayout"));
        label = new QLabel(PluginInfoWidget);
        label->setObjectName(QLatin1String("label"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lblState = new QLabel(PluginInfoWidget);
        lblState->setObjectName(QLatin1String("lblState"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lblState);

        label_3 = new QLabel(PluginInfoWidget);
        label_3->setObjectName(QLatin1String("label_3"));
        label_3->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lblVersion = new QLabel(PluginInfoWidget);
        lblVersion->setObjectName(QLatin1String("lblVersion"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lblVersion);

        label_11 = new QLabel(PluginInfoWidget);
        label_11->setObjectName(QLatin1String("label_11"));
        label_11->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_11);

        txtFileName = new QLineEdit(PluginInfoWidget);
        txtFileName->setObjectName(QLatin1String("txtFileName"));
        txtFileName->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, txtFileName);

        label_4 = new QLabel(PluginInfoWidget);
        label_4->setObjectName(QLatin1String("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtDescription = new QPlainTextEdit(PluginInfoWidget);
        txtDescription->setObjectName(QLatin1String("txtDescription"));
        txtDescription->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, txtDescription);

        label_6 = new QLabel(PluginInfoWidget);
        label_6->setObjectName(QLatin1String("label_6"));
        label_6->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        label_2 = new QLabel(PluginInfoWidget);
        label_2->setObjectName(QLatin1String("label_2"));
        label_2->setMinimumSize(QSize(122, 0));
        label_2->setMaximumSize(QSize(122, 16777215));
        label_2->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_2);

        listCompatabilityVersions = new QListWidget(PluginInfoWidget);
        listCompatabilityVersions->setObjectName(QLatin1String("listCompatabilityVersions"));
        listCompatabilityVersions->setSortingEnabled(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, listCompatabilityVersions);

        label_5 = new QLabel(PluginInfoWidget);
        label_5->setObjectName(QLatin1String("label_5"));
        label_5->setFont(font1);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        txtCopyright = new QPlainTextEdit(PluginInfoWidget);
        txtCopyright->setObjectName(QLatin1String("txtCopyright"));
        txtCopyright->setReadOnly(true);
        txtCopyright->setBackgroundVisible(false);

        formLayout->setWidget(6, QFormLayout::FieldRole, txtCopyright);

        label_10 = new QLabel(PluginInfoWidget);
        label_10->setObjectName(QLatin1String("label_10"));
        label_10->setFont(font1);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_10);

        txtLicense = new QPlainTextEdit(PluginInfoWidget);
        txtLicense->setObjectName(QLatin1String("txtLicense"));
        txtLicense->setReadOnly(true);

        formLayout->setWidget(7, QFormLayout::FieldRole, txtLicense);

        label_7 = new QLabel(PluginInfoWidget);
        label_7->setObjectName(QLatin1String("label_7"));
        label_7->setMinimumSize(QSize(122, 0));
        label_7->setMaximumSize(QSize(122, 16777215));
        label_7->setFont(font1);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_7);

        lblPublisher = new QLabel(PluginInfoWidget);
        lblPublisher->setObjectName(QLatin1String("lblPublisher"));

        formLayout->setWidget(8, QFormLayout::FieldRole, lblPublisher);

        label_8 = new QLabel(PluginInfoWidget);
        label_8->setObjectName(QLatin1String("label_8"));
        label_8->setFont(font1);

        formLayout->setWidget(9, QFormLayout::LabelRole, label_8);

        lblWebsite = new QLabel(PluginInfoWidget);
        lblWebsite->setObjectName(QLatin1String("lblWebsite"));

        formLayout->setWidget(9, QFormLayout::FieldRole, lblWebsite);

        label_9 = new QLabel(PluginInfoWidget);
        label_9->setObjectName(QLatin1String("label_9"));
        label_9->setFont(font1);

        formLayout->setWidget(10, QFormLayout::LabelRole, label_9);

        lblContact = new QLabel(PluginInfoWidget);
        lblContact->setObjectName(QLatin1String("lblContact"));

        formLayout->setWidget(10, QFormLayout::FieldRole, lblContact);

        listErrorMessages = new QListWidget(PluginInfoWidget);
        listErrorMessages->setObjectName(QLatin1String("listErrorMessages"));

        formLayout->setWidget(4, QFormLayout::FieldRole, listErrorMessages);


        gridLayout->addLayout(formLayout, 2, 0, 1, 2);

        line_3 = new QFrame(PluginInfoWidget);
        line_3->setObjectName(QLatin1String("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 3, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(305, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 0, 2, 1);

        btnClose = new QPushButton(PluginInfoWidget);
        btnClose->setObjectName(QLatin1String("btnClose"));

        gridLayout->addWidget(btnClose, 5, 1, 1, 1);


        retranslateUi(PluginInfoWidget);

        QMetaObject::connectSlotsByName(PluginInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *PluginInfoWidget)
    {
        PluginInfoWidget->setWindowTitle(QApplication::translate("PluginInfoWidget", "Plugin Details", nullptr));
        lblStateImage->setText(QString());
        lblPluginName->setText(QApplication::translate("PluginInfoWidget", "Plugin Name", nullptr));
        label->setText(QApplication::translate("PluginInfoWidget", "State", nullptr));
        lblState->setText(QApplication::translate("PluginInfoWidget", "Functional", nullptr));
        label_3->setText(QApplication::translate("PluginInfoWidget", "Version", nullptr));
        lblVersion->setText(QApplication::translate("PluginInfoWidget", "Version", nullptr));
        label_11->setText(QApplication::translate("PluginInfoWidget", "File Name", nullptr));
        label_4->setText(QApplication::translate("PluginInfoWidget", "Description", nullptr));
        label_6->setText(QApplication::translate("PluginInfoWidget", "Error Messages", nullptr));
        label_2->setText(QApplication::translate("PluginInfoWidget", "Compatable Versions", nullptr));
        label_5->setText(QApplication::translate("PluginInfoWidget", "Copyright", nullptr));
        label_10->setText(QApplication::translate("PluginInfoWidget", "License", nullptr));
        label_7->setText(QApplication::translate("PluginInfoWidget", "Publisher", nullptr));
        lblPublisher->setText(QApplication::translate("PluginInfoWidget", "Publisher", nullptr));
        label_8->setText(QApplication::translate("PluginInfoWidget", "Website", nullptr));
        lblWebsite->setText(QApplication::translate("PluginInfoWidget", "Website", nullptr));
        label_9->setText(QApplication::translate("PluginInfoWidget", "Contact", nullptr));
        lblContact->setText(QApplication::translate("PluginInfoWidget", "Contact", nullptr));
        btnClose->setText(QApplication::translate("PluginInfoWidget", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginInfoWidget: public Ui_PluginInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGININFOWIDGET_H
