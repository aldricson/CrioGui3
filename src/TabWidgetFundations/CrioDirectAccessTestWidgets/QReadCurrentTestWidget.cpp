#include "QReadCurrentTestWidget.h"
#include <QLabel>
#include <QComboBox>

QReadCurrentTestWidget::QReadCurrentTestWidget( QWidget *parent)
    : QBaseAnalogReaderTestWidget("Read Current Test", parent)
{
    // Additional setup specific to QReadCurrentTestWidget if needed
    this->setObjectName("Current reader");
    bindTCPClient();
    m_truthOScope->setVerticalScale(0.0, 0.005);
    m_truthOScope->setHorizontalMaxSamples(60);
    connect(m_timer, &QTimer::timeout, this, &QReadCurrentTestWidget::onReadOneShotClicked);
}

void QReadCurrentTestWidget::onReadOneShotClicked()
{
    if (m_inPoll) m_timer->stop();
    emit logLastRequest("readCurrent on " + getModulesComboBox()->currentText() + getChannelComboBox()->currentText());
    m_client->sendReadCurrentRequest(m_modulesComboBox->currentText(),m_channelComboBox->currentIndex());
}

void QReadCurrentTestWidget::onPollClicked()
{
    m_inPoll =! m_inPoll;
    m_timer->setInterval(800);
    m_truthOScope->clearGraph();

    if (m_inPoll)
    {
        m_timer->start();
    }
    else
    {
        m_timer->stop();
        m_client->flushServerData();
    }
}

void QReadCurrentTestWidget::onReadDone(const QString &result)
{
    if (result.contains("NAK"))
    {
        emit logLastError(result);
        return;
    }
    m_resultLabel->setText(result);
    if (m_truthOScope)
    {
        m_truthOScope->addSample(result.toDouble());
    }
    emit logLastResponse(result);
    QEventLoop loop;
    QTimer::singleShot(250, &loop, &QEventLoop::quit);
    loop.exec();
    if (m_inPoll) m_timer->start();

}

void QReadCurrentTestWidget::bindTCPClient()
{
    //connect(m_client, &QtTcpClient::currentReadedSignal, this, &QReadCurrentTestWidget::onReadDone, Qt::QueuedConnection);
    connect(m_client, &QSSLCommandClient::currentReadedSignal, this, &QReadCurrentTestWidget::onReadDone, Qt::QueuedConnection);

}
