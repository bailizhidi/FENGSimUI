#include "ElbowsDockWidget.h"
#include "ui_ElbowsDockWidget.h"
#include "Mesh/MeshGeneration.h"
#include "MainWindow.h"
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QTabBar>
#include <QTextStream>
#include <QMap>
#include <QComboBox>
#include <QFileDialog>
#include <QMessageBox>
#include <QDoubleValidator>

#include "Mesh/MeshGeneration.h"
#include "GEdge.h"
#include "TopExp_Explorer.hxx"
#include "QString"

ElbowsDockWidget::ElbowsDockWidget(QWidget *parent)
    : QDockWidget(parent), ui(new Ui::ElbowsDockWidget)
{
    ui->setupUi(this);

    // 初始化材料映射关系
    initializeMaterialMap();

    connect(ui->pushButton_newFile, &QPushButton::clicked, this, &ElbowsDockWidget::onNewFileClicked);
    connect(ui->pushButton_openFile, &QPushButton::clicked, this, &ElbowsDockWidget::onOpenFileClicked);
    connect(ui->pushButton_saveFile, &QPushButton::clicked, this, &ElbowsDockWidget::onSaveFileClicked);



    // 连接各个材料 ComboBox 的信号到槽函数
    connect(ui->comboBox_tubeMaterial, &QComboBox::currentTextChanged,
            this, &ElbowsDockWidget::onTubeMaterialChanged);

    connect(ui->comboBox_rotaryMaterial, &QComboBox::currentTextChanged,
            this, &ElbowsDockWidget::onRotaryMaterialChanged);

    connect(ui->comboBox_fixedMaterial, &QComboBox::currentTextChanged,
            this, &ElbowsDockWidget::onFixedMaterialChanged);

    connect(ui->comboBox_arcMaterial, &QComboBox::currentTextChanged,
            this, &ElbowsDockWidget::onArcMaterialChanged);
    // 连接按钮点击事件
    connect(ui->pushButton_confirm, &QPushButton::clicked,
            this, &ElbowsDockWidget::onConfirmClicked);
    connect(ui->pushButton_generateMesh, &QPushButton::clicked, this, &ElbowsDockWidget::onGenerateMeshClicked);


    this->setMinimumWidth(250);  // 最小宽度
    this->setMaximumWidth(250);  // 最大宽度
    this->setMinimumHeight(400);  // 最小长度
    this->setMaximumHeight(400);  // 最大长度

    this->setWindowTitle("");  // 自定义边栏标题
}

ElbowsDockWidget::~ElbowsDockWidget()
{
    delete ui;
}

void ElbowsDockWidget::onNewFileClicked() {
    // 1. 选择父目录
    QString parentDir = QFileDialog::getExistingDirectory(this, "选择保存目录");
    if (parentDir.isEmpty())
        return;
    currentWorkDir_ = parentDir + "/config" ;
    QDir dir;
    if (!dir.mkdir(currentWorkDir_)) {
        QMessageBox::warning(this, "错误", "无法创建工作目录！");
        return;}
    // 2. 提示成功
    QMessageBox::information(this, "新建成功", "已创建新工作目录：\n" + currentWorkDir_);

    // 发射信号，告诉外部 currentWorkDir_ 改变了
    emit workDirChanged(currentWorkDir_);
}

void ElbowsDockWidget::onOpenFileClicked() {

}

void ElbowsDockWidget::onSaveFileClicked() {

}

void ElbowsDockWidget::onConfirmClicked()
{
    bool ok[12];
        double R_out        = ui->lineEdit_Rout->text().toDouble(&ok[0]);
        double R_in         = ui->lineEdit_Rin->text().toDouble(&ok[1]);
        double length       = ui->lineEdit_Length->text().toDouble(&ok[2]);
        double sleeve_t1     = ui->lineEdit_SleeveThickness1->text().toDouble(&ok[3]);
        double sleeve_l1     = ui->lineEdit_SleeveLength1->text().toDouble(&ok[4]);
        double sleeve_t     = ui->lineEdit_SleeveThickness->text().toDouble(&ok[5]);
        double sleeve_l     = ui->lineEdit_SleeveLength->text().toDouble(&ok[6]);
        double rotary_pos   = ui->lineEdit_RotaryPos->text().toDouble(&ok[7]);
        double fixed_pos    = ui->lineEdit_FixedPos->text().toDouble(&ok[8]);
        double arc_R        = ui->lineEdit_ArcR->text().toDouble(&ok[9]);
        double arc_t        = ui->lineEdit_ArcThickness->text().toDouble(&ok[10]);
        double arc_angle    = ui->lineEdit_ArcAngle->text().toDouble(&ok[11]);

        for (int i = 0; i < 12; ++i) {
            if (!ok[i]) {
                qDebug() << "参数输入错误！";
                return;
            }
        }

        emit confirmParameters(R_out, R_in, length, sleeve_t1, sleeve_l1, sleeve_t, sleeve_l, rotary_pos, fixed_pos, arc_R, arc_t, arc_angle);
        qDebug() << "R_out:" << R_out
                     << "R_in:" << R_in
                     << "length:" << length
                     << "sleeve_thickness1:" << sleeve_t1
                     << "sleeve_length1:" << sleeve_l1
                     << "sleeve_thickness:" << sleeve_t
                     << "sleeve_length:" << sleeve_l
                     << "rotary_pos:" << rotary_pos
                     << "fixed_pos:" << fixed_pos
                     << "arc_R:" << arc_R
                     << "arc_thickness:" << arc_t
                     << "arc_angle:" << arc_angle;
}

