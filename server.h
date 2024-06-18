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
    Server(QWidget *parent = 0);

    qint16 tport;
    QTcpServer *tSrv;
    QString filename;
    QString thefilename;
    QFile *localfile;

    qint64 totalbytes;
    qint64 byteswritten;
    qint64 bytestobewrite;
    qint64 payloadsize;
    QByteArray outblock;

    QTcpSocket *clentconnect;
    QTime time;

    void initserver();
    void refused();

private slots:
    void sendmsg();
    void sendfilename(QString filename);
};
