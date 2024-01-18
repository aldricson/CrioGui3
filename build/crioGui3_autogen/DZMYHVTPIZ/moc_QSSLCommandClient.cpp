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
    uint offsetsAndSizes[38];
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
    char stringdata10[22];
    char stringdata11[25];
    char stringdata12[19];
    char stringdata13[21];
    char stringdata14[17];
    char stringdata15[19];
    char stringdata16[23];
    char stringdata17[15];
    char stringdata18[7];
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
        QT_MOC_LITERAL(176, 21),  // "socketConnectedSignal"
        QT_MOC_LITERAL(198, 24),  // "socketNotConnectedSignal"
        QT_MOC_LITERAL(223, 18),  // "fileUploadedSignal"
        QT_MOC_LITERAL(242, 20),  // "fileDownloadedSignal"
        QT_MOC_LITERAL(263, 16),  // "clientListSignal"
        QT_MOC_LITERAL(280, 18),  // "listInifilesSignal"
        QT_MOC_LITERAL(299, 22),  // "moduleDownloadedSignal"
        QT_MOC_LITERAL(322, 14),  // "onDataReceived"
        QT_MOC_LITERAL(337, 6)   // "onIdle"
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
    "socketConnectedSignal",
    "socketNotConnectedSignal",
    "fileUploadedSignal",
    "fileDownloadedSignal",
    "clientListSignal",
    "listInifilesSignal",
    "moduleDownloadedSignal",
    "onDataReceived",
    "onIdle"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QSSLCommandClient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x06,    1 /* Public */,
       4,    1,  113,    2, 0x06,    3 /* Public */,
       5,    1,  116,    2, 0x06,    5 /* Public */,
       6,    1,  119,    2, 0x06,    7 /* Public */,
       7,    1,  122,    2, 0x06,    9 /* Public */,
       8,    1,  125,    2, 0x06,   11 /* Public */,
       9,    1,  128,    2, 0x06,   13 /* Public */,
      10,    1,  131,    2, 0x06,   15 /* Public */,
      11,    1,  134,    2, 0x06,   17 /* Public */,
      12,    1,  137,    2, 0x06,   19 /* Public */,
      13,    1,  140,    2, 0x06,   21 /* Public */,
      14,    1,  143,    2, 0x06,   23 /* Public */,
      15,    1,  146,    2, 0x06,   25 /* Public */,
      16,    1,  149,    2, 0x06,   27 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      17,    0,  152,    2, 0x09,   29 /* Protected */,
      18,    0,  153,    2, 0x09,   30 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QSSLCommandClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QSSLBaseClient::staticMetaObject>(),
    qt_meta_stringdata_QSSLCommandClient.offsetsAndSizes,
    qt_meta_data_QSSLCommandClient,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QSSLCommandClient_t,
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
        // method 'socketConnectedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'socketNotConnectedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'fileUploadedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'fileDownloadedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'clientListSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'listInifilesSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'moduleDownloadedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onDataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onIdle'
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
        case 7: _t->socketConnectedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->socketNotConnectedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->fileUploadedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->fileDownloadedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->clientListSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->listInifilesSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->moduleDownloadedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->onDataReceived(); break;
        case 15: _t->onIdle(); break;
        default: ;
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
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::socketConnectedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::socketNotConnectedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::fileUploadedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::fileDownloadedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::clientListSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::listInifilesSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QSSLCommandClient::*)(const QString & );
            if (_t _q_method = &QSSLCommandClient::moduleDownloadedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
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
    return QSSLBaseClient::qt_metacast(_clname);
}

int QSSLCommandClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSSLBaseClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
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
void QSSLCommandClient::socketConnectedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QSSLCommandClient::socketNotConnectedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QSSLCommandClient::fileUploadedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QSSLCommandClient::fileDownloadedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QSSLCommandClient::clientListSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QSSLCommandClient::listInifilesSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QSSLCommandClient::moduleDownloadedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
