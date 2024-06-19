#pragma once

#include <QColor>
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
    explicit Widget(QWidget *parent = nullptr); // 构造函数
    virtual ~Widget() override;                 // 析构函数

private slots:
    void on_ColorpushButton_clicked();                            // 颜色按钮点击事件槽
    void on_SizecomboBox_currentTextChanged(const QString &arg1); // 字体大小下拉框文字改变事件槽
    void on_BlodpushButton_clicked();                  // 加粗按钮点击事件槽（无参数）
    void on_ItalicpushButton_clicked();                // 斜体按钮点击事件槽（无参数）
    void on_BlodpushButton_clicked(bool checked);      // 加粗按钮点击事件槽（带参数）
    void on_ItalicpushButton_clicked(bool checked);    // 斜体按钮点击事件槽（带参数）
    void on_UnderlinepushButton_clicked(bool checked); // 下划线按钮点击事件槽
    void on_SizecomboBox_currentIndexChanged(const QFont &ft); // 字体大小下拉框索引改变事件槽
    void on_SendpushButton_clicked();                          // 发送按钮点击事件槽

private:
    Ui::Widget *ui; // UI 指针
    QColor color;   // 颜色对象
};
