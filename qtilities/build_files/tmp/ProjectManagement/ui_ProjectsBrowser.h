/********************************************************************************
** Form generated from reading UI file 'ProjectsBrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTSBROWSER_H
#define UI_PROJECTSBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectsBrowser
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QListWidget *listWidgetRecent;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClearRecent;
    QPushButton *btnRemoveNonExisting;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *listCustomCategories;
    QWidget *widgetCustomBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *ProjectsBrowser)
    {
        if (ProjectsBrowser->objectName().isEmpty())
            ProjectsBrowser->setObjectName(QLatin1String("ProjectsBrowser"));
        ProjectsBrowser->resize(602, 420);
        verticalLayout = new QVBoxLayout(ProjectsBrowser);
        verticalLayout->setObjectName(QLatin1String("verticalLayout"));
        tabWidget = new QTabWidget(ProjectsBrowser);
        tabWidget->setObjectName(QLatin1String("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QLatin1String("tab"));
        gridLayout = new QGridLayout(tab);
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QLatin1String("gridLayout"));
        listWidgetRecent = new QListWidget(tab);
        listWidgetRecent->setObjectName(QLatin1String("listWidgetRecent"));

        gridLayout->addWidget(listWidgetRecent, 0, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(488, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        btnClearRecent = new QPushButton(tab);
        btnClearRecent->setObjectName(QLatin1String("btnClearRecent"));

        gridLayout->addWidget(btnClearRecent, 1, 0, 1, 1);

        btnRemoveNonExisting = new QPushButton(tab);
        btnRemoveNonExisting->setObjectName(QLatin1String("btnRemoveNonExisting"));

        gridLayout->addWidget(btnRemoveNonExisting, 1, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QLatin1String("tab_2"));
        horizontalLayout = new QHBoxLayout(tab_2);
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
#endif
        horizontalLayout->setObjectName(QLatin1String("horizontalLayout"));
        listCustomCategories = new QListWidget(tab_2);
        listCustomCategories->setObjectName(QLatin1String("listCustomCategories"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listCustomCategories->sizePolicy().hasHeightForWidth());
        listCustomCategories->setSizePolicy(sizePolicy);
        listCustomCategories->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(listCustomCategories);

        widgetCustomBrowser = new QWidget(tab_2);
        widgetCustomBrowser->setObjectName(QLatin1String("widgetCustomBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetCustomBrowser->sizePolicy().hasHeightForWidth());
        widgetCustomBrowser->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(widgetCustomBrowser);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(ProjectsBrowser);
        buttonBox->setObjectName(QLatin1String("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ProjectsBrowser);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ProjectsBrowser);
    } // setupUi

    void retranslateUi(QWidget *ProjectsBrowser)
    {
        ProjectsBrowser->setWindowTitle(QApplication::translate("ProjectsBrowser", "Projects Browser", nullptr));
        btnClearRecent->setText(QApplication::translate("ProjectsBrowser", "Clear", nullptr));
        btnRemoveNonExisting->setText(QApplication::translate("ProjectsBrowser", "Remove Non Existing", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ProjectsBrowser", "Recent Projects", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ProjectsBrowser", "Project Paths", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectsBrowser: public Ui_ProjectsBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTSBROWSER_H
