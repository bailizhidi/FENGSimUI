/********************************************************************************
** Form generated from reading UI file 'MeshDockWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESHDOCKWIDGET_H
#define UI_MESHDOCKWIDGET_H

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

class Ui_MeshDockWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *comboBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MeshDockWidget)
    {
        if (MeshDockWidget->objectName().isEmpty())
            MeshDockWidget->setObjectName(QString::fromUtf8("MeshDockWidget"));
        MeshDockWidget->resize(205, 353);
        verticalLayout = new QVBoxLayout(MeshDockWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(MeshDockWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 25));
        label_4->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setPointSize(9);
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        comboBox_2 = new QComboBox(frame);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(70, 25));
        comboBox_2->setMaximumSize(QSize(70, 25));
        comboBox_2->setFont(font);

        horizontalLayout_2->addWidget(comboBox_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 25));
        label->setMaximumSize(QSize(16777215, 25));
        label->setFont(font);

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 25));
        label_5->setMaximumSize(QSize(16777215, 25));
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        comboBox = new QComboBox(frame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(100, 25));
        comboBox->setMaximumSize(QSize(100, 25));
        comboBox->setFont(font);

        gridLayout_2->addWidget(comboBox, 1, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 25));
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(frame);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(doubleSpinBox->sizePolicy().hasHeightForWidth());
        doubleSpinBox->setSizePolicy(sizePolicy);
        doubleSpinBox->setMinimumSize(QSize(100, 25));
        doubleSpinBox->setMaximumSize(QSize(100, 25));
        doubleSpinBox->setFont(font);
        doubleSpinBox->setStyleSheet(QString::fromUtf8("padding-left: 3px;"));
        doubleSpinBox->setDecimals(5);
        doubleSpinBox->setMaximum(10000.000000000000000);
        doubleSpinBox->setValue(1.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox, 3, 1, 1, 1);

        comboBox_3 = new QComboBox(frame);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(100, 25));
        comboBox_3->setMaximumSize(QSize(100, 25));
        comboBox_3->setFont(font);

        gridLayout_2->addWidget(comboBox_3, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_3->addWidget(label_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
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

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(25, 25));
        pushButton_2->setMaximumSize(QSize(25, 25));
        pushButton_2->setIcon(icon);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(frame);


        retranslateUi(MeshDockWidget);

        QMetaObject::connectSlotsByName(MeshDockWidget);
    } // setupUi

    void retranslateUi(QWidget *MeshDockWidget)
    {
        MeshDockWidget->setWindowTitle(QApplication::translate("MeshDockWidget", "Form", nullptr));
        label_4->setText(QApplication::translate("MeshDockWidget", "Generator", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("MeshDockWidget", "Gmsh", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MeshDockWidget", "Smesh", nullptr));

        label->setText(QApplication::translate("MeshDockWidget", "Size", nullptr));
        label_5->setText(QApplication::translate("MeshDockWidget", "Algo", nullptr));
        comboBox->setItemText(0, QApplication::translate("MeshDockWidget", "Tetrahedral", nullptr));
        comboBox->setItemText(1, QApplication::translate("MeshDockWidget", "Hexahedral", nullptr));

        label_2->setText(QApplication::translate("MeshDockWidget", "Type", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("MeshDockWidget", "Delaunay", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("MeshDockWidget", "Frontal", nullptr));

        label_6->setText(QApplication::translate("MeshDockWidget", "Mesh Generation", nullptr));
        pushButton->setText(QString());
        label_3->setText(QApplication::translate("MeshDockWidget", "Uniform Refine", nullptr));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MeshDockWidget: public Ui_MeshDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESHDOCKWIDGET_H
