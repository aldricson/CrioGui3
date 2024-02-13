#include "QModbusSetupViewer.h"
#include <QTimer>
#include <QModbusReply>
#include "../BasicWidgets/QBetterSwitchButton.h"
#include "../BasicWidgets/QMultiLineTextVisualizer.h"
#include "../NetWorking/QModbusCrioClient.h"
#include "../TabWidgetFundations/ModbusWidgets/QModbusAnalogViewer.h"
#include "../stringUtils.h"

QModbusSetupViewer::QModbusSetupViewer(const QString &settingFileName,QWidget *parent)
    : QWidget(parent)
{
    setFileName(settingFileName);
    //the class in charge of retriving datas from the crio modbus
    m_modbusClient   = new QModbusCrioClient(this);
    //connect(m_modbusClient, &QModbusCrioClient::analogsDataReady, this, &QModbusSetupViewer::OnAnalogsDataReady, Qt::QueuedConnection);
    //modbus poller when the modbus is in simulation mode
    createSimulTimer();
    //to request the command server
    createTCPClient();
    //to visualize client server exchanges in human readable format
    m_comControl   = new QMultiLineTextVisualizer(this);
    //to visualize crio debug outputs
    m_debugOutput  = new QMultiLineTextVisualizer(this);
    m_debugOutput->setProperty("needBorder",true);
    // Create GroupBoxes for different sections
    // 1) this groupbox will "group" all modbus base parameters
    m_modbusSetupGroupBox  = new QGroupBox    ( "Modbus Setup", this );
    m_modbusSetupGroupBox -> setProperty      ( "bigContainer", true );
    m_modbusSetupGroupBox -> setMinimumWidth  ( 240 )                 ;
    m_modbusSetupGroupBox -> setMinimumHeight ( 700 )                 ;

    m_modbusSetupGroupBoxLayout = new QVBoxLayout(m_modbusSetupGroupBox);



//    // Create QLineEdit widgets for the m_networkGroupBox
//    listeningPortLineEdit    = new QLineEdit       (m_networkGroupBox);
//    listeningInterfaceIpEdit = new QIpAddressEditor(m_networkGroupBox);

    // New refactoring
    // 1) to represent all the capcities of the crio in term of max nb registers
    m_crioCapacitiesWidget     = new QModbusCapacitiesWidget      (m_settings,this);
    // 2) to represent all the registers used by exlog in order to make us compatible
    m_exlogCompatibilityWidget = new QExlogCompatibilityWidget    (m_settings,this);
    // 3) file operations (load/save/upload)
    m_fileOperationWidget      = new QModbusLoadSaveUploadWidget  (this);
    // 4) alarms switching widget
    m_alarmWidget               = new QAlarmViewerWidget(m_settings,this);



    // Connect buttons for actions related to file operation
    connectLoadSaveUploadButtons();

    m_finalLayout = new QGridLayout(this);

//    // Create a form layout for the m_networkGroupBox
//    QFormLayout *networkLayout = new QFormLayout(m_networkGroupBox);
//    networkLayout->addRow("Listening Port:"     , listeningPortLineEdit);
//    networkLayout->addRow("Listening Interface:", listeningInterfaceIpEdit);
//    m_networkGroupBox->setLayout(networkLayout);
//


    m_analogsViewer = new QModbusAnalogViewer(this);
    m_analogsViewer->setMinimumWidth(800);

    startStopModbusSwitch     = new QBetterSwitchButton("stop ", "start", QColor(0xEE4B2B), QColor(0x6495ED), Qt::green, false, this);
    simulateAcquisitionSwitch = new QBetterSwitchButton("simulate", " mapped ", QColor(0xEE4B2B), QColor(0x6495ED), Qt::green, false, this);

    connect (m_exlogCompatibilityWidget,
             &QExlogCompatibilityWidget::compatibilityChangedSignal,
             this,
             &QModbusSetupViewer::onExlogCompatibilityChanged,
             Qt::QueuedConnection);

    connect(startStopModbusSwitch     , &QBetterSwitchButton::stateChanged , this, &QModbusSetupViewer::onStartStopModbusChanged   , Qt::QueuedConnection);
    connect(simulateAcquisitionSwitch , &QBetterSwitchButton::stateChanged , this, &QModbusSetupViewer::onModbusSimulationOrAcquisitionChanged, Qt::QueuedConnection);



    setUpLayout();

}



