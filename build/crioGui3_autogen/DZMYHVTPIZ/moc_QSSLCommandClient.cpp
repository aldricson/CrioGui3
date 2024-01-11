/****************************************************************************
** Meta object code from reading C++ file 'QSSLCommandClient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/NetWorking/QSSLCommandClient.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QSSLCommandClient.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QSSLCommandClient_t {
    uint offsetsAndSizes[74];
    char stringdata0[18];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[20];
    char stringdata5[12];
    char stringdata6[24];
    char stringdata7[23];
    char stringdata8[25];
    char stringdata9[24];
    char stringdata10[29];
    char stringdata11[12];
    char stringdata12[22];
    char stringdata13[25];
    char stringdata14[20];
    char stringdata15[17];
    char stringdata16[18];
    char stringdata17[18];
    char stringdata18[16];
    char stringdata19[5];
    char stringdata20[5];
    char stringdata21[8];
    char stringdata22[21];
    char stringdata23[19];
    char stringdata24[19];
    char stringdata25[29];
    char stringdata26[6];
    char stringdata27[16];
    char stringdata28[15];
    char stringdata29[12];
    char stringdata30[29];
    char stringdata31[6];
    char stringdata32[10];
    char stringdata33[17];
    char stringdata34[7];
    char stringdata35[23];
    char stringdata36[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QSSLCommandClient_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QSSLCommandClient_t qt_meta_stringdata_QSSLCommandClient = {
    {
        QT_MOC_LITERAL(0, 17),  // "QSSLCommandClient"
        QT_MOC_LITERAL(18, 19),  // "currentReadedSignal"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 8),  // "response"
        QT_MOC_LITERAL(48, 19),  // "voltageReadedSignal"
        QT_MOC_LITERAL(68, 11),  // "errorSignal"
        QT_MOC_LITERAL(80, 23),  // "simulationStartedSignal"
        QT_MOC_LITERAL(104, 22),  // "simulationStopedSignal"
        QT_MOC_LITERAL(127, 24),  // "acquisitionStartedSignal"
        QT_MOC_LITERAL(152, 23),  // "acquisitionStopedSignal"
        QT_MOC_LITERAL(176, 28),  // "connectionStateChangedSignal"
        QT_MOC_LITERAL(205, 11),  // "isConnected"
        QT_MOC_LITERAL(217, 21),  // "socketConnectedSignal"
        QT_MOC_LITERAL(239, 24),  // "socketNotConnectedSignal"
        QT_MOC_LITERAL(264, 19),  // "cipherChangedSignal"
        QT_MOC_LITERAL(284, 16),  // "cipherInfoSignal"
        QT_MOC_LITERAL(301, 17),  // "hostChangedSignal"
        QT_MOC_LITERAL(319, 17),  // "portChangedSignal"
        QT_MOC_LITERAL(337, 15),  // "connectToServer"
        QT_MOC_LITERAL(353, 4),  // "host"
        QT_MOC_LITERAL(358, 4),  // "port"
        QT_MOC_LITERAL(363, 7),  // "message"
        QT_MOC_LITERAL(371, 20),  // "disconnectFromServer"
        QT_MOC_LITERAL(392, 18),  // "updateEnabledState"
        QT_MOC_LITERAL(411, 18),  // "socketStateChanged"
        QT_MOC_LITERAL(430, 28),  // "QAbstractSocket::SocketState"
        QT_MOC_LITERAL(459, 5),  // "state"
        QT_MOC_LITERAL(465, 15),  // "socketEncrypted"
        QT_MOC_LITERAL(481, 14),  // "onDataReceived"
        QT_MOC_LITERAL(496, 11),  // "socketError"
        QT_MOC_LITERAL(508, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(537, 5),  // "error"
        QT_MOC_LITERAL(543, 9),  // "sslErrors"
        QT_MOC_LITERAL(553, 16),  // "QList<QSslError>"
        QT_MOC_LITERAL(570, 6),  // "errors"
        QT_MOC_LITERAL(577, 22),  // "displayCertificateInfo"
        QT_MOC_LITERAL(600, 6)   // "cipher"
    },
    "QSSLCommandClient",
    "currentReadedSignal",
    "",
    "response",
    "voltageReadedSignal",
    "errorSignal",
    "simulationStartedSignal",
    "simulationStopedSignal",
    "acquisitionStartedSignal",
    "acquisitionStopedSignal",
    "connectionStateChangedSignal",
    "isConnected",
    "socketConnectedSignal",
    "socketNotConnectedSignal",
    "cipherChangedSignal",
    "cipherInfoSignal",
    "hostChangedSignal",
    "portChangedSignal",
    "connectToServer",
    "host",
    "port",
    "message",
    "disconnectFromServer",
    "updateEnabledState",
    "socketStateChanged",
    "QAbstractSocket::SocketState",
    "state",
    "socketEncrypted",
    "onDataReceived",
    "socketError",
    "QAbstractSocket::SocketError",
    "error",
    "sslErrors",
    "QList<QSslError>",
    "errors",
    "displayCertificateInfo",
    "cipher"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QSSLCommandClient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       3,  211, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  152,    2, 0x06,    4 /* Public */,
       4,    1,  155,    2, 0x06,    6 /* Public */,
       5,    1,  158,    2, 0x06,    8 /* Public */,
       6,    1,  161,    2, 0x06,   10 /* Public */,
       7,    1,  164,    2, 0x06,   12 /* Public */,
       8,    1,  167,    2, 0x06,   14 /* Public */,
       9,    1,  170,    2, 0x06,   16 /* Public */,
      10,    1,  173,    2, 0x06,   18 /* Public */,
      12,    1,  176,    2, 0x06,   20 /* Public */,
      13,    1,  179,    2, 0x06,   22 /* Public */,
      14,    1,  182,    2, 0x06,   24 /* Public */,
      15,    1,  185,    2, 0x06,   26 /* Public */,
      16,    0,  188,    2, 0x06,   28 /* Public */,
      17,    0,  189,    2, 0x06,   29 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      18,    3,  190,    2, 0x0a,   30 /* Public */,
      22,    0,  197,    2, 0x0a,   34 /* Public */,
      23,    0,  198,    2, 0x08,   35 /* Private */,
      24,    1,  199,    2, 0x08,   36 /* Private */,
      27,    0,  202,    2, 0x08,   38 /* Private */,
      28,    0,  203,    2, 0x08,   39 /* Private */,
      29,    1,  204,    2, 0x08,   40 /* Private */,
      32,    1,  207,    2, 0x08,   42 /* Private */,
      35,    0,  210,    2, 0x08,   44 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::QString,   19,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void,

 // properties: name, type, flags
      19, QMetaType::QString, 0x00015103, uint(12), 0,
      20, QMetaType::UShort, 0x00015103, uint(13), 0,
      36, QMetaType::QString, 0x00015103, uint(10), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QSSLCommandClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QSSLCommandClient.offsetsAndSizes,
    qt_meta_data_QSSLCommandClient,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QSSLCommandClient_t,
        // property 'host'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'port'
        QtPrivate::TypeAndForceComplete<quint16, std::true_type>,
        // property 'cipher'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSSLCommandClient, std::true_type>,
        // method 'currentReadedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'voltageReadedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'errorSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'simulationStartedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'simulationStopedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'acquisitionStartedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'acquisitionStopedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'connectionStateChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool &, std::false_type>,
        // method 'socketConnectedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'socketNotConnectedSignal'
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
        // method 'portChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectToServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'disconnectFromServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateEnabledState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'socketStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>,
        // method 'socketEncrypted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'socketError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'sslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>,
        // method 'displayCertificateInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QSSLCommandClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSSLCommandClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentReadedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->voltageReadedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->errorSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->simulationStartedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->simulationStopedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->acquisitionStartedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->acquisitionStopedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->connectionStateChangedSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->socketConnectedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->socketNotConnectedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->cipherChangedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->cipherInfoSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->hostChangedSignal(); break;
        case 13: _t->portChangedSignal(); break;
        case 14: _t->connectToServer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 15: _t->disconnectFromServer(); break;
        case 16: _t->updateEnabledState(); break;
        case 17: _t->socketStateChanged((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1]))); break;
        case 18: _t->socketEncrypted(); break;
        case 19: _t->onDataReceived(); break;
        case 20: _t->socketError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 21: _t->sslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 22: _t->displayCertificateInfo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::currentReadedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::voltageReadedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::errorSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::simulationStartedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::simulationStopedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::acquisitionStartedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::acquisitionStopedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const bool & );
            if (_t _q_method = &QSSLCommandClient::connectionStateChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::socketConnectedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::socketNotConnectedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::cipherChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::cipherInfoSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)();
            if (_t _q_method = &QSSLCommandClient::hostChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)();
            if (_t _q_method = &QSSLCommandClient::portChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QSSLCommandClient *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->host(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->port(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->cipher(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QSSLCommandClient *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHost(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPort(*reinterpret_cast< quint16*>(_v)); break;
        case 2: _t->setCipher(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QSSLCommandClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSSLCommandClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSSLCommandClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSSLCommandClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QSSLCommandClient::currentReadedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSSLCommandClient::voltageReadedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSSLCommandClient::errorSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSSLCommandClient::simulationStartedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QSSLCommandClient::simulationStopedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QSSLCommandClient::acquisitionStartedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QSSLCommandClient::acquisitionStopedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QSSLCommandClient::connectionStateChangedSignal(const bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QSSLCommandClient::socketConnectedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QSSLCommandClient::socketNotConnectedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QSSLCommandClient::cipherChangedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QSSLCommandClient::cipherInfoSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QSSLCommandClient::hostChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QSSLCommandClient::portChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
