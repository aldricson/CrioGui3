#include "QModbusLoadSaveUploadWidget.h"

QModbusLoadSaveUploadWidget::QModbusLoadSaveUploadWidget(QWidget *parent)
    : QWidget{parent}
{
    fileOperationGroupBox        = new QGroupBox   (this);
    fileOperationGroupBox->setFixedWidth(200);
    fileOperationGroupBoxLayout  = new QVBoxLayout (fileOperationGroupBox);

    fileOperationGroupBox->setTitle("File operations");

    reloadButton                 = new QPushButton(this);
    saveButton                   = new QPushButton(this);
    uploadButton                 = new QPushButton(this);

    reloadButton -> setText ("(Re) Load") ;
    saveButton   -> setText ("Save")      ;
    uploadButton -> setText ("upload")    ;

    fileOperationGroupBoxLayout -> addWidget(reloadButton);
    fileOperationGroupBoxLayout -> addWidget(saveButton  );
    fileOperationGroupBoxLayout -> addWidget(uploadButton);

    connect(reloadButton, &QPushButton::clicked, this, &QModbusLoadSaveUploadWidget::onLoadFromFile  , Qt::QueuedConnection);
    connect(saveButton  , &QPushButton::clicked, this, &QModbusLoadSaveUploadWidget::onSaveToFile    , Qt::QueuedConnection);
    connect(uploadButton, &QPushButton::clicked, this, &QModbusLoadSaveUploadWidget::onUploadToServer, Qt::QueuedConnection);

}

QPushButton *QModbusLoadSaveUploadWidget::getReloadButton() const
{
    return reloadButton;
}

void QModbusLoadSaveUploadWidget::setReloadButton(QPushButton *newReloadButton)
{
    if (reloadButton == newReloadButton)
        return;
    reloadButton = newReloadButton;
    emit reloadButtonChanged();
}

QPushButton *QModbusLoadSaveUploadWidget::getSaveButton() const
{
    return saveButton;
}

void QModbusLoadSaveUploadWidget::setSaveButton(QPushButton *newSaveButton)
{
    if (saveButton == newSaveButton)
        return;
    saveButton = newSaveButton;
    emit saveButtonChanged();
}

QPushButton *QModbusLoadSaveUploadWidget::getUploadButton() const
{
    return uploadButton;
}

void QModbusLoadSaveUploadWidget::setUploadButton(QPushButton *newUploadButton)
{
    if (uploadButton == newUploadButton)
        return;
    uploadButton = newUploadButton;
    emit uploadButtonChanged();
}

void QModbusLoadSaveUploadWidget::onLoadFromFile()
{
    qInfo()<<"load signal will be emited";
    Q_EMIT loadSignal();
}

void QModbusLoadSaveUploadWidget::onSaveToFile()
{
    Q_EMIT saveSignal();
}

void QModbusLoadSaveUploadWidget::onUploadToServer()
{
    Q_EMIT uploadSignal();
}

void QModbusLoadSaveUploadWidget::onBlockAllSignal(const bool &blocked)
{
    reloadButton               -> blockSignals (blocked);
    saveButton                 -> blockSignals (blocked);
    uploadButton               -> blockSignals (blocked);
}

