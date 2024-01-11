
#include "certificateinfo.h"

CertificateInfo::CertificateInfo(QObject *parent)
    : QObject(parent)
{

}

CertificateInfo::~CertificateInfo()
{
}

void CertificateInfo::setCertificateChain(const QList<QSslCertificate> &chain)
{
    certificateChain = chain;
    m_certificatePathList.clear();
    for (int i = 0; i < certificateChain.size(); ++i)
    {
        const QSslCertificate &cert = certificateChain.at(i);
        m_certificatePathList.append(tr("%1%2 (%3)").arg(!i ? QString() : tr("Issued by: "))
                                                    .arg(cert.subjectInfo(QSslCertificate::Organization).join(QLatin1Char(' ')))
                                                    .arg(cert.subjectInfo(QSslCertificate::CommonName).join(QLatin1Char(' '))));
    }
    emit certificatePathListChanged(m_certificatePathList);

}

void CertificateInfo::updateCertificateInfo(int index)
{
    m_certificateFields.clear();
    if (index >= 0 && index < certificateChain.size())
    {
        const QSslCertificate &cert = certificateChain.at(index);

        m_certificateFields << tr("Organization: %1").arg(cert.subjectInfo(QSslCertificate::Organization).join(QLatin1Char(' ')))
                            << tr("Subunit: %1").arg(cert.subjectInfo(QSslCertificate::OrganizationalUnitName).join(QLatin1Char(' ')))
                            << tr("Country: %1").arg(cert.subjectInfo(QSslCertificate::CountryName).join(QLatin1Char(' ')))
                            << tr("Locality: %1").arg(cert.subjectInfo(QSslCertificate::LocalityName).join(QLatin1Char(' ')))
                            << tr("State/Province: %1").arg(cert.subjectInfo(QSslCertificate::StateOrProvinceName).join(QLatin1Char(' ')))
                            << tr("Common Name: %1").arg(cert.subjectInfo(QSslCertificate::CommonName).join(QLatin1Char(' ')))
                            << QString()
                            << tr("Issuer Organization: %1").arg(cert.issuerInfo(QSslCertificate::Organization).join(QLatin1Char(' ')))
                            << tr("Issuer Unit Name: %1").arg(cert.issuerInfo(QSslCertificate::OrganizationalUnitName).join(QLatin1Char(' ')))
                            << tr("Issuer Country: %1").arg(cert.issuerInfo(QSslCertificate::CountryName).join(QLatin1Char(' ')))
                            << tr("Issuer Locality: %1").arg(cert.issuerInfo(QSslCertificate::LocalityName).join(QLatin1Char(' ')))
                            << tr("Issuer State/Province: %1").arg(cert.issuerInfo(QSslCertificate::StateOrProvinceName).join(QLatin1Char(' ')))
                            << tr("Issuer Common Name: %1").arg(cert.issuerInfo(QSslCertificate::CommonName).join(QLatin1Char(' ')));
        emit certificateFieldsChanged(m_certificateFields);
    }
}

const QStringList &CertificateInfo::certificateFields() const
{
    return m_certificateFields;
}

void CertificateInfo::setCertificateFields(const QStringList &newCertificateFields)
{
    if (m_certificateFields == newCertificateFields)
        return;
    m_certificateFields = newCertificateFields;
    emit certificateFieldsChanged(newCertificateFields);
}

const QStringList &CertificateInfo::certificatePathList() const
{
    return m_certificatePathList;
}

void CertificateInfo::setCertificatePathList(const QStringList &newCertificatePathList)
{
    if (m_certificatePathList == newCertificatePathList)
        return;
    m_certificatePathList = newCertificatePathList;
    emit certificatePathListChanged(newCertificatePathList);
}
