#include "widget.h"
#include <QColorDialog>
#include <QMessageBox>
#include "ui_widget.h"

// 构造函数，初始化UI组件和信号槽连接
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 初始化下拉框字体大小选项
    ui->SizecomboBox->addItem("8");
    ui->SizecomboBox->addItem("10");
    ui->SizecomboBox->addItem("12");
    ui->SizecomboBox->addItem("14");
    ui->SizecomboBox->addItem("16");
    ui->SizecomboBox->addItem("18");
    ui->SizecomboBox->addItem("20");
    ui->SizecomboBox->addItem("22");
    ui->SizecomboBox->addItem("24");

    // 连接信号和槽
    connect(ui->ColorpushButton, &QPushButton::clicked, this, &Widget::on_ColorpushButton_clicked);
    connect(ui->BlodpushButton, &QPushButton::clicked, this, &Widget::on_BlodpushButton_clicked);
    connect(ui->ItalicpushButton, &QPushButton::clicked, this, &Widget::on_ItalicpushButton_clicked);
    connect(ui->UnderlinepushButton,
            &QPushButton::clicked,
            this,
            &Widget::on_UnderlinepushButton_clicked);
    connect(ui->SizecomboBox,
            &QComboBox::currentTextChanged,
            this,
            &Widget::on_SizecomboBox_currentTextChanged);
    connect(ui->SendpushButton, &QPushButton::clicked, this, &Widget::on_SendpushButton_clicked);
}

// 析构函数，删除UI对象
Widget::~Widget()
{
    delete ui;
}

// 颜色按钮点击槽函数
void Widget::on_ColorpushButton_clicked()
{
    QColor color = QColorDialog::getColor(this->color, this, "选择颜色");
    if (color.isValid()) {
        this->color = color;
        ui->MsgtextEdit->setTextColor(color);
        ui->MsgtextEdit->setFocus();
    }
}

// 粗体按钮点击槽函数
void Widget::on_BlodpushButton_clicked()
{
    QFont font = ui->MsgtextEdit->currentFont();
    font.setBold(ui->BlodpushButton->isChecked());
    ui->MsgtextEdit->setFont(font);
    ui->MsgtextEdit->setFocus();
}

// 斜体按钮点击槽函数
void Widget::on_ItalicpushButton_clicked()
{
    QFont font = ui->MsgtextEdit->currentFont();
    font.setItalic(ui->ItalicpushButton->isChecked());
    ui->MsgtextEdit->setFont(font);
    ui->MsgtextEdit->setFocus();
}

// 下划线按钮点击槽函数
void Widget::on_UnderlinepushButton_clicked()
{
    QFont font = ui->MsgtextEdit->currentFont();
    font.setUnderline(ui->UnderlinepushButton->isChecked());
    ui->MsgtextEdit->setFont(font);
    ui->MsgtextEdit->setFocus();
}

// 字体大小下拉框文本改变槽函数
void Widget::on_SizecomboBox_currentTextChanged(const QString &arg1)
{
    bool ok;
    int size = arg1.toInt(&ok);
    if (ok) {
        QFont font = ui->MsgtextEdit->currentFont();
        font.setPointSize(size);
        ui->MsgtextEdit->setFont(font);
        ui->MsgtextEdit->setFocus();
    }
}

// 发送按钮点击槽函数
void Widget::on_SendpushButton_clicked()
{
    if (ui->UsertableWidget->selectedItems().isEmpty()) {
        QMessageBox::warning(this, "选择", "请选择要发送的目标用户！", QMessageBox::Ok);
        return;
    }
    // 这里可以添加发送信息的逻辑
    QMessageBox::information(this, "发送", "信息已发送！", QMessageBox::Ok);
}
