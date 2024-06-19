#include "widget.h"
#include <QColorDialog>
#include <QMessageBox>
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this); // 初始化 UI
}

Widget::~Widget()
{
    delete ui; // 释放 UI 内存
}

void Widget::on_ColorpushButton_clicked()
{
    color = QColorDialog::getColor(color, this); // 打开颜色选择对话框

    if (color.isValid()) {
        ui->MsgtextEdit->setTextColor(color); // 设置文本颜色
        ui->MsgtextEdit->setFocus();          // 设置焦点
    }
}

void Widget::on_ItalicpushButton_clicked() {}

void Widget::on_BlodpushButton_clicked(bool checked)
{
    if (checked)
        ui->MsgtextEdit->setFontWeight(QFont::Bold); // 设置字体加粗
    else
        ui->MsgtextEdit->setFontWeight(QFont::Normal); // 取消字体加粗
    ui->MsgtextEdit->setFocus();                       // 设置焦点
}

void Widget::on_ItalicpushButton_clicked(bool checked)
{
    ui->MsgtextEdit->setFontItalic(checked); // 设置字体斜体
    ui->MsgtextEdit->setFocus();             // 设置焦点
}

void Widget::on_UnderlinepushButton_clicked(bool checked)
{
    ui->MsgtextEdit->setFontUnderline(checked); // 设置字体下划线
    ui->MsgtextEdit->setFocus();                // 设置焦点
}

void Widget::on_SizecomboBox_currentIndexChanged(const QFont &ft)
{
    ui->MsgtextEdit->setCurrentFont(ft); // 设置当前字体
    ui->MsgtextEdit->setFocus();         // 设置焦点
}

void Widget::on_SendpushButton_clicked()
{
    if (ui->UsertableWidget->selectedItems().isEmpty()) {
        QMessageBox::warning(0,
                             "选择",
                             "请选择要发送的目标用户！",
                             QMessageBox::Ok); // 弹出警告对话框
        return;
    }
}

void Widget::on_SizecomboBox_currentTextChanged(const QString &arg1)
{
    const QString unused = arg1; // 将 arg1 存储在一个未使用的变量中
}

void Widget::on_BlodpushButton_clicked() {}
