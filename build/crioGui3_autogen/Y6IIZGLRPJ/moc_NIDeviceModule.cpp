/****************************************************************************
** Meta object code from reading C++ file 'NIDeviceModule.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/NISpecifics/NIDeviceModule.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NIDeviceModule.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_NIDeviceModule_t {
    uint offsetsAndSizes[90];
    char stringdata0[15];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[8];
    char stringdata5[16];
    char stringdata6[7];
    char stringdata7[33];
    char stringdata8[20];
    char stringdata9[12];
    char stringdata10[30];
    char stringdata11[9];
    char stringdata12[34];
    char stringdata13[21];
    char stringdata14[10];
    char stringdata15[30];
    char stringdata16[14];
    char stringdata17[24];
    char stringdata18[8];
    char stringdata19[24];
    char stringdata20[14];
    char stringdata21[23];
    char stringdata22[25];
    char stringdata23[9];
    char stringdata24[21];
    char stringdata25[7];
    char stringdata26[21];
    char stringdata27[7];
    char stringdata28[24];
    char stringdata29[14];
    char stringdata30[25];
    char stringdata31[25];
    char stringdata32[31];
    char stringdata33[24];
    char stringdata34[25];
    char stringdata35[18];
    char stringdata36[8];
    char stringdata37[30];
    char stringdata38[13];
    char stringdata39[30];
    char stringdata40[11];
    char stringdata41[24];
    char stringdata42[11];
    char stringdata43[8];
    char stringdata44[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_NIDeviceModule_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_NIDeviceModule_t qt_meta_stringdata_NIDeviceModule = {
    {
        QT_MOC_LITERAL(0, 14),  // "NIDeviceModule"
        QT_MOC_LITERAL(15, 23),  // "moduleNameChangedSignal"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 11),  // "std::string"
        QT_MOC_LITERAL(52, 7),  // "newName"
        QT_MOC_LITERAL(60, 15),  // "NIDeviceModule*"
        QT_MOC_LITERAL(76, 6),  // "sender"
        QT_MOC_LITERAL(83, 32),  // "moduleShuntLocationChangedSignal"
        QT_MOC_LITERAL(116, 19),  // "moduleShuntLocation"
        QT_MOC_LITERAL(136, 11),  // "newLocation"
        QT_MOC_LITERAL(148, 29),  // "moduleShuntValueChangedSignal"
        QT_MOC_LITERAL(178, 8),  // "newValue"
        QT_MOC_LITERAL(187, 33),  // "moduleTerminalConfigChangedSi..."
        QT_MOC_LITERAL(221, 20),  // "moduleTerminalConfig"
        QT_MOC_LITERAL(242, 9),  // "newConfig"
        QT_MOC_LITERAL(252, 29),  // "moduleSlotNumberChangedSignal"
        QT_MOC_LITERAL(282, 13),  // "newSlotNumber"
        QT_MOC_LITERAL(296, 23),  // "moduleInfoChangedSignal"
        QT_MOC_LITERAL(320, 7),  // "newInfo"
        QT_MOC_LITERAL(328, 23),  // "nbChannelsChangedSignal"
        QT_MOC_LITERAL(352, 13),  // "newNbChannels"
        QT_MOC_LITERAL(366, 22),  // "chanNamesChangedSignal"
        QT_MOC_LITERAL(389, 24),  // "std::vector<std::string>"
        QT_MOC_LITERAL(414, 8),  // "newNames"
        QT_MOC_LITERAL(423, 20),  // "chanMinChangedSignal"
        QT_MOC_LITERAL(444, 6),  // "newMin"
        QT_MOC_LITERAL(451, 20),  // "chanMaxChangedSignal"
        QT_MOC_LITERAL(472, 6),  // "newMax"
        QT_MOC_LITERAL(479, 23),  // "nbCountersChangedSignal"
        QT_MOC_LITERAL(503, 13),  // "newNbCounters"
        QT_MOC_LITERAL(517, 24),  // "countersMinChangedSignal"
        QT_MOC_LITERAL(542, 24),  // "countersMaxChangedSignal"
        QT_MOC_LITERAL(567, 30),  // "counterEdgeConfigChangedSignal"
        QT_MOC_LITERAL(598, 23),  // "moduleCounterEdgeConfig"
        QT_MOC_LITERAL(622, 24),  // "counterModeChangedSignal"
        QT_MOC_LITERAL(647, 17),  // "moduleCounterMode"
        QT_MOC_LITERAL(665, 7),  // "newMode"
        QT_MOC_LITERAL(673, 29),  // "nbDigitalOutputsChangedSignal"
        QT_MOC_LITERAL(703, 12),  // "newNbOutputs"
        QT_MOC_LITERAL(716, 29),  // "nbDigitalIoPortsChangedSignal"
        QT_MOC_LITERAL(746, 10),  // "newNbPorts"
        QT_MOC_LITERAL(757, 23),  // "moduleUnitChangedSignal"
        QT_MOC_LITERAL(781, 10),  // "moduleUnit"
        QT_MOC_LITERAL(792, 7),  // "newUnit"
        QT_MOC_LITERAL(800, 25)   // "counterNamesChangedSignal"
    },
    "NIDeviceModule",
    "moduleNameChangedSignal",
    "",
    "std::string",
    "newName",
    "NIDeviceModule*",
    "sender",
    "moduleShuntLocationChangedSignal",
    "moduleShuntLocation",
    "newLocation",
    "moduleShuntValueChangedSignal",
    "newValue",
    "moduleTerminalConfigChangedSignal",
    "moduleTerminalConfig",
    "newConfig",
    "moduleSlotNumberChangedSignal",
    "newSlotNumber",
    "moduleInfoChangedSignal",
    "newInfo",
    "nbChannelsChangedSignal",
    "newNbChannels",
    "chanNamesChangedSignal",
    "std::vector<std::string>",
    "newNames",
    "chanMinChangedSignal",
    "newMin",
    "chanMaxChangedSignal",
    "newMax",
    "nbCountersChangedSignal",
    "newNbCounters",
    "countersMinChangedSignal",
    "countersMaxChangedSignal",
    "counterEdgeConfigChangedSignal",
    "moduleCounterEdgeConfig",
    "counterModeChangedSignal",
    "moduleCounterMode",
    "newMode",
    "nbDigitalOutputsChangedSignal",
    "newNbOutputs",
    "nbDigitalIoPortsChangedSignal",
    "newNbPorts",
    "moduleUnitChangedSignal",
    "moduleUnit",
    "newUnit",
    "counterNamesChangedSignal"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_NIDeviceModule[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  128,    2, 0x06,    1 /* Public */,
       7,    2,  133,    2, 0x06,    4 /* Public */,
      10,    2,  138,    2, 0x06,    7 /* Public */,
      12,    2,  143,    2, 0x06,   10 /* Public */,
      15,    2,  148,    2, 0x06,   13 /* Public */,
      17,    2,  153,    2, 0x06,   16 /* Public */,
      19,    2,  158,    2, 0x06,   19 /* Public */,
      21,    2,  163,    2, 0x06,   22 /* Public */,
      24,    2,  168,    2, 0x06,   25 /* Public */,
      26,    2,  173,    2, 0x06,   28 /* Public */,
      28,    2,  178,    2, 0x06,   31 /* Public */,
      30,    2,  183,    2, 0x06,   34 /* Public */,
      31,    2,  188,    2, 0x06,   37 /* Public */,
      32,    2,  193,    2, 0x06,   40 /* Public */,
      34,    2,  198,    2, 0x06,   43 /* Public */,
      37,    2,  203,    2, 0x06,   46 /* Public */,
      39,    2,  208,    2, 0x06,   49 /* Public */,
      41,    2,  213,    2, 0x06,   52 /* Public */,
      44,    2,  218,    2, 0x06,   55 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 5,    9,    6,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 5,   11,    6,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 5,   14,    6,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 5,   16,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,   18,    6,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 5,   20,    6,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 5,   23,    6,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 5,   25,    6,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 5,   27,    6,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 5,   29,    6,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 5,   25,    6,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 5,   27,    6,
    QMetaType::Void, 0x80000000 | 33, 0x80000000 | 5,   14,    6,
    QMetaType::Void, 0x80000000 | 35, 0x80000000 | 5,   36,    6,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 5,   38,    6,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 5,   40,    6,
    QMetaType::Void, 0x80000000 | 42, 0x80000000 | 5,   43,    6,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 5,   23,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject NIDeviceModule::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NIDeviceModule.offsetsAndSizes,
    qt_meta_data_NIDeviceModule,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_NIDeviceModule_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NIDeviceModule, std::true_type>,
        // method 'moduleNameChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'moduleShuntLocationChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<moduleShuntLocation, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'moduleShuntValueChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'moduleTerminalConfigChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<moduleTerminalConfig, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'moduleSlotNumberChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'moduleInfoChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'nbChannelsChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'chanNamesChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<std::string>, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'chanMinChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'chanMaxChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'nbCountersChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'countersMinChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'countersMaxChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'counterEdgeConfigChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<moduleCounterEdgeConfig, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'counterModeChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<moduleCounterMode, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'nbDigitalOutputsChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'nbDigitalIoPortsChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'moduleUnitChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<moduleUnit, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>,
        // method 'counterNamesChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<std::string>, std::false_type>,
        QtPrivate::TypeAndForceComplete<NIDeviceModule *, std::false_type>
    >,
    nullptr
} };

void NIDeviceModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NIDeviceModule *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moduleNameChangedSignal((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 1: _t->moduleShuntLocationChangedSignal((*reinterpret_cast< std::add_pointer_t<moduleShuntLocation>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 2: _t->moduleShuntValueChangedSignal((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 3: _t->moduleTerminalConfigChangedSignal((*reinterpret_cast< std::add_pointer_t<moduleTerminalConfig>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 4: _t->moduleSlotNumberChangedSignal((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 5: _t->moduleInfoChangedSignal((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 6: _t->nbChannelsChangedSignal((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 7: _t->chanNamesChangedSignal((*reinterpret_cast< std::add_pointer_t<std::vector<std::string>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 8: _t->chanMinChangedSignal((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 9: _t->chanMaxChangedSignal((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 10: _t->nbCountersChangedSignal((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 11: _t->countersMinChangedSignal((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 12: _t->countersMaxChangedSignal((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 13: _t->counterEdgeConfigChangedSignal((*reinterpret_cast< std::add_pointer_t<moduleCounterEdgeConfig>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 14: _t->counterModeChangedSignal((*reinterpret_cast< std::add_pointer_t<moduleCounterMode>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 15: _t->nbDigitalOutputsChangedSignal((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 16: _t->nbDigitalIoPortsChangedSignal((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 17: _t->moduleUnitChangedSignal((*reinterpret_cast< std::add_pointer_t<moduleUnit>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        case 18: _t->counterNamesChangedSignal((*reinterpret_cast< std::add_pointer_t<std::vector<std::string>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NIDeviceModule*>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NIDeviceModule* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NIDeviceModule::*)(std::string , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::moduleNameChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(moduleShuntLocation , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::moduleShuntLocationChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(double , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::moduleShuntValueChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(moduleTerminalConfig , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::moduleTerminalConfigChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(unsigned int , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::moduleSlotNumberChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(std::string , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::moduleInfoChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(unsigned int , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::nbChannelsChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(std::vector<std::string> , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::chanNamesChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(double , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::chanMinChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(double , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::chanMaxChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(unsigned int , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::nbCountersChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(unsigned int , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::countersMinChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(unsigned int , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::countersMaxChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(moduleCounterEdgeConfig , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::counterEdgeConfigChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(moduleCounterMode , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::counterModeChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(unsigned int , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::nbDigitalOutputsChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(unsigned int , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::nbDigitalIoPortsChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(moduleUnit , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::moduleUnitChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (NIDeviceModule::*)(std::vector<std::string> , NIDeviceModule * );
            if (_t _q_method = &NIDeviceModule::counterNamesChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
    }
}

const QMetaObject *NIDeviceModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NIDeviceModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NIDeviceModule.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NIDeviceModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void NIDeviceModule::moduleNameChangedSignal(std::string _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NIDeviceModule::moduleShuntLocationChangedSignal(moduleShuntLocation _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NIDeviceModule::moduleShuntValueChangedSignal(double _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NIDeviceModule::moduleTerminalConfigChangedSignal(moduleTerminalConfig _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NIDeviceModule::moduleSlotNumberChangedSignal(unsigned int _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NIDeviceModule::moduleInfoChangedSignal(std::string _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void NIDeviceModule::nbChannelsChangedSignal(unsigned int _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void NIDeviceModule::chanNamesChangedSignal(std::vector<std::string> _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void NIDeviceModule::chanMinChangedSignal(double _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void NIDeviceModule::chanMaxChangedSignal(double _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void NIDeviceModule::nbCountersChangedSignal(unsigned int _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void NIDeviceModule::countersMinChangedSignal(unsigned int _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void NIDeviceModule::countersMaxChangedSignal(unsigned int _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void NIDeviceModule::counterEdgeConfigChangedSignal(moduleCounterEdgeConfig _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void NIDeviceModule::counterModeChangedSignal(moduleCounterMode _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void NIDeviceModule::nbDigitalOutputsChangedSignal(unsigned int _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void NIDeviceModule::nbDigitalIoPortsChangedSignal(unsigned int _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void NIDeviceModule::moduleUnitChangedSignal(moduleUnit _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void NIDeviceModule::counterNamesChangedSignal(std::vector<std::string> _t1, NIDeviceModule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
