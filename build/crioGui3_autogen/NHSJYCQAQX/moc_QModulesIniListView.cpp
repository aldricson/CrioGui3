/****************************************************************************
** Meta object code from reading C++ file 'QModulesIniListView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/TabWidgetFundations/Modules/QModulesIniListView.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QModulesIniListView.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QModulesIniListView_t {
    uint offsetsAndSizes[28];
    char stringdata0[20];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[27];
    char stringdata5[24];
    char stringdata6[12];
    char stringdata7[6];
    char stringdata8[26];
    char stringdata9[14];
    char stringdata10[16];
    char stringdata11[16];
    char stringdata12[18];
    char stringdata13[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QModulesIniListView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QModulesIniListView_t qt_meta_stringdata_QModulesIniListView = {
    {
        QT_MOC_LITERAL(0, 19),  // "QModulesIniListView"
        QT_MOC_LITERAL(20, 20),  // "iniTreeWidgetChanged"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 22),  // "moduleListModelChanged"
        QT_MOC_LITERAL(65, 26),  // "iniModulesLocalPathChanged"
        QT_MOC_LITERAL(92, 23),  // "moduleListUpdatedSignal"
        QT_MOC_LITERAL(116, 11),  // "QModelIndex"
        QT_MOC_LITERAL(128, 5),  // "index"
        QT_MOC_LITERAL(134, 25),  // "onModuleItemDoubleClicked"
        QT_MOC_LITERAL(160, 13),  // "iniTreeWidget"
        QT_MOC_LITERAL(174, 15),  // "QIniTreeWidget*"
        QT_MOC_LITERAL(190, 15),  // "moduleListModel"
        QT_MOC_LITERAL(206, 17),  // "QStringListModel*"
        QT_MOC_LITERAL(224, 19)   // "iniModulesLocalPath"
    },
    "QModulesIniListView",
    "iniTreeWidgetChanged",
    "",
    "moduleListModelChanged",
    "iniModulesLocalPathChanged",
    "moduleListUpdatedSignal",
    "QModelIndex",
    "index",
    "onModuleItemDoubleClicked",
    "iniTreeWidget",
    "QIniTreeWidget*",
    "moduleListModel",
    "QStringListModel*",
    "iniModulesLocalPath"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QModulesIniListView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   53, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    4 /* Public */,
       3,    0,   45,    2, 0x06,    5 /* Public */,
       4,    0,   46,    2, 0x06,    6 /* Public */,
       5,    1,   47,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   50,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x0001510b, uint(0), 0,
      11, 0x80000000 | 12, 0x0001510b, uint(1), 0,
      13, QMetaType::QString, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QModulesIniListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_meta_stringdata_QModulesIniListView.offsetsAndSizes,
    qt_meta_data_QModulesIniListView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QModulesIniListView_t,
        // property 'iniTreeWidget'
        QtPrivate::TypeAndForceComplete<QIniTreeWidget*, std::true_type>,
        // property 'moduleListModel'
        QtPrivate::TypeAndForceComplete<QStringListModel*, std::true_type>,
        // property 'iniModulesLocalPath'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QModulesIniListView, std::true_type>,
        // method 'iniTreeWidgetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moduleListModelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'iniModulesLocalPathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moduleListUpdatedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onModuleItemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void QModulesIniListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QModulesIniListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->iniTreeWidgetChanged(); break;
        case 1: _t->moduleListModelChanged(); break;
        case 2: _t->iniModulesLocalPathChanged(); break;
        case 3: _t->moduleListUpdatedSignal((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->onModuleItemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QModulesIniListView::*)();
            if (_t _q_method = &QModulesIniListView::iniTreeWidgetChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QModulesIniListView::*)();
            if (_t _q_method = &QModulesIniListView::moduleListModelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QModulesIniListView::*)();
            if (_t _q_method = &QModulesIniListView::iniModulesLocalPathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QModulesIniListView::*)(const QModelIndex & );
            if (_t _q_method = &QModulesIniListView::moduleListUpdatedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIniTreeWidget* >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QModulesIniListView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIniTreeWidget**>(_v) = _t->iniTreeWidget(); break;
        case 1: *reinterpret_cast< QStringListModel**>(_v) = _t->moduleListModel(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->iniModulesLocalPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QModulesIniListView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIniTreeWidget(*reinterpret_cast< QIniTreeWidget**>(_v)); break;
        case 1: _t->setModuleListModel(*reinterpret_cast< QStringListModel**>(_v)); break;
        case 2: _t->setIniModulesLocalPath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QModulesIniListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QModulesIniListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QModulesIniListView.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int QModulesIniListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QModulesIniListView::iniTreeWidgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QModulesIniListView::moduleListModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QModulesIniListView::iniModulesLocalPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QModulesIniListView::moduleListUpdatedSignal(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
