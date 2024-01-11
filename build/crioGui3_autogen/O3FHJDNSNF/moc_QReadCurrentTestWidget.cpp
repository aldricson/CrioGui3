/****************************************************************************
** Meta object code from reading C++ file 'QReadCurrentTestWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/TabWidgetFundations/CrioDirectAccessTestWidgets/QReadCurrentTestWidget.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QReadCurrentTestWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QReadCurrentTestWidget_t {
    uint offsetsAndSizes[12];
    char stringdata0[23];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[11];
    char stringdata5[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QReadCurrentTestWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QReadCurrentTestWidget_t qt_meta_stringdata_QReadCurrentTestWidget = {
    {
        QT_MOC_LITERAL(0, 22),  // "QReadCurrentTestWidget"
        QT_MOC_LITERAL(23, 20),  // "onReadOneShotClicked"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 13),  // "onPollClicked"
        QT_MOC_LITERAL(59, 10),  // "onReadDone"
        QT_MOC_LITERAL(70, 6)   // "result"
    },
    "QReadCurrentTestWidget",
    "onReadOneShotClicked",
    "",
    "onPollClicked",
    "onReadDone",
    "result"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QReadCurrentTestWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    1,   34,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject QReadCurrentTestWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QBaseAnalogReaderTestWidget::staticMetaObject>(),
    qt_meta_stringdata_QReadCurrentTestWidget.offsetsAndSizes,
    qt_meta_data_QReadCurrentTestWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QReadCurrentTestWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QReadCurrentTestWidget, std::true_type>,
        // method 'onReadOneShotClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPollClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReadDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QReadCurrentTestWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QReadCurrentTestWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onReadOneShotClicked(); break;
        case 1: _t->onPollClicked(); break;
        case 2: _t->onReadDone((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QReadCurrentTestWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QReadCurrentTestWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QReadCurrentTestWidget.stringdata0))
        return static_cast<void*>(this);
    return QBaseAnalogReaderTestWidget::qt_metacast(_clname);
}

int QReadCurrentTestWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBaseAnalogReaderTestWidget::qt_metacall(_c, _id, _a);
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
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
