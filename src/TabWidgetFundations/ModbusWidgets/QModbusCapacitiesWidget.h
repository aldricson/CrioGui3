#ifndef QModbusCapacitiesWidget_H
#define QModbusCapacitiesWidget_H

#include <QWidget>
#include <QGroupBox>
#include <QLineEdit>
#include <QGridLayout>
#include <QSettings>
#include "../../BasicWidgets/QBetterSwitchButton.h"

class QModbusCapacitiesWidget : public QWidget
{
    Q_OBJECT


public:
    explicit QModbusCapacitiesWidget(QSettings *settings, QWidget *parent = nullptr);

    // Getter methods for accessing the input values
    int nbCoilsin               () const;
    int nbDiscrete              () const;
    int nbHoldingR              () const;
    int nbInputReg              () const;

    QString nbCoilsinAsString   () const;
    QString nbDiscreteAsString  () const;
    QString nbHoldingRAsString  () const;
    QString nbInputRegAsString  () const;

    QBetterSwitchButton *getCompatibilityLayerSwitch() const;
    void setCompatibilityLayerSwitch(QBetterSwitchButton *newCompatibilityLayerSwitch);

    QLineEdit *getNbAnalogsInLineEdit() const;
    void setNbAnalogsInLineEdit(QLineEdit *newNbAnalogsInLineEdit);

    QLineEdit *getNbAnalogsOutLineEdit() const;
    void setNbAnalogsOutLineEdit(QLineEdit *newNbAnalogsOutLineEdit);

    QLineEdit *getNbCountersLineEdit() const;
    void setNbCountersLineEdit(QLineEdit *newNbCountersLineEdit);

    QLineEdit *getNbEncodersLineEdit() const;
    void setNbEncodersLineEdit(QLineEdit *newNbEncodersLineEdit);

    QLineEdit *getNbAlarmsLineEdit() const;
    void setNbAlarmsLineEdit(QLineEdit *newNbAlarmsLineEdit);

Q_SIGNALS:



private Q_SLOTS:

public Q_SLOTS:

    void onLoadFromFile();
    void onSaveTofile  ();

    void onUpdateLineEdits(
                            const QString &nbCoilsAsText,
                            const QString &nbDiscreteInputsAsText,
                            const QString &nbHoldingRegistersAsText,
                            const QString &nbRegistersAsText);

    void onBlockAllSignal (const bool &blocked);



private:
    QGroupBox   *groupBox                  = nullptr;
    QGridLayout *groupBoxLayout            = nullptr;
    QSettings   *m_settings                = nullptr;

    QLineEdit *m_coilsLineEdit                     = nullptr;
    QLineEdit *m_discreteInputsLineEdit            = nullptr;
    QLineEdit *m_holdingRegistersLineEdit          = nullptr;
    QLineEdit *m_inputRegistersLineEdit            = nullptr;



    QLabel *m_coilsLabel            = nullptr;
    QLabel *m_discreteInputsLabel   = nullptr;
    QLabel *m_holdingRegistersLabel = nullptr;
    QLabel *m_inputRegistersLabel   = nullptr;


    void      setAllValidators ();
    void      setupUi          ();

};

#endif // QModbusCapacitiesWidget_H

