/********************************************************************************
** Form generated from reading UI file 'PhysicsDockWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHYSICSDOCKWIDGET_H
#define UI_PHYSICSDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhysicsDockWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QFormLayout *formLayout;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_5;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_8;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_6;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_7;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *PhysicsDockWidget)
    {
        if (PhysicsDockWidget->objectName().isEmpty())
            PhysicsDockWidget->setObjectName(QString::fromUtf8("PhysicsDockWidget"));
        PhysicsDockWidget->resize(205, 379);
        verticalLayout = new QVBoxLayout(PhysicsDockWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(PhysicsDockWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(9);
        label_6->setFont(font);

        verticalLayout_2->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(tab);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 25));
        comboBox->setMaximumSize(QSize(16777215, 25));
        comboBox->setFont(font);

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(25, 25));
        pushButton->setMaximumSize(QSize(25, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        doubleSpinBox = new QDoubleSpinBox(tab);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimumSize(QSize(0, 25));
        doubleSpinBox->setMaximumSize(QSize(16777215, 25));
        doubleSpinBox->setFont(font);
        doubleSpinBox->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox->setDecimals(5);
        doubleSpinBox->setMinimum(-99999.000000000000000);
        doubleSpinBox->setMaximum(99999.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, doubleSpinBox);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        doubleSpinBox_2 = new QDoubleSpinBox(tab);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMinimumSize(QSize(0, 25));
        doubleSpinBox_2->setMaximumSize(QSize(16777215, 25));
        doubleSpinBox_2->setFont(font);
        doubleSpinBox_2->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox_2->setDecimals(5);
        doubleSpinBox_2->setMinimum(-99999.000000000000000);
        doubleSpinBox_2->setMaximum(99999.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_2);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        doubleSpinBox_3 = new QDoubleSpinBox(tab);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setMinimumSize(QSize(0, 25));
        doubleSpinBox_3->setMaximumSize(QSize(16777215, 25));
        doubleSpinBox_3->setFont(font);
        doubleSpinBox_3->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox_3->setDecimals(5);
        doubleSpinBox_3->setMinimum(-99999.000000000000000);
        doubleSpinBox_3->setMaximum(99999.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_3);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/selected_bnd.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout_4->addWidget(label_7);

        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout_4->addWidget(label);

        doubleSpinBox_5 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setMinimumSize(QSize(0, 25));
        doubleSpinBox_5->setFont(font);
        doubleSpinBox_5->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox_5->setDecimals(5);
        doubleSpinBox_5->setMaximum(100000000.000000000000000);
        doubleSpinBox_5->setValue(210.000000000000000);

        verticalLayout_4->addWidget(doubleSpinBox_5);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_4->addWidget(label_2);

        doubleSpinBox_4 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setMinimumSize(QSize(0, 25));
        doubleSpinBox_4->setFont(font);
        doubleSpinBox_4->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox_4->setDecimals(5);
        doubleSpinBox_4->setValue(0.300000000000000);

        verticalLayout_4->addWidget(doubleSpinBox_4);


        verticalLayout_5->addLayout(verticalLayout_4);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        verticalLayout_5->addWidget(label_10);

        doubleSpinBox_8 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_8->setObjectName(QString::fromUtf8("doubleSpinBox_8"));
        doubleSpinBox_8->setFont(font);
        doubleSpinBox_8->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox_8->setDecimals(5);
        doubleSpinBox_8->setValue(0.240000000000000);

        verticalLayout_5->addWidget(doubleSpinBox_8);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout_5->addWidget(label_8);

        doubleSpinBox_6 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));
        doubleSpinBox_6->setMinimumSize(QSize(0, 25));
        doubleSpinBox_6->setFont(font);
        doubleSpinBox_6->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox_6->setDecimals(5);

        verticalLayout_5->addWidget(doubleSpinBox_6);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        verticalLayout_5->addWidget(label_9);

        doubleSpinBox_7 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_7->setObjectName(QString::fromUtf8("doubleSpinBox_7"));
        doubleSpinBox_7->setMinimumSize(QSize(0, 25));
        doubleSpinBox_7->setFont(font);
        doubleSpinBox_7->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox_7->setDecimals(5);

        verticalLayout_5->addWidget(doubleSpinBox_7);

        line_2 = new QFrame(tab_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/selected_domain.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon2, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(PhysicsDockWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PhysicsDockWidget);
    } // setupUi

    void retranslateUi(QWidget *PhysicsDockWidget)
    {
        PhysicsDockWidget->setWindowTitle(QApplication::translate("PhysicsDockWidget", "Form", nullptr));
        label_6->setText(QApplication::translate("PhysicsDockWidget", "Boundary Conditions", nullptr));
        comboBox->setItemText(0, QApplication::translate("PhysicsDockWidget", "Dirichlet", nullptr));
        comboBox->setItemText(1, QApplication::translate("PhysicsDockWidget", "Neumann", nullptr));

        pushButton->setText(QString());
        label_3->setText(QApplication::translate("PhysicsDockWidget", "x", nullptr));
        label_4->setText(QApplication::translate("PhysicsDockWidget", "y", nullptr));
        label_5->setText(QApplication::translate("PhysicsDockWidget", "z", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        label_7->setText(QApplication::translate("PhysicsDockWidget", "Materials", nullptr));
        label->setText(QApplication::translate("PhysicsDockWidget", "Young's Modulus", nullptr));
        label_2->setText(QApplication::translate("PhysicsDockWidget", "Poisson Ratio", nullptr));
        label_10->setText(QApplication::translate("PhysicsDockWidget", "Yield", nullptr));
        label_8->setText(QApplication::translate("PhysicsDockWidget", "Initial Conditions", nullptr));
        label_9->setText(QApplication::translate("PhysicsDockWidget", "Source", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
    } // retranslateUi

};

namespace Ui {
    class PhysicsDockWidget: public Ui_PhysicsDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHYSICSDOCKWIDGET_H
