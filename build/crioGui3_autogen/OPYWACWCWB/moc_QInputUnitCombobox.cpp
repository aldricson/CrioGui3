/****************************************************************************
** Meta object code from reading C++ file 'QInputUnitCombobox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/BasicWidgets/QInputUnitCombobox.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QInputUnitCombobox.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QInputUnitCombobox_t {
    uint offsetsAndSizes[36];
    char stringdata0[19];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[15];
    char stringdata5[19];
    char stringdata6[19];
    char stringdata7[18];
    char stringdata8[8];
    char stringdata9[8];
    char stringdata10[20];
    char stringdata11[6];
    char stringdata12[21];
    char stringdata13[10];
    char stringdata14[20];
    char stringdata15[8];
    char stringdata16[12];
    char stringdata17[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QInputUnitCombobox_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QInputUnitCombobox_t qt_meta_stringdata_QInputUnitCombobox = {
    {
        QT_MOC_LITERAL(0, 18),  // "QInputUnitCombobox"
        QT_MOC_LITERAL(19, 16),  // "realWidthChanged"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 26),  // "defaultFamillyIndexChanged"
        QT_MOC_LITERAL(64, 14),  // "oldUnitChanged"
        QT_MOC_LITERAL(79, 18),  // "defaultUnitChanged"
        QT_MOC_LITERAL(98, 18),  // "currentUnitChanged"
        QT_MOC_LITERAL(117, 17),  // "textChangedSignal"
        QT_MOC_LITERAL(135, 7),  // "oldText"
        QT_MOC_LITERAL(143, 7),  // "newText"
        QT_MOC_LITERAL(151, 19),  // "onUnitFamilyChanged"
        QT_MOC_LITERAL(171, 5),  // "index"
        QT_MOC_LITERAL(177, 20),  // "onCurrentUnitChanged"
        QT_MOC_LITERAL(198, 9),  // "realWidth"
        QT_MOC_LITERAL(208, 19),  // "defaultFamillyIndex"
        QT_MOC_LITERAL(228, 7),  // "oldUnit"
        QT_MOC_LITERAL(236, 11),  // "defaultUnit"
        QT_MOC_LITERAL(248, 11)   // "currentUnit"
    },
    "QInputUnitCombobox",
    "realWidthChanged",
    "",
    "defaultFamillyIndexChanged",
    "oldUnitChanged",
    "defaultUnitChanged",
    "currentUnitChanged",
    "textChangedSignal",
    "oldText",
    "newText",
    "onUnitFamilyChanged",
    "index",
    "onCurrentUnitChanged",
    "realWidth",
    "defaultFamillyIndex",
    "oldUnit",
    "defaultUnit",
    "currentUnit"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QInputUnitCombobox[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       5,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    6 /* Public */,
       3,    0,   63,    2, 0x06,    7 /* Public */,
       4,    0,   64,    2, 0x06,    8 /* Public */,
       5,    0,   65,    2, 0x06,    9 /* Public */,
       6,    0,   66,    2, 0x06,   10 /* Public */,
       7,    2,   67,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   72,    2, 0x0a,   14 /* Public */,
      12,    0,   75,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Int, 0x00015103, uint(0), 0,
      14, QMetaType::Int, 0x00015103, uint(1), 0,
      15, QMetaType::QString, 0x00015103, uint(2), 0,
      16, QMetaType::QString, 0x00015103, uint(3), 0,
      17, QMetaType::QString, 0x00015103, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QInputUnitCombobox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_QInputUnitCombobox.offsetsAndSizes,
    qt_meta_data_QInputUnitCombobox,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QInputUnitCombobox_t,
        // property 'realWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'defaultFamillyIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'oldUnit'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'defaultUnit'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'currentUnit'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QInputUnitCombobox, std::true_type>,
        // method 'realWidthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'defaultFamillyIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'oldUnitChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'defaultUnitChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentUnitChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textChangedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onUnitFamilyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onCurrentUnitChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QInputUnitCombobox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QInputUnitCombobox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->realWidthChanged(); break;
        case 1: _t->defaultFamillyIndexChanged(); break;
        case 2: _t->oldUnitChanged(); break;
        case 3: _t->defaultUnitChanged(); break;
        case 4: _t->currentUnitChanged(); break;
        case 5: _t->textChangedSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->onUnitFamilyChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->onCurrentUnitChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QInputUnitCombobox::*)();
            if (_t _q_method = &QInputUnitCombobox::realWidthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QInputUnitCombobox::*)();
            if (_t _q_method = &QInputUnitCombobox::defaultFamillyIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QInputUnitCombobox::*)();
            if (_t _q_method = &QInputUnitCombobox::oldUnitChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QInputUnitCombobox::*)();
            if (_t _q_method = &QInputUnitCombobox::defaultUnitChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QInputUnitCombobox::*)();
            if (_t _q_method = &QInputUnitCombobox::currentUnitChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QInputUnitCombobox::*)(const QString & , const QString & );
            if (_t _q_method = &QInputUnitCombobox::textChangedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QInputUnitCombobox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getRealWidth(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getDefaultFamillyIndex(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getOldUnit(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getDefaultUnit(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getCurrentUnit(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QInputUnitCombobox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRealWidth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setDefaultFamillyIndex(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setOldUnit(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDefaultUnit(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setCurrentUnit(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QInputUnitCombobox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInputUnitCombobox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInputUnitCombobox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int QInputUnitCombobox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QInputUnitCombobox::realWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QInputUnitCombobox::defaultFamillyIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QInputUnitCombobox::oldUnitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QInputUnitCombobox::defaultUnitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QInputUnitCombobox::currentUnitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QInputUnitCombobox::textChangedSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
