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
    void sendFileUploadRequest      (const QString &filename)                                  ;
    void sendFileDownloadRequest    (const QString &serverFilename, const QString &localFilename)                                  ;
    void sendClientListRequest      ()                                                         ;
    void sendListModulesRequest     ()                                                         ;


    void handleFileDownloadResponse (const QString& response)                                  ;
    void handleFileUploadResponse   (const QString& response)                                  ;
    void flushServerData();
protected:
    QString m_downloadLocalFilename;
 

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
    void fileUploadedSignal           (const QString &response);
    void fileDownloadedSignal         (const QString &response);
    void clientListSignal             (const QString &response);
    void listInifilesSignal           (const QString &response);
    void moduleDownloadedSignal       (const QString &response);

};

#endif
