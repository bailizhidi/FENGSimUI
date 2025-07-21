/********************************************************************************
** Form generated from reading UI file 'VTKDockWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VTKDOCKWIDGET_H
#define UI_VTKDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VTKDockWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *VTKDockWidget)
    {
        if (VTKDockWidget->objectName().isEmpty())
            VTKDockWidget->setObjectName(QString::fromUtf8("VTKDockWidget"));
        VTKDockWidget->resize(213, 400);
        VTKDockWidget->setMaximumSize(QSize(213, 400));
        verticalLayout = new QVBoxLayout(VTKDockWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(VTKDockWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(25, 25));
        pushButton_2->setMaximumSize(QSize(25, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/main_wind/figure/main_wind/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 15));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox_2 = new QComboBox(frame);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(25, 25));
        pushButton_4->setMaximumSize(QSize(25, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/fem_wind/figure/fem_wind/fem_movie (copy).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(25, 25));
        pushButton_3->setMaximumSize(QSize(25, 25));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/fem_wind/figure/fem_wind/fem_movie.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 15));
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        tableWidget = new QTableWidget(frame);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 15));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(frame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(80, 25));
        comboBox->setFont(font);

        verticalLayout_2->addWidget(comboBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(25, 25));
        pushButton_7->setMaximumSize(QSize(25, 25));
        pushButton_7->setIcon(icon);

        horizontalLayout_4->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(25, 25));
        pushButton_6->setMaximumSize(QSize(25, 25));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon3);

        horizontalLayout_4->addWidget(pushButton_6);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(25, 25));
        pushButton->setMaximumSize(QSize(25, 25));
        pushButton->setIcon(icon3);

        horizontalLayout_3->addWidget(pushButton);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(25, 25));
        pushButton_5->setMaximumSize(QSize(25, 25));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/fem_wind/figure/fem_wind/printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);

        horizontalLayout_3->addWidget(pushButton_5);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(frame);


        retranslateUi(VTKDockWidget);

        QMetaObject::connectSlotsByName(VTKDockWidget);
    } // setupUi

    void retranslateUi(QWidget *VTKDockWidget)
    {
        VTKDockWidget->setWindowTitle(QApplication::translate("VTKDockWidget", "Form", nullptr));
        label->setText(QApplication::translate("VTKDockWidget", "Open VTK File", nullptr));
        pushButton_2->setText(QString());
        label_3->setText(QApplication::translate("VTKDockWidget", "Time Step", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("VTKDockWidget", "1", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("VTKDockWidget", "2", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("VTKDockWidget", "3", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("VTKDockWidget", "4", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("VTKDockWidget", "5", nullptr));

        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        label_4->setText(QApplication::translate("VTKDockWidget", "Domain", nullptr));
        label_2->setText(QApplication::translate("VTKDockWidget", "Data Type ", nullptr));
        comboBox->setItemText(0, QApplication::translate("VTKDockWidget", "Displacement", nullptr));
        comboBox->setItemText(1, QApplication::translate("VTKDockWidget", "Strain11", nullptr));
        comboBox->setItemText(2, QApplication::translate("VTKDockWidget", "Strain12", nullptr));
        comboBox->setItemText(3, QApplication::translate("VTKDockWidget", "Strain13", nullptr));
        comboBox->setItemText(4, QApplication::translate("VTKDockWidget", "Strain22", nullptr));
        comboBox->setItemText(5, QApplication::translate("VTKDockWidget", "Strain23", nullptr));
        comboBox->setItemText(6, QApplication::translate("VTKDockWidget", "Strain33", nullptr));
        comboBox->setItemText(7, QApplication::translate("VTKDockWidget", "Stress11", nullptr));
        comboBox->setItemText(8, QApplication::translate("VTKDockWidget", "Stress12", nullptr));
        comboBox->setItemText(9, QApplication::translate("VTKDockWidget", "Stress13", nullptr));
        comboBox->setItemText(10, QApplication::translate("VTKDockWidget", "Stress22", nullptr));
        comboBox->setItemText(11, QApplication::translate("VTKDockWidget", "Stress23", nullptr));
        comboBox->setItemText(12, QApplication::translate("VTKDockWidget", "Stress33", nullptr));

        label_5->setText(QApplication::translate("VTKDockWidget", "Open MBD File", nullptr));
        pushButton_7->setText(QString());
        pushButton_6->setText(QString());
        pushButton->setText(QString());
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VTKDockWidget: public Ui_VTKDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VTKDOCKWIDGET_H
