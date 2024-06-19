#pragma once

#include <QColor>
#include <QFont>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_ColorpushButton_clicked();
    void on_SizecomboBox_currentTextChanged(const QString &arg1);
    void on_BlodpushButton_clicked();
    void on_ItalicpushButton_clicked();
    void on_UnderlinepushButton_clicked();
    void on_SendpushButton_clicked();

private:
    Ui::Widget *ui;
    QColor color;
};
