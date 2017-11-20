/********************************************************************************
** Form generated from reading UI file 'SideWidgetFileSystem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDEWIDGETFILESYSTEM_H
#define UI_SIDEWIDGETFILESYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SideWidgetFileSystem
{
public:
    QGridLayout *gridLayout;
    QLineEdit *txtCurrentPath;
    QTreeView *treeView;
    QPushButton *btnBrowse;
    QPushButton *btnCdUp;

    void setupUi(QWidget *SideWidgetFileSystem)
    {
        if (SideWidgetFileSystem->objectName().isEmpty())
            SideWidgetFileSystem->setObjectName(QStringLiteral("SideWidgetFileSystem"));
        SideWidgetFileSystem->resize(240, 426);
        gridLayout = new QGridLayout(SideWidgetFileSystem);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(1);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        txtCurrentPath = new QLineEdit(SideWidgetFileSystem);
        txtCurrentPath->setObjectName(QStringLiteral("txtCurrentPath"));
        txtCurrentPath->setReadOnly(false);

        gridLayout->addWidget(txtCurrentPath, 0, 0, 1, 1);

        treeView = new QTreeView(SideWidgetFileSystem);
        treeView->setObjectName(QStringLiteral("treeView"));

        gridLayout->addWidget(treeView, 1, 0, 1, 3);

        btnBrowse = new QPushButton(SideWidgetFileSystem);
        btnBrowse->setObjectName(QStringLiteral("btnBrowse"));
        btnBrowse->setMinimumSize(QSize(0, 0));
        btnBrowse->setMaximumSize(QSize(20, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/qtilities/coregui/icons/file_open_16x16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnBrowse->setIcon(icon);
        btnBrowse->setFlat(true);

        gridLayout->addWidget(btnBrowse, 0, 2, 1, 1);

        btnCdUp = new QPushButton(SideWidgetFileSystem);
        btnCdUp->setObjectName(QStringLiteral("btnCdUp"));
        btnCdUp->setMaximumSize(QSize(20, 16777215));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/qtilities/coregui/icons/up_16x16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCdUp->setIcon(icon1);
        btnCdUp->setFlat(true);

        gridLayout->addWidget(btnCdUp, 0, 1, 1, 1);


        retranslateUi(SideWidgetFileSystem);

        QMetaObject::connectSlotsByName(SideWidgetFileSystem);
    } // setupUi

    void retranslateUi(QWidget *SideWidgetFileSystem)
    {
        SideWidgetFileSystem->setWindowTitle(QApplication::translate("SideWidgetFileSystem", "Object Scope & Context Details", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnBrowse->setToolTip(QApplication::translate("SideWidgetFileSystem", "Browse for new directory", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnBrowse->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnCdUp->setToolTip(QApplication::translate("SideWidgetFileSystem", "Go to parent directory", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnCdUp->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SideWidgetFileSystem: public Ui_SideWidgetFileSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDEWIDGETFILESYSTEM_H
