#include "QAlarmViewerWidget.h"
#include <QLineEdit>
#include <QLabel>
#include <QScrollBar>
#include <QPushButton>
#include <QMessageBox>
#include <QFile>
#include <QStyle>
#include <QStyleOption>


QAlarmViewerWidget::QAlarmViewerWidget(QSettings *settings, QWidget *parent)
    : QWidget(parent)
{
    m_settings = settings;
    setupUi();
    loadStyleStringFromResource();
}

QAlarmViewerWidget::~QAlarmViewerWidget() {}

void QAlarmViewerWidget::setupUi()
{
    m_groupBox       = new QGroupBox   ( "Alarms",this );
    m_groupBox -> setFixedWidth(113);
    m_groupBoxLayout = new QVBoxLayout ( m_groupBox    );

    // Initialize the scroll area and its container
    scrollArea = new QScrollArea(this);
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    containerWidget = new QWidget();
    containerLayout = new QVBoxLayout(containerWidget);

    containerLayout->setSpacing(5); // Spacing between widgets
    containerLayout->setContentsMargins(0, 0, 0, 0);

    fillerWidget = new QWidget();
    QPalette pal = fillerWidget->palette();
    pal.setColor(fillerWidget->backgroundRole(), Qt::black);
    fillerWidget    -> setPalette(pal);
    fillerWidget    -> setAutoFillBackground(true);
    containerLayout -> addWidget(fillerWidget);

    // Set the container widget to be the scroll area's widget
    scrollArea->setWidget(containerWidget);
    scrollArea->setWidgetResizable(true);

    m_groupBoxLayout -> addWidget (scrollArea);

    // Layout for the whole widget, including buttons and the scroll area
    QGridLayout *mainLayout = new QGridLayout(this);
    // Ensure the layout does not have extra space that expands
    mainLayout->addWidget(m_groupBox    ,0,0,1,2);
    setLayout(mainLayout);
}

QBetterSwitchButton *QAlarmViewerWidget::createRowAlarmButton()
{
    QBetterSwitchButton *rowAlarmSwitch = new QBetterSwitchButton("Off",
                                                                  " On",
                                                                  QColor(0xADD8E6),
                                                                  QColor(0xEE4B2B),
                                                                  Qt::darkGreen,
                                                                  false,
                                                                  containerWidget);
    connect (rowAlarmSwitch                    ,
            &QBetterSwitchButton::stateChanged ,
            this                               ,
            &QAlarmViewerWidget::onAlarmChanged,
            Qt::QueuedConnection);

    containerLayout->addWidget(rowAlarmSwitch);
    rowAlarmButtons.append(rowAlarmSwitch);

    // Make sure the filler widget is still at the end and takes up all remaining space
    containerLayout->removeWidget(fillerWidget);
    containerLayout->addWidget(fillerWidget);

    // Use a single-shot timer to delay the call to ensureWidgetVisible
    QTimer::singleShot(50, this, [this, rowAlarmSwitch]()
    {
        scrollArea->ensureWidgetVisible(rowAlarmSwitch);

    });


    return rowAlarmSwitch;
}



void QAlarmViewerWidget::updateRowIndices()
{
    for (int i = 0; i < rowAlarmButtons.size(); ++i)
    {
        rowAlarmButtons[i]->setIndex(i); // This sets the internal index, if you have such a function.
    }
}



void QAlarmViewerWidget::onAdd()
{
    createRowAlarmButton();
    updateRowIndices    ();
}

void QAlarmViewerWidget::onModbusMappingUploaded(const QString &output, const QString &lastCommand)
{
    QMessageBox::information(nullptr, "Uploading status:", output, QMessageBox::Ok);
}

void QAlarmViewerWidget::onAlarmChanged()
{

}





