/****************************************************************************
** Meta object code from reading C++ file 'MeasureDockWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FENGSim/Measure/MeasureDockWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MeasureDockWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MeasureDockWidget_t {
    QByteArrayData data[13];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MeasureDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MeasureDockWidget_t qt_meta_stringdata_MeasureDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MeasureDockWidget"
QT_MOC_LITERAL(1, 18, 10), // "SetObject1"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "SetObject2"
QT_MOC_LITERAL(4, 41, 22), // "SetAllObjectsUnchecked"
QT_MOC_LITERAL(5, 64, 8), // "SetType1"
QT_MOC_LITERAL(6, 73, 8), // "SetType2"
QT_MOC_LITERAL(7, 82, 8), // "SetType3"
QT_MOC_LITERAL(8, 91, 8), // "SetType4"
QT_MOC_LITERAL(9, 100, 8), // "SetType5"
QT_MOC_LITERAL(10, 109, 8), // "SetType6"
QT_MOC_LITERAL(11, 118, 20), // "SetAllTypesUnchecked"
QT_MOC_LITERAL(12, 139, 13) // "SetSingleStep"

    },
    "MeasureDockWidget\0SetObject1\0\0SetObject2\0"
    "SetAllObjectsUnchecked\0SetType1\0"
    "SetType2\0SetType3\0SetType4\0SetType5\0"
    "SetType6\0SetAllTypesUnchecked\0"
    "SetSingleStep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeasureDockWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
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

       0        // eod
};

void MeasureDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MeasureDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetObject1(); break;
        case 1: _t->SetObject2(); break;
        case 2: _t->SetAllObjectsUnchecked(); break;
        case 3: _t->SetType1(); break;
        case 4: _t->SetType2(); break;
        case 5: _t->SetType3(); break;
        case 6: _t->SetType4(); break;
        case 7: _t->SetType5(); break;
        case 8: _t->SetType6(); break;
        case 9: _t->SetAllTypesUnchecked(); break;
        case 10: _t->SetSingleStep(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MeasureDockWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_MeasureDockWidget.data,
    qt_meta_data_MeasureDockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MeasureDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeasureDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MeasureDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MeasureDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