void QModbusSetupViewer::loadFromFile()
{
    blockAllSignals(true);
    // Correct group and key names are used based on the provided content structure
    // see the file modbus.ini
    m_crioCapacitiesWidget      -> onLoadFromFile()          ;

    bool compatible                                          ;
    m_exlogCompatibilityWidget  -> onLoadFromFile(compatible);
    //in exlog compatibility mode registers begins from 1 , other wise from 0
    compatible ? m_exlogOffset=1 : m_exlogOffset=0;
    //So the viewer must reflect it
    m_analogsViewer -> resetOffset(m_exlogOffset);
    m_alarmWidget   -> onLoadFromFile();



    //m_settings->beginGroup("network");
    //listeningPortLineEdit->setText(m_settings->value("listeningport").toString());
    //listeningInterfaceIpEdit->setIp(m_settings->value("listeninginterface").toString());
    //m_settings->endGroup();

    //m_settings->beginGroup("exlog");
    //QString boolStr = m_settings->value("compatibilitylayer").toString();
    //bool compatible = textToBool(boolStr);

    //m_exlogCompatibilityWidget->onRunTimeChangeState(compatible);


    //compatible ? m_exlogOffset=1 : m_exlogOffset=0;
    //m_analogsViewer->resetOffset(m_exlogOffset);
    //m_settings->endGroup();



    blockAllSignals(false);
}

void QModbusSetupViewer::saveToFile()
{
    blockAllSignals(true);
    m_crioCapacitiesWidget -> onSaveTofile();
    // Correct group and key names are used based on the provided content structure
//    m_settings->beginGroup("coils");
//    m_settings->setValue("max", coilsLineEdit->text());
//    m_settings->endGroup();
//
//    m_settings->beginGroup("discreteinputs");
//    m_settings->setValue("max", discreteInputsLineEdit->text());
//    m_settings->endGroup();
//
//    m_settings->beginGroup("holdingregisters");
//    m_settings->setValue("max", holdingRegistersLineEdit->text());
//    m_settings->endGroup();
//
//    m_settings->beginGroup("inputregisters");
//    m_settings->setValue("max", inputRegistersLineEdit->text());
//    m_settings->endGroup();





//    m_settings->beginGroup("network");
//    m_settings->setValue("listeningport", listeningPortLineEdit->text());
//    m_settings->setValue("listeninginterface", listeningInterfaceIpEdit->ipAddress());
//    m_settings->endGroup();
//
//    m_settings->beginGroup("exlog");
//    QString compatible = boolToText(m_exlogCompatibilityWidget->getCompatibilityLayerSwitch()->getState());
//    m_settings->setValue("compatibilitylayer", compatible);
//    m_settings->endGroup();
//
//    m_settings->beginGroup("exlogmapping");
//    m_settings->setValue("nbanalogsin" , m_exlogCompatibilityWidget->getNbAnalogsInLineEdit  () -> text());
//    m_settings->setValue("nbanalogsout", m_exlogCompatibilityWidget->getNbAnalogsOutLineEdit () -> text());
//    m_settings->setValue("nbcounters"  , m_exlogCompatibilityWidget->getNbCountersLineEdit   () -> text());
//    m_settings->setValue("nbalarms"    , m_exlogCompatibilityWidget->getNbAlarmsLineEdit     () -> text());
//
//    m_settings->endGroup();
//
//    blockAllSignals(false);
}


void QModbusSetupViewer::uploadToServer()
{
    // Placeholder for uploading settings to the server
}

void QModbusSetupViewer::onExlogCompatibilityChanged(bool state)
{
    state ? m_exlogOffset=1 : m_exlogOffset=0;
    m_analogsViewer->resetOffset(m_exlogOffset);
}

