#ifndef QSSLCommandClient_H
#define QSSLCommandClient_H

#include "QSSLBaseClient.h"

QT_REQUIRE_CONFIG(ssl);


class QSSLCommandClient : public QSSLBaseClient
{
    Q_OBJECT
public:
    explicit QSSLCommandClient(QString clientName,QObject *parent = nullptr);
    ~QSSLCommandClient();


    void sendReadCurrentRequest     (const QString &moduleAlias, unsigned int channelIndex)    ;
    void sendReadVoltageRequest     (const QString &moduleAlias, unsigned int channelIndex)    ;
    void sendStartModbusSimulation  ()                                                         ;
    void sendStopSimulation         ()                                                         ;
    void sendStartModbusAcquisition ()                                                         ;
    void sendStopModbusAcquisition  ()                                                         ;


protected Q_SLOTS:

    void onDataReceived() override;


private:
    QString m_lastRequest = "";

Q_SIGNALS:

    void currentReadedSignal      (const QString &response);
    void voltageReadedSignal      (const QString &response);
    void errorSignal              (const QString &response);
    void simulationStartedSignal  (const QString &response);
    void simulationStopedSignal   (const QString &response);
    void acquisitionStartedSignal (const QString &response);
    void acquisitionStopedSignal  (const QString &response);


    void socketConnectedSignal        (const QString &response);
    void socketNotConnectedSignal     (const QString &response);

};

#endif
