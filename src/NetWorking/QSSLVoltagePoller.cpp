#include "./src/NetWorking/certificateinfo.h"
#include "QSSLVoltagePoller.h"



QSSLVoltagePoller::QSSLVoltagePoller(QString clientName, QObject *parent)
    : QSSLBaseClient(clientName,parent)
{

}

QSSLVoltagePoller::~QSSLVoltagePoller()
{
}


void QSSLVoltagePoller::sendReadVoltageRequest(const QString &moduleAlias, unsigned int channelIndex)
{
    // Check if the module alias is valid and not empty
    if (moduleAlias.isEmpty()) {
        Q_EMIT errorSignal("NACK: Empty module alias");
        return;
    }

    // Check for socket connection
    if (!checkConnect(m_host, m_port)) {
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
        return;
    }

    // Safeguard against potential null pointer dereference
    if (!socket) {
        Q_EMIT errorSignal("NACK: Socket is null");
        return;
    }

    // Construct and send the request
    QString request = QString("readVoltage;%1;%2;\n").arg(moduleAlias).arg(channelIndex);
    m_lastRequest = "readVoltage";
    qint64 bytesWritten = socket->write(request.toUtf8());

    // Check if the write operation was successful
    if (bytesWritten == -1) {
        Q_EMIT errorSignal("NACK: Failed to write to socket");
        return;
    }

    // Check if the data is written within a specified timeout
    if (!socket->waitForBytesWritten(5000)) { // Timeout of 5000 milliseconds
        Q_EMIT errorSignal("NACK: Timeout on writing to socket");
        return;
    }



}

void QSSLVoltagePoller::onDataReceived()
{
    QString response = QString::fromUtf8(socket->readAll());
    if (response.contains("NACK"))
    {
        Q_EMIT errorSignal(response);
        return;
    }
    else if (m_lastRequest == "readVoltage")
    {
        Q_EMIT voltageReadedSignal(response);

    }
}




