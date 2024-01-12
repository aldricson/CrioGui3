#include "QSSLBaseClient.h"
#include "./src/NetWorking/certificateinfo.h"
#include <QMessageBox>



QSSLBaseClient::QSSLBaseClient(QString clientName, QObject *parent)
{
    this->setObjectName(clientName);
    setupSecureSocket();
}

const QString &QSSLBaseClient::host() const
{
    return m_host;
}

void QSSLBaseClient::setHost(const QString &newHost)
{
    if (m_host == newHost)
        return;
    m_host = newHost;
    Q_EMIT hostChangedSignal(m_host);
}

quint16 QSSLBaseClient::port() const
{
    return m_port;
}

void QSSLBaseClient::setPort(quint16 newPort)
{
    if (m_port == newPort)
        return;
    m_port = newPort;
    Q_EMIT portChanged(m_port);
}

const QString &QSSLBaseClient::cipher() const
{
    return m_cipher;
}

void QSSLBaseClient::setCipher(const QString &newCipher)
{
    if (m_cipher==newCipher)
        return;
    m_cipher=newCipher;
    Q_EMIT cipherChangedSignal(m_cipher);
}

bool QSSLBaseClient::unconnected() const
{
    return m_unconnected;
}

void QSSLBaseClient::setUnconnected(bool newUnconnected)
{
    if (m_unconnected==newUnconnected)
        return;
    m_unconnected = newUnconnected;
    Q_EMIT unconnectedChanged(m_unconnected);
}

bool QSSLBaseClient::connected() const
{
    return m_connected;
}

void QSSLBaseClient::setConnected(bool newConnected)
{
    if (m_connected==newConnected)
        return;
    m_connected=newConnected;
    Q_EMIT connectedChanged(m_connected);
}

void QSSLBaseClient::setupSecureSocket()
{
    if (socket)
        return;

    socket = new QSslSocket(this);
    connect(socket, &QSslSocket::stateChanged,
            this, &QSSLBaseClient::socketStateChanged);
    connect(socket, &QSslSocket::encrypted,
            this, &QSSLBaseClient::socketEncrypted);
    connect(socket, &QSslSocket::errorOccurred,
            this, &QSSLBaseClient::socketError);
    connect(socket, QOverload<const QList<QSslError> &>::of(&QSslSocket::sslErrors),
            this, &QSSLBaseClient::sslErrors);
    connect(socket, &QSslSocket::readyRead,
            this, &QSSLBaseClient::onDataReceived);
}

const QStringList &QSSLBaseClient::LastErrorsList() const
{
    return m_LastErrorsList;
}

void QSSLBaseClient::setLastErrorsList(const QStringList &newLastErrorsList)
{
    if (m_LastErrorsList == newLastErrorsList)
        return;
    m_LastErrorsList = newLastErrorsList;
    Q_EMIT LastErrorsListChanged();
}

void QSSLBaseClient::connectToServer(const QString &host, quint16 port, const QString &message)
{
    socket->connectToHostEncrypted(host,port);
    updateEnabledState();
}

void QSSLBaseClient::disconnectFromServer()
{
    if (socket->state() == QAbstractSocket::ConnectedState)
    {
         socket->disconnectFromHost();
         if (socket->state() != QAbstractSocket::UnconnectedState)
         {
             socket->waitForDisconnected();  // Wait for the socket to disconnect
         }
         Q_EMIT connectionClosedGracefullySignal(this->objectName()+" SSL client disconnected gracefully");
    }
}

void QSSLBaseClient::displayCertificateInfo()
{
    CertificateInfo info;
    info.setCertificateChain(socket->peerCertificateChain());
    // Join the QStringList into a single QString, separating each item with a newline
    QString message = info.certificatePathList().join("\n");

    // Create and display the message box
    QMessageBox msgBox;
    msgBox.setText("List of Items");
    msgBox.setInformativeText(message);
    msgBox.exec();
}

void QSSLBaseClient::updateEnabledState()
{
    setUnconnected (socket->state() == QAbstractSocket::UnconnectedState);
    setConnected   (socket->state() == QAbstractSocket::ConnectedState);
    Q_EMIT connectionStateChangedSignal(m_connected);
}

void QSSLBaseClient::socketError(QAbstractSocket::SocketError socketError)
{
    Q_EMIT socketErrorSignal(tr("Connection error")+ socket->errorString());
}

void QSSLBaseClient::sslErrors(const QList<QSslError> &errors)
{
    m_LastErrorsList.clear();
    for (const auto &error : errors)
        m_LastErrorsList << error.errorString();
    //add some security checks here
    socket->ignoreSslErrors();
    // did the socket state change?
    if (socket->state() != QAbstractSocket::ConnectedState)
        socketStateChanged(socket->state());
    Q_EMIT sslErrorSignal(m_LastErrorsList);
}

void QSSLBaseClient::socketStateChanged(QAbstractSocket::SocketState state)
{
    updateEnabledState();
    if (state == QAbstractSocket::UnconnectedState)
    {
        setCipher("<none>");
    }
}

void QSSLBaseClient::socketEncrypted()
{

    const QSslCipher cipher = socket->sessionCipher();
    const QString cipherInfo = QString("%1, %2 (%3/%4)")
                                                        .arg(cipher.authenticationMethod()) // NOLINT(clazy-qstring-arg)
                                                        .arg(cipher.name())
                                                        .arg(cipher.usedBits())
                                                        .arg(cipher.supportedBits());
    setCipher(cipher.authenticationMethod());
    Q_EMIT cipherInfoSignal(cipherInfo);
}

bool QSSLBaseClient::checkConnect(const QString &host, quint16 port)
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

