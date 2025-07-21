#ifndef ELBOWSDOCKWIDGET_H
#define ELBOWSDOCKWIDGET_H

#include <QDockWidget>

#include "MainWindow.h"

namespace Ui {
class ElbowsDockWidget;
}

class ElbowsDockWidget : public QDockWidget
{
    Q_OBJECT

public:
    explicit ElbowsDockWidget(QWidget *parent = nullptr);
    ~ElbowsDockWidget();


signals:
    void confirmParameters(double R_out, double R_in, double length,
                            double sleeve_t1, double sleeve_l1,
                           double sleeve_t, double sleeve_l,
                           double rotary_pos, double fixed_pos,
                           double arc_R, double arc_t, double arc_angle);
    void workDirChanged(const QString& newWorkDir);

private slots:
    void onConfirmClicked();  // ⬅️ 点击事件

    void onTubeMaterialChanged(const QString &material);
    void onRotaryMaterialChanged(const QString &material);
    void onFixedMaterialChanged(const QString &material);
    void onArcMaterialChanged(const QString &material);

    void onNewFileClicked();
    void onOpenFileClicked();
    void onSaveFileClicked();
    void onGenerateMeshClicked();




private:
    Ui::ElbowsDockWidget *ui;
    void initializeMaterialMap();
    void updateMaterialFile();
    QString currentWorkDir_;  // 当前的全局工作目录
};


#endif // ELBOWSDOCKWIDGET_H
