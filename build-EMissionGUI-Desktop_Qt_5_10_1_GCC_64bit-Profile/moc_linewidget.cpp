/****************************************************************************
** Meta object code from reading C++ file 'linewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../EMissionGUI/linewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'linewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_lineWidget_t {
    QByteArrayData data[9];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_lineWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_lineWidget_t qt_meta_stringdata_lineWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "lineWidget"
QT_MOC_LITERAL(1, 11, 18), // "on_btnLine_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "on_btnRect_clicked"
QT_MOC_LITERAL(4, 50, 17), // "on_btnArc_clicked"
QT_MOC_LITERAL(5, 68, 18), // "on_btnSave_clicked"
QT_MOC_LITERAL(6, 87, 19), // "on_btnClear_clicked"
QT_MOC_LITERAL(7, 107, 21), // "on_btnVoltage_clicked"
QT_MOC_LITERAL(8, 129, 24) // "on_btnMaxVoltage_clicked"

    },
    "lineWidget\0on_btnLine_clicked\0\0"
    "on_btnRect_clicked\0on_btnArc_clicked\0"
    "on_btnSave_clicked\0on_btnClear_clicked\0"
    "on_btnVoltage_clicked\0on_btnMaxVoltage_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_lineWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void lineWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        lineWidget *_t = static_cast<lineWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnLine_clicked(); break;
        case 1: _t->on_btnRect_clicked(); break;
        case 2: _t->on_btnArc_clicked(); break;
        case 3: _t->on_btnSave_clicked(); break;
        case 4: _t->on_btnClear_clicked(); break;
        case 5: _t->on_btnVoltage_clicked(); break;
        case 6: _t->on_btnMaxVoltage_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject lineWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_lineWidget.data,
      qt_meta_data_lineWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *lineWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lineWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_lineWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int lineWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
