/****************************************************************************
** Meta object code from reading C++ file 'QCrioModulesDataExtractor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/Extractors/QCrioModulesDataExtractor.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCrioModulesDataExtractor.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QCrioModulesDataExtractor_t {
    uint offsetsAndSizes[26];
    char stringdata0[26];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[31];
    char stringdata4[31];
    char stringdata5[32];
    char stringdata6[30];
    char stringdata7[15];
    char stringdata8[29];
    char stringdata9[24];
    char stringdata10[24];
    char stringdata11[25];
    char stringdata12[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QCrioModulesDataExtractor_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QCrioModulesDataExtractor_t qt_meta_stringdata_QCrioModulesDataExtractor = {
    {
        QT_MOC_LITERAL(0, 25),  // "QCrioModulesDataExtractor"
        QT_MOC_LITERAL(26, 21),  // "fullModuleListChanged"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 30),  // "analogCurrentModuleListChanged"
        QT_MOC_LITERAL(80, 30),  // "analogVoltageModuleListChanged"
        QT_MOC_LITERAL(111, 31),  // "analogCountersModuleListChanged"
        QT_MOC_LITERAL(143, 29),  // "analogCodersModuleListChanged"
        QT_MOC_LITERAL(173, 14),  // "fullModuleList"
        QT_MOC_LITERAL(188, 28),  // "std::vector<NIDeviceModule*>"
        QT_MOC_LITERAL(217, 23),  // "analogCurrentModuleList"
        QT_MOC_LITERAL(241, 23),  // "analogVoltageModuleList"
        QT_MOC_LITERAL(265, 24),  // "analogCountersModuleList"
        QT_MOC_LITERAL(290, 22)   // "analogCodersModuleList"
    },
    "QCrioModulesDataExtractor",
    "fullModuleListChanged",
    "",
    "analogCurrentModuleListChanged",
    "analogVoltageModuleListChanged",
    "analogCountersModuleListChanged",
    "analogCodersModuleListChanged",
    "fullModuleList",
    "std::vector<NIDeviceModule*>",
    "analogCurrentModuleList",
    "analogVoltageModuleList",
    "analogCountersModuleList",
    "analogCodersModuleList"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QCrioModulesDataExtractor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    6 /* Public */,
       3,    0,   45,    2, 0x06,    7 /* Public */,
       4,    0,   46,    2, 0x06,    8 /* Public */,
       5,    0,   47,    2, 0x06,    9 /* Public */,
       6,    0,   48,    2, 0x06,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0001510b, uint(0), 0,
       9, 0x80000000 | 8, 0x0001510b, uint(1), 0,
      10, 0x80000000 | 8, 0x0001510b, uint(2), 0,
      11, 0x80000000 | 8, 0x0001510b, uint(3), 0,
      12, 0x80000000 | 8, 0x0001510b, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCrioModulesDataExtractor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QCrioModulesDataExtractor.offsetsAndSizes,
    qt_meta_data_QCrioModulesDataExtractor,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QCrioModulesDataExtractor_t,
        // property 'fullModuleList'
        QtPrivate::TypeAndForceComplete<std::vector<NIDeviceModule*>, std::true_type>,
        // property 'analogCurrentModuleList'
        QtPrivate::TypeAndForceComplete<std::vector<NIDeviceModule*>, std::true_type>,
        // property 'analogVoltageModuleList'
        QtPrivate::TypeAndForceComplete<std::vector<NIDeviceModule*>, std::true_type>,
        // property 'analogCountersModuleList'
        QtPrivate::TypeAndForceComplete<std::vector<NIDeviceModule*>, std::true_type>,
        // property 'analogCodersModuleList'
        QtPrivate::TypeAndForceComplete<std::vector<NIDeviceModule*>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCrioModulesDataExtractor, std::true_type>,
        // method 'fullModuleListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'analogCurrentModuleListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'analogVoltageModuleListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'analogCountersModuleListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'analogCodersModuleListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QCrioModulesDataExtractor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCrioModulesDataExtractor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fullModuleListChanged(); break;
        case 1: _t->analogCurrentModuleListChanged(); break;
        case 2: _t->analogVoltageModuleListChanged(); break;
        case 3: _t->analogCountersModuleListChanged(); break;
        case 4: _t->analogCodersModuleListChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCrioModulesDataExtractor::*)();
            if (_t _q_method = &QCrioModulesDataExtractor::fullModuleListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCrioModulesDataExtractor::*)();
            if (_t _q_method = &QCrioModulesDataExtractor::analogCurrentModuleListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCrioModulesDataExtractor::*)();
            if (_t _q_method = &QCrioModulesDataExtractor::analogVoltageModuleListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QCrioModulesDataExtractor::*)();
            if (_t _q_method = &QCrioModulesDataExtractor::analogCountersModuleListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QCrioModulesDataExtractor::*)();
            if (_t _q_method = &QCrioModulesDataExtractor::analogCodersModuleListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCrioModulesDataExtractor *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< std::vector<NIDeviceModule*>*>(_v) = _t->fullModuleList(); break;
        case 1: *reinterpret_cast< std::vector<NIDeviceModule*>*>(_v) = _t->analogCurrentModuleList(); break;
        case 2: *reinterpret_cast< std::vector<NIDeviceModule*>*>(_v) = _t->analogVoltageModuleList(); break;
        case 3: *reinterpret_cast< std::vector<NIDeviceModule*>*>(_v) = _t->analogCountersModuleList(); break;
        case 4: *reinterpret_cast< std::vector<NIDeviceModule*>*>(_v) = _t->analogCodersModuleList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCrioModulesDataExtractor *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFullModuleList(*reinterpret_cast< std::vector<NIDeviceModule*>*>(_v)); break;
        case 1: _t->setAnalogCurrentModuleList(*reinterpret_cast< std::vector<NIDeviceModule*>*>(_v)); break;
        case 2: _t->setAnalogVoltageModuleList(*reinterpret_cast< std::vector<NIDeviceModule*>*>(_v)); break;
        case 3: _t->setAnalogCountersModuleList(*reinterpret_cast< std::vector<NIDeviceModule*>*>(_v)); break;
        case 4: _t->setAnalogCodersModuleList(*reinterpret_cast< std::vector<NIDeviceModule*>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *QCrioModulesDataExtractor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCrioModulesDataExtractor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCrioModulesDataExtractor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCrioModulesDataExtractor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QCrioModulesDataExtractor::fullModuleListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QCrioModulesDataExtractor::analogCurrentModuleListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QCrioModulesDataExtractor::analogVoltageModuleListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QCrioModulesDataExtractor::analogCountersModuleListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QCrioModulesDataExtractor::analogCodersModuleListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
