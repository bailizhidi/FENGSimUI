/********************************************************************************
** Form generated from reading UI file 'OCPoroDockWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCPORODOCKWIDGET_H
#define UI_OCPORODOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OCPoroDockWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OCPoroDockWidget)
    {
        if (OCPoroDockWidget->objectName().isEmpty())
            OCPoroDockWidget->setObjectName(QString::fromUtf8("OCPoroDockWidget"));
        OCPoroDockWidget->resize(212, 354);
        verticalLayout = new QVBoxLayout(OCPoroDockWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(OCPoroDockWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(25, 25));
        pushButton->setMaximumSize(QSize(25, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/amwind/figure/am_wind/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(pushButton);

        progressBar = new QProgressBar(frame);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMinimumSize(QSize(0, 25));
        progressBar->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setPointSize(9);
        progressBar->setFont(font);
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(25, 25));
        pushButton_2->setMaximumSize(QSize(25, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/amwind/figure/am_wind/animation.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);

        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 25));
        comboBox->setMaximumSize(QSize(16777215, 25));
        comboBox->setFont(font);

        verticalLayout_2->addWidget(comboBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(25, 25));
        pushButton_3->setMaximumSize(QSize(25, 25));
        pushButton_3->setIcon(icon);

        horizontalLayout_2->addWidget(pushButton_3);

        comboBox_2 = new QComboBox(frame);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(frame);


        retranslateUi(OCPoroDockWidget);

        QMetaObject::connectSlotsByName(OCPoroDockWidget);
    } // setupUi

    void retranslateUi(QWidget *OCPoroDockWidget)
    {
        OCPoroDockWidget->setWindowTitle(QApplication::translate("OCPoroDockWidget", "Form", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OCPoroDockWidget: public Ui_OCPoroDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCPORODOCKWIDGET_H
