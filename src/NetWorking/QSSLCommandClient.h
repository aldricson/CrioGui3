#ifndef QSSLCommandClient_H
#define QSSLCommandClient_H

#include <QtNetwork>

QT_REQUIRE_CONFIG(ssl);


class QSSLCommandClient : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString host READ host WRITE setHost NOTIFY hostChangedSignal)
    Q_PROPERTY(quint16 port READ port WRITE setPort NOTIFY portChangedSignal)
    Q_PROPERTY(QString cipher READ cipher WRITE setCipher NOTIFY cipherChangedSignal)
public:
    explicit QSSLCommandClient(QString clientName,QObject *parent = nullptr);
    ~QSSLCommandClient();

    const QString &host() const;
    void setHost(const QString &newHost);

    quint16 port() const;
    void setPort(quint16 newPort);

    void sendReadCurrentRequest     (const QString &moduleAlias, unsigned int channelIndex)    ;
    void sendReadVoltageRequest     (const QString &moduleAlias, unsigned int channelIndex)    ;
    void sendStartModbusSimulation  ()                                                         ;
    void sendStopSimulation         ()                                                         ;
    void sendStartModbusAcquisition ()                                                         ;
    void sendStopModbusAcquisition  ()                                                         ;
    bool checkConnect               (const QString &host, quint16 port)                        ;


    const QString &cipher() const;
    void setCipher(const QString &newCipher);

public Q_SLOTS:
    void connectToServer(const QString &host, quint16 port,const QString &message);
    void disconnectFromServer();

private Q_SLOTS:
    void updateEnabledState();
    void socketStateChanged(QAbstractSocket::SocketState state);
    void socketEncrypted();
    void onDataReceived();
    void socketError(QAbstractSocket::SocketError error);
    void sslErrors(const QList<QSslError> &errors);
    void displayCertificateInfo();

private:
    void setupUi();
    void setupSecureSocket();

    QSslSocket *socket       = nullptr;
    bool        handlingSocketError = false  ;
    bool        executingDialog     = false  ;
    bool        m_unconnected       = true   ;
    bool        m_connected         = false  ;
    QStringList m_LastErrorsList             ;


    QString    m_lastRequest = "";
    QString    m_cipher      = "";
    QString    m_host        = "";
    quint16    m_port;



Q_SIGNALS:

    void currentReadedSignal      (const QString &response);
    void voltageReadedSignal      (const QString &response);
    void errorSignal              (const QString &response);
    void simulationStartedSignal  (const QString &response);
    void simulationStopedSignal   (const QString &response);
    void acquisitionStartedSignal (const QString &response);
    void acquisitionStopedSignal  (const QString &response);


    void connectionStateChangedSignal (const bool &isConnected);
    void socketConnectedSignal        (const QString &response);
    void socketNotConnectedSignal     (const QString &response);
    void cipherChangedSignal          (const QString &response);
    void cipherInfoSignal             (const QString &response);
    void hostChangedSignal();
    void portChangedSignal();

};

#endif
