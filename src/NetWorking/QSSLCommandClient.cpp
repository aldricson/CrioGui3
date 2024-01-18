#include "./src/NetWorking/certificateinfo.h"
#include "QSSLCommandClient.h"



QSSLCommandClient::QSSLCommandClient(QString clientName, QObject *parent)
    : QSSLBaseClient(clientName,parent)
{

}

QSSLCommandClient::~QSSLCommandClient()
{

}



void QSSLCommandClient::sendReadCurrentRequest(const QString &moduleAlias, unsigned int channelIndex)
{
    // Check if the module alias is valid and not empty
    if (moduleAlias.isEmpty()) {
        Q_EMIT errorSignal("NACK: Empty module alias");
        return;
    }

    // Check for socket connection
    if (!checkConnect(m_host, m_port)) {
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
        return;
    }

    // Safeguard against potential null pointer dereference
    if (!socket) {
        Q_EMIT errorSignal("NACK: Socket is null");
        return;
    }

    // Construct and send the request
    QString request = QString("readCurrent;%1;%2;\n").arg(moduleAlias).arg(channelIndex);
    m_lastRequest = "readCurrent";
    qint64 bytesWritten = socket->write(request.toUtf8());

    // Check if the write operation was successful
    if (bytesWritten == -1) {
        Q_EMIT errorSignal("NACK: Failed to write to socket");
        return;
    }

    // Check if the data is written within a specified timeout
    if (!socket->waitForBytesWritten())
    {
        Q_EMIT errorSignal("NACK: Timeout on writing to socket");
        return;
    }
}

void QSSLCommandClient::sendReadVoltageRequest(const QString &moduleAlias, unsigned int channelIndex)
{
    // Check if the module alias is valid and not empty
    if (moduleAlias.isEmpty()) {
        Q_EMIT errorSignal("NACK: Empty module alias");
        return;
    }

    // Check for socket connection
    if (!checkConnect(m_host, m_port)) {
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
        return;
    }

    // Safeguard against potential null pointer dereference
    if (!socket) {
        Q_EMIT errorSignal("NACK: Socket is null");
        return;
    }

    // Construct and send the request
    QString request = QString("readVoltage;%1;%2;\n").arg(moduleAlias).arg(channelIndex);
    m_lastRequest = "readVoltage";
    qint64 bytesWritten = socket->write(request.toUtf8());

    // Check if the write operation was successful
    if (bytesWritten == -1) {
        Q_EMIT errorSignal("NACK: Failed to write to socket");
        return;
    }

    // Check if the data is written within a specified timeout
    if (!socket->waitForBytesWritten(5000)) { // Timeout of 5000 milliseconds
        Q_EMIT errorSignal("NACK: Timeout on writing to socket");
        return;
    }



}

void QSSLCommandClient::sendStartModbusSimulation()
{
    // Check for socket connection
    if (!checkConnect(m_host, m_port)) {
        // Emit signal if the socket is not connected
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
        return;
    }

    // Safeguard against potential null pointer dereference
    if (!socket) {
        // Emit error if the socket is null
        Q_EMIT errorSignal("NACK: Socket is null");
        return;
    }

    // Set the last request type
    m_lastRequest = "startModbusSimulation";

    // Construct the request string
    QString request = m_lastRequest + "\n";

    // Write the request to the socket
    qint64 bytesWritten = socket->write(request.toUtf8());

    // Check if the write operation was successful
    if (bytesWritten == -1) {
        // Emit error if writing to socket fails
        Q_EMIT errorSignal("NACK: Failed to write to socket");
        return;
    }

    // Check if the data is written within a specified timeout
    if (!socket->waitForBytesWritten()) { // Timeout of 5000 milliseconds
        // Emit error if there is a timeout on writing to socket
        Q_EMIT errorSignal("NACK: Timeout on writing to socket");
        return;
    }



}

