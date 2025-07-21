/****************************************************************************
** Meta object code from reading C++ file 'ElbowsDockWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FENGSim/Elbows/ElbowsDockWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElbowsDockWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElbowsDockWidget_t {
    QByteArrayData data[26];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElbowsDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElbowsDockWidget_t qt_meta_stringdata_ElbowsDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ElbowsDockWidget"
QT_MOC_LITERAL(1, 17, 17), // "confirmParameters"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "R_out"
QT_MOC_LITERAL(4, 42, 4), // "R_in"
QT_MOC_LITERAL(5, 47, 6), // "length"
QT_MOC_LITERAL(6, 54, 9), // "sleeve_t1"
QT_MOC_LITERAL(7, 64, 9), // "sleeve_l1"
QT_MOC_LITERAL(8, 74, 8), // "sleeve_t"
QT_MOC_LITERAL(9, 83, 8), // "sleeve_l"
QT_MOC_LITERAL(10, 92, 10), // "rotary_pos"
QT_MOC_LITERAL(11, 103, 9), // "fixed_pos"
QT_MOC_LITERAL(12, 113, 5), // "arc_R"
QT_MOC_LITERAL(13, 119, 5), // "arc_t"
QT_MOC_LITERAL(14, 125, 9), // "arc_angle"
QT_MOC_LITERAL(15, 135, 14), // "workDirChanged"
QT_MOC_LITERAL(16, 150, 10), // "newWorkDir"
QT_MOC_LITERAL(17, 161, 16), // "onConfirmClicked"
QT_MOC_LITERAL(18, 178, 21), // "onTubeMaterialChanged"
QT_MOC_LITERAL(19, 200, 8), // "material"
QT_MOC_LITERAL(20, 209, 23), // "onRotaryMaterialChanged"
QT_MOC_LITERAL(21, 233, 22), // "onFixedMaterialChanged"
QT_MOC_LITERAL(22, 256, 20), // "onArcMaterialChanged"
QT_MOC_LITERAL(23, 277, 16), // "onNewFileClicked"
QT_MOC_LITERAL(24, 294, 17), // "onOpenFileClicked"
QT_MOC_LITERAL(25, 312, 17) // "onSaveFileClicked"

    },
    "ElbowsDockWidget\0confirmParameters\0\0"
    "R_out\0R_in\0length\0sleeve_t1\0sleeve_l1\0"
    "sleeve_t\0sleeve_l\0rotary_pos\0fixed_pos\0"
    "arc_R\0arc_t\0arc_angle\0workDirChanged\0"
    "newWorkDir\0onConfirmClicked\0"
    "onTubeMaterialChanged\0material\0"
    "onRotaryMaterialChanged\0onFixedMaterialChanged\0"
    "onArcMaterialChanged\0onNewFileClicked\0"
    "onOpenFileClicked\0onSaveFileClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElbowsDockWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,   12,   64,    2, 0x06 /* Public */,
      15,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,   92,    2, 0x08 /* Private */,
      18,    1,   93,    2, 0x08 /* Private */,
      20,    1,   96,    2, 0x08 /* Private */,
      21,    1,   99,    2, 0x08 /* Private */,
      22,    1,  102,    2, 0x08 /* Private */,
      23,    0,  105,    2, 0x08 /* Private */,
      24,    0,  106,    2, 0x08 /* Private */,
      25,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ElbowsDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElbowsDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->confirmParameters((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12]))); break;
        case 1: _t->workDirChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onConfirmClicked(); break;
        case 3: _t->onTubeMaterialChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onRotaryMaterialChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onFixedMaterialChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onArcMaterialChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onNewFileClicked(); break;
        case 8: _t->onOpenFileClicked(); break;
        case 9: _t->onSaveFileClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElbowsDockWidget::*)(double , double , double , double , double , double , double , double , double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElbowsDockWidget::confirmParameters)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElbowsDockWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElbowsDockWidget::workDirChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ElbowsDockWidget::staticMetaObject = { {
    &QDockWidget::staticMetaObject,
    qt_meta_stringdata_ElbowsDockWidget.data,
    qt_meta_data_ElbowsDockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElbowsDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElbowsDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElbowsDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int ElbowsDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ElbowsDockWidget::confirmParameters(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6, double _t7, double _t8, double _t9, double _t10, double _t11, double _t12)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ElbowsDockWidget::workDirChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
