/****************************************************************************
** Meta object code from reading C++ file 'QClientsVizu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/BasicWidgets/QClientsVizu.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QClientsVizu.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QClientsVizu_t {
    uint offsetsAndSizes[18];
    char stringdata0[13];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[15];
    char stringdata5[13];
    char stringdata6[9];
    char stringdata7[5];
    char stringdata8[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QClientsVizu_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QClientsVizu_t qt_meta_stringdata_QClientsVizu = {
    {
        QT_MOC_LITERAL(0, 12),  // "QClientsVizu"
        QT_MOC_LITERAL(13, 11),  // "hostChanged"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 11),  // "portChanged"
        QT_MOC_LITERAL(38, 14),  // "onTimerTimeOut"
        QT_MOC_LITERAL(53, 12),  // "onClientList"
        QT_MOC_LITERAL(66, 8),  // "response"
        QT_MOC_LITERAL(75, 4),  // "host"
        QT_MOC_LITERAL(80, 4)   // "port"
    },
    "QClientsVizu",
    "hostChanged",
    "",
    "portChanged",
    "onTimerTimeOut",
    "onClientList",
    "response",
    "host",
    "port"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QClientsVizu[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    3 /* Public */,
       3,    0,   39,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   40,    2, 0x08,    5 /* Private */,
       5,    1,   41,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00015103, uint(0), 0,
       8, QMetaType::UShort, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QClientsVizu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMultiLineTextVisualizer::staticMetaObject>(),
    qt_meta_stringdata_QClientsVizu.offsetsAndSizes,
    qt_meta_data_QClientsVizu,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QClientsVizu_t,
        // property 'host'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'port'
        QtPrivate::TypeAndForceComplete<quint16, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QClientsVizu, std::true_type>,
        // method 'hostChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'portChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTimerTimeOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClientList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QClientsVizu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QClientsVizu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hostChanged(); break;
        case 1: _t->portChanged(); break;
        case 2: _t->onTimerTimeOut(); break;
        case 3: _t->onClientList((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QClientsVizu::*)();
            if (_t _q_method = &QClientsVizu::hostChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QClientsVizu::*)();
            if (_t _q_method = &QClientsVizu::portChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QClientsVizu *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->host(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->port(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QClientsVizu *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHost(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPort(*reinterpret_cast< quint16*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QClientsVizu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QClientsVizu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QClientsVizu.stringdata0))
        return static_cast<void*>(this);
    return QMultiLineTextVisualizer::qt_metacast(_clname);
}

int QClientsVizu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMultiLineTextVisualizer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QClientsVizu::hostChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QClientsVizu::portChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
