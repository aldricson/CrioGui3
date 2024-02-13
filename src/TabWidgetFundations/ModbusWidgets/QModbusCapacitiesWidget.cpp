#include "QModbusCapacitiesWidget.h"
#include <QIntValidator>


QModbusCapacitiesWidget::QModbusCapacitiesWidget(QSettings *settings, QWidget *parent)
{
    m_settings = settings;

   groupBox                            = new QGroupBox("Max crio registers",this);
   groupBox->setFixedWidth(200);
   groupBoxLayout                      = new QGridLayout(groupBox);

   m_coilsLineEdit                     = new QLineEdit (this);
   m_discreteInputsLineEdit            = new QLineEdit (this);
   m_holdingRegistersLineEdit          = new QLineEdit (this);
   m_inputRegistersLineEdit            = new QLineEdit (this);

   m_coilsLineEdit            -> setFixedWidth(50);
   m_discreteInputsLineEdit   -> setFixedWidth(50);
   m_holdingRegistersLineEdit -> setFixedWidth(50);
   m_inputRegistersLineEdit   -> setFixedWidth(50);


   // Integer validator for Modbus capacities (assuming max value of 65535 is reasonable for these settings)
   QIntValidator *intValidator = new QIntValidator(0, 512, this);

   m_coilsLineEdit            -> setValidator (intValidator);
   m_discreteInputsLineEdit   -> setValidator (intValidator) ;
   m_holdingRegistersLineEdit -> setValidator (intValidator) ;
   m_inputRegistersLineEdit   -> setValidator (intValidator) ;

   m_coilsLabel                        = new QLabel (this);
   m_discreteInputsLabel               = new QLabel (this);
   m_holdingRegistersLabel             = new QLabel (this);
   m_inputRegistersLabel               = new QLabel (this);

   m_coilsLabel            -> setText ("max Coils:"            ) ;
   m_discreteInputsLabel   -> setText ("max discrete inputs:"  ) ;
   m_holdingRegistersLabel -> setText ("max holding registers:") ;
   m_inputRegistersLabel   -> setText ("max input registers:"  ) ;

   groupBoxLayout -> addWidget(m_coilsLabel           ,0,0,1,1);    groupBoxLayout -> addWidget(m_coilsLineEdit           ,0,1,1,1);
   groupBoxLayout -> addWidget(m_discreteInputsLabel  ,1,0,1,1);    groupBoxLayout -> addWidget(m_discreteInputsLineEdit  ,1,1,1,1);
   groupBoxLayout -> addWidget(m_holdingRegistersLabel,2,0,1,1);    groupBoxLayout -> addWidget(m_holdingRegistersLineEdit,2,1,1,1);
   groupBoxLayout -> addWidget(m_inputRegistersLabel  ,3,0,1,1);    groupBoxLayout -> addWidget(m_inputRegistersLineEdit  ,3,1,1,1);


}

int QModbusCapacitiesWidget::nbCoilsin() const
{
    return m_coilsLineEdit->text().toInt();
}

int QModbusCapacitiesWidget::nbDiscrete() const
{
    return m_discreteInputsLineEdit->text().toInt();
}

int QModbusCapacitiesWidget::nbHoldingR() const
{
    return m_holdingRegistersLineEdit->text().toInt();
}

int QModbusCapacitiesWidget::nbInputReg() const
{
    return m_inputRegistersLineEdit->text().toInt();
}

QString QModbusCapacitiesWidget::nbCoilsinAsString() const
{
    return m_coilsLineEdit->text();
}

QString QModbusCapacitiesWidget::nbDiscreteAsString() const
{
    return m_discreteInputsLineEdit->text();
}

QString QModbusCapacitiesWidget::nbHoldingRAsString() const
{
    return m_holdingRegistersLineEdit->text();
}

QString QModbusCapacitiesWidget::nbInputRegAsString() const
{
    return m_inputRegistersLineEdit->text();
}

void QModbusCapacitiesWidget::onLoadFromFile()
{
    m_settings->beginGroup("coils");
    QString nbCoilsAsText = m_settings->value("max").toString();
    qInfo()<<"nbCoilsAsText "<<nbCoilsAsText;
    m_settings->endGroup();

    m_settings->beginGroup("discreteinputs");
    QString nbDiscreteInputsAsText = m_settings->value("max").toString();
    m_settings->endGroup();

    m_settings->beginGroup("holdingregisters");
    QString nbHoldingRegistersAsText = m_settings->value("max").toString();
    m_settings->endGroup();

    m_settings->beginGroup("inputregisters");
    QString nbInputRegistersAsText = m_settings->value("max").toString();
    m_settings->endGroup();
    //Update the widget gui
    onUpdateLineEdits(nbCoilsAsText              ,
                      nbDiscreteInputsAsText     ,
                      nbHoldingRegistersAsText   ,
                      nbInputRegistersAsText
                      );

}

void QModbusCapacitiesWidget::onSaveTofile()
{
    m_settings->beginGroup("coils");
    m_settings->setValue("max", m_coilsLineEdit->text());
    m_settings->endGroup();

    m_settings->beginGroup("discreteinputs");
    m_settings->setValue("max", m_discreteInputsLineEdit->text());
    m_settings->endGroup();

    m_settings->beginGroup("holdingregisters");
    m_settings->setValue("max", m_holdingRegistersLineEdit->text());
    m_settings->endGroup();

    m_settings->beginGroup("inputregisters");
    m_settings->setValue("max", m_inputRegistersLineEdit->text());
    m_settings->endGroup();

    onLoadFromFile();

}




void QModbusCapacitiesWidget::onUpdateLineEdits(const QString &nbCoilsAsText,
                                                const QString &nbDiscreteInputsAsText,
                                                const QString &nbHoldingRegistersAsText,
                                                const QString &nbRegistersAsText)
{
    m_coilsLineEdit             -> setText (nbCoilsAsText           );
    m_discreteInputsLineEdit    -> setText (nbDiscreteInputsAsText  );
    m_holdingRegistersLineEdit  -> setText (nbHoldingRegistersAsText);
    m_inputRegistersLineEdit    -> setText (nbRegistersAsText       );
}

void QModbusCapacitiesWidget::onBlockAllSignal(const bool &blocked)
{
    m_coilsLineEdit             -> blockSignals (blocked);
    m_discreteInputsLineEdit    -> blockSignals (blocked);
    m_holdingRegistersLineEdit  -> blockSignals (blocked);
    m_inputRegistersLineEdit    -> blockSignals (blocked);
}
