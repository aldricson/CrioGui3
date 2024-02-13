#include "QExlogCompatibilityWidget.h"
#include <QVBoxLayout>
#include <QIntValidator>
#include "../../stringUtils.h"



QExlogCompatibilityWidget::QExlogCompatibilityWidget(QSettings *settings, QWidget *parent)
    : QWidget(parent)
{
    m_settings = settings;
    setupUi();
}

void QExlogCompatibilityWidget::setupUi()
{
    m_groupBox       = new QGroupBox("Exlog Compatibility", this);
    m_groupBox->setFixedWidth(200);

    groupBoxLayout = new QGridLayout(m_groupBox);

    compatibilityLayerSwitch = new QBetterSwitchButton("Off", "On", QColor(0xEE4B2B), QColor(0x6495ED), Qt::green, true, m_groupBox);
    nbAnalogsInLineEdit      = new QLineEdit (this);
    nbAnalogsOutLineEdit     = new QLineEdit (this);
    nbCountersLineEdit       = new QLineEdit (this);
    nbEncodersLineEdit       = new QLineEdit (this);
    nbAlarmsLineEdit         = new QLineEdit (this);

    nbAnalogsInLineEdit  -> setFixedWidth(50);
    nbAnalogsOutLineEdit -> setFixedWidth(50);
    nbCountersLineEdit   -> setFixedWidth(50);
    nbEncodersLineEdit   -> setFixedWidth(50);
    nbAlarmsLineEdit     -> setFixedWidth(50);

    compatibilityLayerSwitchLabel = new QLabel(this);
    nbAnalogsInLineEditLabel      = new QLabel(this);
    nbAnalogsOutLineEditLabel     = new QLabel(this);
    nbCountersLineEditLabel       = new QLabel(this);
    nbEncodersLineEditLabel       = new QLabel(this);
    nbAlarmsLineEditLabel         = new QLabel(this);

    compatibilityLayerSwitchLabel -> setText ( "Exlog compatibility");
    nbAnalogsInLineEditLabel      -> setText ( "nb analogs In"      );
    nbAnalogsOutLineEditLabel     -> setText ( "nb analogs Out"     );
    nbCountersLineEditLabel       -> setText ( "nb Counters"        );
    nbEncodersLineEditLabel       -> setText ( "nb Encoders"        );
    nbAlarmsLineEditLabel         -> setText ( "nb Alarms"          );

    setAllValidators();


    groupBoxLayout -> addWidget (compatibilityLayerSwitchLabel ,0,0,1,1);  groupBoxLayout -> addWidget (compatibilityLayerSwitch ,0,1,1,1);
    groupBoxLayout -> addWidget (nbAnalogsInLineEditLabel      ,1,0,1,1);  groupBoxLayout -> addWidget (nbAnalogsInLineEdit      ,1,1,1,1);
    groupBoxLayout -> addWidget (nbAnalogsOutLineEditLabel     ,2,0,1,1);  groupBoxLayout -> addWidget (nbAnalogsOutLineEdit     ,2,1,1,1);
    groupBoxLayout -> addWidget (nbCountersLineEditLabel       ,3,0,1,1);  groupBoxLayout -> addWidget (nbCountersLineEdit       ,3,1,1,1);
    groupBoxLayout -> addWidget (nbEncodersLineEditLabel       ,4,0,1,1);  groupBoxLayout -> addWidget (nbEncodersLineEdit       ,4,1,1,1);
    groupBoxLayout -> addWidget (nbAlarmsLineEditLabel         ,5,0,1,1);  groupBoxLayout -> addWidget (nbAlarmsLineEdit         ,5,1,1,1);

    // Connect signals to slots for emitting changes
    connect(compatibilityLayerSwitch, &QBetterSwitchButton::stateChanged, this, &QExlogCompatibilityWidget::onCompatibilitySwitchChanged,Qt::QueuedConnection);
}

bool QExlogCompatibilityWidget::compatibilityLayerState() const
{
    return compatibilityLayerSwitch->getState();
}

int QExlogCompatibilityWidget::nbAnalogsIn() const
{
    return nbAnalogsInLineEdit->text().toInt();
}

int QExlogCompatibilityWidget::nbAnalogsOut() const
{
    return nbAnalogsOutLineEdit->text().toInt();
}

int QExlogCompatibilityWidget::nbCounters() const
{
    return nbCountersLineEdit->text().toInt();
}

int QExlogCompatibilityWidget::nbEncoders() const
{
    return nbEncodersLineEdit->text().toInt();
}

int QExlogCompatibilityWidget::nbAlarms() const
{
    return nbAlarmsLineEdit->text().toInt();
}

void QExlogCompatibilityWidget::onCompatibilitySwitchChanged()
{
    Q_EMIT compatibilityChangedSignal(compatibilityLayerSwitch->getState());

}

void QExlogCompatibilityWidget::onRunTimeChangeState(bool newState)
{
    compatibilityLayerSwitch->blockSignals(true);
    compatibilityLayerSwitch->setState(newState);
    compatibilityLayerSwitch->blockSignals(false);
}

