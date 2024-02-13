#ifndef QMODBUSSETUPVIEWER_H
#define QMODBUSSETUPVIEWER_H

#include <QWidget>
#include <QSettings>
#include <QIntValidator>
#include <QRegularExpressionValidator>
#include <QRegularExpression>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGroupBox>
#include <QMessageBox>
#include "../NetWorking/QSSLCommandClient.h"
#include "../BasicWidgets/QIpAddressEditor.h"
#include "../TabWidgetFundations/ModbusWidgets/QAlarmViewerWidget.h"
#include "../TabWidgetFundations/ModbusWidgets/QExlogCompatibilityWidget.h"
#include "../TabWidgetFundations/ModbusWidgets/QModbusLoadSaveUploadWidget.h"
#include "../TabWidgetFundations/ModbusWidgets/QModbusCapacitiesWidget.h"


class QModbusAnalogViewer     ;
class QMultiLineTextVisualizer;
class QBetterSwitchButton     ;
class QModbusCrioClient       ;
class QModbusReply            ;
class QTimer                  ;

class QModbusSetupViewer : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QString                  fileName       READ fileName      WRITE setFileName      NOTIFY fileNameChanged)
    Q_PROPERTY(QString                  host           READ host          WRITE setHost          NOTIFY hostChanged)
    Q_PROPERTY(quint16                  port           READ port          WRITE setPort          NOTIFY portChanged)
    Q_PROPERTY(QMultiLineTextVisualizer *debugOutput   READ debugOutput   WRITE setDebugOutput   NOTIFY debugOutputChanged)
    Q_PROPERTY(QModbusAnalogViewer      *analogsViewer READ analogsViewer WRITE setAnalogsViewer NOTIFY analogsViewerChanged)

public:
    explicit QModbusSetupViewer(const QString &settingFileName, QWidget *parent = nullptr);

    const QString &fileName() const;
    void setFileName(const QString &newFileName);

    const QString &host() const;
    void setHost(const QString &newHost);

    quint16 port() const;
    void setPort(quint16 newPort);

    void connectToServer();

    QMultiLineTextVisualizer *debugOutput() const;
    void setDebugOutput(QMultiLineTextVisualizer *newDebugOutput);

    QModbusAnalogViewer *analogsViewer() const;
    void setAnalogsViewer(QModbusAnalogViewer *newAnalogsViewer);

public slots:
    void loadFromFile();
    void saveToFile();
    void uploadToServer();

private slots:
    void onExlogCompatibilityChanged              (bool state)                      ;
    void onModbusSimulationOrAcquisitionChanged   ()                                ;
    void onStartStopModbusChanged                 ()                                ;
    void onModbusTimer                            ()                                ;
    void onSimulationStarted                      (const QString          &response);
    void onSimulationStoped                       (const QString          &response);
    void onAcquisitionStarted                     (const QString          &response);
    void onAcquisitionStoped                      (const QString          &response);
    void OnAnalogsDataReady                       (const QVector<quint16> &data    );

signals:
    void fileNameChanged();
    void hostChanged();
    void portChanged();
    void debugOutputChanged();
    void analogsViewerChanged();
    void blockDirectReadingSignal (const bool &blocked);

private:
    QSettings   *m_settings     = nullptr;
    QGridLayout *m_finalLayout  = nullptr;

    QGroupBox                  *m_modbusSetupGroupBox         = nullptr; // GroupBox for Modbus Setup
    QVBoxLayout                *m_modbusSetupGroupBoxLayout   = nullptr; // and it's layout

    QLineEdit                  *listeningPortLineEdit        = nullptr;
    QIpAddressEditor           *listeningInterfaceIpEdit     = nullptr;

    QBetterSwitchButton        *simulateAcquisitionSwitch    = nullptr;
    QBetterSwitchButton        *startStopModbusSwitch        = nullptr;

    //this part of the refactoring replace all lineEdit and so on, it's integrated in a widget
    QExlogCompatibilityWidget    *m_exlogCompatibilityWidget = nullptr;
    QModbusLoadSaveUploadWidget  *m_fileOperationWidget      = nullptr;
    QModbusCapacitiesWidget      *m_crioCapacitiesWidget     = nullptr;


    QModbusAnalogViewer        *m_analogsViewer              = nullptr;
    QModbusCrioClient          *m_modbusClient               = nullptr;

    QSSLCommandClient          *m_tcpClient                  = nullptr;

    QMultiLineTextVisualizer   *m_comControl                 = nullptr;
    QMultiLineTextVisualizer   *m_debugOutput                = nullptr;

    QAlarmViewerWidget         *m_alarmWidget                = nullptr;

    QTimer                     *m_modbusTimer                = nullptr;
    QString                    m_host                                 ;
    quint16                    m_port                                 ;
    int                        m_nbAnalogics                 = 0      ;
    QString                    m_fileName                             ;
    int                        m_exlogOffset                 = 0      ;
    bool                       m_isSimul                     = true   ;
    bool                       m_modbusReading               = false  ;

    void blockAllSignals            (const bool &blocked             );
    void setAllValidators           ()                                ;
    void createTCPClient            ()                                ;
    void connectLoadSaveUploadButtons ()                              ;
    void createSimulTimer           ()                                ;
    void setUpLayout                ()                                ;
    void processModbusReply         ()                                ;


};

#endif // QMODBUSSETUPVIEWER_H
