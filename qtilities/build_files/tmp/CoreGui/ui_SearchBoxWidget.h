/********************************************************************************
** Form generated from reading UI file 'SearchBoxWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBOXWIDGET_H
#define UI_SEARCHBOXWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchBoxWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetSearch;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblSearchIcon;
    QLineEdit *txtSearchString;
    QToolButton *btnFindPrevious;
    QToolButton *btnFindNext;
    QToolButton *btnSearchOptions;
    QSpacerItem *spacerTop;
    QLabel *txtInfoMessage;
    QToolButton *btnClose;
    QWidget *widgetReplace;
    QHBoxLayout *horizontalLayout;
    QLabel *lblReplacementIcon;
    QLineEdit *txtReplaceString;
    QToolButton *btnReplacePrevious;
    QToolButton *btnReplaceNext;
    QToolButton *btnReplaceAll;
    QSpacerItem *spacerBottom;
    QLabel *lblMessage;

    void setupUi(QWidget *SearchBoxWidget)
    {
        if (SearchBoxWidget->objectName().isEmpty())
            SearchBoxWidget->setObjectName(QStringLiteral("SearchBoxWidget"));
        SearchBoxWidget->resize(588, 52);
        SearchBoxWidget->setMinimumSize(QSize(0, 52));
        SearchBoxWidget->setMaximumSize(QSize(16777215, 52));
        verticalLayout = new QVBoxLayout(SearchBoxWidget);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetSearch = new QWidget(SearchBoxWidget);
        widgetSearch->setObjectName(QStringLiteral("widgetSearch"));
        horizontalLayout_2 = new QHBoxLayout(widgetSearch);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblSearchIcon = new QLabel(widgetSearch);
        lblSearchIcon->setObjectName(QStringLiteral("lblSearchIcon"));
        lblSearchIcon->setMinimumSize(QSize(16, 0));
        lblSearchIcon->setMaximumSize(QSize(16, 16777215));
        lblSearchIcon->setText(QStringLiteral("..."));

        horizontalLayout_2->addWidget(lblSearchIcon);

        txtSearchString = new QLineEdit(widgetSearch);
        txtSearchString->setObjectName(QStringLiteral("txtSearchString"));
        txtSearchString->setMinimumSize(QSize(180, 0));
        txtSearchString->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_2->addWidget(txtSearchString);

        btnFindPrevious = new QToolButton(widgetSearch);
        btnFindPrevious->setObjectName(QStringLiteral("btnFindPrevious"));
        btnFindPrevious->setAutoRaise(true);
        btnFindPrevious->setArrowType(Qt::LeftArrow);

        horizontalLayout_2->addWidget(btnFindPrevious);

        btnFindNext = new QToolButton(widgetSearch);
        btnFindNext->setObjectName(QStringLiteral("btnFindNext"));
        btnFindNext->setAutoRaise(true);
        btnFindNext->setArrowType(Qt::RightArrow);

        horizontalLayout_2->addWidget(btnFindNext);

        btnSearchOptions = new QToolButton(widgetSearch);
        btnSearchOptions->setObjectName(QStringLiteral("btnSearchOptions"));
        btnSearchOptions->setAutoRaise(true);
        btnSearchOptions->setArrowType(Qt::NoArrow);

        horizontalLayout_2->addWidget(btnSearchOptions);

        spacerTop = new QSpacerItem(243, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacerTop);

        txtInfoMessage = new QLabel(widgetSearch);
        txtInfoMessage->setObjectName(QStringLiteral("txtInfoMessage"));

        horizontalLayout_2->addWidget(txtInfoMessage);

        btnClose = new QToolButton(widgetSearch);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setAutoRaise(true);
        btnClose->setArrowType(Qt::DownArrow);

        horizontalLayout_2->addWidget(btnClose);


        verticalLayout->addWidget(widgetSearch);

        widgetReplace = new QWidget(SearchBoxWidget);
        widgetReplace->setObjectName(QStringLiteral("widgetReplace"));
        horizontalLayout = new QHBoxLayout(widgetReplace);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 3);
        lblReplacementIcon = new QLabel(widgetReplace);
        lblReplacementIcon->setObjectName(QStringLiteral("lblReplacementIcon"));
        lblReplacementIcon->setMinimumSize(QSize(16, 0));
        lblReplacementIcon->setMaximumSize(QSize(16, 16777215));
        lblReplacementIcon->setText(QStringLiteral(""));

        horizontalLayout->addWidget(lblReplacementIcon);

        txtReplaceString = new QLineEdit(widgetReplace);
        txtReplaceString->setObjectName(QStringLiteral("txtReplaceString"));
        txtReplaceString->setMinimumSize(QSize(180, 0));
        txtReplaceString->setMaximumSize(QSize(180, 16777215));

        horizontalLayout->addWidget(txtReplaceString);

        btnReplacePrevious = new QToolButton(widgetReplace);
        btnReplacePrevious->setObjectName(QStringLiteral("btnReplacePrevious"));
        btnReplacePrevious->setAutoRaise(true);
        btnReplacePrevious->setArrowType(Qt::LeftArrow);

        horizontalLayout->addWidget(btnReplacePrevious);

        btnReplaceNext = new QToolButton(widgetReplace);
        btnReplaceNext->setObjectName(QStringLiteral("btnReplaceNext"));
        btnReplaceNext->setAutoRaise(true);
        btnReplaceNext->setArrowType(Qt::RightArrow);

        horizontalLayout->addWidget(btnReplaceNext);

        btnReplaceAll = new QToolButton(widgetReplace);
        btnReplaceAll->setObjectName(QStringLiteral("btnReplaceAll"));
        btnReplaceAll->setAutoRaise(true);

        horizontalLayout->addWidget(btnReplaceAll);

        spacerBottom = new QSpacerItem(236, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerBottom);

        lblMessage = new QLabel(widgetReplace);
        lblMessage->setObjectName(QStringLiteral("lblMessage"));

        horizontalLayout->addWidget(lblMessage);


        verticalLayout->addWidget(widgetReplace);


        retranslateUi(SearchBoxWidget);

        QMetaObject::connectSlotsByName(SearchBoxWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchBoxWidget)
    {
        SearchBoxWidget->setWindowTitle(QApplication::translate("SearchBoxWidget", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        txtSearchString->setToolTip(QApplication::translate("SearchBoxWidget", "Find:", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        txtSearchString->setPlaceholderText(QApplication::translate("SearchBoxWidget", "Type to search...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnFindPrevious->setToolTip(QApplication::translate("SearchBoxWidget", "Find Previous", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnFindPrevious->setText(QApplication::translate("SearchBoxWidget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnFindNext->setToolTip(QApplication::translate("SearchBoxWidget", "Find Next", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnFindNext->setText(QApplication::translate("SearchBoxWidget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnSearchOptions->setToolTip(QApplication::translate("SearchBoxWidget", "Search Options", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSearchOptions->setText(QString());
        txtInfoMessage->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnClose->setToolTip(QApplication::translate("SearchBoxWidget", "Hide", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnClose->setText(QApplication::translate("SearchBoxWidget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        txtReplaceString->setToolTip(QApplication::translate("SearchBoxWidget", "Replace with:", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnReplacePrevious->setToolTip(QApplication::translate("SearchBoxWidget", "Replace Previous", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnReplacePrevious->setText(QApplication::translate("SearchBoxWidget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnReplaceNext->setToolTip(QApplication::translate("SearchBoxWidget", "Replace Next", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnReplaceNext->setText(QApplication::translate("SearchBoxWidget", "...", Q_NULLPTR));
        btnReplaceAll->setText(QApplication::translate("SearchBoxWidget", "Replace All", Q_NULLPTR));
        lblMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SearchBoxWidget: public Ui_SearchBoxWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBOXWIDGET_H
