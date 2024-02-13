#include "QThermometer.h"
#include <QPainter>
#include <QLinearGradient>

QThermometer::QThermometer(QWidget *parent)
    : QWidget(parent), m_minTemp(0), m_maxTemp(100), m_currentValue(0)
{
}

double QThermometer::minTemp() const { return m_minTemp; }
void QThermometer::setMinTemp(double min) { m_minTemp = min; update(); }

double QThermometer::maxTemp() const { return m_maxTemp; }
void QThermometer::setMaxTemp(double max) { m_maxTemp = max; update(); }

double QThermometer::currentValue() const { return m_currentValue; }
void QThermometer::setCurrentValue(double value) { m_currentValue = value; update(); }

void QThermometer::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QLinearGradient gradient(0, 0, 0, height());
    gradient.setColorAt(0, Qt::red);
    gradient.setColorAt(1, Qt::blue);

    painter.setBrush(gradient);
    painter.setPen(Qt::black);

    double range = m_maxTemp - m_minTemp;
    double relativeValue = (m_currentValue - m_minTemp) / range;
    int fillHeight = static_cast<int>(height() * relativeValue);

    painter.drawRect(0, height() - fillHeight, width(), fillHeight);

    // Set up font, alignment, and color for the text
    QFont font = painter.font();
    font.setPointSize(10); // Adjust font size as needed
    font.setBold(true); // Make the font bold
    painter.setFont(font);
    painter.setPen(Qt::white); // Set text color to white

    // Calculate the position for the text
    QString valueText = QString::number(m_currentValue);
    QRect textRect(0, height() - fillHeight, width(), 20); // Adjust the Y position and height as needed

    // Draw the text horizontally centered just below the gradient limit
    painter.drawText(textRect, Qt::AlignCenter, valueText);
}


