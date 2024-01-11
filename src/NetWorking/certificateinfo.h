// Copyright (C) 2017 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#ifndef CERTIFICATEINFO_H
#define CERTIFICATEINFO_H

#include <QDialog>
#include <QList>
#include <QSslCertificate>
#include <QStringList>


class CertificateInfo : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QStringList certificatePathList READ certificatePathList WRITE setCertificatePathList NOTIFY certificatePathListChanged)
    Q_PROPERTY(QStringList certificateFields READ certificateFields WRITE setCertificateFields NOTIFY certificateFieldsChanged)
public:
    explicit CertificateInfo(QObject *parent = nullptr);
    ~CertificateInfo();

    void setCertificateChain(const QList<QSslCertificate> &chain);

    const QStringList &certificatePathList() const;
    void setCertificatePathList(const QStringList &newCertificatePathList);

    const QStringList &certificateFields() const;
    void setCertificateFields(const QStringList &newCertificateFields);

signals:
    void certificatePathListChanged(const QStringList &newCertificatePathList);
    void certificateFieldsChanged(const QStringList &newCertificateFields);

private slots:
    void updateCertificateInfo(int index);

private:
    QList<QSslCertificate> certificateChain;
    QStringList m_certificatePathList;
    QStringList m_certificateFields;

};

#endif
