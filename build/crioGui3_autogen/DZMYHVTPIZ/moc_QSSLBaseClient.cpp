/****************************************************************************
** Meta object code from reading C++ file 'QSSLBaseClient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/NetWorking/QSSLBaseClient.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QSSLBaseClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_QSSLBaseClient_t {
    uint offsetsAndSizes[80];
    char stringdata0[15];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[5];
    char stringdata5[15];
    char stringdata6[7];
    char stringdata7[18];
    char stringdata8[9];
    char stringdata9[20];
    char stringdata10[17];
    char stringdata11[18];
    char stringdata12[33];
    char stringdata13[29];
    char stringdata14[12];
    char stringdata15[19];
    char stringdata16[18];
    char stringdata17[17];
    char stringdata18[16];
    char stringdata19[22];
    char stringdata20[16];
    char stringdata21[5];
    char stringdata22[8];
    char stringdata23[21];
    char stringdata24[23];
    char stringdata25[19];
    char stringdata26[15];
    char stringdata27[12];
    char stringdata28[29];
    char stringdata29[10];
    char stringdata30[17];
    char stringdata31[19];
    char stringdata32[29];
    char stringdata33[6];
    char stringdata34[16];
    char stringdata35[13];
    char stringdata36[7];
    char stringdata37[12];
    char stringdata38[10];
    char stringdata39[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QSSLBaseClient_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QSSLBaseClient_t qt_meta_stringdata_QSSLBaseClient = {
    {
        QT_MOC_LITERAL(0, 14),  // "QSSLBaseClient"
        QT_MOC_LITERAL(15, 11),  // "hostChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 11),  // "portChanged"
        QT_MOC_LITERAL(40, 4),  // "port"
        QT_MOC_LITERAL(45, 14),  // "sslErrorSignal"
        QT_MOC_LITERAL(60, 6),  // "errors"
        QT_MOC_LITERAL(67, 17),  // "socketErrorSignal"
        QT_MOC_LITERAL(85, 8),  // "response"
        QT_MOC_LITERAL(94, 19),  // "cipherChangedSignal"
        QT_MOC_LITERAL(114, 16),  // "cipherInfoSignal"
        QT_MOC_LITERAL(131, 17),  // "hostChangedSignal"
        QT_MOC_LITERAL(149, 32),  // "connectionClosedGracefullySignal"
        QT_MOC_LITERAL(182, 28),  // "connectionStateChangedSignal"
        QT_MOC_LITERAL(211, 11),  // "isConnected"
        QT_MOC_LITERAL(223, 18),  // "unconnectedChanged"
        QT_MOC_LITERAL(242, 17),  // "unconnectedStatus"
        QT_MOC_LITERAL(260, 16),  // "connectedChanged"
        QT_MOC_LITERAL(277, 15),  // "connectedStatus"
        QT_MOC_LITERAL(293, 21),  // "LastErrorsListChanged"
        QT_MOC_LITERAL(315, 15),  // "connectToServer"
        QT_MOC_LITERAL(331, 4),  // "host"
        QT_MOC_LITERAL(336, 7),  // "message"
        QT_MOC_LITERAL(344, 20),  // "disconnectFromServer"
        QT_MOC_LITERAL(365, 22),  // "displayCertificateInfo"
        QT_MOC_LITERAL(388, 18),  // "updateEnabledState"
        QT_MOC_LITERAL(407, 14),  // "onDataReceived"
        QT_MOC_LITERAL(422, 11),  // "socketError"
        QT_MOC_LITERAL(434, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(463, 9),  // "sslErrors"
        QT_MOC_LITERAL(473, 16),  // "QList<QSslError>"
        QT_MOC_LITERAL(490, 18),  // "socketStateChanged"
        QT_MOC_LITERAL(509, 28),  // "QAbstractSocket::SocketState"
        QT_MOC_LITERAL(538, 5),  // "state"
        QT_MOC_LITERAL(544, 15),  // "socketEncrypted"
        QT_MOC_LITERAL(560, 12),  // "checkConnect"
        QT_MOC_LITERAL(573, 6),  // "cipher"
        QT_MOC_LITERAL(580, 11),  // "unconnected"
        QT_MOC_LITERAL(592, 9),  // "connected"
        QT_MOC_LITERAL(602, 14)   // "LastErrorsList"
    },
    "QSSLBaseClient",
    "hostChanged",
    "",
    "portChanged",
    "port",
    "sslErrorSignal",
    "errors",
    "socketErrorSignal",
    "response",
    "cipherChangedSignal",
    "cipherInfoSignal",
    "hostChangedSignal",
    "connectionClosedGracefullySignal",
    "connectionStateChangedSignal",
    "isConnected",
    "unconnectedChanged",
    "unconnectedStatus",
    "connectedChanged",
    "connectedStatus",
    "LastErrorsListChanged",
    "connectToServer",
    "host",
    "message",
    "disconnectFromServer",
    "displayCertificateInfo",
    "updateEnabledState",
    "onDataReceived",
    "socketError",
    "QAbstractSocket::SocketError",
    "sslErrors",
    "QList<QSslError>",
    "socketStateChanged",
    "QAbstractSocket::SocketState",
    "state",
    "socketEncrypted",
    "checkConnect",
    "cipher",
    "unconnected",
    "connected",
    "LastErrorsList"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QSSLBaseClient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       6,  204, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  146,    2, 0x06,    7 /* Public */,
       3,    1,  147,    2, 0x06,    8 /* Public */,
       5,    1,  150,    2, 0x06,   10 /* Public */,
       7,    1,  153,    2, 0x06,   12 /* Public */,
       9,    1,  156,    2, 0x06,   14 /* Public */,
      10,    1,  159,    2, 0x06,   16 /* Public */,
      11,    1,  162,    2, 0x06,   18 /* Public */,
      12,    1,  165,    2, 0x06,   20 /* Public */,
      13,    1,  168,    2, 0x06,   22 /* Public */,
      15,    1,  171,    2, 0x06,   24 /* Public */,
      17,    1,  174,    2, 0x06,   26 /* Public */,
      19,    0,  177,    2, 0x06,   28 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      20,    3,  178,    2, 0x0a,   29 /* Public */,
      23,    0,  185,    2, 0x0a,   33 /* Public */,
      24,    0,  186,    2, 0x0a,   34 /* Public */,
      25,    0,  187,    2, 0x09,   35 /* Protected */,
      26,    0,  188,    2, 0x09,   36 /* Protected */,
      27,    1,  189,    2, 0x09,   37 /* Protected */,
      29,    1,  192,    2, 0x09,   39 /* Protected */,
      31,    1,  195,    2, 0x09,   41 /* Protected */,
      34,    0,  198,    2, 0x09,   43 /* Protected */,
      35,    2,  199,    2, 0x09,   44 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::QString,   21,    4,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   27,
    QMetaType::Void, 0x80000000 | 30,    6,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::UShort,   21,    4,

 // properties: name, type, flags
      21, QMetaType::QString, 0x00015103, uint(0), 0,
       4, QMetaType::UShort, 0x00015103, uint(1), 0,
      36, QMetaType::QString, 0x00015103, uint(4), 0,
      37, QMetaType::Bool, 0x00015103, uint(9), 0,
      38, QMetaType::Bool, 0x00015103, uint(10), 0,
      39, QMetaType::QStringList, 0x00015103, uint(11), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QSSLBaseClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QSSLBaseClient.offsetsAndSizes,
    qt_meta_data_QSSLBaseClient,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QSSLBaseClient_t,
        // property 'host'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'port'
        QtPrivate::TypeAndForceComplete<quint16, std::true_type>,
        // property 'cipher'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'unconnected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'connected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'LastErrorsList'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSSLBaseClient, std::true_type>,
        // method 'hostChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'portChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint16 &, std::false_type>,
        // method 'sslErrorSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'socketErrorSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'cipherChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'cipherInfoSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'hostChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'connectionClosedGracefullySignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'connectionStateChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool &, std::false_type>,
        // method 'unconnectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool &, std::false_type>,
        // method 'connectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool &, std::false_type>,
        // method 'LastErrorsListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectToServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'disconnectFromServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayCertificateInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateEnabledState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'socketError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'sslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>,
        // method 'socketStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>,
        // method 'socketEncrypted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkConnect'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>
    >,
    nullptr
} };

void QSSLBaseClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSSLBaseClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hostChanged(); break;
        case 1: _t->portChanged((*reinterpret_cast< std::add_pointer_t<quint16>>(_a[1]))); break;
        case 2: _t->sslErrorSignal((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 3: _t->socketErrorSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->cipherChangedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->cipherInfoSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->hostChangedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->connectionClosedGracefullySignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->connectionStateChangedSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->unconnectedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->connectedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->LastErrorsListChanged(); break;
        case 12: _t->connectToServer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 13: _t->disconnectFromServer(); break;
        case 14: _t->displayCertificateInfo(); break;
        case 15: _t->updateEnabledState(); break;
        case 16: _t->onDataReceived(); break;
        case 17: _t->socketError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 18: _t->sslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 19: _t->socketStateChanged((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1]))); break;
        case 20: _t->socketEncrypted(); break;
        case 21: { bool _r = _t->checkConnect((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSSLBaseClient::*)();
            if (_t _q_method = &QSSLBaseClient::hostChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QSSLBaseClient::*)(const quint16 & );
            if (_t _q_method = &QSSLBaseClient::portChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QSSLBaseClient::*)(const QStringList & );
            if (_t _q_method = &QSSLBaseClient::sslErrorSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QSSLBaseClient::*)(const QString & );
            if (_t _q_method = &QSSLBaseClient::socketErrorSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QSSLBaseClient::*)(const QString & );
            if (_t _q_method = &QSSLBaseClient::cipherChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QSSLBaseClient::*)(const QString & );
            if (_t _q_method = &QSSLBaseClient::cipherInfoSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QSSLBaseClient::*)(const QString & );
            if (_t _q_method = &QSSLBaseClient::hostChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QSSLBaseClient::*)(const QString & );
            if (_t _q_method = &QSSLBaseClient::connectionClosedGracefullySignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QSSLBaseClient::*)(const bool & );
            if (_t _q_method = &QSSLBaseClient::connectionStateChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QSSLBaseClient::*)(const bool & );
            if (_t _q_method = &QSSLBaseClient::unconnectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QSSLBaseClient::*)(const bool & );
            if (_t _q_method = &QSSLBaseClient::connectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QSSLBaseClient::*)();
            if (_t _q_method = &QSSLBaseClient::LastErrorsListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QSSLBaseClient *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->host(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->port(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->cipher(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->unconnected(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->connected(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->LastErrorsList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QSSLBaseClient *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHost(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPort(*reinterpret_cast< quint16*>(_v)); break;
        case 2: _t->setCipher(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUnconnected(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setConnected(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setLastErrorsList(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QSSLBaseClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSSLBaseClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSSLBaseClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSSLBaseClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QSSLBaseClient::hostChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QSSLBaseClient::portChanged(const quint16 & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSSLBaseClient::sslErrorSignal(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSSLBaseClient::socketErrorSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QSSLBaseClient::cipherChangedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QSSLBaseClient::cipherInfoSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QSSLBaseClient::hostChangedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QSSLBaseClient::connectionClosedGracefullySignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QSSLBaseClient::connectionStateChangedSignal(const bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QSSLBaseClient::unconnectedChanged(const bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QSSLBaseClient::connectedChanged(const bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QSSLBaseClient::LastErrorsListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
