#include "QSSLDebugClient.h"
#include <QDebug>

QSSLDebugClient::QSSLDebugClient(QString clientName, QObject *parent)
        : QSSLBaseClient(clientName,parent)
{
}


void QSSLDebugClient::onDataReceived()
{
    QString message = QString::fromUtf8(socket->readAll());
    Q_EMIT debugMessageReceived(message);
}

