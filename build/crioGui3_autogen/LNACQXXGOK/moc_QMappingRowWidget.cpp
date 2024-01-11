/****************************************************************************
** Meta object code from reading C++ file 'QMappingRowWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/TabWidgetFundations/ModbusMaping/QMappingRowWidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QMappingRowWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QMappingRowWidget_t {
    uint offsetsAndSizes[116];
    char stringdata0[18];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[18];
    char stringdata5[28];
    char stringdata6[11];
    char stringdata7[19];
    char stringdata8[12];
    char stringdata9[21];
    char stringdata10[12];
    char stringdata11[17];
    char stringdata12[7];
    char stringdata13[17];
    char stringdata14[7];
    char stringdata15[15];
    char stringdata16[9];
    char stringdata17[8];
    char stringdata18[15];
    char stringdata19[8];
    char stringdata20[21];
    char stringdata21[12];
    char stringdata22[18];
    char stringdata23[19];
    char stringdata24[10];
    char stringdata25[16];
    char stringdata26[16];
    char stringdata27[18];
    char stringdata28[18];
    char stringdata29[20];
    char stringdata30[21];
    char stringdata31[23];
    char stringdata32[21];
    char stringdata33[21];
    char stringdata34[17];
    char stringdata35[17];
    char stringdata36[21];
    char stringdata37[13];
    char stringdata38[15];
    char stringdata39[14];
    char stringdata40[20];
    char stringdata41[21];
    char stringdata42[11];
    char stringdata43[8];
    char stringdata44[13];
    char stringdata45[11];
    char stringdata46[14];
    char stringdata47[16];
    char stringdata48[14];
    char stringdata49[11];
    char stringdata50[14];
    char stringdata51[10];
    char stringdata52[10];
    char stringdata53[14];
    char stringdata54[6];
    char stringdata55[13];
    char stringdata56[8];
    char stringdata57[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QMappingRowWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QMappingRowWidget_t qt_meta_stringdata_QMappingRowWidget = {
    {
        QT_MOC_LITERAL(0, 17),  // "QMappingRowWidget"
        QT_MOC_LITERAL(18, 12),  // "indexChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 5),  // "index"
        QT_MOC_LITERAL(38, 17),  // "moduleTypeChanged"
        QT_MOC_LITERAL(56, 27),  // "globalEnumSpace::ModuleType"
        QT_MOC_LITERAL(84, 10),  // "moduleType"
        QT_MOC_LITERAL(95, 18),  // "moduleAliasChanged"
        QT_MOC_LITERAL(114, 11),  // "moduleAlias"
        QT_MOC_LITERAL(126, 20),  // "moduleChannelChanged"
        QT_MOC_LITERAL(147, 11),  // "channelName"
        QT_MOC_LITERAL(159, 16),  // "minSourceChanged"
        QT_MOC_LITERAL(176, 6),  // "srcMin"
        QT_MOC_LITERAL(183, 16),  // "maxSourceChanged"
        QT_MOC_LITERAL(200, 6),  // "srcMax"
        QT_MOC_LITERAL(207, 14),  // "minDestChanged"
        QT_MOC_LITERAL(222, 8),  // "uint16_t"
        QT_MOC_LITERAL(231, 7),  // "destMin"
        QT_MOC_LITERAL(239, 14),  // "maxDestChanged"
        QT_MOC_LITERAL(254, 7),  // "destMax"
        QT_MOC_LITERAL(262, 20),  // "modbusChannelChanged"
        QT_MOC_LITERAL(283, 11),  // "modbusIndex"
        QT_MOC_LITERAL(295, 17),  // "rowSelectedSignal"
        QT_MOC_LITERAL(313, 18),  // "QMappingRowWidget*"
        QT_MOC_LITERAL(332, 9),  // "rowWidget"
        QT_MOC_LITERAL(342, 15),  // "deleteRowSignal"
        QT_MOC_LITERAL(358, 15),  // "moveUpRowSignal"
        QT_MOC_LITERAL(374, 17),  // "moveDownRowSignal"
        QT_MOC_LITERAL(392, 17),  // "indexLabelChanged"
        QT_MOC_LITERAL(410, 19),  // "moduleTypeCBChanged"
        QT_MOC_LITERAL(430, 20),  // "moduleAliasCBChanged"
        QT_MOC_LITERAL(451, 22),  // "moduleChannelCBChanged"
        QT_MOC_LITERAL(474, 20),  // "minSrcValueLEChanged"
        QT_MOC_LITERAL(495, 20),  // "maxSrcValueLEChanged"
        QT_MOC_LITERAL(516, 16),  // "minDestLEChanged"
        QT_MOC_LITERAL(533, 16),  // "maxDestLEChanged"
        QT_MOC_LITERAL(550, 20),  // "destChannelLEChanged"
        QT_MOC_LITERAL(571, 12),  // "upBtnChanged"
        QT_MOC_LITERAL(584, 14),  // "downBtnChanged"
        QT_MOC_LITERAL(599, 13),  // "delBtnChanged"
        QT_MOC_LITERAL(613, 19),  // "onModuleTypeChanged"
        QT_MOC_LITERAL(633, 20),  // "onModuleAliasChanged"
        QT_MOC_LITERAL(654, 10),  // "indexLabel"
        QT_MOC_LITERAL(665, 7),  // "QLabel*"
        QT_MOC_LITERAL(673, 12),  // "moduleTypeCB"
        QT_MOC_LITERAL(686, 10),  // "QComboBox*"
        QT_MOC_LITERAL(697, 13),  // "moduleAliasCB"
        QT_MOC_LITERAL(711, 15),  // "moduleChannelCB"
        QT_MOC_LITERAL(727, 13),  // "minSrcValueLE"
        QT_MOC_LITERAL(741, 10),  // "QLineEdit*"
        QT_MOC_LITERAL(752, 13),  // "maxSrcValueLE"
        QT_MOC_LITERAL(766, 9),  // "minDestLE"
        QT_MOC_LITERAL(776, 9),  // "maxDestLE"
        QT_MOC_LITERAL(786, 13),  // "destChannelLE"
        QT_MOC_LITERAL(800, 5),  // "upBtn"
        QT_MOC_LITERAL(806, 12),  // "QPushButton*"
        QT_MOC_LITERAL(819, 7),  // "downBtn"
        QT_MOC_LITERAL(827, 6)   // "delBtn"
    },
    "QMappingRowWidget",
    "indexChanged",
    "",
    "index",
    "moduleTypeChanged",
    "globalEnumSpace::ModuleType",
    "moduleType",
    "moduleAliasChanged",
    "moduleAlias",
    "moduleChannelChanged",
    "channelName",
    "minSourceChanged",
    "srcMin",
    "maxSourceChanged",
    "srcMax",
    "minDestChanged",
    "uint16_t",
    "destMin",
    "maxDestChanged",
    "destMax",
    "modbusChannelChanged",
    "modbusIndex",
    "rowSelectedSignal",
    "QMappingRowWidget*",
    "rowWidget",
    "deleteRowSignal",
    "moveUpRowSignal",
    "moveDownRowSignal",
    "indexLabelChanged",
    "moduleTypeCBChanged",
    "moduleAliasCBChanged",
    "moduleChannelCBChanged",
    "minSrcValueLEChanged",
    "maxSrcValueLEChanged",
    "minDestLEChanged",
    "maxDestLEChanged",
    "destChannelLEChanged",
    "upBtnChanged",
    "downBtnChanged",
    "delBtnChanged",
    "onModuleTypeChanged",
    "onModuleAliasChanged",
    "indexLabel",
    "QLabel*",
    "moduleTypeCB",
    "QComboBox*",
    "moduleAliasCB",
    "moduleChannelCB",
    "minSrcValueLE",
    "QLineEdit*",
    "maxSrcValueLE",
    "minDestLE",
    "maxDestLE",
    "destChannelLE",
    "upBtn",
    "QPushButton*",
    "downBtn",
    "delBtn"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QMappingRowWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
      13,  233, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  176,    2, 0x06,   14 /* Public */,
       4,    1,  179,    2, 0x06,   16 /* Public */,
       7,    1,  182,    2, 0x06,   18 /* Public */,
       9,    1,  185,    2, 0x06,   20 /* Public */,
      11,    1,  188,    2, 0x06,   22 /* Public */,
      13,    1,  191,    2, 0x06,   24 /* Public */,
      15,    1,  194,    2, 0x06,   26 /* Public */,
      18,    1,  197,    2, 0x06,   28 /* Public */,
      20,    1,  200,    2, 0x06,   30 /* Public */,
      22,    1,  203,    2, 0x06,   32 /* Public */,
      25,    1,  206,    2, 0x06,   34 /* Public */,
      26,    1,  209,    2, 0x06,   36 /* Public */,
      27,    1,  212,    2, 0x06,   38 /* Public */,
      28,    0,  215,    2, 0x06,   40 /* Public */,
      29,    0,  216,    2, 0x06,   41 /* Public */,
      30,    0,  217,    2, 0x06,   42 /* Public */,
      31,    0,  218,    2, 0x06,   43 /* Public */,
      32,    0,  219,    2, 0x06,   44 /* Public */,
      33,    0,  220,    2, 0x06,   45 /* Public */,
      34,    0,  221,    2, 0x06,   46 /* Public */,
      35,    0,  222,    2, 0x06,   47 /* Public */,
      36,    0,  223,    2, 0x06,   48 /* Public */,
      37,    0,  224,    2, 0x06,   49 /* Public */,
      38,    0,  225,    2, 0x06,   50 /* Public */,
      39,    0,  226,    2, 0x06,   51 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      40,    1,  227,    2, 0x0a,   52 /* Public */,
      41,    1,  230,    2, 0x0a,   54 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Float,   12,
    QMetaType::Void, QMetaType::Float,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // properties: name, type, flags
      42, 0x80000000 | 43, 0x0001510b, uint(13), 0,
      44, 0x80000000 | 45, 0x0001510b, uint(14), 0,
      46, 0x80000000 | 45, 0x0001510b, uint(15), 0,
      47, 0x80000000 | 45, 0x0001510b, uint(16), 0,
      48, 0x80000000 | 49, 0x0001510b, uint(17), 0,
      50, 0x80000000 | 49, 0x0001510b, uint(18), 0,
      51, 0x80000000 | 49, 0x0001510b, uint(19), 0,
      52, 0x80000000 | 49, 0x0001510b, uint(20), 0,
      53, 0x80000000 | 49, 0x0001510b, uint(21), 0,
      54, 0x80000000 | 55, 0x0001510b, uint(22), 0,
      56, 0x80000000 | 55, 0x0001510b, uint(23), 0,
      57, 0x80000000 | 55, 0x0001510b, uint(24), 0,
       3, QMetaType::Int, 0x00015103, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QMappingRowWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QMappingRowWidget.offsetsAndSizes,
    qt_meta_data_QMappingRowWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QMappingRowWidget_t,
        // property 'indexLabel'
        QtPrivate::TypeAndForceComplete<QLabel*, std::true_type>,
        // property 'moduleTypeCB'
        QtPrivate::TypeAndForceComplete<QComboBox*, std::true_type>,
        // property 'moduleAliasCB'
        QtPrivate::TypeAndForceComplete<QComboBox*, std::true_type>,
        // property 'moduleChannelCB'
        QtPrivate::TypeAndForceComplete<QComboBox*, std::true_type>,
        // property 'minSrcValueLE'
        QtPrivate::TypeAndForceComplete<QLineEdit*, std::true_type>,
        // property 'maxSrcValueLE'
        QtPrivate::TypeAndForceComplete<QLineEdit*, std::true_type>,
        // property 'minDestLE'
        QtPrivate::TypeAndForceComplete<QLineEdit*, std::true_type>,
        // property 'maxDestLE'
        QtPrivate::TypeAndForceComplete<QLineEdit*, std::true_type>,
        // property 'destChannelLE'
        QtPrivate::TypeAndForceComplete<QLineEdit*, std::true_type>,
        // property 'upBtn'
        QtPrivate::TypeAndForceComplete<QPushButton*, std::true_type>,
        // property 'downBtn'
        QtPrivate::TypeAndForceComplete<QPushButton*, std::true_type>,
        // property 'delBtn'
        QtPrivate::TypeAndForceComplete<QPushButton*, std::true_type>,
        // property 'index'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMappingRowWidget, std::true_type>,
        // method 'indexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        // method 'moduleTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<globalEnumSpace::ModuleType, std::false_type>,
        // method 'moduleAliasChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'moduleChannelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'minSourceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'maxSourceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'minDestChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'maxDestChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'modbusChannelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rowSelectedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMappingRowWidget *, std::false_type>,
        // method 'deleteRowSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMappingRowWidget *, std::false_type>,
        // method 'moveUpRowSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMappingRowWidget *, std::false_type>,
        // method 'moveDownRowSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMappingRowWidget *, std::false_type>,
        // method 'indexLabelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moduleTypeCBChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moduleAliasCBChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moduleChannelCBChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minSrcValueLEChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maxSrcValueLEChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minDestLEChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maxDestLEChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'destChannelLEChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'upBtnChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downBtnChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delBtnChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onModuleTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onModuleAliasChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QMappingRowWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QMappingRowWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->indexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->moduleTypeChanged((*reinterpret_cast< std::add_pointer_t<globalEnumSpace::ModuleType>>(_a[1]))); break;
        case 2: _t->moduleAliasChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->moduleChannelChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->minSourceChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 5: _t->maxSourceChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 6: _t->minDestChanged((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 7: _t->maxDestChanged((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 8: _t->modbusChannelChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->rowSelectedSignal((*reinterpret_cast< std::add_pointer_t<QMappingRowWidget*>>(_a[1]))); break;
        case 10: _t->deleteRowSignal((*reinterpret_cast< std::add_pointer_t<QMappingRowWidget*>>(_a[1]))); break;
        case 11: _t->moveUpRowSignal((*reinterpret_cast< std::add_pointer_t<QMappingRowWidget*>>(_a[1]))); break;
        case 12: _t->moveDownRowSignal((*reinterpret_cast< std::add_pointer_t<QMappingRowWidget*>>(_a[1]))); break;
        case 13: _t->indexLabelChanged(); break;
        case 14: _t->moduleTypeCBChanged(); break;
        case 15: _t->moduleAliasCBChanged(); break;
        case 16: _t->moduleChannelCBChanged(); break;
        case 17: _t->minSrcValueLEChanged(); break;
        case 18: _t->maxSrcValueLEChanged(); break;
        case 19: _t->minDestLEChanged(); break;
        case 20: _t->maxDestLEChanged(); break;
        case 21: _t->destChannelLEChanged(); break;
        case 22: _t->upBtnChanged(); break;
        case 23: _t->downBtnChanged(); break;
        case 24: _t->delBtnChanged(); break;
        case 25: _t->onModuleTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->onModuleAliasChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMappingRowWidget* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMappingRowWidget* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMappingRowWidget* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMappingRowWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QMappingRowWidget::*)(const int & );
            if (_t _q_method = &QMappingRowWidget::indexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)(globalEnumSpace::ModuleType );
            if (_t _q_method = &QMappingRowWidget::moduleTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)(const QString & );
            if (_t _q_method = &QMappingRowWidget::moduleAliasChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)(const QString & );
            if (_t _q_method = &QMappingRowWidget::moduleChannelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)(float );
            if (_t _q_method = &QMappingRowWidget::minSourceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)(float );
            if (_t _q_method = &QMappingRowWidget::maxSourceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)(uint16_t );
            if (_t _q_method = &QMappingRowWidget::minDestChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)(uint16_t );
            if (_t _q_method = &QMappingRowWidget::maxDestChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)(int );
            if (_t _q_method = &QMappingRowWidget::modbusChannelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)(QMappingRowWidget * );
            if (_t _q_method = &QMappingRowWidget::rowSelectedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)(QMappingRowWidget * );
            if (_t _q_method = &QMappingRowWidget::deleteRowSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)(QMappingRowWidget * );
            if (_t _q_method = &QMappingRowWidget::moveUpRowSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)(QMappingRowWidget * );
            if (_t _q_method = &QMappingRowWidget::moveDownRowSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)();
            if (_t _q_method = &QMappingRowWidget::indexLabelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)();
            if (_t _q_method = &QMappingRowWidget::moduleTypeCBChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)();
            if (_t _q_method = &QMappingRowWidget::moduleAliasCBChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)();
            if (_t _q_method = &QMappingRowWidget::moduleChannelCBChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)();
            if (_t _q_method = &QMappingRowWidget::minSrcValueLEChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)();
            if (_t _q_method = &QMappingRowWidget::maxSrcValueLEChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)();
            if (_t _q_method = &QMappingRowWidget::minDestLEChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)();
            if (_t _q_method = &QMappingRowWidget::maxDestLEChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)();
            if (_t _q_method = &QMappingRowWidget::destChannelLEChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)();
            if (_t _q_method = &QMappingRowWidget::upBtnChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)();
            if (_t _q_method = &QMappingRowWidget::downBtnChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (QMappingRowWidget::*)();
            if (_t _q_method = &QMappingRowWidget::delBtnChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QComboBox* >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QMappingRowWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QLabel**>(_v) = _t->indexLabel(); break;
        case 1: *reinterpret_cast< QComboBox**>(_v) = _t->moduleTypeCB(); break;
        case 2: *reinterpret_cast< QComboBox**>(_v) = _t->moduleAliasCB(); break;
        case 3: *reinterpret_cast< QComboBox**>(_v) = _t->moduleChannelCB(); break;
        case 4: *reinterpret_cast< QLineEdit**>(_v) = _t->minSrcValueLE(); break;
        case 5: *reinterpret_cast< QLineEdit**>(_v) = _t->maxSrcValueLE(); break;
        case 6: *reinterpret_cast< QLineEdit**>(_v) = _t->minDestLE(); break;
        case 7: *reinterpret_cast< QLineEdit**>(_v) = _t->maxDestLE(); break;
        case 8: *reinterpret_cast< QLineEdit**>(_v) = _t->destChannelLE(); break;
        case 9: *reinterpret_cast< QPushButton**>(_v) = _t->upBtn(); break;
        case 10: *reinterpret_cast< QPushButton**>(_v) = _t->downBtn(); break;
        case 11: *reinterpret_cast< QPushButton**>(_v) = _t->delBtn(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->index(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QMappingRowWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIndexLabel(*reinterpret_cast< QLabel**>(_v)); break;
        case 1: _t->setModuleTypeCB(*reinterpret_cast< QComboBox**>(_v)); break;
        case 2: _t->setModuleAliasCB(*reinterpret_cast< QComboBox**>(_v)); break;
        case 3: _t->setModuleChannelCB(*reinterpret_cast< QComboBox**>(_v)); break;
        case 4: _t->setMinSrcValueLE(*reinterpret_cast< QLineEdit**>(_v)); break;
        case 5: _t->setMaxSrcValueLE(*reinterpret_cast< QLineEdit**>(_v)); break;
        case 6: _t->setMinDestLE(*reinterpret_cast< QLineEdit**>(_v)); break;
        case 7: _t->setMaxDestLE(*reinterpret_cast< QLineEdit**>(_v)); break;
        case 8: _t->setDestChannelLE(*reinterpret_cast< QLineEdit**>(_v)); break;
        case 9: _t->setUpBtn(*reinterpret_cast< QPushButton**>(_v)); break;
        case 10: _t->setDownBtn(*reinterpret_cast< QPushButton**>(_v)); break;
        case 11: _t->setDelBtn(*reinterpret_cast< QPushButton**>(_v)); break;
        case 12: _t->setIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QMappingRowWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMappingRowWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMappingRowWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QMappingRowWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QMappingRowWidget::indexChanged(const int & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMappingRowWidget::moduleTypeChanged(globalEnumSpace::ModuleType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMappingRowWidget::moduleAliasChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMappingRowWidget::moduleChannelChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMappingRowWidget::minSourceChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMappingRowWidget::maxSourceChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QMappingRowWidget::minDestChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QMappingRowWidget::maxDestChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QMappingRowWidget::modbusChannelChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QMappingRowWidget::rowSelectedSignal(QMappingRowWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QMappingRowWidget::deleteRowSignal(QMappingRowWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QMappingRowWidget::moveUpRowSignal(QMappingRowWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QMappingRowWidget::moveDownRowSignal(QMappingRowWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QMappingRowWidget::indexLabelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QMappingRowWidget::moduleTypeCBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void QMappingRowWidget::moduleAliasCBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void QMappingRowWidget::moduleChannelCBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QMappingRowWidget::minSrcValueLEChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void QMappingRowWidget::maxSrcValueLEChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void QMappingRowWidget::minDestLEChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void QMappingRowWidget::maxDestLEChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void QMappingRowWidget::destChannelLEChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void QMappingRowWidget::upBtnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void QMappingRowWidget::downBtnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void QMappingRowWidget::delBtnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
