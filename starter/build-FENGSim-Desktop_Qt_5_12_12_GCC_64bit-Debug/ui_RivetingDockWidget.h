/********************************************************************************
** Form generated from reading UI file 'RivetingDockWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIVETINGDOCKWIDGET_H
#define UI_RIVETINGDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RivetingDockWidget
{
public:
    QTabWidget *tabWidget;
    QWidget *tabRoundHead;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QLabel *label_9;
    QLineEdit *lineEdit_9;
    QLabel *label_10;
    QLineEdit *lineEdit_10;
    QLabel *label_11;
    QLineEdit *lineEdit_11;
    QLabel *label_12;
    QLineEdit *lineEdit_12;
    QLabel *label_13;
    QLineEdit *lineEdit_13;
    QLabel *label_14;
    QLineEdit *lineEdit_14;
    QLabel *label_15;
    QLineEdit *lineEdit_15;
    QLabel *label_16;
    QLineEdit *lineEdit_16;
    QLabel *label_17;
    QLineEdit *lineEdit_17;
    QLabel *label_18;
    QLineEdit *lineEdit_18;
    QLabel *label_19;
    QLineEdit *lineEdit_19;
    QPushButton *pushButton;
    QWidget *tabFlatHead;
    QWidget *tabHollow;
    QWidget *tabCountersunk;

    void setupUi(QWidget *RivetingDockWidget)
    {
        if (RivetingDockWidget->objectName().isEmpty())
            RivetingDockWidget->setObjectName(QString::fromUtf8("RivetingDockWidget"));
        RivetingDockWidget->resize(603, 788);
        tabWidget = new QTabWidget(RivetingDockWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 20, 341, 701));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab {\n"
"    min-width: 55px;  /* \350\256\276\347\275\256\346\240\207\347\255\276\345\256\275\345\272\246\357\274\214\346\240\271\346\215\256\345\256\236\351\231\205\345\206\205\345\256\271\350\260\203\345\244\247 */\n"
"    min-height: 30px;  /* \350\256\276\347\275\256\346\240\207\347\255\276\351\253\230\345\272\246 */\n"
"    padding: 1px;       /* \345\206\205\350\276\271\350\267\235\357\274\214\351\201\277\345\205\215\346\226\207\345\255\227\350\264\264\350\276\271 */\n"
"}"));
        tabRoundHead = new QWidget();
        tabRoundHead->setObjectName(QString::fromUtf8("tabRoundHead"));
        tabRoundHead->setEnabled(true);
        tabRoundHead->setStyleSheet(QString::fromUtf8(""));
        formLayoutWidget = new QWidget(tabRoundHead);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(9, 9, 201, 660));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(formLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_5 = new QLineEdit(formLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        lineEdit_6 = new QLineEdit(formLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        lineEdit_7 = new QLineEdit(formLayoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_7);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        lineEdit_8 = new QLineEdit(formLayoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_8);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        lineEdit_9 = new QLineEdit(formLayoutWidget);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEdit_9);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_10);

        lineEdit_10 = new QLineEdit(formLayoutWidget);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        formLayout->setWidget(9, QFormLayout::FieldRole, lineEdit_10);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_11);

        lineEdit_11 = new QLineEdit(formLayoutWidget);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));

        formLayout->setWidget(10, QFormLayout::FieldRole, lineEdit_11);

        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_12);

        lineEdit_12 = new QLineEdit(formLayoutWidget);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));

        formLayout->setWidget(11, QFormLayout::FieldRole, lineEdit_12);

        label_13 = new QLabel(formLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(12, QFormLayout::LabelRole, label_13);

        lineEdit_13 = new QLineEdit(formLayoutWidget);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));

        formLayout->setWidget(12, QFormLayout::FieldRole, lineEdit_13);

        label_14 = new QLabel(formLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout->setWidget(13, QFormLayout::LabelRole, label_14);

        lineEdit_14 = new QLineEdit(formLayoutWidget);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));

        formLayout->setWidget(13, QFormLayout::FieldRole, lineEdit_14);

        label_15 = new QLabel(formLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout->setWidget(14, QFormLayout::LabelRole, label_15);

        lineEdit_15 = new QLineEdit(formLayoutWidget);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));

        formLayout->setWidget(14, QFormLayout::FieldRole, lineEdit_15);

        label_16 = new QLabel(formLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout->setWidget(15, QFormLayout::LabelRole, label_16);

        lineEdit_16 = new QLineEdit(formLayoutWidget);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));

        formLayout->setWidget(15, QFormLayout::FieldRole, lineEdit_16);

        label_17 = new QLabel(formLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout->setWidget(16, QFormLayout::LabelRole, label_17);

        lineEdit_17 = new QLineEdit(formLayoutWidget);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));

        formLayout->setWidget(16, QFormLayout::FieldRole, lineEdit_17);

        label_18 = new QLabel(formLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout->setWidget(17, QFormLayout::LabelRole, label_18);

        lineEdit_18 = new QLineEdit(formLayoutWidget);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));

        formLayout->setWidget(17, QFormLayout::FieldRole, lineEdit_18);

        label_19 = new QLabel(formLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout->setWidget(18, QFormLayout::LabelRole, label_19);

        lineEdit_19 = new QLineEdit(formLayoutWidget);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));

        formLayout->setWidget(18, QFormLayout::FieldRole, lineEdit_19);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(19, QFormLayout::FieldRole, pushButton);

        tabWidget->addTab(tabRoundHead, QString());
        tabFlatHead = new QWidget();
        tabFlatHead->setObjectName(QString::fromUtf8("tabFlatHead"));
        tabWidget->addTab(tabFlatHead, QString());
        tabHollow = new QWidget();
        tabHollow->setObjectName(QString::fromUtf8("tabHollow"));
        tabWidget->addTab(tabHollow, QString());
        tabCountersunk = new QWidget();
        tabCountersunk->setObjectName(QString::fromUtf8("tabCountersunk"));
        tabWidget->addTab(tabCountersunk, QString());

        retranslateUi(RivetingDockWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RivetingDockWidget);
    } // setupUi

    void retranslateUi(QWidget *RivetingDockWidget)
    {
        RivetingDockWidget->setWindowTitle(QApplication::translate("RivetingDockWidget", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        tabRoundHead->setToolTip(QApplication::translate("RivetingDockWidget", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        tabRoundHead->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("RivetingDockWidget", "\351\223\206\351\222\211\345\244\264\347\233\264\345\276\204\357\274\232", nullptr));
        label_2->setText(QApplication::translate("RivetingDockWidget", "\351\223\206\351\222\211\345\244\264\351\253\230\345\272\246\357\274\232", nullptr));
        label_3->setText(QApplication::translate("RivetingDockWidget", "\351\223\206\351\222\211\346\235\206\347\233\264\345\276\204\357\274\232", nullptr));
        label_4->setText(QApplication::translate("RivetingDockWidget", "\351\223\206\351\222\211\346\235\206\351\225\277\345\272\246\357\274\232", nullptr));
        label_5->setText(QApplication::translate("RivetingDockWidget", "\350\277\207\346\270\241\345\234\206\350\247\222\345\215\212\345\276\204\357\274\232", nullptr));
        label_6->setText(QApplication::translate("RivetingDockWidget", "\346\235\277\344\273\2661 \345\216\232\345\272\246\357\274\232", nullptr));
        label_7->setText(QApplication::translate("RivetingDockWidget", "\346\235\277\344\273\2661 \351\253\230\345\272\246\357\274\232", nullptr));
        label_8->setText(QApplication::translate("RivetingDockWidget", "\346\235\277\344\273\2661 \345\256\275\345\272\246\357\274\232", nullptr));
        label_9->setText(QApplication::translate("RivetingDockWidget", "\346\235\277\344\273\2661 \351\227\264\351\232\231\357\274\232", nullptr));
        label_10->setText(QApplication::translate("RivetingDockWidget", "\346\235\277\344\273\2662 \345\216\232\345\272\246\357\274\232", nullptr));
        label_11->setText(QApplication::translate("RivetingDockWidget", "\346\235\277\344\273\2662 \351\253\230\345\272\246\357\274\232", nullptr));
        label_12->setText(QApplication::translate("RivetingDockWidget", "\346\235\277\344\273\2662 \345\256\275\345\272\246\357\274\232", nullptr));
        label_13->setText(QApplication::translate("RivetingDockWidget", "\346\235\277\344\273\2662 \351\227\264\351\232\231\357\274\232", nullptr));
        label_14->setText(QApplication::translate("RivetingDockWidget", "\345\206\262\345\244\264\345\216\232\345\272\246\357\274\232", nullptr));
        label_15->setText(QApplication::translate("RivetingDockWidget", "\345\206\262\345\244\264\351\253\230\345\272\246\357\274\232", nullptr));
        label_16->setText(QApplication::translate("RivetingDockWidget", "\345\206\262\345\244\264\346\267\261\345\272\246\357\274\232", nullptr));
        label_17->setText(QApplication::translate("RivetingDockWidget", "\347\240\247\345\272\247\345\216\232\345\272\246\357\274\232", nullptr));
        label_18->setText(QApplication::translate("RivetingDockWidget", "\347\240\247\345\272\247\351\253\230\345\272\246\357\274\232", nullptr));
        label_19->setText(QApplication::translate("RivetingDockWidget", "\347\240\247\345\272\247\346\267\261\345\272\246\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("RivetingDockWidget", "\347\241\256\345\256\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRoundHead), QApplication::translate("RivetingDockWidget", "\345\234\206\345\244\264\351\223\206\351\222\211", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabFlatHead), QApplication::translate("RivetingDockWidget", "\345\271\263\345\244\264\351\223\206\351\222\211", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabHollow), QApplication::translate("RivetingDockWidget", "\346\262\211\345\244\264\351\223\206\351\222\211", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCountersunk), QApplication::translate("RivetingDockWidget", "\344\270\255\347\251\272\351\223\206\351\222\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RivetingDockWidget: public Ui_RivetingDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIVETINGDOCKWIDGET_H
