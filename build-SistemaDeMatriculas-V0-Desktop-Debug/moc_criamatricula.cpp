/****************************************************************************
** Meta object code from reading C++ file 'criamatricula.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SistemaDeMatriculas-V0/criamatricula.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'criamatricula.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CriaMatricula_t {
    QByteArrayData data[10];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CriaMatricula_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CriaMatricula_t qt_meta_stringdata_CriaMatricula = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CriaMatricula"
QT_MOC_LITERAL(1, 14, 27), // "on_lineEdit_editingFinished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 29), // "on_lineEdit_2_editingFinished"
QT_MOC_LITERAL(4, 73, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 97, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(6, 123, 27), // "on_lineEdit_2_returnPressed"
QT_MOC_LITERAL(7, 151, 27), // "on_lineEdit_3_returnPressed"
QT_MOC_LITERAL(8, 179, 27), // "on_lineEdit_4_returnPressed"
QT_MOC_LITERAL(9, 207, 9) // "limpaTela"

    },
    "CriaMatricula\0on_lineEdit_editingFinished\0"
    "\0on_lineEdit_2_editingFinished\0"
    "on_pushButton_2_clicked\0"
    "on_lineEdit_returnPressed\0"
    "on_lineEdit_2_returnPressed\0"
    "on_lineEdit_3_returnPressed\0"
    "on_lineEdit_4_returnPressed\0limpaTela"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CriaMatricula[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void CriaMatricula::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CriaMatricula *_t = static_cast<CriaMatricula *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lineEdit_editingFinished(); break;
        case 1: _t->on_lineEdit_2_editingFinished(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_lineEdit_returnPressed(); break;
        case 4: _t->on_lineEdit_2_returnPressed(); break;
        case 5: _t->on_lineEdit_3_returnPressed(); break;
        case 6: _t->on_lineEdit_4_returnPressed(); break;
        case 7: _t->limpaTela(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CriaMatricula::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CriaMatricula.data,
      qt_meta_data_CriaMatricula,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CriaMatricula::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CriaMatricula::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CriaMatricula.stringdata0))
        return static_cast<void*>(const_cast< CriaMatricula*>(this));
    return QWidget::qt_metacast(_clname);
}

int CriaMatricula::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
