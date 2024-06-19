#pragma once

#include <QDebug>
#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTime>

class QFile;
class QTcpServer;
class QTcpSocket;

class Server : public QDialog
{
    Q_OBJECT
public:
    Server(QWidget *parent = 0); // 构造函数

    qint16 tport;        // 端口号
    QTcpServer *tSrv;    // TCP 服务器指针
    QString filename;    // 文件名
    QString thefilename; // 另一个文件名
    QFile *localfile;    // 本地文件指针

    qint64 totalbytes;     // 总字节数
    qint64 byteswritten;   // 已写字节数
    qint64 bytestobewrite; // 待写字节数
    qint64 payloadsize;    // 负载大小
    QByteArray outblock;   // 输出数据块

    QTcpSocket *clentconnect; // 客户端连接指针
    QTime time;               // 时间对象

    void initserver(); // 初始化服务器
    void refused();    // 拒绝连接

private slots:
    void sendmsg();                      // 发送消息
    void sendfilename(QString filename); // 发送文件名
};