void QModbusSetupViewer::onModbusSimulationOrAcquisitionChanged()
{
    //this code is probably dead code now, to check before cleaning it
    m_isSimul = !simulateAcquisitionSwitch->getState();
    if (!m_isSimul)
    {
        // Create an information message box
       // QMessageBox infoBox;
       // infoBox.setIconPixmap(QPixmap(":/path/to/your/logo.png")); // Set the logo pixmap
       // infoBox.setWindowTitle("Work in Progress");
       // infoBox.setText("Come back soon,\nsoft returns in simulation now.");
       // infoBox.exec(); // Display the message box
       // simulateAcquisitionSwitch->blockSignals(true);
       // simulateAcquisitionSwitch->setState(false);
       // simulateAcquisitionSwitch->blockSignals(false);
       // simulateAcquisitionSwitch->update();
    }
    else
    {

    }
}

void QModbusSetupViewer::onStartStopModbusChanged()
{
    bool mustStartOrStop = startStopModbusSwitch->getState();

    if (m_isSimul)
    {

        if (mustStartOrStop)
        {
            //must start
            simulateAcquisitionSwitch->setEnabled(false);
            simulateAcquisitionSwitch->update();
            m_comControl->addLastCommand("Starting modbus simulation on Crio");
            m_tcpClient->sendStartModbusSimulation();

        }
        else
        {
            //must stop
             m_comControl->addLastCommand("Stopping modbus simulation on Crio");
             m_tcpClient->sendStopSimulation();
        }
    }
    else
    {
        if (mustStartOrStop)
        {
            //must start
            simulateAcquisitionSwitch->setEnabled(false);
            simulateAcquisitionSwitch->update();
            m_comControl->addLastCommand("Starting modbus acquisition on Crio");
            m_tcpClient->sendStartModbusAcquisition();

        }
        else
        {
            //must stop
             m_comControl->addLastCommand("Stopping modbus acquisition on Crio");
             m_tcpClient->sendStopModbusAcquisition();
        }
    }

}

void QModbusSetupViewer::onSimulationStarted(const QString &response)
{
    if (response.contains("ACK"))
    {
        m_nbAnalogics = m_exlogCompatibilityWidget->getNbAnalogsInLineEdit()->text().toInt();
        m_exlogCompatibilityWidget->getCompatibilityLayerSwitch()->getState() ? m_exlogOffset = 1 : m_exlogOffset = 0;
        m_comControl->addLastOutput("Modbus server simulation on");
        m_modbusTimer->start();
        m_modbusReading = true;
    }
    else if (response.contains("NACK"))
    {
        m_modbusReading = false;
        m_modbusTimer->stop();
        m_comControl->addLastError("Something gone wrong when trying to start simulation:\n"+response);
    }
}

void QModbusSetupViewer::onSimulationStoped(const QString &response)
{
    if (response.contains("ACK"))
    {
        m_modbusReading = false;
        m_modbusTimer->stop();
        m_comControl->addLastOutput("Modbus server simulation off");
    }
    else if (response.contains("NACK"))
    {
        m_modbusReading = false;
        m_modbusTimer->stop();
        m_comControl->addLastError("Somthing gone wrong when trying to stop simulation:\n"+response);
    }
    simulateAcquisitionSwitch->setEnabled(true);
    simulateAcquisitionSwitch->update();
}

void QModbusSetupViewer::onAcquisitionStarted(const QString &response)
{
    qInfo()<<"Enter on acquisition started, response:"<<response;
    //output is Enter on acquisition started, response: "ACK"
    if (response.contains("ACK"))
    {
        Q_EMIT blockDirectReadingSignal(true);
        m_nbAnalogics = m_exlogCompatibilityWidget->getNbAnalogsInLineEdit()->text().toInt();
        m_exlogCompatibilityWidget->getCompatibilityLayerSwitch()->getState() ? m_exlogOffset = 1 : m_exlogOffset = 0;
        m_comControl->addLastOutput("Modbus server acquisition on");
        m_modbusTimer->start();
        qInfo()<<"timer is started";
        m_modbusReading = true;
    }
    else if (response.contains("NACK"))
    {
        Q_EMIT blockDirectReadingSignal(false);
        m_modbusReading = false;
        m_modbusTimer->stop();
        m_comControl->addLastError("Somthing gone wrong when trying to start acquisition:\n"+response);
    }
}

