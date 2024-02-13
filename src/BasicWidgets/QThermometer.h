#ifndef QTHERMOMETER_H
#define QTHERMOMETER_H

#include <QWidget>

class QThermometer : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(double minTemp READ minTemp WRITE setMinTemp)
    Q_PROPERTY(double maxTemp READ maxTemp WRITE setMaxTemp)
    Q_PROPERTY(double currentValue READ currentValue WRITE setCurrentValue)

public:
    explicit QThermometer(QWidget *parent = nullptr);

    double minTemp() const;
    void setMinTemp(double min);

    double maxTemp() const;
    void setMaxTemp(double max);

    double currentValue() const;
    void setCurrentValue(double value);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    double m_minTemp;
    double m_maxTemp;
    double m_currentValue;
};

#endif // QTHERMOMETER_H
