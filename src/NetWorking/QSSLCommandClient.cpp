#include "./src/NetWorking/certificateinfo.h"
#include "QSSLCommandClient.h"



QSSLCommandClient::QSSLCommandClient(QString clientName, QObject *parent)
    : QSSLBaseClient(clientName,parent)
{

}

QSSLCommandClient::~QSSLCommandClient()
{

}



void QSSLCommandClient::sendReadCurrentRequest(const QString &moduleAlias, unsigned int channelIndex)
{
    if (checkConnect(m_host, m_port)) {
        QString request = QString("readCurrent;%1;%2;\n").arg(moduleAlias).arg(channelIndex);
        m_lastRequest = "readCurrent";
        socket->write(request.toUtf8());
        socket->waitForBytesWritten(); // Returns true if the request is sent successfully.
    }
    else
    {
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
    }
}

void QSSLCommandClient::sendReadVoltageRequest(const QString &moduleAlias, unsigned int channelIndex)
{
    if (checkConnect(m_host, m_port))
    {
        QString request = QString("readVoltage;%1;%2;\n").arg(moduleAlias).arg(channelIndex);
        m_lastRequest = "readVoltage";
        socket->write(request.toUtf8());
        socket->waitForBytesWritten();
    }
    else
    {
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
    }
}

void QSSLCommandClient::sendStartModbusSimulation()
{
   if (checkConnect(m_host, m_port))
   {
       m_lastRequest = "startModbusSimulation";
       QString request = m_lastRequest+"\n";

       socket->write(request.toUtf8());
       socket->waitForBytesWritten();
   }
   else
   {
       Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
   }
}

void QSSLCommandClient::sendStopSimulation()
{
    if (checkConnect(m_host, m_port))
    {
        m_lastRequest = "stopModbusSimulation";
        QString request = m_lastRequest+"\n";
        socket->write(request.toUtf8());
        socket->waitForBytesWritten();
    }
    else
    {
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
    }
}

void QSSLCommandClient::sendStartModbusAcquisition()
{
    if (checkConnect(m_host, m_port))
    {
        m_lastRequest = "startModbusAcquisition";
        QString request = m_lastRequest+"\n";

        socket->write(request.toUtf8());
        socket->waitForBytesWritten();
    }
    else
    {
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
    }
}

void QSSLCommandClient::sendStopModbusAcquisition()
{
    if (checkConnect(m_host, m_port))
    {
        m_lastRequest = "stopModbusAcquisition";
        QString request = m_lastRequest+"\n";

        socket->write(request.toUtf8());
        socket->waitForBytesWritten();
    }
    else
    {
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
    }
}






void QSSLCommandClient::onDataReceived()
{

    QString response = QString::fromUtf8(socket->readAll());
    if (response.contains("NACK"))
    {
        Q_EMIT errorSignal(response);
        qDebug() << "Error from server:" << response;
        return;
    }
    else if (m_lastRequest == "readCurrent")
    {
        Q_EMIT currentReadedSignal(response);
    }
    else if (m_lastRequest == "readVoltage")
    {
       Q_EMIT voltageReadedSignal(response);
    }
    else if (m_lastRequest == "startModbusSimulation")
    {
        Q_EMIT simulationStartedSignal(response);
    }
    else if (m_lastRequest == "stopModbusSimulation")
    {
        Q_EMIT simulationStopedSignal(response);
    }
    else if (m_lastRequest == "startModbusAcquisition")
    {
        Q_EMIT acquisitionStartedSignal(response);
    }
    else if (m_lastRequest == "stopModbusAcquisition")
    {
        Q_EMIT acquisitionStopedSignal(response);
    }

}