void QModbusSetupViewer::onAcquisitionStoped(const QString &response)
{
    if (response.contains("ACK"))
    {
        m_modbusReading = false;
        m_modbusTimer->stop();
        m_comControl->addLastOutput("Modbus server acquisition off");
    }
    else if (response.contains("NACK"))
    {
        m_modbusReading = false;
        m_modbusTimer->stop();
        m_comControl->addLastError("Somthing gone wrong when trying to stop acquisition:\n"+response);
    }
    Q_EMIT blockDirectReadingSignal(false);
    simulateAcquisitionSwitch->setEnabled(true);
    simulateAcquisitionSwitch->update();
}

void QModbusSetupViewer::onModbusTimer()
{
    m_modbusTimer->stop(); // Avoid reentry
    qInfo()<<"enter on modbus timer";
    QModbusReply *reply = m_modbusClient->readInputRegisters(1, m_exlogOffset, m_nbAnalogics);
    if (reply)
    {
        connect(reply, &QModbusReply::finished, this, &QModbusSetupViewer::processModbusReply);
    }
    else
    {
        // Handle the error or retry
        if (m_modbusReading) m_modbusTimer->start();
    }
}


void QModbusSetupViewer::processModbusReply()
{
    auto reply = qobject_cast<QModbusReply *>(sender());
    if (!reply)
        return;

    if (reply->error() == QModbusDevice::NoError) {
        const QModbusDataUnit unit = reply->result();
        QVector<quint16> data;
        for (uint i = 0; i < unit.valueCount(); i++) {
            data.append(unit.value(i));
        }
        OnAnalogsDataReady(data);
    } else {
        // Handle error
        qInfo() << "Modbus error:" << reply->errorString();
    }

    reply->deleteLater();

    // Reauthorize a new entry
    if (m_modbusReading) m_modbusTimer->start();
}


void QModbusSetupViewer::OnAnalogsDataReady(const QVector<quint16> &data)
{
    for (int i=0;i<data.count();++i)
    {
        QLabel *lbl = analogsViewer()->channelViewers()[i]->getValueLabel();
        lbl->setText(QString::number(data[i]));
    }

    //authorize a new entry
    if (m_modbusReading) m_modbusTimer->start();
}

QModbusAnalogViewer *QModbusSetupViewer::analogsViewer() const
{
    return m_analogsViewer;
}

void QModbusSetupViewer::setAnalogsViewer(QModbusAnalogViewer *newAnalogsViewer)
{
    if (m_analogsViewer == newAnalogsViewer)
        return;
    m_analogsViewer = newAnalogsViewer;
    emit analogsViewerChanged();
}

QMultiLineTextVisualizer *QModbusSetupViewer::debugOutput() const
{
    return m_debugOutput;
}

void QModbusSetupViewer::setDebugOutput(QMultiLineTextVisualizer *newDebugOutput)
{
    if (m_debugOutput == newDebugOutput)
        return;
    m_debugOutput = newDebugOutput;
    emit debugOutputChanged();
}

quint16 QModbusSetupViewer::port() const
{
    return m_port;
}

void QModbusSetupViewer::setPort(quint16 newPort)
{
    m_port = newPort;
    m_tcpClient->setPort(m_port);
    emit portChanged();
}

void QModbusSetupViewer::connectToServer()
{
    m_tcpClient->connectToServer(m_host,m_port,"Modbus control");
    m_modbusClient->connectToServer(m_host,502);
}

const QString &QModbusSetupViewer::host() const
{
    return m_host;
}

void QModbusSetupViewer::setHost(const QString &newHost)
{
    m_host = newHost;
    m_tcpClient->setHost(m_host);
    emit hostChanged();
}

void QModbusSetupViewer::blockAllSignals(const bool &blocked)
{    
    m_crioCapacitiesWidget     -> onBlockAllSignal(blocked);
    m_exlogCompatibilityWidget -> onBlockAllSignal(blocked);
    //m_fileOperationWidget      -> onBlockAllSignal(blocked);
}

