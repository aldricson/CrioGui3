/****************************************************************************
** Meta object code from reading C++ file 'QSSHCommand.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/NetWorking/QSSHCommand.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QSSHCommand.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QSSHCommand_t {
    uint offsetsAndSizes[92];
    char stringdata0[12];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[12];
    char stringdata5[20];
    char stringdata6[12];
    char stringdata7[19];
    char stringdata8[26];
    char stringdata9[23];
    char stringdata10[28];
    char stringdata11[26];
    char stringdata12[28];
    char stringdata13[15];
    char stringdata14[19];
    char stringdata15[24];
    char stringdata16[19];
    char stringdata17[24];
    char stringdata18[24];
    char stringdata19[17];
    char stringdata20[18];
    char stringdata21[10];
    char stringdata22[20];
    char stringdata23[28];
    char stringdata24[14];
    char stringdata25[19];
    char stringdata26[27];
    char stringdata27[17];
    char stringdata28[16];
    char stringdata29[15];
    char stringdata30[15];
    char stringdata31[16];
    char stringdata32[16];
    char stringdata33[19];
    char stringdata34[19];
    char stringdata35[16];
    char stringdata36[9];
    char stringdata37[21];
    char stringdata38[11];
    char stringdata39[10];
    char stringdata40[9];
    char stringdata41[8];
    char stringdata42[8];
    char stringdata43[9];
    char stringdata44[9];
    char stringdata45[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QSSHCommand_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QSSHCommand_t qt_meta_stringdata_QSSHCommand = {
    {
        QT_MOC_LITERAL(0, 11),  // "QSSHCommand"
        QT_MOC_LITERAL(12, 21),  // "commandExecutedSignal"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 6),  // "output"
        QT_MOC_LITERAL(42, 11),  // "lastCommand"
        QT_MOC_LITERAL(54, 19),  // "errorOccurredSignal"
        QT_MOC_LITERAL(74, 11),  // "errorString"
        QT_MOC_LITERAL(86, 18),  // "listFileDoneSignal"
        QT_MOC_LITERAL(105, 25),  // "moduleListRetrievedSignal"
        QT_MOC_LITERAL(131, 22),  // "moduleDownloadedSignal"
        QT_MOC_LITERAL(154, 27),  // "modbusSetupDownloadedSignal"
        QT_MOC_LITERAL(182, 25),  // "modbusMappingLoadedSignal"
        QT_MOC_LITERAL(208, 27),  // "modbusMappingUploadedSignal"
        QT_MOC_LITERAL(236, 14),  // "totalCPUSignal"
        QT_MOC_LITERAL(251, 18),  // "dataDrillCpuSignal"
        QT_MOC_LITERAL(270, 23),  // "dataDrillTotalHDDSignal"
        QT_MOC_LITERAL(294, 18),  // "dataDrillHDDSignal"
        QT_MOC_LITERAL(313, 23),  // "dataDrillTotalRamSignal"
        QT_MOC_LITERAL(337, 23),  // "dataDrillRamUsageSignal"
        QT_MOC_LITERAL(361, 16),  // "globalStatSignal"
        QT_MOC_LITERAL(378, 17),  // "serverStateSignal"
        QT_MOC_LITERAL(396, 9),  // "isRunning"
        QT_MOC_LITERAL(406, 19),  // "serverStartedSignal"
        QT_MOC_LITERAL(426, 27),  // "serverStartSuccesfullSignal"
        QT_MOC_LITERAL(454, 13),  // "screenSession"
        QT_MOC_LITERAL(468, 18),  // "serverStopedSignal"
        QT_MOC_LITERAL(487, 26),  // "authenticationFailedSignal"
        QT_MOC_LITERAL(514, 16),  // "sshClientChanged"
        QT_MOC_LITERAL(531, 15),  // "hostNameChanged"
        QT_MOC_LITERAL(547, 14),  // "portNumChanged"
        QT_MOC_LITERAL(562, 14),  // "keyFileChanged"
        QT_MOC_LITERAL(577, 15),  // "passwordChanged"
        QT_MOC_LITERAL(593, 15),  // "userNameChanged"
        QT_MOC_LITERAL(609, 18),  // "withLibSSH2Changed"
        QT_MOC_LITERAL(628, 18),  // "lastCommandChanged"
        QT_MOC_LITERAL(647, 15),  // "processFinished"
        QT_MOC_LITERAL(663, 8),  // "exitCode"
        QT_MOC_LITERAL(672, 20),  // "QProcess::ExitStatus"
        QT_MOC_LITERAL(693, 10),  // "exitStatus"
        QT_MOC_LITERAL(704, 9),  // "sshClient"
        QT_MOC_LITERAL(714, 8),  // "hostName"
        QT_MOC_LITERAL(723, 7),  // "portNum"
        QT_MOC_LITERAL(731, 7),  // "keyFile"
        QT_MOC_LITERAL(739, 8),  // "password"
        QT_MOC_LITERAL(748, 8),  // "userName"
        QT_MOC_LITERAL(757, 8)   // "withSsh2"
    },
    "QSSHCommand",
    "commandExecutedSignal",
    "",
    "output",
    "lastCommand",
    "errorOccurredSignal",
    "errorString",
    "listFileDoneSignal",
    "moduleListRetrievedSignal",
    "moduleDownloadedSignal",
    "modbusSetupDownloadedSignal",
    "modbusMappingLoadedSignal",
    "modbusMappingUploadedSignal",
    "totalCPUSignal",
    "dataDrillCpuSignal",
    "dataDrillTotalHDDSignal",
    "dataDrillHDDSignal",
    "dataDrillTotalRamSignal",
    "dataDrillRamUsageSignal",
    "globalStatSignal",
    "serverStateSignal",
    "isRunning",
    "serverStartedSignal",
    "serverStartSuccesfullSignal",
    "screenSession",
    "serverStopedSignal",
    "authenticationFailedSignal",
    "sshClientChanged",
    "hostNameChanged",
    "portNumChanged",
    "keyFileChanged",
    "passwordChanged",
    "userNameChanged",
    "withLibSSH2Changed",
    "lastCommandChanged",
    "processFinished",
    "exitCode",
    "QProcess::ExitStatus",
    "exitStatus",
    "sshClient",
    "hostName",
    "portNum",
    "keyFile",
    "password",
    "userName",
    "withSsh2"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QSSHCommand[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       8,  297, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      28,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  188,    2, 0x06,    9 /* Public */,
       5,    2,  193,    2, 0x06,   12 /* Public */,
       7,    2,  198,    2, 0x06,   15 /* Public */,
       8,    2,  203,    2, 0x06,   18 /* Public */,
       9,    2,  208,    2, 0x06,   21 /* Public */,
      10,    2,  213,    2, 0x06,   24 /* Public */,
      11,    2,  218,    2, 0x06,   27 /* Public */,
      12,    2,  223,    2, 0x06,   30 /* Public */,
      13,    2,  228,    2, 0x06,   33 /* Public */,
      14,    2,  233,    2, 0x06,   36 /* Public */,
      15,    2,  238,    2, 0x06,   39 /* Public */,
      16,    2,  243,    2, 0x06,   42 /* Public */,
      17,    2,  248,    2, 0x06,   45 /* Public */,
      18,    2,  253,    2, 0x06,   48 /* Public */,
      19,    2,  258,    2, 0x06,   51 /* Public */,
      20,    2,  263,    2, 0x06,   54 /* Public */,
      22,    1,  268,    2, 0x06,   57 /* Public */,
      23,    2,  271,    2, 0x06,   59 /* Public */,
      25,    1,  276,    2, 0x06,   62 /* Public */,
      26,    1,  279,    2, 0x06,   64 /* Public */,
      27,    0,  282,    2, 0x06,   66 /* Public */,
      28,    0,  283,    2, 0x06,   67 /* Public */,
      29,    0,  284,    2, 0x06,   68 /* Public */,
      30,    0,  285,    2, 0x06,   69 /* Public */,
      31,    0,  286,    2, 0x06,   70 /* Public */,
      32,    0,  287,    2, 0x06,   71 /* Public */,
      33,    0,  288,    2, 0x06,   72 /* Public */,
      34,    1,  289,    2, 0x06,   73 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      35,    2,  292,    2, 0x08,   75 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   21,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   24,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 37,   36,   38,

 // properties: name, type, flags
      39, QMetaType::QString, 0x00015103, uint(20), 0,
      40, QMetaType::QString, 0x00015103, uint(21), 0,
      41, QMetaType::Int, 0x00015103, uint(22), 0,
      42, QMetaType::QString, 0x00015103, uint(23), 0,
      43, QMetaType::QString, 0x00015103, uint(24), 0,
      44, QMetaType::QString, 0x00015103, uint(25), 0,
      45, QMetaType::Bool, 0x00015003, uint(26), 0,
       4, QMetaType::QString, 0x00015103, uint(27), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QSSHCommand::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QSSHCommand.offsetsAndSizes,
    qt_meta_data_QSSHCommand,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QSSHCommand_t,
        // property 'sshClient'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hostName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'portNum'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'keyFile'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'password'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'userName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'withSsh2'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'lastCommand'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSSHCommand, std::true_type>,
        // method 'commandExecutedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'errorOccurredSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'listFileDoneSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'moduleListRetrievedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'moduleDownloadedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'modbusSetupDownloadedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'modbusMappingLoadedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'modbusMappingUploadedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'totalCPUSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'dataDrillCpuSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'dataDrillTotalHDDSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'dataDrillHDDSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'dataDrillTotalRamSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'dataDrillRamUsageSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'globalStatSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'serverStateSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'serverStartedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'serverStartSuccesfullSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'serverStopedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'authenticationFailedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'sshClientChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hostNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'portNumChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'keyFileChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'passwordChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'userNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'withLibSSH2Changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lastCommandChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'processFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>
    >,
    nullptr
} };

void QSSHCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSSHCommand *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->commandExecutedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->errorOccurredSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->listFileDoneSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->moduleListRetrievedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->moduleDownloadedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->modbusSetupDownloadedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->modbusMappingLoadedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->modbusMappingUploadedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->totalCPUSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->dataDrillCpuSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->dataDrillTotalHDDSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: _t->dataDrillHDDSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->dataDrillTotalRamSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 13: _t->dataDrillRamUsageSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: _t->globalStatSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 15: _t->serverStateSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 16: _t->serverStartedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->serverStartSuccesfullSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 18: _t->serverStopedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->authenticationFailedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->sshClientChanged(); break;
        case 21: _t->hostNameChanged(); break;
        case 22: _t->portNumChanged(); break;
        case 23: _t->keyFileChanged(); break;
        case 24: _t->passwordChanged(); break;
        case 25: _t->userNameChanged(); break;
        case 26: _t->withLibSSH2Changed(); break;
        case 27: _t->lastCommandChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->processFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::commandExecutedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::errorOccurredSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::listFileDoneSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::moduleListRetrievedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::moduleDownloadedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::modbusSetupDownloadedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::modbusMappingLoadedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::modbusMappingUploadedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::totalCPUSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::dataDrillCpuSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::dataDrillTotalHDDSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::dataDrillHDDSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::dataDrillTotalRamSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::dataDrillRamUsageSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & , const QString & );
            if (_t _q_method = &QSSHCommand::globalStatSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const bool & , const QString & );
            if (_t _q_method = &QSSHCommand::serverStateSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & );
            if (_t _q_method = &QSSHCommand::serverStartedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const int & , const QString & );
            if (_t _q_method = &QSSHCommand::serverStartSuccesfullSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & );
            if (_t _q_method = &QSSHCommand::serverStopedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & );
            if (_t _q_method = &QSSHCommand::authenticationFailedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)();
            if (_t _q_method = &QSSHCommand::sshClientChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)();
            if (_t _q_method = &QSSHCommand::hostNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)();
            if (_t _q_method = &QSSHCommand::portNumChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)();
            if (_t _q_method = &QSSHCommand::keyFileChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)();
            if (_t _q_method = &QSSHCommand::passwordChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)();
            if (_t _q_method = &QSSHCommand::userNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)();
            if (_t _q_method = &QSSHCommand::withLibSSH2Changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (QSSHCommand::*)(const QString & );
            if (_t _q_method = &QSSHCommand::lastCommandChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QSSHCommand *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->sshClient(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->hostName(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->portNum(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->keyFile(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->password(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->userName(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getWithLibSSH2(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getLastCommand(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QSSHCommand *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSshClient(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setHostName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPortNum(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setKeyFile(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setUserName(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setWithLibSSH2(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setLastCommand(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QSSHCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSSHCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSSHCommand.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSSHCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QSSHCommand::commandExecutedSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSSHCommand::errorOccurredSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSSHCommand::listFileDoneSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSSHCommand::moduleListRetrievedSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QSSHCommand::moduleDownloadedSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QSSHCommand::modbusSetupDownloadedSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QSSHCommand::modbusMappingLoadedSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QSSHCommand::modbusMappingUploadedSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QSSHCommand::totalCPUSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QSSHCommand::dataDrillCpuSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QSSHCommand::dataDrillTotalHDDSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QSSHCommand::dataDrillHDDSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QSSHCommand::dataDrillTotalRamSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QSSHCommand::dataDrillRamUsageSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QSSHCommand::globalStatSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QSSHCommand::serverStateSignal(const bool & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QSSHCommand::serverStartedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QSSHCommand::serverStartSuccesfullSignal(const int & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QSSHCommand::serverStopedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QSSHCommand::authenticationFailedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QSSHCommand::sshClientChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void QSSHCommand::hostNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void QSSHCommand::portNumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void QSSHCommand::keyFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void QSSHCommand::passwordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void QSSHCommand::userNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void QSSHCommand::withLibSSH2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void QSSHCommand::lastCommandChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
