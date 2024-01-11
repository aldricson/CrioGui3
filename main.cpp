#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QtNetwork>

QT_REQUIRE_CONFIG(ssl);



int main(int argc, char **argv)
{

    QApplication crioGui3(argc, argv);

    if (!QSslSocket::supportsSsl()) {
        QMessageBox::information(nullptr, "Secure Socket Client",
                                 "This system does not support TLS.");
        return -1;
    }

    QFile styleFile(":/styles/dark1.scss");
    if(styleFile.open(QIODevice::ReadOnly))
    {
        QTextStream textStream(&styleFile);
        QString styleSheet = textStream.readAll();
        styleFile.close();
        crioGui3.setStyleSheet(styleSheet);
    }
    MainWindow w;
    w.show();
    return crioGui3.exec();
}
