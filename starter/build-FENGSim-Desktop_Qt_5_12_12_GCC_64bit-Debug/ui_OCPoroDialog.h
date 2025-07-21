/********************************************************************************
** Form generated from reading UI file 'OCPoroDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCPORODIALOG_H
#define UI_OCPORODIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_OCPoroDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QCustomPlot *customplot;

    void setupUi(QDialog *OCPoroDialog)
    {
        if (OCPoroDialog->objectName().isEmpty())
            OCPoroDialog->setObjectName(QString::fromUtf8("OCPoroDialog"));
        OCPoroDialog->resize(500, 500);
        OCPoroDialog->setMinimumSize(QSize(500, 500));
        OCPoroDialog->setMaximumSize(QSize(500, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/main_wind/figure/main_wind/Fengsim_logo_about.png"), QSize(), QIcon::Normal, QIcon::Off);
        OCPoroDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(OCPoroDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        customplot = new QCustomPlot(OCPoroDialog);
        customplot->setObjectName(QString::fromUtf8("customplot"));

        horizontalLayout->addWidget(customplot);


        retranslateUi(OCPoroDialog);

        QMetaObject::connectSlotsByName(OCPoroDialog);
    } // setupUi

    void retranslateUi(QDialog *OCPoroDialog)
    {
        OCPoroDialog->setWindowTitle(QApplication::translate("OCPoroDialog", "Summary", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OCPoroDialog: public Ui_OCPoroDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCPORODIALOG_H
