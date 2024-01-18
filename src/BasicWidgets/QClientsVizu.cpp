#include "QClientsVizu.h"
#include "../NetWorking/QSSLCommandClient.h"

QClientsVizu::QClientsVizu(const QString &host,
                           const quint16 &port,
                           QWidget *parent)
    : QMultiLineTextVisualizer(parent)
{
    m_timer = new QTimer(this),
    m_timer->setInterval(3000); // 3 seconds

    m_host = host;
    m_port = port;

    m_sslClient = new QSSLCommandClient("clientList",this);

    connect (m_timer,&QTimer::timeout,this,&QClientsVizu::onTimerTimeOut);
    connect (m_sslClient, &QSSLCommandClient::clientListSignal,this,&QClientsVizu::onClientList,Qt::QueuedConnection);
}

const QString &QClientsVizu::host() const
{
    return m_host;
}

void QClientsVizu::setHost(const QString &newHost)
{
    if (m_host == newHost)
        return;
    m_host = newHost;
    m_sslClient->setHost(m_host);
    Q_EMIT hostChanged();
}

quint16 QClientsVizu::port() const
{
    return m_port;
}

void QClientsVizu::setPort(quint16 newPort)
{
    if (m_port == newPort)
        return;
    m_port = newPort;
    m_sslClient->setPort(m_port);
    Q_EMIT portChanged();
}

void QClientsVizu::sslConnect()
{
    m_sslClient->connectToServer(m_host,m_port,"");
    m_timer->start();
}

void QClientsVizu::onTimerTimeOut()
{
    m_timer->stop();
    m_sslClient->sendClientListRequest();
    m_timer->start();
}

void QClientsVizu::onClientList(const QString &response)
{
    this->clear();
    QStringList strLst = response.split("\n");
    this->appendTextWithColor("Number of client connections: "+QString::number(strLst.count()),QColor(0x1E90FF),false);
    this->appendTextWithColor("----------------------------- ",QColor(0x1E90FF),true);
    for (qsizetype i=0;i<strLst.count();++i)
    {
        this->appendTextWithColor(" ~(‾▿‾)~  "+strLst[i],QColor(0x1E90FF),false);
    }
}
