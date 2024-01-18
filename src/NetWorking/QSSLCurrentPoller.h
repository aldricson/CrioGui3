#ifndef QSSLCurrentPoller_H
#define QSSLCurrentPoller_H

#include "QSSLBaseClient.h"
#include <QTimer>

QT_REQUIRE_CONFIG(ssl);


class QSSLCurrentPoller : public QSSLBaseClient
{
    Q_OBJECT
public:
    explicit QSSLCurrentPoller(QString clientName,QObject *parent = nullptr);
    ~QSSLCurrentPoller();


    void sendReadCurrentRequest     (const QString &moduleAlias, unsigned int channelIndex)    ;


protected:

protected Q_SLOTS:

    void onDataReceived() override;


private:
    QString m_lastRequest = "";

Q_SIGNALS:

    void currentReadedSignal          (const QString &response);
    void socketNotConnectedSignal     (const QString &response);
    void errorSignal                  (const QString &response);



};

#endif
