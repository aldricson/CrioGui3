/****************************************************************************
** Meta object code from reading C++ file 'QCrioViewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/TabWidgets/QCrioViewWidget.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCrioViewWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QCrioViewWidget_t {
    uint offsetsAndSizes[164];
    char stringdata0[16];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[25];
    char stringdata5[21];
    char stringdata6[20];
    char stringdata7[27];
    char stringdata8[26];
    char stringdata9[34];
    char stringdata10[24];
    char stringdata11[23];
    char stringdata12[27];
    char stringdata13[30];
    char stringdata14[41];
    char stringdata15[28];
    char stringdata16[31];
    char stringdata17[31];
    char stringdata18[33];
    char stringdata19[23];
    char stringdata20[23];
    char stringdata21[23];
    char stringdata22[26];
    char stringdata23[15];
    char stringdata24[24];
    char stringdata25[14];
    char stringdata26[12];
    char stringdata27[29];
    char stringdata28[4];
    char stringdata29[4];
    char stringdata30[6];
    char stringdata31[18];
    char stringdata32[16];
    char stringdata33[5];
    char stringdata34[13];
    char stringdata35[11];
    char stringdata36[26];
    char stringdata37[11];
    char stringdata38[10];
    char stringdata39[10];
    char stringdata40[6];
    char stringdata41[39];
    char stringdata42[27];
    char stringdata43[14];
    char stringdata44[22];
    char stringdata45[22];
    char stringdata46[12];
    char stringdata47[40];
    char stringdata48[12];
    char stringdata49[41];
    char stringdata50[17];
    char stringdata51[20];
    char stringdata52[8];
    char stringdata53[8];
    char stringdata54[7];
    char stringdata55[18];
    char stringdata56[14];
    char stringdata57[13];
    char stringdata58[11];
    char stringdata59[21];
    char stringdata60[9];
    char stringdata61[11];
    char stringdata62[10];
    char stringdata63[17];
    char stringdata64[28];
    char stringdata65[21];
    char stringdata66[15];
    char stringdata67[26];
    char stringdata68[18];
    char stringdata69[24];
    char stringdata70[18];
    char stringdata71[24];
    char stringdata72[26];
    char stringdata73[14];
    char stringdata74[16];
    char stringdata75[21];
    char stringdata76[16];
    char stringdata77[16];
    char stringdata78[18];
    char stringdata79[19];
    char stringdata80[14];
    char stringdata81[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QCrioViewWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QCrioViewWidget_t qt_meta_stringdata_QCrioViewWidget = {
    {
        QT_MOC_LITERAL(0, 15),  // "QCrioViewWidget"
        QT_MOC_LITERAL(16, 23),  // "serverChangeStateSignal"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 4),  // "isOn"
        QT_MOC_LITERAL(46, 24),  // "sshConnectionAskedSignal"
        QT_MOC_LITERAL(71, 20),  // "ipLabelChangedSignal"
        QT_MOC_LITERAL(92, 19),  // "ipEditChangedSignal"
        QT_MOC_LITERAL(112, 26),  // "passwordLabelChangedSignal"
        QT_MOC_LITERAL(139, 25),  // "passwordEditChangedSignal"
        QT_MOC_LITERAL(165, 33),  // "togglePasswordActionChangedSi..."
        QT_MOC_LITERAL(199, 23),  // "loginLabelChangedSignal"
        QT_MOC_LITERAL(223, 22),  // "loginEditChangedSignal"
        QT_MOC_LITERAL(246, 26),  // "connectButtonChangedSignal"
        QT_MOC_LITERAL(273, 29),  // "serverStateLabelChangedSignal"
        QT_MOC_LITERAL(303, 40),  // "startStopServerSwitchButtonCh..."
        QT_MOC_LITERAL(344, 27),  // "terminalOutputChangedSignal"
        QT_MOC_LITERAL(372, 30),  // "currentTestWidgetChangedSignal"
        QT_MOC_LITERAL(403, 30),  // "voltageTestWidgetChangedSignal"
        QT_MOC_LITERAL(434, 32),  // "modulesLoadingProgressBarChanged"
        QT_MOC_LITERAL(467, 22),  // "modulesListViewChanged"
        QT_MOC_LITERAL(490, 22),  // "moduleListLabelChanged"
        QT_MOC_LITERAL(513, 22),  // "moduleListModelChanged"
        QT_MOC_LITERAL(536, 25),  // "crioUDPDebugOutputChanged"
        QT_MOC_LITERAL(562, 14),  // "iniPathChanged"
        QT_MOC_LITERAL(577, 23),  // "onServerStartSuccesfull"
        QT_MOC_LITERAL(601, 13),  // "screenSession"
        QT_MOC_LITERAL(615, 11),  // "lastCommand"
        QT_MOC_LITERAL(627, 28),  // "onResetModuleLoadProgressBar"
        QT_MOC_LITERAL(656, 3),  // "min"
        QT_MOC_LITERAL(660, 3),  // "max"
        QT_MOC_LITERAL(664, 5),  // "value"
        QT_MOC_LITERAL(670, 17),  // "onUpdateModelList"
        QT_MOC_LITERAL(688, 15),  // "QIniTreeWidget*"
        QT_MOC_LITERAL(704, 4),  // "tree"
        QT_MOC_LITERAL(709, 12),  // "QStringList&"
        QT_MOC_LITERAL(722, 10),  // "moduleList"
        QT_MOC_LITERAL(733, 25),  // "onFillChannelsWithModules"
        QT_MOC_LITERAL(759, 10),  // "QComboBox*"
        QT_MOC_LITERAL(770, 9),  // "modulesCb"
        QT_MOC_LITERAL(780, 9),  // "channelCb"
        QT_MOC_LITERAL(790, 5),  // "index"
        QT_MOC_LITERAL(796, 38),  // "onUpdateControlsAfterModulesD..."
        QT_MOC_LITERAL(835, 26),  // "QCrioModulesDataExtractor*"
        QT_MOC_LITERAL(862, 13),  // "dataExtractor"
        QT_MOC_LITERAL(876, 21),  // "currentModulePathList"
        QT_MOC_LITERAL(898, 21),  // "voltageModulePathList"
        QT_MOC_LITERAL(920, 11),  // "commandPort"
        QT_MOC_LITERAL(932, 39),  // "onUpdateControlsInReactionToS..."
        QT_MOC_LITERAL(972, 11),  // "serverState"
        QT_MOC_LITERAL(984, 40),  // "onUpdateControlsInReactionOfa..."
        QT_MOC_LITERAL(1025, 16),  // "handleConnection"
        QT_MOC_LITERAL(1042, 19),  // "onServerChangeState"
        QT_MOC_LITERAL(1062, 7),  // "ipLabel"
        QT_MOC_LITERAL(1070, 7),  // "QLabel*"
        QT_MOC_LITERAL(1078, 6),  // "ipEdit"
        QT_MOC_LITERAL(1085, 17),  // "QIpAddressEditor*"
        QT_MOC_LITERAL(1103, 13),  // "passwordLabel"
        QT_MOC_LITERAL(1117, 12),  // "passwordEdit"
        QT_MOC_LITERAL(1130, 10),  // "QLineEdit*"
        QT_MOC_LITERAL(1141, 20),  // "togglePasswordAction"
        QT_MOC_LITERAL(1162, 8),  // "QAction*"
        QT_MOC_LITERAL(1171, 10),  // "loginLabel"
        QT_MOC_LITERAL(1182, 9),  // "loginEdit"
        QT_MOC_LITERAL(1192, 16),  // "serverStateLabel"
        QT_MOC_LITERAL(1209, 27),  // "startStopServerSwitchButton"
        QT_MOC_LITERAL(1237, 20),  // "QBetterSwitchButton*"
        QT_MOC_LITERAL(1258, 14),  // "terminalOutput"
        QT_MOC_LITERAL(1273, 25),  // "QMultiLineTextVisualizer*"
        QT_MOC_LITERAL(1299, 17),  // "currentTestWidget"
        QT_MOC_LITERAL(1317, 23),  // "QReadCurrentTestWidget*"
        QT_MOC_LITERAL(1341, 17),  // "voltageTestWidget"
        QT_MOC_LITERAL(1359, 23),  // "QReadVoltageTestWidget*"
        QT_MOC_LITERAL(1383, 25),  // "modulesLoadingProgressBar"
        QT_MOC_LITERAL(1409, 13),  // "QProgressBar*"
        QT_MOC_LITERAL(1423, 15),  // "modulesListView"
        QT_MOC_LITERAL(1439, 20),  // "QModulesIniListView*"
        QT_MOC_LITERAL(1460, 15),  // "moduleListLabel"
        QT_MOC_LITERAL(1476, 15),  // "moduleListModel"
        QT_MOC_LITERAL(1492, 17),  // "QStringListModel*"
        QT_MOC_LITERAL(1510, 18),  // "crioUDPDebugOutput"
        QT_MOC_LITERAL(1529, 13),  // "QClientsVizu*"
        QT_MOC_LITERAL(1543, 7)   // "iniPath"
    },
    "QCrioViewWidget",
    "serverChangeStateSignal",
    "",
    "isOn",
    "sshConnectionAskedSignal",
    "ipLabelChangedSignal",
    "ipEditChangedSignal",
    "passwordLabelChangedSignal",
    "passwordEditChangedSignal",
    "togglePasswordActionChangedSignal",
    "loginLabelChangedSignal",
    "loginEditChangedSignal",
    "connectButtonChangedSignal",
    "serverStateLabelChangedSignal",
    "startStopServerSwitchButtonChangedSignal",
    "terminalOutputChangedSignal",
    "currentTestWidgetChangedSignal",
    "voltageTestWidgetChangedSignal",
    "modulesLoadingProgressBarChanged",
    "modulesListViewChanged",
    "moduleListLabelChanged",
    "moduleListModelChanged",
    "crioUDPDebugOutputChanged",
    "iniPathChanged",
    "onServerStartSuccesfull",
    "screenSession",
    "lastCommand",
    "onResetModuleLoadProgressBar",
    "min",
    "max",
    "value",
    "onUpdateModelList",
    "QIniTreeWidget*",
    "tree",
    "QStringList&",
    "moduleList",
    "onFillChannelsWithModules",
    "QComboBox*",
    "modulesCb",
    "channelCb",
    "index",
    "onUpdateControlsAfterModulesDownloaded",
    "QCrioModulesDataExtractor*",
    "dataExtractor",
    "currentModulePathList",
    "voltageModulePathList",
    "commandPort",
    "onUpdateControlsInReactionToServerState",
    "serverState",
    "onUpdateControlsInReactionOfaStopFailure",
    "handleConnection",
    "onServerChangeState",
    "ipLabel",
    "QLabel*",
    "ipEdit",
    "QIpAddressEditor*",
    "passwordLabel",
    "passwordEdit",
    "QLineEdit*",
    "togglePasswordAction",
    "QAction*",
    "loginLabel",
    "loginEdit",
    "serverStateLabel",
    "startStopServerSwitchButton",
    "QBetterSwitchButton*",
    "terminalOutput",
    "QMultiLineTextVisualizer*",
    "currentTestWidget",
    "QReadCurrentTestWidget*",
    "voltageTestWidget",
    "QReadVoltageTestWidget*",
    "modulesLoadingProgressBar",
    "QProgressBar*",
    "modulesListView",
    "QModulesIniListView*",
    "moduleListLabel",
    "moduleListModel",
    "QStringListModel*",
    "crioUDPDebugOutput",
    "QClientsVizu*",
    "iniPath"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QCrioViewWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
      18,  258, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  194,    2, 0x06,   19 /* Public */,
       4,    0,  197,    2, 0x06,   21 /* Public */,
       5,    0,  198,    2, 0x06,   22 /* Public */,
       6,    0,  199,    2, 0x06,   23 /* Public */,
       7,    0,  200,    2, 0x06,   24 /* Public */,
       8,    0,  201,    2, 0x06,   25 /* Public */,
       9,    0,  202,    2, 0x06,   26 /* Public */,
      10,    0,  203,    2, 0x06,   27 /* Public */,
      11,    0,  204,    2, 0x06,   28 /* Public */,
      12,    0,  205,    2, 0x06,   29 /* Public */,
      13,    0,  206,    2, 0x06,   30 /* Public */,
      14,    0,  207,    2, 0x06,   31 /* Public */,
      15,    0,  208,    2, 0x06,   32 /* Public */,
      16,    0,  209,    2, 0x06,   33 /* Public */,
      17,    0,  210,    2, 0x06,   34 /* Public */,
      18,    0,  211,    2, 0x06,   35 /* Public */,
      19,    0,  212,    2, 0x06,   36 /* Public */,
      20,    0,  213,    2, 0x06,   37 /* Public */,
      21,    0,  214,    2, 0x06,   38 /* Public */,
      22,    0,  215,    2, 0x06,   39 /* Public */,
      23,    0,  216,    2, 0x06,   40 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      24,    2,  217,    2, 0x0a,   41 /* Public */,
      27,    3,  222,    2, 0x0a,   44 /* Public */,
      31,    2,  229,    2, 0x0a,   48 /* Public */,
      36,    3,  234,    2, 0x0a,   51 /* Public */,
      41,    4,  241,    2, 0x0a,   55 /* Public */,
      47,    2,  250,    2, 0x0a,   60 /* Public */,
      49,    0,  255,    2, 0x0a,   63 /* Public */,
      50,    0,  256,    2, 0x08,   64 /* Private */,
      51,    0,  257,    2, 0x08,   65 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   25,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   28,   29,   30,
    QMetaType::Void, 0x80000000 | 32, 0x80000000 | 34,   33,   35,
    QMetaType::Void, 0x80000000 | 37, 0x80000000 | 37, QMetaType::Int,   38,   39,   40,
    QMetaType::Void, 0x80000000 | 42, 0x80000000 | 34, 0x80000000 | 34, QMetaType::UShort,   43,   44,   45,   46,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   26,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      52, 0x80000000 | 53, 0x0001510b, uint(2), 0,
      54, 0x80000000 | 55, 0x0001510b, uint(3), 0,
      56, 0x80000000 | 53, 0x0001510b, uint(4), 0,
      57, 0x80000000 | 58, 0x0001510b, uint(5), 0,
      59, 0x80000000 | 60, 0x0001510b, uint(6), 0,
      61, 0x80000000 | 53, 0x0001510b, uint(7), 0,
      62, 0x80000000 | 58, 0x0001510b, uint(8), 0,
      63, 0x80000000 | 53, 0x0001510b, uint(10), 0,
      64, 0x80000000 | 65, 0x0001510b, uint(11), 0,
      66, 0x80000000 | 67, 0x0001510b, uint(12), 0,
      68, 0x80000000 | 69, 0x0001510b, uint(13), 0,
      70, 0x80000000 | 71, 0x0001510b, uint(14), 0,
      72, 0x80000000 | 73, 0x0001510b, uint(15), 0,
      74, 0x80000000 | 75, 0x0001510b, uint(16), 0,
      76, 0x80000000 | 53, 0x0001510b, uint(17), 0,
      77, 0x80000000 | 78, 0x0001510b, uint(18), 0,
      79, 0x80000000 | 80, 0x0001510b, uint(19), 0,
      81, QMetaType::QString, 0x00015103, uint(20), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCrioViewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QCrioViewWidget.offsetsAndSizes,
    qt_meta_data_QCrioViewWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QCrioViewWidget_t,
        // property 'ipLabel'
        QtPrivate::TypeAndForceComplete<QLabel*, std::true_type>,
        // property 'ipEdit'
        QtPrivate::TypeAndForceComplete<QIpAddressEditor*, std::true_type>,
        // property 'passwordLabel'
        QtPrivate::TypeAndForceComplete<QLabel*, std::true_type>,
        // property 'passwordEdit'
        QtPrivate::TypeAndForceComplete<QLineEdit*, std::true_type>,
        // property 'togglePasswordAction'
        QtPrivate::TypeAndForceComplete<QAction*, std::true_type>,
        // property 'loginLabel'
        QtPrivate::TypeAndForceComplete<QLabel*, std::true_type>,
        // property 'loginEdit'
        QtPrivate::TypeAndForceComplete<QLineEdit*, std::true_type>,
        // property 'serverStateLabel'
        QtPrivate::TypeAndForceComplete<QLabel*, std::true_type>,
        // property 'startStopServerSwitchButton'
        QtPrivate::TypeAndForceComplete<QBetterSwitchButton*, std::true_type>,
        // property 'terminalOutput'
        QtPrivate::TypeAndForceComplete<QMultiLineTextVisualizer*, std::true_type>,
        // property 'currentTestWidget'
        QtPrivate::TypeAndForceComplete<QReadCurrentTestWidget*, std::true_type>,
        // property 'voltageTestWidget'
        QtPrivate::TypeAndForceComplete<QReadVoltageTestWidget*, std::true_type>,
        // property 'modulesLoadingProgressBar'
        QtPrivate::TypeAndForceComplete<QProgressBar*, std::true_type>,
        // property 'modulesListView'
        QtPrivate::TypeAndForceComplete<QModulesIniListView*, std::true_type>,
        // property 'moduleListLabel'
        QtPrivate::TypeAndForceComplete<QLabel*, std::true_type>,
        // property 'moduleListModel'
        QtPrivate::TypeAndForceComplete<QStringListModel*, std::true_type>,
        // property 'crioUDPDebugOutput'
        QtPrivate::TypeAndForceComplete<QClientsVizu*, std::true_type>,
        // property 'iniPath'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCrioViewWidget, std::true_type>,
        // method 'serverChangeStateSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sshConnectionAskedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ipLabelChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ipEditChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'passwordLabelChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'passwordEditChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'togglePasswordActionChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loginLabelChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loginEditChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectButtonChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'serverStateLabelChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startStopServerSwitchButtonChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'terminalOutputChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentTestWidgetChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'voltageTestWidgetChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modulesLoadingProgressBarChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modulesListViewChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moduleListLabelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moduleListModelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'crioUDPDebugOutputChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'iniPathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onServerStartSuccesfull'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onResetModuleLoadProgressBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        // method 'onUpdateModelList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QIniTreeWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList &, std::false_type>,
        // method 'onFillChannelsWithModules'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QComboBox *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QComboBox *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onUpdateControlsAfterModulesDownloaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCrioModulesDataExtractor *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint16 &, std::false_type>,
        // method 'onUpdateControlsInReactionToServerState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool &, std::false_type>,
        // method 'onUpdateControlsInReactionOfaStopFailure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onServerChangeState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QCrioViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCrioViewWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->serverChangeStateSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->sshConnectionAskedSignal(); break;
        case 2: _t->ipLabelChangedSignal(); break;
        case 3: _t->ipEditChangedSignal(); break;
        case 4: _t->passwordLabelChangedSignal(); break;
        case 5: _t->passwordEditChangedSignal(); break;
        case 6: _t->togglePasswordActionChangedSignal(); break;
        case 7: _t->loginLabelChangedSignal(); break;
        case 8: _t->loginEditChangedSignal(); break;
        case 9: _t->connectButtonChangedSignal(); break;
        case 10: _t->serverStateLabelChangedSignal(); break;
        case 11: _t->startStopServerSwitchButtonChangedSignal(); break;
        case 12: _t->terminalOutputChangedSignal(); break;
        case 13: _t->currentTestWidgetChangedSignal(); break;
        case 14: _t->voltageTestWidgetChangedSignal(); break;
        case 15: _t->modulesLoadingProgressBarChanged(); break;
        case 16: _t->modulesListViewChanged(); break;
        case 17: _t->moduleListLabelChanged(); break;
        case 18: _t->moduleListModelChanged(); break;
        case 19: _t->crioUDPDebugOutputChanged(); break;
        case 20: _t->iniPathChanged(); break;
        case 21: _t->onServerStartSuccesfull((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 22: _t->onResetModuleLoadProgressBar((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 23: _t->onUpdateModelList((*reinterpret_cast< std::add_pointer_t<QIniTreeWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList&>>(_a[2]))); break;
        case 24: _t->onFillChannelsWithModules((*reinterpret_cast< std::add_pointer_t<QComboBox*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QComboBox*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 25: _t->onUpdateControlsAfterModulesDownloaded((*reinterpret_cast< std::add_pointer_t<QCrioModulesDataExtractor*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QStringList&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[4]))); break;
        case 26: _t->onUpdateControlsInReactionToServerState((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 27: _t->onUpdateControlsInReactionOfaStopFailure(); break;
        case 28: _t->handleConnection(); break;
        case 29: _t->onServerChangeState(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QIniTreeWidget* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QComboBox* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCrioModulesDataExtractor* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCrioViewWidget::*)(bool );
            if (_t _q_method = &QCrioViewWidget::serverChangeStateSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::sshConnectionAskedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::ipLabelChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::ipEditChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::passwordLabelChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::passwordEditChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::togglePasswordActionChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::loginLabelChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::loginEditChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::connectButtonChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::serverStateLabelChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::startStopServerSwitchButtonChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::terminalOutputChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::currentTestWidgetChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::voltageTestWidgetChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::modulesLoadingProgressBarChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::modulesListViewChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::moduleListLabelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::moduleListModelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::crioUDPDebugOutputChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (QCrioViewWidget::*)();
            if (_t _q_method = &QCrioViewWidget::iniPathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBetterSwitchButton* >(); break;
        case 16:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QClientsVizu* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIpAddressEditor* >(); break;
        case 14:
        case 7:
        case 5:
        case 2:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLabel* >(); break;
        case 6:
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLineEdit* >(); break;
        case 13:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModulesIniListView* >(); break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMultiLineTextVisualizer* >(); break;
        case 12:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QProgressBar* >(); break;
        case 10:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QReadCurrentTestWidget* >(); break;
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QReadVoltageTestWidget* >(); break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCrioViewWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QLabel**>(_v) = _t->ipLabel(); break;
        case 1: *reinterpret_cast< QIpAddressEditor**>(_v) = _t->ipEdit(); break;
        case 2: *reinterpret_cast< QLabel**>(_v) = _t->passwordLabel(); break;
        case 3: *reinterpret_cast< QLineEdit**>(_v) = _t->passwordEdit(); break;
        case 4: *reinterpret_cast< QAction**>(_v) = _t->togglePasswordAction(); break;
        case 5: *reinterpret_cast< QLabel**>(_v) = _t->loginLabel(); break;
        case 6: *reinterpret_cast< QLineEdit**>(_v) = _t->loginEdit(); break;
        case 7: *reinterpret_cast< QLabel**>(_v) = _t->serverStateLabel(); break;
        case 8: *reinterpret_cast< QBetterSwitchButton**>(_v) = _t->startStopServerSwitchButton(); break;
        case 9: *reinterpret_cast< QMultiLineTextVisualizer**>(_v) = _t->terminalOutput(); break;
        case 10: *reinterpret_cast< QReadCurrentTestWidget**>(_v) = _t->currentTestWidget(); break;
        case 11: *reinterpret_cast< QReadVoltageTestWidget**>(_v) = _t->voltageTestWidget(); break;
        case 12: *reinterpret_cast< QProgressBar**>(_v) = _t->modulesLoadingProgressBar(); break;
        case 13: *reinterpret_cast< QModulesIniListView**>(_v) = _t->modulesListView(); break;
        case 14: *reinterpret_cast< QLabel**>(_v) = _t->moduleListLabel(); break;
        case 15: *reinterpret_cast< QStringListModel**>(_v) = _t->moduleListModel(); break;
        case 16: *reinterpret_cast< QClientsVizu**>(_v) = _t->crioUDPDebugOutput(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->iniPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCrioViewWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIpLabel(*reinterpret_cast< QLabel**>(_v)); break;
        case 1: _t->setIpEdit(*reinterpret_cast< QIpAddressEditor**>(_v)); break;
        case 2: _t->setPasswordLabel(*reinterpret_cast< QLabel**>(_v)); break;
        case 3: _t->setPasswordEdit(*reinterpret_cast< QLineEdit**>(_v)); break;
        case 4: _t->setTogglePasswordAction(*reinterpret_cast< QAction**>(_v)); break;
        case 5: _t->setLoginLabel(*reinterpret_cast< QLabel**>(_v)); break;
        case 6: _t->setLoginEdit(*reinterpret_cast< QLineEdit**>(_v)); break;
        case 7: _t->setServerStateLabel(*reinterpret_cast< QLabel**>(_v)); break;
        case 8: _t->setStartStopServerSwitchButton(*reinterpret_cast< QBetterSwitchButton**>(_v)); break;
        case 9: _t->setTerminalOutput(*reinterpret_cast< QMultiLineTextVisualizer**>(_v)); break;
        case 10: _t->setCurrentTestWidget(*reinterpret_cast< QReadCurrentTestWidget**>(_v)); break;
        case 11: _t->setVoltageTestWidget(*reinterpret_cast< QReadVoltageTestWidget**>(_v)); break;
        case 12: _t->setModulesLoadingProgressBar(*reinterpret_cast< QProgressBar**>(_v)); break;
        case 13: _t->setModulesListView(*reinterpret_cast< QModulesIniListView**>(_v)); break;
        case 14: _t->setModuleListLabel(*reinterpret_cast< QLabel**>(_v)); break;
        case 15: _t->setModuleListModel(*reinterpret_cast< QStringListModel**>(_v)); break;
        case 16: _t->setCrioUDPDebugOutput(*reinterpret_cast< QClientsVizu**>(_v)); break;
        case 17: _t->setIniPath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QCrioViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCrioViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCrioViewWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QCrioViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void QCrioViewWidget::serverChangeStateSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCrioViewWidget::sshConnectionAskedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QCrioViewWidget::ipLabelChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QCrioViewWidget::ipEditChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QCrioViewWidget::passwordLabelChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QCrioViewWidget::passwordEditChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QCrioViewWidget::togglePasswordActionChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QCrioViewWidget::loginLabelChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QCrioViewWidget::loginEditChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QCrioViewWidget::connectButtonChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QCrioViewWidget::serverStateLabelChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QCrioViewWidget::startStopServerSwitchButtonChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QCrioViewWidget::terminalOutputChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QCrioViewWidget::currentTestWidgetChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QCrioViewWidget::voltageTestWidgetChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void QCrioViewWidget::modulesLoadingProgressBarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void QCrioViewWidget::modulesListViewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QCrioViewWidget::moduleListLabelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void QCrioViewWidget::moduleListModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void QCrioViewWidget::crioUDPDebugOutputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void QCrioViewWidget::iniPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
