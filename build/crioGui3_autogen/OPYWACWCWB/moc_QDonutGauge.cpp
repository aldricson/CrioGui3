/****************************************************************************
** Meta object code from reading C++ file 'QDonutGauge.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/BasicWidgets/QDonutGauge.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QDonutGauge.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QDonutGauge_t {
    uint offsetsAndSizes[30];
    char stringdata0[12];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[25];
    char stringdata5[14];
    char stringdata6[4];
    char stringdata7[4];
    char stringdata8[18];
    char stringdata9[7];
    char stringdata10[14];
    char stringdata11[4];
    char stringdata12[6];
    char stringdata13[7];
    char stringdata14[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QDonutGauge_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QDonutGauge_t qt_meta_stringdata_QDonutGauge = {
    {
        QT_MOC_LITERAL(0, 11),  // "QDonutGauge"
        QT_MOC_LITERAL(12, 10),  // "minChanged"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 10),  // "maxChanged"
        QT_MOC_LITERAL(35, 24),  // "clockwiseRotationChanged"
        QT_MOC_LITERAL(60, 13),  // "suffixChanged"
        QT_MOC_LITERAL(74, 3),  // "min"
        QT_MOC_LITERAL(78, 3),  // "max"
        QT_MOC_LITERAL(82, 17),  // "clockwiseRotation"
        QT_MOC_LITERAL(100, 6),  // "suffix"
        QT_MOC_LITERAL(107, 13),  // "StartingPoint"
        QT_MOC_LITERAL(121, 3),  // "Top"
        QT_MOC_LITERAL(125, 5),  // "Right"
        QT_MOC_LITERAL(131, 6),  // "Bottom"
        QT_MOC_LITERAL(138, 4)   // "Left"
    },
    "QDonutGauge",
    "minChanged",
    "",
    "maxChanged",
    "clockwiseRotationChanged",
    "suffixChanged",
    "min",
    "max",
    "clockwiseRotation",
    "suffix",
    "StartingPoint",
    "Top",
    "Right",
    "Bottom",
    "Left"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QDonutGauge[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   42, // properties
       1,   62, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    5 /* Public */,
       3,    0,   39,    2, 0x06,    6 /* Public */,
       4,    0,   40,    2, 0x06,    7 /* Public */,
       5,    0,   41,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Double, 0x00015103, uint(0), 0,
       7, QMetaType::Double, 0x00015103, uint(1), 0,
       8, QMetaType::Bool, 0x00015103, uint(2), 0,
       9, QMetaType::QString, 0x00015103, uint(3), 0,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    4,   67,

 // enum data: key, value
      11, uint(QDonutGauge::Top),
      12, uint(QDonutGauge::Right),
      13, uint(QDonutGauge::Bottom),
      14, uint(QDonutGauge::Left),

       0        // eod
};

Q_CONSTINIT const QMetaObject QDonutGauge::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QDonutGauge.offsetsAndSizes,
    qt_meta_data_QDonutGauge,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QDonutGauge_t,
        // property 'min'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'max'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'clockwiseRotation'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'suffix'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDonutGauge, std::true_type>,
        // method 'minChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clockwiseRotationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'suffixChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QDonutGauge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDonutGauge *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->minChanged(); break;
        case 1: _t->maxChanged(); break;
        case 2: _t->clockwiseRotationChanged(); break;
        case 3: _t->suffixChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QDonutGauge::*)();
            if (_t _q_method = &QDonutGauge::minChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QDonutGauge::*)();
            if (_t _q_method = &QDonutGauge::maxChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QDonutGauge::*)();
            if (_t _q_method = &QDonutGauge::clockwiseRotationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QDonutGauge::*)();
            if (_t _q_method = &QDonutGauge::suffixChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QDonutGauge *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->min(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->max(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->clockwiseRotation(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getSuffix(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QDonutGauge *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMin(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setMax(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setClockwiseRotation(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setSuffix(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *QDonutGauge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDonutGauge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDonutGauge.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QDonutGauge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QDonutGauge::minChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDonutGauge::maxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDonutGauge::clockwiseRotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QDonutGauge::suffixChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
