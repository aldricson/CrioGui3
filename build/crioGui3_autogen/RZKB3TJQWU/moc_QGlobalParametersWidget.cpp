/****************************************************************************
** Meta object code from reading C++ file 'QGlobalParametersWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/TabWidgets/QGlobalParametersWidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGlobalParametersWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QGlobalParametersWidget_t {
    uint offsetsAndSizes[28];
    char stringdata0[24];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[16];
    char stringdata5[15];
    char stringdata6[14];
    char stringdata7[7];
    char stringdata8[12];
    char stringdata9[11];
    char stringdata10[9];
    char stringdata11[9];
    char stringdata12[9];
    char stringdata13[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QGlobalParametersWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QGlobalParametersWidget_t qt_meta_stringdata_QGlobalParametersWidget = {
    {
        QT_MOC_LITERAL(0, 23),  // "QGlobalParametersWidget"
        QT_MOC_LITERAL(24, 15),  // "hostNameChanged"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 15),  // "userNameChanged"
        QT_MOC_LITERAL(57, 15),  // "passwordChanged"
        QT_MOC_LITERAL(73, 14),  // "sshPortChanged"
        QT_MOC_LITERAL(88, 13),  // "onGlobalStats"
        QT_MOC_LITERAL(102, 6),  // "output"
        QT_MOC_LITERAL(109, 11),  // "lastCommand"
        QT_MOC_LITERAL(121, 10),  // "onAskStats"
        QT_MOC_LITERAL(132, 8),  // "hostName"
        QT_MOC_LITERAL(141, 8),  // "userName"
        QT_MOC_LITERAL(150, 8),  // "password"
        QT_MOC_LITERAL(159, 7)   // "sshPort"
    },
    "QGlobalParametersWidget",
    "hostNameChanged",
    "",
    "userNameChanged",
    "passwordChanged",
    "sshPortChanged",
    "onGlobalStats",
    "output",
    "lastCommand",
    "onAskStats",
    "hostName",
    "userName",
    "password",
    "sshPort"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QGlobalParametersWidget[] = {

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
       6,    2,   54,    2, 0x08,    9 /* Private */,
       9,    0,   59,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00015103, uint(0), 0,
      11, QMetaType::QString, 0x00015103, uint(1), 0,
      12, QMetaType::QString, 0x00015103, uint(2), 0,
      13, QMetaType::Int, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGlobalParametersWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QGlobalParametersWidget.offsetsAndSizes,
    qt_meta_data_QGlobalParametersWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QGlobalParametersWidget_t,
        // property 'hostName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'userName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'password'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sshPort'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGlobalParametersWidget, std::true_type>,
        // method 'hostNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'userNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'passwordChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sshPortChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onGlobalStats'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onAskStats'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGlobalParametersWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGlobalParametersWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hostNameChanged(); break;
        case 1: _t->userNameChanged(); break;
        case 2: _t->passwordChanged(); break;
        case 3: _t->sshPortChanged(); break;
        case 4: _t->onGlobalStats((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->onAskStats(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGlobalParametersWidget::*)();
            if (_t _q_method = &QGlobalParametersWidget::hostNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGlobalParametersWidget::*)();
            if (_t _q_method = &QGlobalParametersWidget::userNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGlobalParametersWidget::*)();
            if (_t _q_method = &QGlobalParametersWidget::passwordChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGlobalParametersWidget::*)();
            if (_t _q_method = &QGlobalParametersWidget::sshPortChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGlobalParametersWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->hostName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->password(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->sshPort(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGlobalParametersWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHostName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUserName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSshPort(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGlobalParametersWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGlobalParametersWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGlobalParametersWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QGlobalParametersWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QGlobalParametersWidget::hostNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGlobalParametersWidget::userNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGlobalParametersWidget::passwordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGlobalParametersWidget::sshPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
