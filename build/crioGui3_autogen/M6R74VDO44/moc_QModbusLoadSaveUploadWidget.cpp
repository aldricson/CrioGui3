/****************************************************************************
** Meta object code from reading C++ file 'QModbusLoadSaveUploadWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/TabWidgetFundations/ModbusWidgets/QModbusLoadSaveUploadWidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QModbusLoadSaveUploadWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QModbusLoadSaveUploadWidget_t {
    uint offsetsAndSizes[34];
    char stringdata0[28];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[20];
    char stringdata5[11];
    char stringdata6[11];
    char stringdata7[13];
    char stringdata8[15];
    char stringdata9[13];
    char stringdata10[17];
    char stringdata11[17];
    char stringdata12[8];
    char stringdata13[13];
    char stringdata14[13];
    char stringdata15[11];
    char stringdata16[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QModbusLoadSaveUploadWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QModbusLoadSaveUploadWidget_t qt_meta_stringdata_QModbusLoadSaveUploadWidget = {
    {
        QT_MOC_LITERAL(0, 27),  // "QModbusLoadSaveUploadWidget"
        QT_MOC_LITERAL(28, 19),  // "reloadButtonChanged"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 17),  // "saveButtonChanged"
        QT_MOC_LITERAL(67, 19),  // "uploadButtonChanged"
        QT_MOC_LITERAL(87, 10),  // "loadSignal"
        QT_MOC_LITERAL(98, 10),  // "saveSignal"
        QT_MOC_LITERAL(109, 12),  // "uploadSignal"
        QT_MOC_LITERAL(122, 14),  // "onLoadFromFile"
        QT_MOC_LITERAL(137, 12),  // "onSaveToFile"
        QT_MOC_LITERAL(150, 16),  // "onUploadToServer"
        QT_MOC_LITERAL(167, 16),  // "onBlockAllSignal"
        QT_MOC_LITERAL(184, 7),  // "blocked"
        QT_MOC_LITERAL(192, 12),  // "reloadButton"
        QT_MOC_LITERAL(205, 12),  // "QPushButton*"
        QT_MOC_LITERAL(218, 10),  // "saveButton"
        QT_MOC_LITERAL(229, 12)   // "uploadButton"
    },
    "QModbusLoadSaveUploadWidget",
    "reloadButtonChanged",
    "",
    "saveButtonChanged",
    "uploadButtonChanged",
    "loadSignal",
    "saveSignal",
    "uploadSignal",
    "onLoadFromFile",
    "onSaveToFile",
    "onUploadToServer",
    "onBlockAllSignal",
    "blocked",
    "reloadButton",
    "QPushButton*",
    "saveButton",
    "uploadButton"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QModbusLoadSaveUploadWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    4 /* Public */,
       3,    0,   75,    2, 0x06,    5 /* Public */,
       4,    0,   76,    2, 0x06,    6 /* Public */,
       5,    0,   77,    2, 0x06,    7 /* Public */,
       6,    0,   78,    2, 0x06,    8 /* Public */,
       7,    0,   79,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   80,    2, 0x08,   10 /* Private */,
       9,    0,   81,    2, 0x08,   11 /* Private */,
      10,    0,   82,    2, 0x08,   12 /* Private */,
      11,    1,   83,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x0001590b, uint(0), 0,
      15, 0x80000000 | 14, 0x0001590b, uint(1), 0,
      16, 0x80000000 | 14, 0x0001590b, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QModbusLoadSaveUploadWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QModbusLoadSaveUploadWidget.offsetsAndSizes,
    qt_meta_data_QModbusLoadSaveUploadWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QModbusLoadSaveUploadWidget_t,
        // property 'reloadButton'
        QtPrivate::TypeAndForceComplete<QPushButton*, std::true_type>,
        // property 'saveButton'
        QtPrivate::TypeAndForceComplete<QPushButton*, std::true_type>,
        // property 'uploadButton'
        QtPrivate::TypeAndForceComplete<QPushButton*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QModbusLoadSaveUploadWidget, std::true_type>,
        // method 'reloadButtonChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveButtonChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uploadButtonChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uploadSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLoadFromFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSaveToFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUploadToServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBlockAllSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool &, std::false_type>
    >,
    nullptr
} };

void QModbusLoadSaveUploadWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QModbusLoadSaveUploadWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->reloadButtonChanged(); break;
        case 1: _t->saveButtonChanged(); break;
        case 2: _t->uploadButtonChanged(); break;
        case 3: _t->loadSignal(); break;
        case 4: _t->saveSignal(); break;
        case 5: _t->uploadSignal(); break;
        case 6: _t->onLoadFromFile(); break;
        case 7: _t->onSaveToFile(); break;
        case 8: _t->onUploadToServer(); break;
        case 9: _t->onBlockAllSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QModbusLoadSaveUploadWidget::*)();
            if (_t _q_method = &QModbusLoadSaveUploadWidget::reloadButtonChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QModbusLoadSaveUploadWidget::*)();
            if (_t _q_method = &QModbusLoadSaveUploadWidget::saveButtonChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QModbusLoadSaveUploadWidget::*)();
            if (_t _q_method = &QModbusLoadSaveUploadWidget::uploadButtonChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QModbusLoadSaveUploadWidget::*)();
            if (_t _q_method = &QModbusLoadSaveUploadWidget::loadSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QModbusLoadSaveUploadWidget::*)();
            if (_t _q_method = &QModbusLoadSaveUploadWidget::saveSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QModbusLoadSaveUploadWidget::*)();
            if (_t _q_method = &QModbusLoadSaveUploadWidget::uploadSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPushButton* >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QModbusLoadSaveUploadWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPushButton**>(_v) = _t->getReloadButton(); break;
        case 1: *reinterpret_cast< QPushButton**>(_v) = _t->getSaveButton(); break;
        case 2: *reinterpret_cast< QPushButton**>(_v) = _t->getUploadButton(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QModbusLoadSaveUploadWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setReloadButton(*reinterpret_cast< QPushButton**>(_v)); break;
        case 1: _t->setSaveButton(*reinterpret_cast< QPushButton**>(_v)); break;
        case 2: _t->setUploadButton(*reinterpret_cast< QPushButton**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QModbusLoadSaveUploadWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QModbusLoadSaveUploadWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QModbusLoadSaveUploadWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QModbusLoadSaveUploadWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QModbusLoadSaveUploadWidget::reloadButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QModbusLoadSaveUploadWidget::saveButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QModbusLoadSaveUploadWidget::uploadButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QModbusLoadSaveUploadWidget::loadSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QModbusLoadSaveUploadWidget::saveSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QModbusLoadSaveUploadWidget::uploadSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
