/****************************************************************************
** Meta object code from reading C++ file 'QAlarmViewerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/TabWidgetFundations/ModbusWidgets/QAlarmViewerWidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QAlarmViewerWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QAlarmViewerWidget_t {
    uint offsetsAndSizes[26];
    char stringdata0[19];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[12];
    char stringdata5[15];
    char stringdata6[23];
    char stringdata7[21];
    char stringdata8[12];
    char stringdata9[6];
    char stringdata10[17];
    char stringdata11[15];
    char stringdata12[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QAlarmViewerWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QAlarmViewerWidget_t qt_meta_stringdata_QAlarmViewerWidget = {
    {
        QT_MOC_LITERAL(0, 18),  // "QAlarmViewerWidget"
        QT_MOC_LITERAL(19, 23),  // "onModbusMappingUploaded"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 6),  // "output"
        QT_MOC_LITERAL(51, 11),  // "lastCommand"
        QT_MOC_LITERAL(63, 14),  // "onAlarmChanged"
        QT_MOC_LITERAL(78, 22),  // "onDeleteRowAlarmSwitch"
        QT_MOC_LITERAL(101, 20),  // "QBetterSwitchButton*"
        QT_MOC_LITERAL(122, 11),  // "alarmSwitch"
        QT_MOC_LITERAL(134, 5),  // "onAdd"
        QT_MOC_LITERAL(140, 16),  // "onClearAllAlarms"
        QT_MOC_LITERAL(157, 14),  // "onLoadFromFile"
        QT_MOC_LITERAL(172, 12)   // "onSaveToFile"
    },
    "QAlarmViewerWidget",
    "onModbusMappingUploaded",
    "",
    "output",
    "lastCommand",
    "onAlarmChanged",
    "onDeleteRowAlarmSwitch",
    "QBetterSwitchButton*",
    "alarmSwitch",
    "onAdd",
    "onClearAllAlarms",
    "onLoadFromFile",
    "onSaveToFile"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QAlarmViewerWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   56,    2, 0x08,    1 /* Private */,
       5,    0,   61,    2, 0x08,    4 /* Private */,
       6,    1,   62,    2, 0x08,    5 /* Private */,
       9,    0,   65,    2, 0x0a,    7 /* Public */,
      10,    0,   66,    2, 0x0a,    8 /* Public */,
      11,    0,   67,    2, 0x0a,    9 /* Public */,
      12,    0,   68,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QAlarmViewerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QAlarmViewerWidget.offsetsAndSizes,
    qt_meta_data_QAlarmViewerWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QAlarmViewerWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAlarmViewerWidget, std::true_type>,
        // method 'onModbusMappingUploaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onAlarmChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDeleteRowAlarmSwitch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QBetterSwitchButton *, std::false_type>,
        // method 'onAdd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClearAllAlarms'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLoadFromFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSaveToFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QAlarmViewerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAlarmViewerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onModbusMappingUploaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->onAlarmChanged(); break;
        case 2: _t->onDeleteRowAlarmSwitch((*reinterpret_cast< std::add_pointer_t<QBetterSwitchButton*>>(_a[1]))); break;
        case 3: _t->onAdd(); break;
        case 4: _t->onClearAllAlarms(); break;
        case 5: _t->onLoadFromFile(); break;
        case 6: _t->onSaveToFile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QBetterSwitchButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *QAlarmViewerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAlarmViewerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAlarmViewerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QAlarmViewerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