void QSSLCommandClient::sendStopSimulation()
{
    // Check for socket connection
    if (!checkConnect(m_host, m_port)) {
        // Emit signal if the socket is not connected
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
        return;
    }

    // Safeguard against potential null pointer dereference
    if (!socket) {
        // Emit error if the socket is null
        Q_EMIT errorSignal("NACK: Socket is null");
        return;
    }

    // Set the last request type
    m_lastRequest = "stopModbusSimulation";

    // Construct the request string
    QString request = m_lastRequest + "\n";

    // Write the request to the socket
    qint64 bytesWritten = socket->write(request.toUtf8());

    // Check if the write operation was successful
    if (bytesWritten == -1) {
        // Emit error if writing to socket fails
        Q_EMIT errorSignal("NACK: Failed to write to socket");
        return;
    }

    // Check if the data is written within a specified timeout
    if (!socket->waitForBytesWritten()) { // Timeout of 5000 milliseconds
        // Emit error if there is a timeout on writing to socket
        Q_EMIT errorSignal("NACK: Timeout on writing to socket");
        return;
    }


}



void QSSLCommandClient::sendStartModbusAcquisition()
{
 
    // Check for socket connection
    if (!checkConnect(m_host, m_port)) {
        // Emit signal if the socket is not connected
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
        return;
    }

    // Safeguard against potential null pointer dereference
    if (!socket) {
        // Emit error if the socket is null
        Q_EMIT errorSignal("NACK: Socket is null");
        return;
    }

    // Set the last request type
    m_lastRequest = "startModbusAcquisition";

    // Construct the request string
    QString request = m_lastRequest + "\n";

    // Write the request to the socket
    qint64 bytesWritten = socket->write(request.toUtf8());

    // Check if the write operation was successful
    if (bytesWritten == -1) {
        // Emit error if writing to socket fails
        Q_EMIT errorSignal("NACK: Failed to write to socket");
        return;
    }

    // Check if the data is written within a specified timeout
    if (!socket->waitForBytesWritten()) { // Timeout of 5000 milliseconds
        // Emit error if there is a timeout on writing to socket
        Q_EMIT errorSignal("NACK: Timeout on writing to socket");
        return;
    }


}


void QSSLCommandClient::sendStopModbusAcquisition()
{
    // Check for socket connection
    if (!checkConnect(m_host, m_port)) {
        // Emit signal if the socket is not connected
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
        return;
    }

    // Safeguard against potential null pointer dereference
    if (!socket) {
        // Emit error if the socket is null
        Q_EMIT errorSignal("NACK: Socket is null");
        return;
    }

    // Set the last request type
    m_lastRequest = "stopModbusAcquisition";

    // Construct the request string
    QString request = m_lastRequest + "\n";

    // Write the request to the socket
    qint64 bytesWritten = socket->write(request.toUtf8());

    // Check if the write operation was successful
    if (bytesWritten == -1) {
        // Emit error if writing to socket fails
        Q_EMIT errorSignal("NACK: Failed to write to socket");
        return;
    }

    // Check if the data is written within a specified timeout
    if (!socket->waitForBytesWritten())
    {
        // Emit error if there is a timeout on writing to socket
        Q_EMIT errorSignal("NACK: Timeout on writing to socket");
        return;
    }



}

void QSSLCommandClient::sendFileUploadRequest(const QString &filename)
{
    // Check for socket connection
    if (!checkConnect(m_host, m_port)) {
        // Emit signal if the socket is not connected
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
        return;
    }

    // Safeguard against potential null pointer dereference
    if (!socket) {
        // Emit error if the socket is null
        Q_EMIT errorSignal("NACK: Socket is null");
        return;
    }

    // Check if the filename is valid and not empty
    if (filename.isEmpty()) {
        Q_EMIT errorSignal("NACK: Filename is empty");
        return;
    }

    // Attempt to open the file
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly)) {
        // Emit error if unable to open the file
        Q_EMIT errorSignal("NACK: Unable to open file for reading");
        return;
    }

    // Read the file data
    QByteArray fileData = file.readAll();
    if (fileData.isEmpty()) {
        // Emit error if file data is empty
        Q_EMIT errorSignal("NACK: File data is empty");
        return;
    }

    // Construct the request string
    QString request = QString("uploadFromClient;%1;%2;\n").arg(filename).arg(fileData.size());
    m_lastRequest = "uploadFromClient";

    // Write the request to the socket
    qint64 bytesWritten = socket->write(request.toUtf8());

    // Check if the request write operation was successful
    if (bytesWritten == -1) {
        // Emit error if writing to socket fails
        Q_EMIT errorSignal("NACK: Failed to write request to socket");
        return;
    }

    // Wait for the request to be written within a specified timeout
    if (!socket->waitForBytesWritten(5000)) { // Timeout of 5000 milliseconds
        // Emit error if there is a timeout on writing to socket
        Q_EMIT errorSignal("NACK: Timeout on writing request to socket");
        return;
    }

    // Send the file data
    bytesWritten = socket->write(fileData);
    if (bytesWritten == -1) {
        // Emit error if writing file data to socket fails
        Q_EMIT errorSignal("NACK: Failed to write file data to socket");
        return;
    }

    // Wait for the file data to be written within a specified timeout
    if (!socket->waitForBytesWritten(5000))
    { // Timeout of 5000 milliseconds
        // Emit error if there is a timeout on writing file datato socket
        Q_EMIT errorSignal("NACK: Timeout on writing file data to socket");
        return;
    }



}




