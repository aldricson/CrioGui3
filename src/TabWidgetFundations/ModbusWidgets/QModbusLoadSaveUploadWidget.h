#ifndef QMODBUSLOADSAVEUPLOADWIDGET_H
#define QMODBUSLOADSAVEUPLOADWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QGroupBox>
#include <QVBoxLayout>

class QModbusLoadSaveUploadWidget : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QPushButton *reloadButton READ getReloadButton WRITE setReloadButton NOTIFY reloadButtonChanged FINAL)
    Q_PROPERTY(QPushButton *saveButton   READ getSaveButton   WRITE setSaveButton   NOTIFY saveButtonChanged   FINAL)
    Q_PROPERTY(QPushButton *uploadButton READ getUploadButton WRITE setUploadButton NOTIFY uploadButtonChanged FINAL)
public:
    explicit QModbusLoadSaveUploadWidget(QWidget *parent = nullptr);

    QPushButton *getReloadButton() const;
    void setReloadButton(QPushButton *newReloadButton);

    QPushButton *getSaveButton() const;
    void setSaveButton(QPushButton *newSaveButton);

    QPushButton *getUploadButton() const;
    void setUploadButton(QPushButton *newUploadButton);

Q_SIGNALS:

    void reloadButtonChanged();
    void saveButtonChanged  ();
    void uploadButtonChanged();

    void loadSignal         ();
    void saveSignal         ();
    void uploadSignal       ();

private Q_SLOTS:
    void onLoadFromFile  ();
    void onSaveToFile    ();
    void onUploadToServer();

public Q_SLOTS:
    void onBlockAllSignal(const bool &blocked);

private:

    QVBoxLayout                *fileOperationGroupBoxLayout  = nullptr;
    QGroupBox                  *fileOperationGroupBox        = nullptr;
    QPushButton                *reloadButton                 = nullptr;
    QPushButton                *saveButton                   = nullptr;
    QPushButton                *uploadButton                 = nullptr;


};

#endif // QMODBUSLOADSAVEUPLOADWIDGET_H
