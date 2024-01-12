#ifndef QSSLDebugClient_H
#define QSSLDebugClient_H

#include "QSSLBaseClient.h"

QT_REQUIRE_CONFIG(ssl);

class QSSLDebugClient : public QSSLBaseClient {
    Q_OBJECT

public:
    explicit QSSLDebugClient(QString clientName,QObject *parent = nullptr);

private Q_SLOTS:
    void onDataReceived     () override;


Q_SIGNALS:
    void debugMessageReceived         (const QString &message);


};

#endif // QSSLDebugClient_H
