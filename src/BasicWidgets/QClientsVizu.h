#ifndef QCLIENTSVIZU_H
#define QCLIENTSVIZU_H

#include "QMultiLineTextVisualizer.h"
#include <QTimer>

class QSSLCommandClient;

class QClientsVizu : public QMultiLineTextVisualizer {
    Q_OBJECT

    Q_PROPERTY (QString host READ host WRITE setHost NOTIFY hostChanged)
    Q_PROPERTY (quint16 port READ port WRITE setPort NOTIFY portChanged)


public:
    explicit QClientsVizu(const QString &host,
                          const quint16 &port,
                          QWidget *parent = nullptr);

    const QString &host() const;
    void setHost(const QString &newHost);

    quint16 port() const;
    void setPort(quint16 newPort);

    void sslConnect();

signals:
    void hostChanged();
    void portChanged();

private:
    QTimer            *m_timer     = nullptr;
    QSSLCommandClient *m_sslClient = nullptr;
    QString            m_host      = ""     ;
    quint16            m_port               ;


private Q_SLOTS:
    void onTimerTimeOut();
    void onClientList             (const QString &response);

};

#endif // QCLIENTSVIZU_H
