/****************************************************************************
** Meta object code from reading C++ file 'QDeviceParametersWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/TabWidgets/QDeviceParametersWidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QDeviceParametersWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QDeviceParametersWidget_t {
    uint offsetsAndSizes[24];
    char stringdata0[24];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[18];
    char stringdata5[16];
    char stringdata6[5];
    char stringdata7[13];
    char stringdata8[11];
    char stringdata9[14];
    char stringdata10[16];
    char stringdata11[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QDeviceParametersWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QDeviceParametersWidget_t qt_meta_stringdata_QDeviceParametersWidget = {
    {
        QT_MOC_LITERAL(0, 23),  // "QDeviceParametersWidget"
        QT_MOC_LITERAL(24, 20),  // "iniTreeWidgetChanged"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 21),  // "moulesListViewChanged"
        QT_MOC_LITERAL(68, 17),  // "onUpdateModelList"
        QT_MOC_LITERAL(86, 15),  // "QIniTreeWidget*"
        QT_MOC_LITERAL(102, 4),  // "tree"
        QT_MOC_LITERAL(107, 12),  // "QStringList&"
        QT_MOC_LITERAL(120, 10),  // "moduleList"
        QT_MOC_LITERAL(131, 13),  // "iniTreeWidget"
        QT_MOC_LITERAL(145, 15),  // "modulesListView"
        QT_MOC_LITERAL(161, 20)   // "QModulesIniListView*"
    },
    "QDeviceParametersWidget",
    "iniTreeWidgetChanged",
    "",
    "moulesListViewChanged",
    "onUpdateModelList",
    "QIniTreeWidget*",
    "tree",
    "QStringList&",
    "moduleList",
    "iniTreeWidget",
    "modulesListView",
    "QModulesIniListView*"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QDeviceParametersWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    3 /* Public */,
       3,    0,   33,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,   34,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,

 // properties: name, type, flags
       9, 0x80000000 | 5, 0x0001510b, uint(0), 0,
      10, 0x80000000 | 11, 0x0001510b, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QDeviceParametersWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QDeviceParametersWidget.offsetsAndSizes,
    qt_meta_data_QDeviceParametersWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QDeviceParametersWidget_t,
        // property 'iniTreeWidget'
        QtPrivate::TypeAndForceComplete<QIniTreeWidget*, std::true_type>,
        // property 'modulesListView'
        QtPrivate::TypeAndForceComplete<QModulesIniListView*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDeviceParametersWidget, std::true_type>,
        // method 'iniTreeWidgetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moulesListViewChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpdateModelList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QIniTreeWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList &, std::false_type>
    >,
    nullptr
} };

void QDeviceParametersWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDeviceParametersWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->iniTreeWidgetChanged(); break;
        case 1: _t->moulesListViewChanged(); break;
        case 2: _t->onUpdateModelList((*reinterpret_cast< std::add_pointer_t<QIniTreeWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList&>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QDeviceParametersWidget::*)();
            if (_t _q_method = &QDeviceParametersWidget::iniTreeWidgetChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QDeviceParametersWidget::*)();
            if (_t _q_method = &QDeviceParametersWidget::moulesListViewChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QDeviceParametersWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIniTreeWidget**>(_v) = _t->iniTreeWidget(); break;
        case 1: *reinterpret_cast< QModulesIniListView**>(_v) = _t->modulesListView(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QDeviceParametersWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIniTreeWidget(*reinterpret_cast< QIniTreeWidget**>(_v)); break;
        case 1: _t->setModulesListView(*reinterpret_cast< QModulesIniListView**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QDeviceParametersWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeviceParametersWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeviceParametersWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QDeviceParametersWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QDeviceParametersWidget::iniTreeWidgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeviceParametersWidget::moulesListViewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
