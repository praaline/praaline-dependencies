/********************************************************************************
** Form generated from reading UI file 'AboutWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qti_private_AboutWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelImage;
    QLabel *labelVersion;
    QLabel *labelCopyright;
    QSpacerItem *verticalSpacer;
    QLabel *labelExtendedDescription;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *labelWebsite;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QWidget *qti_private_AboutWindow)
    {
        if (qti_private_AboutWindow->objectName().isEmpty())
            qti_private_AboutWindow->setObjectName(QStringLiteral("qti_private_AboutWindow"));
        qti_private_AboutWindow->resize(318, 454);
        qti_private_AboutWindow->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(qti_private_AboutWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelImage = new QLabel(qti_private_AboutWindow);
        labelImage->setObjectName(QStringLiteral("labelImage"));
        labelImage->setPixmap(QPixmap(QString::fromUtf8(":/qtilities/coregui/images/blueontrans_300x300.png")));
        labelImage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelImage);

        labelVersion = new QLabel(qti_private_AboutWindow);
        labelVersion->setObjectName(QStringLiteral("labelVersion"));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        labelVersion->setFont(font);
        labelVersion->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelVersion);

        labelCopyright = new QLabel(qti_private_AboutWindow);
        labelCopyright->setObjectName(QStringLiteral("labelCopyright"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        labelCopyright->setFont(font1);
        labelCopyright->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelCopyright);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        labelExtendedDescription = new QLabel(qti_private_AboutWindow);
        labelExtendedDescription->setObjectName(QStringLiteral("labelExtendedDescription"));
        QFont font2;
        font2.setPointSize(10);
        labelExtendedDescription->setFont(font2);
        labelExtendedDescription->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelExtendedDescription);

        line = new QFrame(qti_private_AboutWindow);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelWebsite = new QLabel(qti_private_AboutWindow);
        labelWebsite->setObjectName(QStringLiteral("labelWebsite"));
        labelWebsite->setFont(font1);
        labelWebsite->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWebsite->setOpenExternalLinks(true);

        horizontalLayout->addWidget(labelWebsite);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(qti_private_AboutWindow);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(qti_private_AboutWindow);
        QObject::connect(btnClose, SIGNAL(clicked()), qti_private_AboutWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(qti_private_AboutWindow);
    } // setupUi

    void retranslateUi(QWidget *qti_private_AboutWindow)
    {
        labelImage->setText(QString());
        labelVersion->setText(QApplication::translate("qti_private_AboutWindow", "Version", Q_NULLPTR));
        labelCopyright->setText(QApplication::translate("qti_private_AboutWindow", "Copyright", Q_NULLPTR));
        labelExtendedDescription->setText(QApplication::translate("qti_private_AboutWindow", "This application uses the Qtilities libraries.", Q_NULLPTR));
        labelWebsite->setText(QApplication::translate("qti_private_AboutWindow", "Website", Q_NULLPTR));
        btnClose->setText(QApplication::translate("qti_private_AboutWindow", "Close", Q_NULLPTR));
        Q_UNUSED(qti_private_AboutWindow);
    } // retranslateUi

};

namespace Ui {
    class qti_private_AboutWindow: public Ui_qti_private_AboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
