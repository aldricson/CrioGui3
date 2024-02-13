/****************************************************************************
** Meta object code from reading C++ file 'QThermometer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/BasicWidgets/QThermometer.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QThermometer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QThermometer_t {
    uint offsetsAndSizes[8];
    char stringdata0[13];
    char stringdata1[8];
    char stringdata2[8];
    char stringdata3[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QThermometer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QThermometer_t qt_meta_stringdata_QThermometer = {
    {
        QT_MOC_LITERAL(0, 12),  // "QThermometer"
        QT_MOC_LITERAL(13, 7),  // "minTemp"
        QT_MOC_LITERAL(21, 7),  // "maxTemp"
        QT_MOC_LITERAL(29, 12)   // "currentValue"
    },
    "QThermometer",
    "minTemp",
    "maxTemp",
    "currentValue"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QThermometer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Double, 0x00015103, uint(-1), 0,
       2, QMetaType::Double, 0x00015103, uint(-1), 0,
       3, QMetaType::Double, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QThermometer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QThermometer.offsetsAndSizes,
    qt_meta_data_QThermometer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QThermometer_t,
        // property 'minTemp'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'maxTemp'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'currentValue'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QThermometer, std::true_type>
    >,
    nullptr
} };

void QThermometer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QThermometer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->minTemp(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->maxTemp(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->currentValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QThermometer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinTemp(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setMaxTemp(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setCurrentValue(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QThermometer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QThermometer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QThermometer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QThermometer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
