#include "server.h"

Server::Server(QWidget *parent)
    : QDialog(parent)
{
    setFixedSize(400, 200);

    tport = 6666;
    tSrv = new QTcpServer(this);

    connect(tSrv, SIGNAL(newConnection()), this, SLOT(sendmsg()));

    initserver();
}

void Server::initserver()
{
    payloadsize = 1024 * 4;
    totalbytes = 0;
    byteswritten = 0;
    bytestobewrite = 0;
}

void Server::refused() {}

void Server::sendmsg() {}

void Server::sendfilename(QString filename) {}
