#include "./src/NetWorking/certificateinfo.h"
#include "QSSLCommandClient.h"



QSSLCommandClient::QSSLCommandClient(QString clientName, QObject *parent)
    : QObject(parent)
{
    this->setObjectName(clientName);
    setupSecureSocket();
}

QSSLCommandClient::~QSSLCommandClient()
{
    delete socket;
}

const QString &QSSLCommandClient::host() const
{
    return m_host;
}

void QSSLCommandClient::setHost(const QString &newHost)
{
    if (m_host == newHost)
        return;
    m_host = newHost;
    Q_EMIT hostChangedSignal();
}

quint16 QSSLCommandClient::port() const
{
    return m_port;
}

void QSSLCommandClient::setPort(quint16 newPort)
{
    if (m_port == newPort)
        return;
    m_port = newPort;
    Q_EMIT portChangedSignal();
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

bool QSSLCommandClient::checkConnect(const QString &host, quint16 port)
{
    if (socket->state() != QAbstractSocket::ConnectedState)
    {
        setHost(host);
        setPort(port);
        connectToServer(m_host, m_port,"");
        return socket->waitForConnected(3000); // Returns true if connected successfully.
    }
    return true; // Already connected.
}

void QSSLCommandClient::updateEnabledState()
{
    m_unconnected = socket->state() == QAbstractSocket::UnconnectedState;
    m_connected   = socket->state() == QAbstractSocket::ConnectedState;
    Q_EMIT connectionStateChangedSignal(m_connected);
}

void QSSLCommandClient::connectToServer(const QString &host, quint16 port, const QString &message)
{
    qInfo()<<message;
    socket->connectToHostEncrypted(host,port);
    updateEnabledState();
}

void QSSLCommandClient::disconnectFromServer()
{
    if (socket->state() == QAbstractSocket::ConnectedState)
    {
         socket->disconnectFromHost();
         if (socket->state() != QAbstractSocket::UnconnectedState)
         {
             socket->waitForDisconnected();  // Wait for the socket to disconnect
         }
         qInfo()<<this->objectName()<<" TCP client disconnected gracefully";
     }
}

void QSSLCommandClient::socketStateChanged(QAbstractSocket::SocketState state)
{
    updateEnabledState();
    if (state == QAbstractSocket::UnconnectedState)
    {
        setCipher("<none>");
    }
}

void QSSLCommandClient::socketEncrypted()
{

    const QSslCipher cipher = socket->sessionCipher();
    const QString cipherInfo = QString("%1, %2 (%3/%4)")
                                                        .arg(cipher.authenticationMethod()) // NOLINT(clazy-qstring-arg)
                                                        .arg(cipher.name())
                                                        .arg(cipher.usedBits())
                                                        .arg(cipher.supportedBits());
    Q_EMIT cipherInfoSignal(cipherInfo);
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


void QSSLCommandClient::socketError(QAbstractSocket::SocketError)
{
    if (handlingSocketError)
        return;

    handlingSocketError = true;
    Q_EMIT errorSignal(tr("Connection error")+ socket->errorString());
    handlingSocketError = false;
}

void QSSLCommandClient::sslErrors(const QList<QSslError> &errors)
{
    m_LastErrorsList.clear();

    for (const auto &error : errors)
        m_LastErrorsList << error.errorString();
    //add some security checks here
    socket->ignoreSslErrors();
    // did the socket state change?
    if (socket->state() != QAbstractSocket::ConnectedState)
        socketStateChanged(socket->state());
}

void QSSLCommandClient::displayCertificateInfo()
{
    CertificateInfo info;
    info.setCertificateChain(socket->peerCertificateChain());
    qInfo()<<info.certificatePathList();
}



void QSSLCommandClient::setupSecureSocket()
{
    if (socket)
        return;

    socket = new QSslSocket(this);

    connect(socket, &QSslSocket::stateChanged,
            this, &QSSLCommandClient::socketStateChanged);
    connect(socket, &QSslSocket::encrypted,
            this, &QSSLCommandClient::socketEncrypted);
    connect(socket, &QSslSocket::errorOccurred,
            this, &QSSLCommandClient::socketError);
    connect(socket, QOverload<const QList<QSslError> &>::of(&QSslSocket::sslErrors),
            this, &QSSLCommandClient::sslErrors);
    connect(socket, &QSslSocket::readyRead,
            this, &QSSLCommandClient::onDataReceived);

}



const QString &QSSLCommandClient::cipher() const
{
    return m_cipher;
}

void QSSLCommandClient::setCipher(const QString &newCipher)
{
    if (m_cipher == newCipher)
        return;
    m_cipher = newCipher;
    Q_EMIT cipherChangedSignal(m_cipher);
}