// 预先定义好的中文到英文的映射
QMap<QString, QString> materialMap;

void ElbowsDockWidget::initializeMaterialMap() {
    // 初始化映射关系
    materialMap["304不锈钢"] = "AusteniticStainlessSteel";
    materialMap["铝合金"] = "AluminumCastAlloy";
    materialMap["钛合金"] = "Ti-6Al-4V";
    materialMap["黄铜"] = "Brass";
    materialMap["黄金"] = "Gold";
    materialMap["塑料"] = "Plastic";
    materialMap["刚体"] = "RigidBody";
}
// 示例实现
void ElbowsDockWidget::onTubeMaterialChanged(const QString &material) {
    qDebug() << "Tube 材料已选择：" << material;
    updateMaterialFile();  // 更新文件
}

void ElbowsDockWidget::onRotaryMaterialChanged(const QString &material) {
    qDebug() << "Rotary 套材料已选择：" << material;
    updateMaterialFile();  // 更新文件
}

void ElbowsDockWidget::onFixedMaterialChanged(const QString &material) {
    qDebug() << "固定套材料已选择：" << material;  
    updateMaterialFile();  // 更新文件
}

void ElbowsDockWidget::onArcMaterialChanged(const QString &material) {
    qDebug() << "弯管弧段材料已选择：" << material;
    updateMaterialFile();  // 更新文件
}

void ElbowsDockWidget::updateMaterialFile()
{
    // 获取每个 ComboBox 中当前选择的中文材料
        QString tubeMaterialCN = ui->comboBox_tubeMaterial->currentText();
        QString rotaryMaterialCN = ui->comboBox_rotaryMaterial->currentText();
        QString fixedMaterialCN = ui->comboBox_fixedMaterial->currentText();
        QString arcMaterialCN = ui->comboBox_arcMaterial->currentText();

        // 将中文材料名称转换为英文名称
        QString tubeMaterial = materialMap.value(tubeMaterialCN, tubeMaterialCN);  // 如果没有找到，使用中文名
        QString rotaryMaterial = materialMap.value(rotaryMaterialCN, rotaryMaterialCN);
        QString fixedMaterial = materialMap.value(fixedMaterialCN, fixedMaterialCN);
        QString arcMaterial = materialMap.value(arcMaterialCN, arcMaterialCN);

    // 假设你有一个文件夹，用来存储每个材料对应的文件
    // 这里的路径是一个假设的路径，可以根据实际情况进行修改
    QString tubeMaterialFile = "/home/ysy/FENGSim/starter/FENGSim/Elbows/materials/" + tubeMaterial + ".FCMat";
    QString rotaryMaterialFile = "/home/ysy/FENGSim/starter/FENGSim/Elbows/materials/" + rotaryMaterial + ".FCMat";
    QString fixedMaterialFile = "/home/ysy/FENGSim/starter/FENGSim/Elbows/materials/" + fixedMaterial + ".FCMat";
    QString arcMaterialFile = "/home/ysy/FENGSim/starter/FENGSim/Elbows/materials/" + arcMaterial + ".FCMat";

    // 文件路径
    QString filePath = currentWorkDir_ + "/material.info";

    // 打开文件
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "无法打开文件!";
        return;
    }

    QTextStream out(&file);

    // 写入材料文件路径到文件
    out << "---" << "\n";
    out << "Tube Material: " << tubeMaterialFile << "\n";
    out << "Rotary Material: " << rotaryMaterialFile << "\n";
    out << "Fixed Material: " << fixedMaterialFile << "\n";
    out << "Arc Material: " << arcMaterialFile << "\n";

    file.close();

    qDebug() << "材料文件路径已保存到文件：" << filePath;
}
void ElbowsDockWidget::onGenerateMeshClicked() {
    // 创建 MeshModule 对象
    MeshModule meshModule;

    // 假设 TopoDS_Shape S 已经通过其他方式定义
    TopoDS_Shape* S = getShapeFromSomewhere(); // 这里需要根据你的需求获取 S 这个模型

    // 设置一些参数（假设 size, refine_level, path 等是通过 UI 输入获得）
    double size = ui->sizeSpinBox->value();  // 示例：从界面获取 size
    int refine_level = ui->refineLevelSpinBox->value();  // 示例：从界面获取 refine_level
    QString path = ui->pathLineEdit->text();  // 示例：从界面获取文件保存路径

    // 调用网格生成函数
    meshModule.MeshGeneration(S, size, refine_level, path);

    // 你也可以调用其他函数
    meshModule.FileFormat();
    meshModule.MeasureModel(path, "mesh_measure.vtk");
    meshModule.PathPlanning();
}