void QAlarmViewerWidget::onDeleteRowAlarmSwitch  (QBetterSwitchButton *alarmSwitch)
{
    int index = alarmSwitch->getIndex();
    //remove it form layout
    containerLayout->removeWidget(alarmSwitch);
    //disconnect it
    disconnect (alarmSwitch,0);
    //remove it from the list
    rowAlarmButtons.remove(index);
    //delete the object
    delete (alarmSwitch);
    //null it
    alarmSwitch = nullptr;
    // Make sure the filler widget is still at the end and takes up all remaining space
    containerLayout->removeWidget(fillerWidget);
    containerLayout->addWidget(fillerWidget);
    //reindex everybody
    updateRowIndices();
    // Force an update of the container widget's geometry
    containerWidget->updateGeometry();
    // Use a single-shot timer to delay the call to ensureWidgetVisible
    QTimer::singleShot(0,this,[this]()
    {
        scrollArea->ensureWidgetVisible(rowAlarmButtons.last());
    });
}



void QAlarmViewerWidget::deleteAllRows()
{
    // Iterate backwards through the list to safely delete each widget
    for (int i = rowAlarmButtons.size() - 1; i >= 0; --i) {
        QBetterSwitchButton* rowAlarmSwitch = rowAlarmButtons[i];

        // Remove the widget from the layout
        containerLayout->removeWidget(rowAlarmSwitch);
        // Disconnect all signals connected to the row widget
        rowAlarmSwitch->disconnect();
        // Delete the row widget
        delete rowAlarmSwitch;
    }

    // Clear the rowWidgets list
    rowAlarmButtons.clear();
    // Make sure the filler widget is still at the end and takes up all remaining space
    containerLayout->removeWidget(fillerWidget);
    containerLayout->addWidget(fillerWidget);
    // Force an update of the container widget's geometry
    containerWidget->updateGeometry();
}

void QAlarmViewerWidget::blockAllSignals(bool blocked)
{
    for (int i=0;i<rowAlarmButtons.count();++i)
    {
        auto row = rowAlarmButtons[i];
        row->blockSignals(blocked);
    }
}

void QAlarmViewerWidget::enableAllControls(bool enabled)
{
    for (int i=0;i<rowAlarmButtons.count();++i)
    {
        auto row = rowAlarmButtons[i];
        row->setEnabled(enabled);
    }

}


void QAlarmViewerWidget::loadStyleStringFromResource()
{
    QFile file(":/styles/scrollArea.scss");
    QString content = "";
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        content = in.readAll();
        file.close();
        this->scrollArea->setStyleSheet(content);
    }

    // Reuse the file object for a different file
    file.setFileName(":/styles/darkScrollBar.scss");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        // Reinitialize QTextStream with the new file object
        QTextStream in(&file);  // This is how you assign the new file to "in"

        content = in.readAll();
        file.close();

        this->scrollArea->verticalScrollBar()->setStyleSheet(content);
    }
}



void QAlarmViewerWidget::onClearAllAlarms()
{
    // Iterate through the list of QBetterSwitchButton objects in reverse
    for (int i = rowAlarmButtons.size() - 1; i >= 0; --i) {
        QBetterSwitchButton* alarmSwitch = rowAlarmButtons.at(i);

        // Disconnect all connections made with this alarm switch to ensure no dangling signals
        alarmSwitch->disconnect();

        // Remove the alarm switch from the layout to ensure it is no longer displayed
        containerLayout->removeWidget(alarmSwitch);

        // Safely delete the alarm switch to free up memory
        delete alarmSwitch;

        // After deletion, remove the pointer from the list
        rowAlarmButtons.removeAt(i);
    }

    // After clearing all alarm switches, make sure to shrink the list to release unused capacity
    rowAlarmButtons.squeeze();
    // Reset the layout to ensure that the fillerWidget takes up all the space
    containerLayout->removeWidget(fillerWidget);
    containerLayout->addWidget(fillerWidget);
    // Update the container widget's geometry to reflect the removal of the alarm switches
    containerWidget->updateGeometry();
}

void QAlarmViewerWidget::onLoadFromFile()
{
    //we need to ensure that alarm list is empty before adding new alarms to avoid memory leaks
    onClearAllAlarms();
    //get the number of alarms
    m_settings->beginGroup("exlogmapping");
    int nb_alarms = m_settings->value("nbalarms").toInt();
    m_settings->endGroup();
    //then create them
    for (int i=0;i<nb_alarms;++i)
    {
        onAdd();
    }

}

void QAlarmViewerWidget::onSaveToFile()
{


}

void QAlarmViewerWidget::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}