void QExlogCompatibilityWidget::onUpdateLineEdits(QString nbAnalogsInAsString ,
                                                 QString nbAnalogsOutAsString,
                                                 QString nbCountersAsString  ,
                                                 QString nbEncodersAsString  ,
                                                 QString nbAlarmsLineEditAsString)
{
    nbAnalogsInLineEdit  -> setText (nbAnalogsInAsString);
    nbAnalogsOutLineEdit -> setText (nbAnalogsOutAsString);
    nbCountersLineEdit   -> setText (nbCountersAsString);
    nbEncodersLineEdit   -> setText (nbEncodersAsString);
    nbAlarmsLineEdit     -> setText (nbAlarmsLineEditAsString);
}

void QExlogCompatibilityWidget::onBlockAllSignal(const bool &blocked)
{
    compatibilityLayerSwitch -> blockSignals(blocked);
    nbAnalogsInLineEdit      -> blockSignals(blocked);
    nbAnalogsOutLineEdit     -> blockSignals(blocked);
    nbCountersLineEdit       -> blockSignals(blocked);
    nbEncodersLineEdit       -> blockSignals(blocked);
    nbAlarmsLineEdit         -> blockSignals(blocked);
}

void QExlogCompatibilityWidget::onLoadFromFile(bool &compatible)
{


    m_settings->beginGroup("exlog");
    QString boolStr = m_settings->value("compatibilitylayer").toString();
    compatible = textToBool(boolStr);
    compatibilityLayerSwitch->setState(compatible);
    m_settings->endGroup();


    m_settings->beginGroup("exlogmapping");
    onUpdateLineEdits(
                        m_settings->value( "nbanalogsin" ) .toString(),
                        m_settings->value( "nbanalogsout") .toString(),
                        m_settings->value( "nbcounters"  ) .toString(),
                        m_settings->value( "nbcoders"    ) .toString(),
                        m_settings->value( "nbalarms"    ) .toString()
                      );

    m_settings->endGroup();
}

void QExlogCompatibilityWidget::onSaveToFile()
{

}

void QExlogCompatibilityWidget::setAllValidators()
{
    // Integer validator for Modbus capacities (assuming max value of 65535 is reasonable for these settings)
    QIntValidator *intValidator = new QIntValidator(0, 65535, this);
    nbAnalogsInLineEdit      -> setValidator (intValidator) ;
    nbAnalogsOutLineEdit     -> setValidator (intValidator) ;
    nbCountersLineEdit       -> setValidator (intValidator) ;
    nbEncodersLineEdit       -> setValidator (intValidator) ;
    nbAlarmsLineEdit         -> setValidator (intValidator) ;
}

QLineEdit *QExlogCompatibilityWidget::getNbAlarmsLineEdit() const
{
    return nbAlarmsLineEdit;
}

void QExlogCompatibilityWidget::setNbAlarmsLineEdit(QLineEdit *newNbAlarmsLineEdit)
{
    if (nbAlarmsLineEdit == newNbAlarmsLineEdit)
        return;
    nbAlarmsLineEdit = newNbAlarmsLineEdit;
    emit nbAlarmsLineEditChanged();
}

QLineEdit *QExlogCompatibilityWidget::getNbEncodersLineEdit() const
{
    return nbEncodersLineEdit;
}

void QExlogCompatibilityWidget::setNbEncodersLineEdit(QLineEdit *newNbEncodersLineEdit)
{
    if (nbEncodersLineEdit == newNbEncodersLineEdit)
        return;
    nbEncodersLineEdit = newNbEncodersLineEdit;
    emit nbEncodersLineEditChanged();
}

QLineEdit *QExlogCompatibilityWidget::getNbCountersLineEdit() const
{
    return nbCountersLineEdit;
}

void QExlogCompatibilityWidget::setNbCountersLineEdit(QLineEdit *newNbCountersLineEdit)
{
    if (nbCountersLineEdit == newNbCountersLineEdit)
        return;
    nbCountersLineEdit = newNbCountersLineEdit;
    emit nbCountersLineEditChanged();
}

QLineEdit *QExlogCompatibilityWidget::getNbAnalogsOutLineEdit() const
{
    return nbAnalogsOutLineEdit;
}

void QExlogCompatibilityWidget::setNbAnalogsOutLineEdit(QLineEdit *newNbAnalogsOutLineEdit)
{
    if (nbAnalogsOutLineEdit == newNbAnalogsOutLineEdit)
        return;
    nbAnalogsOutLineEdit = newNbAnalogsOutLineEdit;
    emit nbAnalogsOutLineEditChanged();
}

QLineEdit *QExlogCompatibilityWidget::getNbAnalogsInLineEdit() const
{
    return nbAnalogsInLineEdit;
}

void QExlogCompatibilityWidget::setNbAnalogsInLineEdit(QLineEdit *newNbAnalogsInLineEdit)
{
    if (nbAnalogsInLineEdit == newNbAnalogsInLineEdit)
        return;
    nbAnalogsInLineEdit = newNbAnalogsInLineEdit;
    emit nbAnalogsInLineEditChanged();
}

QBetterSwitchButton *QExlogCompatibilityWidget::getCompatibilityLayerSwitch() const
{
    return compatibilityLayerSwitch;
}

void QExlogCompatibilityWidget::setCompatibilityLayerSwitch(QBetterSwitchButton *newCompatibilityLayerSwitch)
{
    if (compatibilityLayerSwitch == newCompatibilityLayerSwitch)
        return;
    compatibilityLayerSwitch = newCompatibilityLayerSwitch;
    emit compatibilityLayerSwitchChanged();
}
