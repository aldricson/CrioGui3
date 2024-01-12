#ifndef QSSLBASECLIENT_H
#define QSSLBASECLIENT_H

#include <QObject>
#include <QtNetwork>
#include <QStringList>

QT_REQUIRE_CONFIG(ssl);

class QSSLBaseClient : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString host READ host WRITE setHost NOTIFY hostChanged)
    Q_PROPERTY(quint16 port READ port WRITE setPort NOTIFY portChanged)
    Q_PROPERTY(QString cipher READ cipher WRITE setCipher NOTIFY cipherChangedSignal)
    Q_PROPERTY(bool unconnected READ unconnected WRITE setUnconnected NOTIFY unconnectedChanged)
    Q_PROPERTY(bool connected READ connected WRITE setConnected NOTIFY connectedChanged)

public:
    explicit QSSLBaseClient(QString clientName,QObject *parent = nullptr);

    const QString &host() const;
    void setHost(const QString &newHost);

    quint16 port() const;
    void setPort(quint16 newPort);

    const QString &cipher() const;
    void setCipher(const QString &newCipher);

    bool unconnected() const;
    void setUnconnected(bool newUnconnected);

    bool connected() const;
    void setConnected(bool newConnected);

    const QStringList &LastErrorsList() const;
    void setLastErrorsList(const QStringList &newLastErrorsList);

Q_SIGNALS:
    void hostChanged();
    void portChanged                      (const quint16     &port              );
    void sslErrorSignal                   (const QStringList &errors            );
    void socketErrorSignal                (const QString     &response          );
    void cipherChangedSignal              (const QString     &response          );
    void cipherInfoSignal                 (const QString     &response          );
    void hostChangedSignal                (const QString     &response          );
    void connectionClosedGracefullySignal (const QString     &response          );
    void connectionStateChangedSignal     (const bool        &isConnected       );
    void unconnectedChanged               (const bool        &unconnectedStatus );
    void connectedChanged                 (const bool        &connectedStatus   );

    void LastErrorsListChanged();

protected:
    void setupSecureSocket();

    QSslSocket  *socket       = nullptr;
    QString     m_cipher      = "";
    QString     m_host        = "";
    quint16     m_port        = 1;
    bool        m_unconnected = true;
    bool        m_connected   = false;
    QStringList m_LastErrorsList;

public Q_SLOTS:

    void connectToServer(const QString &host, quint16 port,const QString &message);
    void disconnectFromServer();
    void displayCertificateInfo();


protected Q_SLOTS:

    virtual void updateEnabledState ();
    virtual void onDataReceived     ()                                   =   0;
    virtual void socketError        (QAbstractSocket::SocketError socketError);
    virtual void sslErrors          (const QList<QSslError> &errors)          ;
    virtual void socketStateChanged (QAbstractSocket::SocketState state)      ;
    virtual void socketEncrypted    ()                                        ;
    virtual bool checkConnect       (const QString &host, quint16 port)       ;

private:
    Q_PROPERTY(QStringList LastErrorsList READ LastErrorsList WRITE setLastErrorsList NOTIFY LastErrorsListChanged)
};

#endif // QSSLBASECLIENT_H
