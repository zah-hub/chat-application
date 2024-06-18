#include "widget.h"
#include <QColorDialog>
#include <QMessageBox>
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_ColorpushButton_clicked()
{
    color = QColorDialog::getColor(color, this);

    if (color.isValid()) {
        ui->MsgtextEdit->setTextColor(color);
        ui->MsgtextEdit->setFocus();
    }
}

void Widget::on_ItalicpushButton_clicked() {}

void Widget::on_BlodpushButton_clicked(bool checked)
{
    if (checked)
        ui->MsgtextEdit->setFontWeight(QFont::Bold);
    else
        ui->MsgtextEdit->setFontWeight(QFont::Normal);
    ui->MsgtextEdit->setFocus();
}

void Widget::on_ItalicpushButton_clicked(bool checked)
{
    ui->MsgtextEdit->setFontItalic(checked);
    ui->MsgtextEdit->setFocus();
}

void Widget::on_UnderlinepushButton_clicked(bool checked)
{
    ui->MsgtextEdit->setFontUnderline(checked);
    ui->MsgtextEdit->setFocus();
}

void Widget::on_SizecomboBox_currentIndexChanged(const QFont &ft)
{
    ui->MsgtextEdit->setCurrentFont(ft);
    ui->MsgtextEdit->setFocus();
}

void Widget::on_SendpushButton_clicked()
{
    if (ui->UsertableWidget->selectedItems().isEmpty()) {
        QMessageBox::warning(0, "选择", "请选择要发送的目标用户！", QMessageBox::Ok);
        return;
    }
}