void QSSLCommandClient::sendFileDownloadRequest(const QString &serverFilename, const QString &localFilename)
{
    qInfo()<<"Preparing download request";
    qInfo()<<"requested file: "<<serverFilename;
    qInfo()<<"destination file: "<<localFilename;
    // Check for socket connection
    if (!checkConnect(m_host, m_port)) {
        // Emit signal if the socket is not connected
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
        return;
    }

    // Safeguard against potential null pointer dereference
    if (!socket) {
        // Emit error if the socket is null
        Q_EMIT errorSignal("NACK: Socket is null");
        return;
    }

    // Check if the filename is valid and not empty
    if (serverFilename.isEmpty()) {
        Q_EMIT errorSignal("NACK: serverFilename is empty");
        return;
    }

    // Check if the filename is valid and not empty
    if (localFilename.isEmpty()) {
        Q_EMIT errorSignal("NACK: localFilename is empty");
        return;
    }

    // Construct the request string
    QString request = QString("uploadToClient;%1;\n").arg(serverFilename);
    m_lastRequest = "downloadToClient";

    // Write the request to the socket
    qint64 bytesWritten = socket->write(request.toUtf8());

    // Check if the request write operation was successful
    if (bytesWritten == -1) {
        // Emit error if writing to socket fails
        Q_EMIT errorSignal("NACK: Failed to write request to socket");
        return;
    }

    // Wait for the request to be written within a specified timeout
    if (!socket->waitForBytesWritten(5000)) { // Timeout of 5000 milliseconds
        // Emit error if there is a timeout on writing to socket
        Q_EMIT errorSignal("NACK: Timeout on writing request to socket");
        return;
    }

    m_downloadLocalFilename = localFilename;
   qInfo()<<"request sent to server";
   qInfo()<<"";

}

void QSSLCommandClient::sendClientListRequest()
{
    // Check for socket connection
    if (!checkConnect(m_host, m_port))
    {
        // Emit signal if the socket is not connected
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
        return;
    }

    // Safeguard against potential null pointer dereference
    if (!socket) {
        // Emit error if the socket is null
        Q_EMIT errorSignal("NACK: Socket is null");
        return;
    }

    // Set the last request type
    m_lastRequest = "clientList";

    // Construct the request string
    QString request = m_lastRequest + "\n";

    // Write the request to the socket
    qint64 bytesWritten = socket->write(request.toUtf8());

    // Check if the write operation was successful
    if (bytesWritten == -1)
    {
        // Emit error if writing to socket fails
        Q_EMIT errorSignal("NACK: Failed to write to socket");
        return;
    }

    // Check if the data is written within a specified timeout
    if (!socket->waitForBytesWritten()) { // Timeout of 5000 milliseconds
        // Emit error if there is a timeout on writing to socket
        Q_EMIT errorSignal("NACK: Timeout on writing to socket");
        return;
    }

}

