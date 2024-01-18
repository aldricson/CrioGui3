#ifndef QSSLVoltagePoller_H
#define QSSLVoltagePoller_H

#include "QSSLBaseClient.h"
#include <QTimer>

QT_REQUIRE_CONFIG(ssl);


class QSSLVoltagePoller : public QSSLBaseClient
{
    Q_OBJECT
public:
    explicit QSSLVoltagePoller(QString clientName,QObject *parent = nullptr);
    ~QSSLVoltagePoller();


    void sendReadVoltageRequest     (const QString &moduleAlias, unsigned int channelIndex)    ;


protected:

protected Q_SLOTS:

    void onDataReceived() override;


private:
    QString m_lastRequest = "";
    QTimer  *m_watchDog   = nullptr;

Q_SIGNALS:

    void voltageReadedSignal          (const QString &response);
    void socketNotConnectedSignal     (const QString &response);
    void errorSignal                  (const QString &response);



};

#endif
