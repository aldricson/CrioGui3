/****************************************************************************
** Meta object code from reading C++ file 'QCrioBaseCpuWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/TabWidgetFundations/CrioGeneralParameters/QCrioBaseCpuWidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCrioBaseCpuWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QCrioBaseCpuWidget_t {
    uint offsetsAndSizes[28];
    char stringdata0[19];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[13];
    char stringdata5[16];
    char stringdata6[10];
    char stringdata7[15];
    char stringdata8[7];
    char stringdata9[12];
    char stringdata10[9];
    char stringdata11[5];
    char stringdata12[6];
    char stringdata13[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QCrioBaseCpuWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QCrioBaseCpuWidget_t qt_meta_stringdata_QCrioBaseCpuWidget = {
    {
        QT_MOC_LITERAL(0, 18),  // "QCrioBaseCpuWidget"
        QT_MOC_LITERAL(19, 15),  // "hostNameChanged"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 11),  // "portChanged"
        QT_MOC_LITERAL(48, 12),  // "loginChanged"
        QT_MOC_LITERAL(61, 15),  // "passWordChanged"
        QT_MOC_LITERAL(77, 9),  // "onTimeOut"
        QT_MOC_LITERAL(87, 14),  // "onDataReceived"
        QT_MOC_LITERAL(102, 6),  // "output"
        QT_MOC_LITERAL(109, 11),  // "lastCommand"
        QT_MOC_LITERAL(121, 8),  // "hostName"
        QT_MOC_LITERAL(130, 4),  // "port"
        QT_MOC_LITERAL(135, 5),  // "login"
        QT_MOC_LITERAL(141, 8)   // "passWord"
    },
    "QCrioBaseCpuWidget",
    "hostNameChanged",
    "",
    "portChanged",
    "loginChanged",
    "passWordChanged",
    "onTimeOut",
    "onDataReceived",
    "output",
    "lastCommand",
    "hostName",
    "port",
    "login",
    "passWord"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QCrioBaseCpuWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    5 /* Public */,
       3,    0,   51,    2, 0x06,    6 /* Public */,
       4,    0,   52,    2, 0x06,    7 /* Public */,
       5,    0,   53,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   54,    2, 0x08,    9 /* Private */,
       7,    2,   55,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00015103, uint(0), 0,
      11, QMetaType::Int, 0x00015103, uint(1), 0,
      12, QMetaType::QString, 0x00015103, uint(2), 0,
      13, QMetaType::QString, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCrioBaseCpuWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QCrioBaseCpuWidget.offsetsAndSizes,
    qt_meta_data_QCrioBaseCpuWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QCrioBaseCpuWidget_t,
        // property 'hostName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'port'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'login'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'passWord'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCrioBaseCpuWidget, std::true_type>,
        // method 'hostNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'portChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loginChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'passWordChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTimeOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QCrioBaseCpuWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCrioBaseCpuWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hostNameChanged(); break;
        case 1: _t->portChanged(); break;
        case 2: _t->loginChanged(); break;
        case 3: _t->passWordChanged(); break;
        case 4: _t->onTimeOut(); break;
        case 5: _t->onDataReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCrioBaseCpuWidget::*)();
            if (_t _q_method = &QCrioBaseCpuWidget::hostNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCrioBaseCpuWidget::*)();
            if (_t _q_method = &QCrioBaseCpuWidget::portChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCrioBaseCpuWidget::*)();
            if (_t _q_method = &QCrioBaseCpuWidget::loginChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QCrioBaseCpuWidget::*)();
            if (_t _q_method = &QCrioBaseCpuWidget::passWordChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCrioBaseCpuWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->hostName(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->port(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->login(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->passWord(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCrioBaseCpuWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHostName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPort(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setLogin(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPassWord(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QCrioBaseCpuWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCrioBaseCpuWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCrioBaseCpuWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QCrioBaseCpuWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QCrioBaseCpuWidget::hostNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QCrioBaseCpuWidget::portChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QCrioBaseCpuWidget::loginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QCrioBaseCpuWidget::passWordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