void QSSLCommandClient::sendListModulesRequest()
{
    // Check for socket connection
    if (!checkConnect(m_host, m_port))
    {
        // Emit signal if the socket is not connected
        Q_EMIT socketNotConnectedSignal("NACK: socket not connected");
        return;
    }

    // Safeguard against potential null pointer dereference
    if (!socket) {
        // Emit error if the socket is null
        Q_EMIT errorSignal("NACK: Socket is null");
        return;
    }

    // Set the last request type
    m_lastRequest = "listInifiles";

    // Construct the request string
    QString request = m_lastRequest + "\n";

    // Write the request to the socket
    qint64 bytesWritten = socket->write(request.toUtf8());

    // Check if the write operation was successful
    if (bytesWritten == -1)
    {
        // Emit error if writing to socket fails
        Q_EMIT errorSignal("NACK: Failed to write to socket");
        return;
    }

    // Check if the data is written within a specified timeout
    if (!socket->waitForBytesWritten(5000)) { // Timeout of 5000 milliseconds
        // Emit error if there is a timeout on writing to socket
        Q_EMIT errorSignal("NACK: Timeout on writing to socket");
        return;
    }
}

void QSSLCommandClient::onDataReceived()
{

    QString response = QString::fromUtf8(socket->readAll());
    if (response.contains("NACK"))
    {
        Q_EMIT errorSignal(response);
        qDebug() << "Error from server:" << response;
        return;
    }
    else if (m_lastRequest == "readCurrent")
    {
        Q_EMIT currentReadedSignal(response);
    }
    else if (m_lastRequest == "readVoltage")
    {
       Q_EMIT voltageReadedSignal(response);
    }
    else if (m_lastRequest == "startModbusSimulation")
    {
        Q_EMIT simulationStartedSignal(response);
    }
    else if (m_lastRequest == "stopModbusSimulation")
    {
        Q_EMIT simulationStopedSignal(response);
    }
    else if (m_lastRequest == "startModbusAcquisition")
    {
        Q_EMIT acquisitionStartedSignal(response);
    }
    else if (m_lastRequest == "stopModbusAcquisition")
    {
        Q_EMIT acquisitionStopedSignal(response);
    }
    else if (m_lastRequest == "downloadToClient")
    {
        // Handle response for file download request
        handleFileDownloadResponse(response);
        Q_EMIT moduleDownloadedSignal("ACK: Module download successful 100%");

    }
    else if (m_lastRequest == "uploadFromClient")
    {
        // Handle response for file upload request
        handleFileUploadResponse(response);
    }
    else if (m_lastRequest == "clientList")
    {
        response.replace(";","\n");
        Q_EMIT clientListSignal(response);
    }
    else if (m_lastRequest == "listInifiles")
    {
        response.replace(";","\n");
        Q_EMIT listInifilesSignal(response);
    }
}


void QSSLCommandClient::handleFileDownloadResponse(const QString& response)
{
    static QByteArray fileData;  // Static to retain data across multiple calls
    static qint64 expectedFileSize = 0;  // Expected file size
    static bool receivingFile = false;  // Flag to indicate if file receiving is in progress

    // If not currently receiving a file, check for the size prefix in the response
    if (!receivingFile && response.startsWith("Size:")) {
        bool ok;
        expectedFileSize = response.mid(5).toLongLong(&ok);
        if (!ok || expectedFileSize <= 0) {
            Q_EMIT errorSignal("NACK: Invalid file size received");
            return;
        }
        receivingFile = true;
        fileData.clear();
        fileData.reserve(expectedFileSize);
        return;
    }

    // Append received data to fileData
    if (receivingFile) {
        fileData.append(response.toUtf8());

        // Check if all data has been received
        if (fileData.size() >= expectedFileSize) {
            // Write the data to file
            QFile file(m_downloadLocalFilename);
            if (!file.open(QIODevice::WriteOnly)) {
                Q_EMIT errorSignal("NACK: Unable to open file for writing");
                return;
            }

            if (file.write(fileData) != expectedFileSize) {
                file.close();
                Q_EMIT errorSignal("NACK: Failed to write all data to file");
                return;
            }

            file.close();
            Q_EMIT fileDownloadedSignal("ACK: File download successful 100%");
            receivingFile = false;  // Reset the flag for the next download
        }
    }
}



// Function to handle file upload response
void QSSLCommandClient::handleFileUploadResponse(const QString& response)
{
    // Here, handle the server's response after a file upload
    if (response.contains("ACK: File upload successful"))
    {
        Q_EMIT fileUploadedSignal("ACK: File upload successful 100%");
    }
    else
    {
        Q_EMIT errorSignal(response); // Send the received error message
    }
}

void QSSLCommandClient::flushServerData()
{
    while (socket->bytesAvailable())
    {
               socket->readAll(); // Read and discard
    }
}