const QString &QModbusSetupViewer::fileName() const
{
    return m_fileName;
}

void QModbusSetupViewer::setFileName(const QString &newFileName)
{
    if (m_fileName == newFileName)
        return;
    m_fileName = newFileName;
    if (m_settings)
    {
        delete m_settings;
        m_settings = nullptr;
    }
   // Recreate the settings object with the new file name
    m_settings = new QSettings(m_fileName, QSettings::IniFormat);
   emit fileNameChanged();
}


void QModbusSetupViewer::setAllValidators()
{


    // Port validator (1-65535)
    QIntValidator *portValidator = new QIntValidator(1, 65535, this);
    listeningPortLineEdit->setValidator(portValidator);


}

void QModbusSetupViewer::createTCPClient()
{
    //m_tcpClient    = new QtTcpClient("QModbusSetupViewer",this);
    m_tcpClient    = new QSSLCommandClient("QModbusSetupViewer",this);
    connect (m_tcpClient,
             &QSSLCommandClient::simulationStartedSignal     ,
             this                                      ,
             &QModbusSetupViewer::onSimulationStarted  ,
             Qt::QueuedConnection)                     ;

    connect (m_tcpClient                               ,
             &QSSLCommandClient::simulationStopedSignal      ,
             this                                      ,
             &QModbusSetupViewer::onSimulationStoped   ,
             Qt::QueuedConnection)                     ;

    connect (m_tcpClient                               ,
             &QSSLCommandClient::acquisitionStartedSignal    ,
             this                                      ,
             &QModbusSetupViewer::onAcquisitionStarted ,
             Qt::QueuedConnection)                     ;

    connect (m_tcpClient                               ,
             &QSSLCommandClient::acquisitionStopedSignal    ,
             this                                      ,
             &QModbusSetupViewer::onAcquisitionStoped  ,
             Qt::QueuedConnection)                     ;


}


void QModbusSetupViewer::connectLoadSaveUploadButtons ()
{
    // Connect buttons signals of the widget to appropriate slots
    connect (m_fileOperationWidget , &QModbusLoadSaveUploadWidget::loadSignal   , this, &QModbusSetupViewer::loadFromFile  , Qt::QueuedConnection);
    connect (m_fileOperationWidget , &QModbusLoadSaveUploadWidget::saveSignal   , this, &QModbusSetupViewer::saveToFile    , Qt::QueuedConnection);
    connect (m_fileOperationWidget , &QModbusLoadSaveUploadWidget::uploadSignal , this, &QModbusSetupViewer::uploadToServer, Qt::QueuedConnection);
}

void QModbusSetupViewer::createSimulTimer()
{
    m_modbusTimer = new QTimer(this);
    m_modbusTimer->setInterval(1000);//1 sec acquisition time
    connect (m_modbusTimer, &QTimer::timeout, this,&QModbusSetupViewer::onModbusTimer);
}

void QModbusSetupViewer::setUpLayout()
{
    //put all the widgets that are related to modbus setup inside the layer of
    //m_modbusSetupGroupBox (grouping by functionality)
    m_modbusSetupGroupBoxLayout -> addWidget ( m_crioCapacitiesWidget     );
    m_modbusSetupGroupBoxLayout -> addWidget ( m_exlogCompatibilityWidget );
    m_modbusSetupGroupBoxLayout -> addWidget ( m_fileOperationWidget      );

    m_finalLayout -> addWidget (simulateAcquisitionSwitch ,0,0,1,1);
    m_finalLayout -> addWidget (startStopModbusSwitch     ,0,1,1,1);
    m_finalLayout -> addWidget (m_modbusSetupGroupBox     ,1,0,1,1);
    m_finalLayout -> addWidget (m_analogsViewer           ,1,1,1,1);
    m_finalLayout -> addWidget (m_alarmWidget             ,1,2,2,1);
    m_finalLayout -> addWidget (m_comControl              ,2,0,1,1);
    m_finalLayout -> addWidget (m_debugOutput             ,2,1,1,1);

}



