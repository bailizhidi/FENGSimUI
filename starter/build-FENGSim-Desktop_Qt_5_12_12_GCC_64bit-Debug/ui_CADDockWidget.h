/********************************************************************************
** Form generated from reading UI file 'CADDockWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADDOCKWIDGET_H
#define UI_CADDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CADDockWidget
{
public:
    QAction *actionSphere;
    QAction *actionCube;
    QAction *actionTorus;
    QAction *actionCone;
    QAction *actionCylinder;
    QAction *actionPoint;
    QAction *actionLine;
    QAction *actionSquare;
    QAction *actionUnion;
    QAction *actionSection;
    QAction *actionCut;
    QAction *actionSweep;
    QAction *actionExtrude;
    QAction *actionMirror;
    QAction *actionSelectBnd;
    QAction *actionSelectDomain;
    QAction *actionPart1;
    QAction *actionPart2;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_0;
    QPushButton *pushButton_13;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QSpacerItem *verticalSpacer_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_33;
    QGridLayout *gridLayout_4;
    QDoubleSpinBox *doubleSpinBox_6;
    QDoubleSpinBox *doubleSpinBox_5;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_4;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_36;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_8;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *treeWidget;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *CADDockWidget)
    {
        if (CADDockWidget->objectName().isEmpty())
            CADDockWidget->setObjectName(QString::fromUtf8("CADDockWidget"));
        CADDockWidget->resize(205, 379);
        CADDockWidget->setWindowOpacity(1.000000000000000);
        CADDockWidget->setStyleSheet(QString::fromUtf8("border: 0px;"));
        actionSphere = new QAction(CADDockWidget);
        actionSphere->setObjectName(QString::fromUtf8("actionSphere"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/ball.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSphere->setIcon(icon);
        QFont font;
        font.setPointSize(10);
        actionSphere->setFont(font);
        actionCube = new QAction(CADDockWidget);
        actionCube->setObjectName(QString::fromUtf8("actionCube"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/box.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCube->setIcon(icon1);
        actionCube->setFont(font);
        actionTorus = new QAction(CADDockWidget);
        actionTorus->setObjectName(QString::fromUtf8("actionTorus"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/torus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTorus->setIcon(icon2);
        actionTorus->setFont(font);
        actionCone = new QAction(CADDockWidget);
        actionCone->setObjectName(QString::fromUtf8("actionCone"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/cone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCone->setIcon(icon3);
        actionCone->setFont(font);
        actionCylinder = new QAction(CADDockWidget);
        actionCylinder->setObjectName(QString::fromUtf8("actionCylinder"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/cylinder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCylinder->setIcon(icon4);
        actionCylinder->setFont(font);
        actionPoint = new QAction(CADDockWidget);
        actionPoint->setObjectName(QString::fromUtf8("actionPoint"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/point.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPoint->setIcon(icon5);
        actionPoint->setFont(font);
        actionLine = new QAction(CADDockWidget);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/line.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLine->setIcon(icon6);
        actionLine->setFont(font);
        actionSquare = new QAction(CADDockWidget);
        actionSquare->setObjectName(QString::fromUtf8("actionSquare"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSquare->setIcon(icon7);
        actionSquare->setFont(font);
        actionUnion = new QAction(CADDockWidget);
        actionUnion->setObjectName(QString::fromUtf8("actionUnion"));
        actionUnion->setCheckable(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/union.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnion->setIcon(icon8);
        actionUnion->setFont(font);
        actionSection = new QAction(CADDockWidget);
        actionSection->setObjectName(QString::fromUtf8("actionSection"));
        actionSection->setCheckable(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/section.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSection->setIcon(icon9);
        actionSection->setFont(font);
        actionCut = new QAction(CADDockWidget);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCut->setCheckable(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon10);
        actionCut->setFont(font);
        actionSweep = new QAction(CADDockWidget);
        actionSweep->setObjectName(QString::fromUtf8("actionSweep"));
        actionSweep->setCheckable(true);
        actionSweep->setChecked(false);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/sweep.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSweep->setIcon(icon11);
        actionSweep->setFont(font);
        actionExtrude = new QAction(CADDockWidget);
        actionExtrude->setObjectName(QString::fromUtf8("actionExtrude"));
        actionExtrude->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/extrude.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExtrude->setIcon(icon12);
        actionExtrude->setFont(font);
        actionMirror = new QAction(CADDockWidget);
        actionMirror->setObjectName(QString::fromUtf8("actionMirror"));
        actionMirror->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/mirror.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMirror->setIcon(icon13);
        actionMirror->setFont(font);
        actionSelectBnd = new QAction(CADDockWidget);
        actionSelectBnd->setObjectName(QString::fromUtf8("actionSelectBnd"));
        actionSelectBnd->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/selected_bnd.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectBnd->setIcon(icon14);
        actionSelectBnd->setFont(font);
        actionSelectDomain = new QAction(CADDockWidget);
        actionSelectDomain->setObjectName(QString::fromUtf8("actionSelectDomain"));
        actionSelectDomain->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/selected_domain.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectDomain->setIcon(icon15);
        actionSelectDomain->setFont(font);
        actionPart1 = new QAction(CADDockWidget);
        actionPart1->setObjectName(QString::fromUtf8("actionPart1"));
        actionPart1->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/part1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPart1->setIcon(icon16);
        actionPart1->setFont(font);
        actionPart2 = new QAction(CADDockWidget);
        actionPart2->setObjectName(QString::fromUtf8("actionPart2"));
        actionPart2->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/part2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPart2->setIcon(icon17);
        actionPart2->setFont(font);
        verticalLayout_5 = new QVBoxLayout(CADDockWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(9, 9, 9, 9);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(CADDockWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(32, 32));
        pushButton_2->setMaximumSize(QSize(32, 32));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"    background-color: transparent;\n"
"    border: 2px solid rgb(158,158,158);\n"
"    border-radius: 2px;\n"
"}\n"
""));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/curve.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon18);
        pushButton_2->setIconSize(QSize(20, 20));
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        pushButton_9 = new QPushButton(CADDockWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(32, 32));
        pushButton_9->setMaximumSize(QSize(32, 32));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"    background-color: transparent;\n"
"    border: 2px solid rgb(158,158,158);\n"
"    border-radius: 2px;\n"
"}"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon19);
        pushButton_9->setIconSize(QSize(20, 20));
        pushButton_9->setFlat(true);

        gridLayout->addWidget(pushButton_9, 2, 3, 1, 1);

        pushButton_0 = new QPushButton(CADDockWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setMinimumSize(QSize(32, 32));
        pushButton_0->setMaximumSize(QSize(32, 32));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"    background-color: transparent;\n"
"    border: 2px solid rgb(158,158,158);\n"
"    border-radius: 2px;\n"
"}"));
        pushButton_0->setIcon(icon9);
        pushButton_0->setIconSize(QSize(20, 20));
        pushButton_0->setCheckable(true);
        pushButton_0->setFlat(true);

        gridLayout->addWidget(pushButton_0, 1, 6, 1, 1);

        pushButton_13 = new QPushButton(CADDockWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(32, 32));
        pushButton_13->setMaximumSize(QSize(32, 32));
        pushButton_13->setFont(font);
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"    background-color: transparent;\n"
"    border: 2px solid rgb(158,158,158);\n"
"    border-radius: 2px;\n"
"}"));
        pushButton_13->setIcon(icon11);
        pushButton_13->setIconSize(QSize(20, 20));
        pushButton_13->setCheckable(true);
        pushButton_13->setFlat(true);

        gridLayout->addWidget(pushButton_13, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 10, 1, 1);

        pushButton_4 = new QPushButton(CADDockWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(32, 32));
        pushButton_4->setMaximumSize(QSize(32, 32));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"    background-color: transparent;\n"
"    border: 2px solid rgb(158,158,158);\n"
"    border-radius: 2px;\n"
"}"));
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(20, 20));
        pushButton_4->setFlat(true);

        gridLayout->addWidget(pushButton_4, 1, 4, 1, 1);

        pushButton_3 = new QPushButton(CADDockWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(32, 32));
        pushButton_3->setMaximumSize(QSize(32, 32));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"    background-color: transparent;\n"
"    border: 2px solid rgb(158,158,158);\n"
"    border-radius: 2px;\n"
"}"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon20);
        pushButton_3->setIconSize(QSize(20, 20));
        pushButton_3->setFlat(true);

        gridLayout->addWidget(pushButton_3, 1, 3, 1, 1);

        pushButton = new QPushButton(CADDockWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(32, 32));
        pushButton->setMaximumSize(QSize(32, 32));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"    background-color: transparent;\n"
"    border: 2px solid rgb(158,158,158);\n"
"    border-radius: 2px;\n"
"}"));
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(20, 20));
        pushButton->setFlat(true);

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(CADDockWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(32, 32));
        pushButton_5->setMaximumSize(QSize(32, 32));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"    background-color: transparent;\n"
"    border: 2px solid rgb(158,158,158);\n"
"    border-radius: 2px;\n"
"}"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/selection_domain.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon21);
        pushButton_5->setIconSize(QSize(20, 20));
        pushButton_5->setFlat(true);

        gridLayout->addWidget(pushButton_5, 2, 2, 1, 1);

        pushButton_6 = new QPushButton(CADDockWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(32, 32));
        pushButton_6->setMaximumSize(QSize(32, 32));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"    background-color: transparent;\n"
"    border: 2px solid rgb(158,158,158);\n"
"    border-radius: 2px;\n"
"}"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/main_wind/figure/main_wind/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon22);
        pushButton_6->setIconSize(QSize(20, 20));
        pushButton_6->setCheckable(false);

        gridLayout->addWidget(pushButton_6, 2, 4, 1, 1);

        pushButton_7 = new QPushButton(CADDockWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(32, 32));
        pushButton_7->setMaximumSize(QSize(32, 32));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"    background-color: transparent;\n"
"    border: 2px solid rgb(158,158,158);\n"
"    border-radius: 2px;\n"
"}"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/main_wind/figure/main_wind/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon23);
        pushButton_7->setIconSize(QSize(20, 20));
        pushButton_7->setCheckable(false);

        gridLayout->addWidget(pushButton_7, 2, 6, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_4);

        tabWidget = new QTabWidget(CADDockWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setMinimumSize(QSize(0, 270));
        QFont font1;
        font1.setPointSize(9);
        tabWidget->setFont(font1);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setInputMethodHints(Qt::ImhHiddenText);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setTabsClosable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox_2 = new QComboBox(tab);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setEnabled(true);
        comboBox_2->setMinimumSize(QSize(110, 25));
        comboBox_2->setMaximumSize(QSize(110, 25));
        comboBox_2->setFont(font1);
        comboBox_2->setStyleSheet(QString::fromUtf8("padding-left:5px;"));

        horizontalLayout_2->addWidget(comboBox_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_33 = new QPushButton(tab);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));
        pushButton_33->setMinimumSize(QSize(25, 25));
        pushButton_33->setMaximumSize(QSize(25, 25));
        QFont font2;
        font2.setPointSize(8);
        pushButton_33->setFont(font2);
        pushButton_33->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"    background-color: transparent;\n"
"    border: 2px solid #6A8480;\n"
"    border-radius: 2px;\n"
"    padding: 2px;\n"
"}"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_33->setIcon(icon24);
        pushButton_33->setAutoDefault(true);
        pushButton_33->setFlat(false);

        horizontalLayout_2->addWidget(pushButton_33);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        doubleSpinBox_6 = new QDoubleSpinBox(tab);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));
        doubleSpinBox_6->setEnabled(true);
        doubleSpinBox_6->setMinimumSize(QSize(80, 25));
        doubleSpinBox_6->setMaximumSize(QSize(80, 25));
        doubleSpinBox_6->setFont(font1);
        doubleSpinBox_6->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox_6->setDecimals(3);
        doubleSpinBox_6->setMinimum(-99.989999999999995);

        gridLayout_4->addWidget(doubleSpinBox_6, 2, 1, 1, 1);

        doubleSpinBox_5 = new QDoubleSpinBox(tab);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setEnabled(true);
        doubleSpinBox_5->setMinimumSize(QSize(80, 25));
        doubleSpinBox_5->setMaximumSize(QSize(80, 25));
        doubleSpinBox_5->setFont(font1);
        doubleSpinBox_5->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox_5->setDecimals(3);
        doubleSpinBox_5->setMinimum(-99.989999999999995);

        gridLayout_4->addWidget(doubleSpinBox_5, 1, 1, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        label_3->setMaximumSize(QSize(20, 25));
        label_3->setFont(font1);

        gridLayout_4->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setMaximumSize(QSize(20, 25));
        label_2->setFont(font1);

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setMinimumSize(QSize(10, 25));
        label->setMaximumSize(QSize(10, 25));
        label->setFont(font1);
        label->setIndent(0);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        doubleSpinBox_4 = new QDoubleSpinBox(tab);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setEnabled(true);
        doubleSpinBox_4->setMinimumSize(QSize(80, 25));
        doubleSpinBox_4->setMaximumSize(QSize(80, 25));
        doubleSpinBox_4->setFont(font1);
        doubleSpinBox_4->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox_4->setDecimals(3);
        doubleSpinBox_4->setMinimum(-99.989999999999995);

        gridLayout_4->addWidget(doubleSpinBox_4, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/parameters.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon25, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tab_3->setEnabled(true);
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBox = new QComboBox(tab_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setMinimumSize(QSize(110, 25));
        comboBox->setMaximumSize(QSize(110, 25));
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8("\n"
"padding-left:5px;"));
        comboBox->setEditable(false);

        horizontalLayout_3->addWidget(comboBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        pushButton_36 = new QPushButton(tab_3);
        pushButton_36->setObjectName(QString::fromUtf8("pushButton_36"));
        pushButton_36->setMinimumSize(QSize(25, 25));
        pushButton_36->setMaximumSize(QSize(25, 25));
        pushButton_36->setFont(font);
        pushButton_36->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"    background-color: transparent;\n"
"    border: 2px solid #6A8480;\n"
"    border-radius: 2px;\n"
"    padding: 2px;\n"
"}"));
        pushButton_36->setIcon(icon24);

        horizontalLayout_3->addWidget(pushButton_36);


        verticalLayout_3->addLayout(horizontalLayout_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        doubleSpinBox_3 = new QDoubleSpinBox(tab_3);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setMinimumSize(QSize(80, 25));
        doubleSpinBox_3->setMaximumSize(QSize(80, 25));
        doubleSpinBox_3->setFont(font1);
        doubleSpinBox_3->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox_3->setDecimals(3);
        doubleSpinBox_3->setMinimum(-10000000000000000.000000000000000);
        doubleSpinBox_3->setMaximum(10000000000000.000000000000000);

        gridLayout_3->addWidget(doubleSpinBox_3, 2, 1, 1, 1);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(10, 0));
        label_8->setMaximumSize(QSize(10, 25));
        label_8->setFont(font1);

        gridLayout_3->addWidget(label_8, 2, 0, 1, 1);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(true);
        label_6->setMinimumSize(QSize(10, 0));
        label_6->setMaximumSize(QSize(10, 25));
        label_6->setFont(font1);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(tab_3);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimumSize(QSize(80, 25));
        doubleSpinBox->setMaximumSize(QSize(80, 25));
        doubleSpinBox->setFont(font1);
        doubleSpinBox->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox->setDecimals(3);
        doubleSpinBox->setMinimum(-10000000000000000.000000000000000);
        doubleSpinBox->setMaximum(10000000000000.000000000000000);

        gridLayout_3->addWidget(doubleSpinBox, 0, 1, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(tab_3);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMinimumSize(QSize(80, 25));
        doubleSpinBox_2->setMaximumSize(QSize(80, 25));
        doubleSpinBox_2->setFont(font1);
        doubleSpinBox_2->setStyleSheet(QString::fromUtf8("padding-left:5px;"));
        doubleSpinBox_2->setDecimals(3);
        doubleSpinBox_2->setMinimum(-10000000000000000.000000000000000);
        doubleSpinBox_2->setMaximum(10000000000000.000000000000000);

        gridLayout_3->addWidget(doubleSpinBox_2, 1, 1, 1, 1);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(10, 0));
        label_7->setMaximumSize(QSize(10, 25));
        label_7->setFont(font1);

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_3, icon11, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_2 = new QVBoxLayout(tab_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        treeWidget = new QTreeWidget(tab_4);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setFont(font1);
        treeWidget->setAutoFillBackground(false);
        treeWidget->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"\n"
"\n"
""));
        treeWidget->header()->setVisible(false);

        verticalLayout_2->addWidget(treeWidget);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/cad_wind/figure/cad_wind/tree.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_4, icon26, QString());

        verticalLayout_5->addWidget(tabWidget);


        retranslateUi(CADDockWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CADDockWidget);
    } // setupUi

    void retranslateUi(QWidget *CADDockWidget)
    {
        CADDockWidget->setWindowTitle(QApplication::translate("CADDockWidget", "Form", nullptr));
        actionSphere->setText(QApplication::translate("CADDockWidget", "Ball", nullptr));
        actionCube->setText(QApplication::translate("CADDockWidget", "Cube", nullptr));
        actionTorus->setText(QApplication::translate("CADDockWidget", "Torus", nullptr));
        actionCone->setText(QApplication::translate("CADDockWidget", "Cone", nullptr));
        actionCylinder->setText(QApplication::translate("CADDockWidget", "Cylinder", nullptr));
        actionPoint->setText(QApplication::translate("CADDockWidget", "Point", nullptr));
        actionLine->setText(QApplication::translate("CADDockWidget", "Line", nullptr));
        actionSquare->setText(QApplication::translate("CADDockWidget", "Square", nullptr));
        actionUnion->setText(QApplication::translate("CADDockWidget", "Union", nullptr));
        actionSection->setText(QApplication::translate("CADDockWidget", "Section", nullptr));
        actionCut->setText(QApplication::translate("CADDockWidget", "Cut", nullptr));
        actionSweep->setText(QApplication::translate("CADDockWidget", "Sweep", nullptr));
        actionExtrude->setText(QApplication::translate("CADDockWidget", "Extrude", nullptr));
        actionMirror->setText(QApplication::translate("CADDockWidget", "Mirror", nullptr));
        actionSelectBnd->setText(QApplication::translate("CADDockWidget", "Boundary", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSelectBnd->setToolTip(QApplication::translate("CADDockWidget", "boundary", nullptr));
#endif // QT_NO_TOOLTIP
        actionSelectDomain->setText(QApplication::translate("CADDockWidget", "Domain", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSelectDomain->setToolTip(QApplication::translate("CADDockWidget", "Domain", nullptr));
#endif // QT_NO_TOOLTIP
        actionPart1->setText(QApplication::translate("CADDockWidget", "Part1", nullptr));
        actionPart2->setText(QApplication::translate("CADDockWidget", "Part2", nullptr));
        pushButton_2->setText(QString());
        pushButton_9->setText(QString());
        pushButton_0->setText(QString());
        pushButton_13->setText(QString());
        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        pushButton->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
#ifndef QT_NO_WHATSTHIS
        tabWidget->setWhatsThis(QApplication::translate("CADDockWidget", "<html><head/><body><p>Properties</p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        pushButton_33->setText(QString());
        label_3->setText(QApplication::translate("CADDockWidget", "z", nullptr));
        label_2->setText(QApplication::translate("CADDockWidget", "y", nullptr));
        label->setText(QApplication::translate("CADDockWidget", "x", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        tabWidget->setTabToolTip(tabWidget->indexOf(tab), QApplication::translate("CADDockWidget", "Properties", nullptr));
        pushButton_36->setText(QString());
        label_8->setText(QApplication::translate("CADDockWidget", "z", nullptr));
        label_6->setText(QApplication::translate("CADDockWidget", "x", nullptr));
        label_7->setText(QApplication::translate("CADDockWidget", "y", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QString());
        tabWidget->setTabToolTip(tabWidget->indexOf(tab_3), QApplication::translate("CADDockWidget", "Other Operations", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QApplication::translate("CADDockWidget", "A", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("CADDockWidget", "A1", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem->child(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("CADDockWidget", "A2", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("CADDockWidget", "B", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_4), QString());
    } // retranslateUi

};

namespace Ui {
    class CADDockWidget: public Ui_CADDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADDOCKWIDGET_H
