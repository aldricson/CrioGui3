/****************************************************************************
** Meta object code from reading C++ file 'QModbusCapacitiesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/TabWidgetFundations/ModbusWidgets/QModbusCapacitiesWidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QModbusCapacitiesWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QModbusCapacitiesWidget_t {
    uint offsetsAndSizes[22];
    char stringdata0[24];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[18];
    char stringdata5[14];
    char stringdata6[23];
    char stringdata7[25];
    char stringdata8[18];
    char stringdata9[17];
    char stringdata10[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QModbusCapacitiesWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QModbusCapacitiesWidget_t qt_meta_stringdata_QModbusCapacitiesWidget = {
    {
        QT_MOC_LITERAL(0, 23),  // "QModbusCapacitiesWidget"
        QT_MOC_LITERAL(24, 14),  // "onLoadFromFile"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 12),  // "onSaveTofile"
        QT_MOC_LITERAL(53, 17),  // "onUpdateLineEdits"
        QT_MOC_LITERAL(71, 13),  // "nbCoilsAsText"
        QT_MOC_LITERAL(85, 22),  // "nbDiscreteInputsAsText"
        QT_MOC_LITERAL(108, 24),  // "nbHoldingRegistersAsText"
        QT_MOC_LITERAL(133, 17),  // "nbRegistersAsText"
        QT_MOC_LITERAL(151, 16),  // "onBlockAllSignal"
        QT_MOC_LITERAL(168, 7)   // "blocked"
    },
    "QModbusCapacitiesWidget",
    "onLoadFromFile",
    "",
    "onSaveTofile",
    "onUpdateLineEdits",
    "nbCoilsAsText",
    "nbDiscreteInputsAsText",
    "nbHoldingRegistersAsText",
    "nbRegistersAsText",
    "onBlockAllSignal",
    "blocked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QModbusCapacitiesWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    0,   39,    2, 0x0a,    2 /* Public */,
       4,    4,   40,    2, 0x0a,    3 /* Public */,
       9,    1,   49,    2, 0x0a,    8 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject QModbusCapacitiesWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QModbusCapacitiesWidget.offsetsAndSizes,
    qt_meta_data_QModbusCapacitiesWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QModbusCapacitiesWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QModbusCapacitiesWidget, std::true_type>,
        // method 'onLoadFromFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSaveTofile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpdateLineEdits'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onBlockAllSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool &, std::false_type>
    >,
    nullptr
} };

void QModbusCapacitiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QModbusCapacitiesWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onLoadFromFile(); break;
        case 1: _t->onSaveTofile(); break;
        case 2: _t->onUpdateLineEdits((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 3: _t->onBlockAllSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QModbusCapacitiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QModbusCapacitiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QModbusCapacitiesWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QModbusCapacitiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
