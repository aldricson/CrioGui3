#ifndef QAlarmViewerWidget_H
#define QAlarmViewerWidget_H

#include <QWidget>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QPushButton>
#include <QVector>
#include <QTimer>
#include <QSettings>
#include <QGroupBox>
#include "../../BasicWidgets/QBetterSwitchButton.h"

class QScrollBar               ;
class QPushButton              ;
class QMessageBox              ;

class QAlarmViewerWidget : public QWidget {

    Q_OBJECT


public:
    explicit QAlarmViewerWidget (
                                  QSettings *settings,
                                  QWidget   *parent = nullptr
                                );
    ~QAlarmViewerWidget();
    void enableAllControls(bool enabled);



private Q_SLOTS:


    void onModbusMappingUploaded ( const QString &output,
                                   const QString &lastCommand );
    void onAlarmChanged          ();
    void onDeleteRowAlarmSwitch  (QBetterSwitchButton *alarmSwitch);



public Q_SLOTS:

    void onAdd            ();
    void onClearAllAlarms ();
    void onLoadFromFile   ();
    void onSaveToFile     ();

signals:


protected:
    bool m_saveSuccess;
    void paintEvent(QPaintEvent *event);



private:
    QVector<QBetterSwitchButton*> rowAlarmButtons;
    QSettings                  *m_settings       = nullptr;
    QGroupBox                  *m_groupBox       = nullptr;
    QVBoxLayout                *m_groupBoxLayout = nullptr;
    QScrollArea                *scrollArea       = nullptr;
    QWidget                    *containerWidget  = nullptr;
    QVBoxLayout                *containerLayout  = nullptr;
    QWidget                    *fillerWidget     = nullptr;

    void setupUi();
    QBetterSwitchButton* createRowAlarmButton();

    void updateRowIndices();
    void deleteAllRows();
    void blockAllSignals(bool blocked);
    void loadStyleStringFromResource();


};

#endif // QAlarmViewerWidget_H
