/********************************************************************************
** Form generated from reading UI file 'ElbowsDockWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELBOWSDOCKWIDGET_H
#define UI_ELBOWSDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElbowsDockWidget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_Rout;
    QLabel *label_2;
    QLineEdit *lineEdit_Rin;
    QLabel *label_3;
    QLineEdit *lineEdit_Length;
    QLabel *label_11;
    QLineEdit *lineEdit_SleeveThickness;
    QLabel *label_5;
    QLineEdit *lineEdit_SleeveLength;
    QLabel *label_4;
    QLabel *label_12;
    QLineEdit *lineEdit_SleeveThickness1;
    QLineEdit *lineEdit_SleeveLength1;
    QLabel *label_6;
    QLineEdit *lineEdit_RotaryPos;
    QLabel *label_7;
    QLineEdit *lineEdit_FixedPos;
    QLabel *label_8;
    QLineEdit *lineEdit_ArcR;
    QLabel *label_9;
    QLineEdit *lineEdit_ArcThickness;
    QLabel *label_10;
    QLineEdit *lineEdit_ArcAngle;
    QPushButton *pushButton_confirm;
    QWidget *tab_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_13;
    QComboBox *comboBox_tubeMaterial;
    QLabel *label_14;
    QComboBox *comboBox_rotaryMaterial;
    QLabel *label_15;
    QComboBox *comboBox_fixedMaterial;
    QLabel *label_16;
    QComboBox *comboBox_arcMaterial;
    QWidget *tab_3;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_17;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton_generateMesh;
    QWidget *tab_4;
    QPushButton *pushButton_newFile;
    QPushButton *pushButton_openFile;
    QPushButton *pushButton_saveFile;

    void setupUi(QWidget *ElbowsDockWidget)
    {
        if (ElbowsDockWidget->objectName().isEmpty())
            ElbowsDockWidget->setObjectName(QString::fromUtf8("ElbowsDockWidget"));
        ElbowsDockWidget->resize(553, 768);
        tabWidget = new QTabWidget(ElbowsDockWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 30, 381, 661));
        tabWidget->setMinimumSize(QSize(361, 0));
        tabWidget->setMaximumSize(QSize(756, 16777215));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab {\n"
"    min-width: 55px;  /* \350\256\276\347\275\256\346\240\207\347\255\276\345\256\275\345\272\246\357\274\214\346\240\271\346\215\256\345\256\236\351\231\205\345\206\205\345\256\271\350\260\203\345\244\247 */\n"
"    min-height: 30px;  /* \350\256\276\347\275\256\346\240\207\347\255\276\351\253\230\345\272\246 */\n"
"    padding: 2px;       /* \345\206\205\350\276\271\350\267\235\357\274\214\351\201\277\345\205\215\346\226\207\345\255\227\350\264\264\350\276\271 */\n"
"}"));
        tabWidget->setIconSize(QSize(120, 16));
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setMinimumSize(QSize(357, 578));
        tab->setStyleSheet(QString::fromUtf8("QTabWidget::tab {\n"
"    min-width: 100px;\n"
"    min-height: 30px;\n"
"}\n"
""));
        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 231, 481));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_Rout = new QLineEdit(formLayoutWidget);
        lineEdit_Rout->setObjectName(QString::fromUtf8("lineEdit_Rout"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_Rout);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_Rin = new QLineEdit(formLayoutWidget);
        lineEdit_Rin->setObjectName(QString::fromUtf8("lineEdit_Rin"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_Rin);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_Length = new QLineEdit(formLayoutWidget);
        lineEdit_Length->setObjectName(QString::fromUtf8("lineEdit_Length"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_Length);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_11);

        lineEdit_SleeveThickness = new QLineEdit(formLayoutWidget);
        lineEdit_SleeveThickness->setObjectName(QString::fromUtf8("lineEdit_SleeveThickness"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_SleeveThickness);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_5);

        lineEdit_SleeveLength = new QLineEdit(formLayoutWidget);
        lineEdit_SleeveLength->setObjectName(QString::fromUtf8("lineEdit_SleeveLength"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_SleeveLength);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_12);

        lineEdit_SleeveThickness1 = new QLineEdit(formLayoutWidget);
        lineEdit_SleeveThickness1->setObjectName(QString::fromUtf8("lineEdit_SleeveThickness1"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_SleeveThickness1);

        lineEdit_SleeveLength1 = new QLineEdit(formLayoutWidget);
        lineEdit_SleeveLength1->setObjectName(QString::fromUtf8("lineEdit_SleeveLength1"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_SleeveLength1);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        lineEdit_RotaryPos = new QLineEdit(formLayoutWidget);
        lineEdit_RotaryPos->setObjectName(QString::fromUtf8("lineEdit_RotaryPos"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_RotaryPos);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_7);

        lineEdit_FixedPos = new QLineEdit(formLayoutWidget);
        lineEdit_FixedPos->setObjectName(QString::fromUtf8("lineEdit_FixedPos"));

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEdit_FixedPos);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_8);

        lineEdit_ArcR = new QLineEdit(formLayoutWidget);
        lineEdit_ArcR->setObjectName(QString::fromUtf8("lineEdit_ArcR"));

        formLayout->setWidget(9, QFormLayout::FieldRole, lineEdit_ArcR);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_9);

        lineEdit_ArcThickness = new QLineEdit(formLayoutWidget);
        lineEdit_ArcThickness->setObjectName(QString::fromUtf8("lineEdit_ArcThickness"));

        formLayout->setWidget(10, QFormLayout::FieldRole, lineEdit_ArcThickness);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_10);

        lineEdit_ArcAngle = new QLineEdit(formLayoutWidget);
        lineEdit_ArcAngle->setObjectName(QString::fromUtf8("lineEdit_ArcAngle"));

        formLayout->setWidget(11, QFormLayout::FieldRole, lineEdit_ArcAngle);

        pushButton_confirm = new QPushButton(formLayoutWidget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: rgb(119, 118, 123); \n"
"        color: white; \n"
"        border: none; \n"
"        }\n"
"        QPushButton:hover {\n"
"        background-color: rgb(94, 92, 100); \n"
"        }"));

        formLayout->setWidget(12, QFormLayout::FieldRole, pushButton_confirm);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        formLayoutWidget_2 = new QWidget(tab_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(0, 0, 231, 131));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(formLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_13);

        comboBox_tubeMaterial = new QComboBox(formLayoutWidget_2);
        comboBox_tubeMaterial->addItem(QString());
        comboBox_tubeMaterial->addItem(QString());
        comboBox_tubeMaterial->addItem(QString());
        comboBox_tubeMaterial->addItem(QString());
        comboBox_tubeMaterial->addItem(QString());
        comboBox_tubeMaterial->addItem(QString());
        comboBox_tubeMaterial->addItem(QString());
        comboBox_tubeMaterial->addItem(QString());
        comboBox_tubeMaterial->setObjectName(QString::fromUtf8("comboBox_tubeMaterial"));
        comboBox_tubeMaterial->setStyleSheet(QString::fromUtf8("QComboBox QAbstractItemView {\n"
"    padding: 4px;\n"
"}\n"
"\n"
""));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBox_tubeMaterial);

        label_14 = new QLabel(formLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_14);

        comboBox_rotaryMaterial = new QComboBox(formLayoutWidget_2);
        comboBox_rotaryMaterial->addItem(QString());
        comboBox_rotaryMaterial->addItem(QString());
        comboBox_rotaryMaterial->addItem(QString());
        comboBox_rotaryMaterial->addItem(QString());
        comboBox_rotaryMaterial->addItem(QString());
        comboBox_rotaryMaterial->addItem(QString());
        comboBox_rotaryMaterial->addItem(QString());
        comboBox_rotaryMaterial->addItem(QString());
        comboBox_rotaryMaterial->setObjectName(QString::fromUtf8("comboBox_rotaryMaterial"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, comboBox_rotaryMaterial);

        label_15 = new QLabel(formLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_15);

        comboBox_fixedMaterial = new QComboBox(formLayoutWidget_2);
        comboBox_fixedMaterial->addItem(QString());
        comboBox_fixedMaterial->addItem(QString());
        comboBox_fixedMaterial->addItem(QString());
        comboBox_fixedMaterial->addItem(QString());
        comboBox_fixedMaterial->addItem(QString());
        comboBox_fixedMaterial->addItem(QString());
        comboBox_fixedMaterial->addItem(QString());
        comboBox_fixedMaterial->addItem(QString());
        comboBox_fixedMaterial->setObjectName(QString::fromUtf8("comboBox_fixedMaterial"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, comboBox_fixedMaterial);

        label_16 = new QLabel(formLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_16);

        comboBox_arcMaterial = new QComboBox(formLayoutWidget_2);
        comboBox_arcMaterial->addItem(QString());
        comboBox_arcMaterial->addItem(QString());
        comboBox_arcMaterial->addItem(QString());
        comboBox_arcMaterial->addItem(QString());
        comboBox_arcMaterial->addItem(QString());
        comboBox_arcMaterial->addItem(QString());
        comboBox_arcMaterial->addItem(QString());
        comboBox_arcMaterial->addItem(QString());
        comboBox_arcMaterial->setObjectName(QString::fromUtf8("comboBox_arcMaterial"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, comboBox_arcMaterial);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        formLayoutWidget_3 = new QWidget(tab_3);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(0, 0, 231, 81));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(formLayoutWidget_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_17);

        doubleSpinBox = new QDoubleSpinBox(formLayoutWidget_3);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(doubleSpinBox->sizePolicy().hasHeightForWidth());
        doubleSpinBox->setSizePolicy(sizePolicy);
        doubleSpinBox->setMinimumSize(QSize(100, 25));
        doubleSpinBox->setMaximumSize(QSize(100, 25));
        QFont font;
        font.setPointSize(9);
        doubleSpinBox->setFont(font);
        doubleSpinBox->setStyleSheet(QString::fromUtf8("padding-left: 3px;"));
        doubleSpinBox->setDecimals(5);
        doubleSpinBox->setMaximum(10000.000000000000000);
        doubleSpinBox->setValue(1.000000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, doubleSpinBox);

        pushButton_generateMesh = new QPushButton(formLayoutWidget_3);
        pushButton_generateMesh->setObjectName(QString::fromUtf8("pushButton_generateMesh"));
        pushButton_generateMesh->setMinimumSize(QSize(100, 25));
        pushButton_generateMesh->setMaximumSize(QSize(100, 25));
        pushButton_generateMesh->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: rgb(119, 118, 123); \n"
"        color: white; \n"
"        border: none; \n"
"        }\n"
"        QPushButton:hover {\n"
"        background-color: rgb(94, 92, 100); \n"
"        }"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, pushButton_generateMesh);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        pushButton_newFile = new QPushButton(ElbowsDockWidget);
        pushButton_newFile->setObjectName(QString::fromUtf8("pushButton_newFile"));
        pushButton_newFile->setGeometry(QRect(0, 0, 41, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/main_wind/figure/main_wind/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_newFile->setIcon(icon);
        pushButton_newFile->setIconSize(QSize(20, 20));
        pushButton_openFile = new QPushButton(ElbowsDockWidget);
        pushButton_openFile->setObjectName(QString::fromUtf8("pushButton_openFile"));
        pushButton_openFile->setGeometry(QRect(40, 0, 41, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/main_wind/figure/main_wind/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_openFile->setIcon(icon1);
        pushButton_openFile->setIconSize(QSize(20, 20));
        pushButton_saveFile = new QPushButton(ElbowsDockWidget);
        pushButton_saveFile->setObjectName(QString::fromUtf8("pushButton_saveFile"));
        pushButton_saveFile->setGeometry(QRect(80, 0, 41, 31));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/main_wind/figure/main_wind/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_saveFile->setIcon(icon2);
        pushButton_saveFile->setIconSize(QSize(20, 20));

        retranslateUi(ElbowsDockWidget);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ElbowsDockWidget);
    } // setupUi

    void retranslateUi(QWidget *ElbowsDockWidget)
    {
        ElbowsDockWidget->setWindowTitle(QApplication::translate("ElbowsDockWidget", "Form", nullptr));
        label->setText(QApplication::translate("ElbowsDockWidget", "\347\256\241\344\275\223\345\244\226\345\215\212\345\276\204\357\274\232", nullptr));
        lineEdit_Rout->setText(QApplication::translate("ElbowsDockWidget", "32", nullptr));
        label_2->setText(QApplication::translate("ElbowsDockWidget", "\347\256\241\344\275\223\345\206\205\345\215\212\345\276\204\357\274\232", nullptr));
        lineEdit_Rin->setText(QApplication::translate("ElbowsDockWidget", "30", nullptr));
        label_3->setText(QApplication::translate("ElbowsDockWidget", "\347\256\241\344\275\223\351\225\277\345\272\246\357\274\232", nullptr));
        lineEdit_Length->setText(QApplication::translate("ElbowsDockWidget", "500", nullptr));
        label_11->setText(QApplication::translate("ElbowsDockWidget", "\346\227\213\350\275\254\345\245\227\347\255\222\345\216\232\345\272\246\357\274\232", nullptr));
        lineEdit_SleeveThickness->setText(QApplication::translate("ElbowsDockWidget", "1", nullptr));
        label_5->setText(QApplication::translate("ElbowsDockWidget", "\345\233\272\345\256\232\345\245\227\347\255\222\351\225\277\345\272\246\357\274\232", nullptr));
        lineEdit_SleeveLength->setText(QApplication::translate("ElbowsDockWidget", "200", nullptr));
        label_4->setText(QApplication::translate("ElbowsDockWidget", "\345\233\272\345\256\232\345\245\227\347\255\222\345\216\232\345\272\246\357\274\232", nullptr));
        label_12->setText(QApplication::translate("ElbowsDockWidget", "\346\227\213\350\275\254\345\245\227\347\255\222\351\225\277\345\272\246\357\274\232", nullptr));
        lineEdit_SleeveThickness1->setText(QApplication::translate("ElbowsDockWidget", "1", nullptr));
        lineEdit_SleeveLength1->setText(QApplication::translate("ElbowsDockWidget", "20", nullptr));
        label_6->setText(QApplication::translate("ElbowsDockWidget", "\346\227\213\350\275\254\345\245\227\347\255\222\344\275\215\347\275\256\357\274\232", nullptr));
        lineEdit_RotaryPos->setText(QApplication::translate("ElbowsDockWidget", "50", nullptr));
        label_7->setText(QApplication::translate("ElbowsDockWidget", "\345\233\272\345\256\232\345\245\227\347\255\222\344\275\215\347\275\256\357\274\232", nullptr));
        lineEdit_FixedPos->setText(QApplication::translate("ElbowsDockWidget", "250", nullptr));
        label_8->setText(QApplication::translate("ElbowsDockWidget", "\345\215\212\345\234\206\345\274\247\345\245\227\345\215\212\345\276\204\357\274\232", nullptr));
        lineEdit_ArcR->setText(QApplication::translate("ElbowsDockWidget", "100", nullptr));
        label_9->setText(QApplication::translate("ElbowsDockWidget", "\345\215\212\345\234\206\345\274\247\345\245\227\345\216\232\345\272\246\357\274\232", nullptr));
        lineEdit_ArcThickness->setText(QApplication::translate("ElbowsDockWidget", "1", nullptr));
        label_10->setText(QApplication::translate("ElbowsDockWidget", "\345\215\212\345\234\206\345\274\247\345\274\247\345\272\246\357\274\232", nullptr));
        lineEdit_ArcAngle->setText(QApplication::translate("ElbowsDockWidget", "4.7124", nullptr));
        pushButton_confirm->setText(QApplication::translate("ElbowsDockWidget", "\347\241\256\345\256\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ElbowsDockWidget", "\345\274\257\347\256\241\345\217\202\346\225\260", nullptr));
        label_13->setText(QApplication::translate("ElbowsDockWidget", "\347\256\241\344\275\223\357\274\232", nullptr));
        comboBox_tubeMaterial->setItemText(0, QString());
        comboBox_tubeMaterial->setItemText(1, QApplication::translate("ElbowsDockWidget", "304\344\270\215\351\224\210\351\222\242", nullptr));
        comboBox_tubeMaterial->setItemText(2, QApplication::translate("ElbowsDockWidget", "\351\223\235\345\220\210\351\207\221", nullptr));
        comboBox_tubeMaterial->setItemText(3, QApplication::translate("ElbowsDockWidget", "\351\222\233\345\220\210\351\207\221", nullptr));
        comboBox_tubeMaterial->setItemText(4, QApplication::translate("ElbowsDockWidget", "\351\273\204\351\223\234", nullptr));
        comboBox_tubeMaterial->setItemText(5, QApplication::translate("ElbowsDockWidget", "\351\273\204\351\207\221", nullptr));
        comboBox_tubeMaterial->setItemText(6, QApplication::translate("ElbowsDockWidget", "\345\241\221\346\226\231", nullptr));
        comboBox_tubeMaterial->setItemText(7, QApplication::translate("ElbowsDockWidget", "\345\210\232\344\275\223", nullptr));

        label_14->setText(QApplication::translate("ElbowsDockWidget", "\346\227\213\350\275\254\345\245\227\347\255\222\357\274\232", nullptr));
        comboBox_rotaryMaterial->setItemText(0, QString());
        comboBox_rotaryMaterial->setItemText(1, QApplication::translate("ElbowsDockWidget", "304\344\270\215\351\224\210\351\222\242", nullptr));
        comboBox_rotaryMaterial->setItemText(2, QApplication::translate("ElbowsDockWidget", "\351\223\235\345\220\210\351\207\221", nullptr));
        comboBox_rotaryMaterial->setItemText(3, QApplication::translate("ElbowsDockWidget", "\351\222\233\345\220\210\351\207\221", nullptr));
        comboBox_rotaryMaterial->setItemText(4, QApplication::translate("ElbowsDockWidget", "\351\273\204\351\223\234", nullptr));
        comboBox_rotaryMaterial->setItemText(5, QApplication::translate("ElbowsDockWidget", "\351\273\204\351\207\221", nullptr));
        comboBox_rotaryMaterial->setItemText(6, QApplication::translate("ElbowsDockWidget", "\345\241\221\346\226\231", nullptr));
        comboBox_rotaryMaterial->setItemText(7, QApplication::translate("ElbowsDockWidget", "\345\210\232\344\275\223", nullptr));

        label_15->setText(QApplication::translate("ElbowsDockWidget", "\345\233\272\345\256\232\345\245\227\347\255\222\357\274\232", nullptr));
        comboBox_fixedMaterial->setItemText(0, QString());
        comboBox_fixedMaterial->setItemText(1, QApplication::translate("ElbowsDockWidget", "304\344\270\215\351\224\210\351\222\242", nullptr));
        comboBox_fixedMaterial->setItemText(2, QApplication::translate("ElbowsDockWidget", "\351\223\235\345\220\210\351\207\221", nullptr));
        comboBox_fixedMaterial->setItemText(3, QApplication::translate("ElbowsDockWidget", "\351\222\233\345\220\210\351\207\221", nullptr));
        comboBox_fixedMaterial->setItemText(4, QApplication::translate("ElbowsDockWidget", "\351\273\204\351\223\234", nullptr));
        comboBox_fixedMaterial->setItemText(5, QApplication::translate("ElbowsDockWidget", "\351\273\204\351\207\221", nullptr));
        comboBox_fixedMaterial->setItemText(6, QApplication::translate("ElbowsDockWidget", "\345\241\221\346\226\231", nullptr));
        comboBox_fixedMaterial->setItemText(7, QApplication::translate("ElbowsDockWidget", "\345\210\232\344\275\223", nullptr));

        label_16->setText(QApplication::translate("ElbowsDockWidget", "\345\215\212\345\234\206\345\274\247\345\245\227\347\255\222\357\274\232", nullptr));
        comboBox_arcMaterial->setItemText(0, QString());
        comboBox_arcMaterial->setItemText(1, QApplication::translate("ElbowsDockWidget", "304\344\270\215\351\224\210\351\222\242", nullptr));
        comboBox_arcMaterial->setItemText(2, QApplication::translate("ElbowsDockWidget", "\351\223\235\345\220\210\351\207\221", nullptr));
        comboBox_arcMaterial->setItemText(3, QApplication::translate("ElbowsDockWidget", "\351\222\233\345\220\210\351\207\221", nullptr));
        comboBox_arcMaterial->setItemText(4, QApplication::translate("ElbowsDockWidget", "\351\273\204\351\223\234", nullptr));
        comboBox_arcMaterial->setItemText(5, QApplication::translate("ElbowsDockWidget", "\351\273\204\351\207\221", nullptr));
        comboBox_arcMaterial->setItemText(6, QApplication::translate("ElbowsDockWidget", "\345\241\221\346\226\231", nullptr));
        comboBox_arcMaterial->setItemText(7, QApplication::translate("ElbowsDockWidget", "\345\210\232\344\275\223", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ElbowsDockWidget", "\346\235\220\346\226\231\345\261\236\346\200\247", nullptr));
        label_17->setText(QApplication::translate("ElbowsDockWidget", "\347\275\221\346\240\274\345\244\247\345\260\217\357\274\232", nullptr));
        pushButton_generateMesh->setText(QApplication::translate("ElbowsDockWidget", "\347\275\221\346\240\274\345\210\222\345\210\206", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ElbowsDockWidget", "\345\267\245\350\211\272\346\261\202\350\247\243", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ElbowsDockWidget", "\347\273\223\346\236\234\345\261\225\347\244\272", nullptr));
        pushButton_newFile->setText(QString());
        pushButton_openFile->setText(QString());
        pushButton_saveFile->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ElbowsDockWidget: public Ui_ElbowsDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELBOWSDOCKWIDGET_H
