//在大体框架的基础上，实现了字体大小设置，字体加粗，斜体，下划线，字体颜色按键功能。
#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
