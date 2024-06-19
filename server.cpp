#include "server.h"

Server::Server(QWidget *parent)
    : QDialog(parent)
{
    setFixedSize(400, 200); // 设置固定窗口大小

    tport = 6666;                // 初始化端口号
    tSrv = new QTcpServer(this); // 创建 TCP 服务器对象

    connect(tSrv, SIGNAL(newConnection()), this, SLOT(sendmsg())); // 连接新连接信号到发送消息槽

    initserver(); // 初始化服务器
}

void Server::initserver()
{
    payloadsize = 1024 * 4; // 设置负载大小
    totalbytes = 0;         // 初始化总字节数
    byteswritten = 0;       // 初始化已写字节数
    bytestobewrite = 0;     // 初始化待写字节数
}

void Server::refused() {}

void Server::sendmsg() {}

void Server::sendfilename(QString filename) {}
