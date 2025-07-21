/********************************************************************************
** Form generated from reading UI file 'FEMDockWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEMDOCKWIDGET_H
#define UI_FEMDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FEMDockWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *comboBox_5;
    QLabel *label_5;
    QComboBox *comboBox_3;
    QLabel *label_6;
    QComboBox *comboBox_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FEMDockWidget)
    {
        if (FEMDockWidget->objectName().isEmpty())
            FEMDockWidget->setObjectName(QString::fromUtf8("FEMDockWidget"));
        FEMDockWidget->resize(208, 389);
        verticalLayout = new QVBoxLayout(FEMDockWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(FEMDockWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setMinimumSize(QSize(100, 25));
        comboBox->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setPointSize(9);
        comboBox->setFont(font);

        gridLayout->addWidget(comboBox, 0, 2, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 25));
        label_2->setMaximumSize(QSize(16777215, 25));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(frame);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(0, 25));
        comboBox_2->setMaximumSize(QSize(16777215, 25));
        comboBox_2->setFont(font);

        gridLayout->addWidget(comboBox_2, 1, 2, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        horizontalLayout_2->addWidget(label_9);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        doubleSpinBox_2 = new QDoubleSpinBox(frame);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMinimumSize(QSize(100, 25));
        doubleSpinBox_2->setMaximumSize(QSize(16777215, 25));
        doubleSpinBox_2->setFont(font);
        doubleSpinBox_2->setStyleSheet(QString::fromUtf8("padding-left:5px;"));

        horizontalLayout_2->addWidget(doubleSpinBox_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 15));
        label_3->setMaximumSize(QSize(16777215, 25));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        doubleSpinBox = new QDoubleSpinBox(frame);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimumSize(QSize(0, 25));
        doubleSpinBox->setMaximumSize(QSize(16777215, 25));
        doubleSpinBox->setFont(font);
        doubleSpinBox->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox->setDecimals(0);
        doubleSpinBox->setMaximum(2000.000000000000000);
        doubleSpinBox->setValue(100.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBox);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 15));
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(0, 25));
        label_7->setFont(font);

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        comboBox_5 = new QComboBox(frame);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setMinimumSize(QSize(100, 25));
        comboBox_5->setMaximumSize(QSize(16777215, 25));
        comboBox_5->setFont(font);

        horizontalLayout_3->addWidget(comboBox_5);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 15));
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5);

        comboBox_3 = new QComboBox(frame);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(100, 25));
        comboBox_3->setFont(font);

        verticalLayout_2->addWidget(comboBox_3);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 15));
        label_6->setFont(font);

        verticalLayout_2->addWidget(label_6);

        comboBox_4 = new QComboBox(frame);
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setMinimumSize(QSize(100, 25));
        comboBox_4->setFont(font);

        verticalLayout_2->addWidget(comboBox_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 25));
        label_8->setFont(font);

        horizontalLayout->addWidget(label_8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setMinimumSize(QSize(25, 25));
        pushButton->setMaximumSize(QSize(25, 25));
        QFont font1;
        font1.setPointSize(10);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"    background-color: transparent;\n"
"    border: 2px solid #6A8480;\n"
"    border-radius: 2px;\n"
"    padding: 2px;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(25, 25));
        pushButton_2->setMaximumSize(QSize(25, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/fem_wind/figure/fem_wind/fem_movie.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(frame);


        retranslateUi(FEMDockWidget);

        QMetaObject::connectSlotsByName(FEMDockWidget);
    } // setupUi

    void retranslateUi(QWidget *FEMDockWidget)
    {
        FEMDockWidget->setWindowTitle(QApplication::translate("FEMDockWidget", "Form", nullptr));
        comboBox->setCurrentText(QString());
        label_2->setText(QApplication::translate("FEMDockWidget", "Disc", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("FEMDockWidget", "Linear", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("FEMDockWidget", "Quadratic", nullptr));

        label->setText(QApplication::translate("FEMDockWidget", "Equa", nullptr));
        label_9->setText(QApplication::translate("FEMDockWidget", "Time", nullptr));
        label_3->setText(QApplication::translate("FEMDockWidget", "Time Steps", nullptr));
        label_4->setText(QApplication::translate("FEMDockWidget", "Sys of Linear Equations ", nullptr));
        label_7->setText(QApplication::translate("FEMDockWidget", "Solver", nullptr));
        comboBox_5->setItemText(0, QApplication::translate("FEMDockWidget", "M++", nullptr));
        comboBox_5->setItemText(1, QApplication::translate("FEMDockWidget", "FASP", nullptr));

        label_5->setText(QApplication::translate("FEMDockWidget", "Iterative Method", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("FEMDockWidget", "CG", nullptr));

        label_6->setText(QApplication::translate("FEMDockWidget", "Preconditioner", nullptr));
        comboBox_4->setItemText(0, QApplication::translate("FEMDockWidget", "Jacobi", nullptr));

        label_8->setText(QApplication::translate("FEMDockWidget", "Sub Job", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FEMDockWidget: public Ui_FEMDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEMDOCKWIDGET_H
