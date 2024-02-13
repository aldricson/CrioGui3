#ifndef QExlogCompatibilityWidget_H
#define QExlogCompatibilityWidget_H

#include <QWidget>
#include <QGroupBox>
#include <QLineEdit>
#include <QGridLayout>
#include <QSettings>
#include "../../BasicWidgets/QBetterSwitchButton.h"

class QExlogCompatibilityWidget : public QWidget
{
    Q_OBJECT

    Q_PROPERTY(QBetterSwitchButton *compatibilityLayerSwitch READ getCompatibilityLayerSwitch WRITE setCompatibilityLayerSwitch NOTIFY compatibilityLayerSwitchChanged FINAL)
    Q_PROPERTY(QLineEdit           *nbAnalogsInLineEdit      READ getNbAnalogsInLineEdit      WRITE setNbAnalogsInLineEdit      NOTIFY nbAnalogsInLineEditChanged FINAL)
    Q_PROPERTY(QLineEdit           *nbAnalogsOutLineEdit     READ getNbAnalogsOutLineEdit     WRITE setNbAnalogsOutLineEdit     NOTIFY nbAnalogsOutLineEditChanged FINAL)
    Q_PROPERTY(QLineEdit           *nbCountersLineEdit       READ getNbCountersLineEdit       WRITE setNbCountersLineEdit       NOTIFY nbCountersLineEditChanged FINAL)
    Q_PROPERTY(QLineEdit           *nbEncodersLineEdit       READ getNbEncodersLineEdit       WRITE setNbEncodersLineEdit       NOTIFY nbEncodersLineEditChanged FINAL)
    Q_PROPERTY(QLineEdit           *nbAlarmsLineEdit         READ getNbAlarmsLineEdit         WRITE setNbAlarmsLineEdit         NOTIFY nbAlarmsLineEditChanged FINAL)

public:
    explicit QExlogCompatibilityWidget(QSettings *settings, QWidget *parent = nullptr);

    // Getter methods for accessing the input values
    bool compatibilityLayerState() const;
    int nbAnalogsIn             () const;
    int nbAnalogsOut            () const;
    int nbCounters              () const;
    int nbEncoders              () const;
    int nbAlarms                () const;

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

    void compatibilityChangedSignal (bool newState);
    void nbAnalogsInChangedSignal   (int newValue );
    void nbAnalogsOutChangedSignal  (int newValue );
    void nbCountersChangedSignal    (int newValue );
    void nbEncodersChangedSignal    (int newValue );
    void nbAlarmsChangedSignal      (int newValue );
    void compatibilityLayerSwitchChanged();
    void nbAnalogsInLineEditChanged();
    void nbAnalogsOutLineEditChanged();
    void nbCountersLineEditChanged();
    void nbEncodersLineEditChanged();
    void nbAlarmsLineEditChanged();

private Q_SLOTS:
    void onCompatibilitySwitchChanged();

public Q_SLOTS:
    void onRunTimeChangeState(bool newState);

    void onUpdateLineEdits ( QString nbAnalogsInAsString  ,
                             QString nbAnalogsOutAsString ,
                             QString nbCountersAsString   ,
                             QString nbEncodersAsString   ,
                             QString nbAlarmsLineEditAsString
                           );

    void onBlockAllSignal  (const bool &blocked);
    void onLoadFromFile    (bool &compatible);
    void onSaveToFile      ();




private:
    QSettings           *m_settings                = nullptr;
    QGroupBox           *m_groupBox                = nullptr;
    QGridLayout         *groupBoxLayout            = nullptr;

    QBetterSwitchButton *compatibilityLayerSwitch  = nullptr;
    QLineEdit           *nbAnalogsInLineEdit       = nullptr;
    QLineEdit           *nbAnalogsOutLineEdit      = nullptr;
    QLineEdit           *nbCountersLineEdit        = nullptr;
    QLineEdit           *nbEncodersLineEdit        = nullptr;
    QLineEdit           *nbAlarmsLineEdit          = nullptr;

    QLabel *compatibilityLayerSwitchLabel = nullptr;
    QLabel *nbAnalogsInLineEditLabel      = nullptr;
    QLabel *nbAnalogsOutLineEditLabel     = nullptr;
    QLabel *nbCountersLineEditLabel       = nullptr;
    QLabel *nbEncodersLineEditLabel       = nullptr;
    QLabel *nbAlarmsLineEditLabel         = nullptr;



    void      setAllValidators ();
    void      setupUi          ();

};

#endif // QExlogCompatibilityWidget_H
