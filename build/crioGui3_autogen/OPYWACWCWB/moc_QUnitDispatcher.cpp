/****************************************************************************
** Meta object code from reading C++ file 'QUnitDispatcher.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/BasicWidgets/QUnitDispatcher.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QUnitDispatcher.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QUnitDispatcher_t {
    uint offsetsAndSizes[14];
    char stringdata0[16];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[24];
    char stringdata5[30];
    char stringdata6[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QUnitDispatcher_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QUnitDispatcher_t qt_meta_stringdata_QUnitDispatcher = {
    {
        QT_MOC_LITERAL(0, 15),  // "QUnitDispatcher"
        QT_MOC_LITERAL(16, 30),  // "unitFamillyAndIndexListChanged"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 21),  // "inputUnitsListChanged"
        QT_MOC_LITERAL(70, 23),  // "unitFamillyAndIndexList"
        QT_MOC_LITERAL(94, 29),  // "QList<std::pair<QString,int>>"
        QT_MOC_LITERAL(124, 14)   // "inputUnitsList"
    },
    "QUnitDispatcher",
    "unitFamillyAndIndexListChanged",
    "",
    "inputUnitsListChanged",
    "unitFamillyAndIndexList",
    "QList<std::pair<QString,int>>",
    "inputUnitsList"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QUnitDispatcher[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    3 /* Public */,
       3,    0,   27,    2, 0x06,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x0001510b, uint(0), 0,
       6, QMetaType::QStringList, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QUnitDispatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QUnitDispatcher.offsetsAndSizes,
    qt_meta_data_QUnitDispatcher,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QUnitDispatcher_t,
        // property 'unitFamillyAndIndexList'
        QtPrivate::TypeAndForceComplete<QList<std::pair<QString,int>>, std::true_type>,
        // property 'inputUnitsList'
        QtPrivate::TypeAndForceComplete<QList<QString>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QUnitDispatcher, std::true_type>,
        // method 'unitFamillyAndIndexListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'inputUnitsListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QUnitDispatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QUnitDispatcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->unitFamillyAndIndexListChanged(); break;
        case 1: _t->inputUnitsListChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QUnitDispatcher::*)();
            if (_t _q_method = &QUnitDispatcher::unitFamillyAndIndexListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QUnitDispatcher::*)();
            if (_t _q_method = &QUnitDispatcher::inputUnitsListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QUnitDispatcher *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<std::pair<QString,int>>*>(_v) = _t->getUnitFamillyAndIndexList(); break;
        case 1: *reinterpret_cast< QList<QString>*>(_v) = _t->getInputUnitsList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QUnitDispatcher *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUnitFamillyAndIndexList(*reinterpret_cast< QList<std::pair<QString,int>>*>(_v)); break;
        case 1: _t->setInputUnitsList(*reinterpret_cast< QList<QString>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *QUnitDispatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QUnitDispatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QUnitDispatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QUnitDispatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QUnitDispatcher::unitFamillyAndIndexListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QUnitDispatcher::inputUnitsListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
