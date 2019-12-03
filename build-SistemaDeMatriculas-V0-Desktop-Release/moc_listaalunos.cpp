/****************************************************************************
** Meta object code from reading C++ file 'listaalunos.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SistemaDeMatriculas-V0/listaalunos.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listaalunos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ListaAlunos_t {
    QByteArrayData data[7];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListaAlunos_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListaAlunos_t qt_meta_stringdata_ListaAlunos = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ListaAlunos"
QT_MOC_LITERAL(1, 12, 23), // "on_btnAtualizar_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 31), // "on_boxOrdem_currentIndexChanged"
QT_MOC_LITERAL(4, 69, 4), // "arg1"
QT_MOC_LITERAL(5, 74, 21), // "on_radioCresc_clicked"
QT_MOC_LITERAL(6, 96, 23) // "on_radioDecresc_clicked"

    },
    "ListaAlunos\0on_btnAtualizar_clicked\0"
    "\0on_boxOrdem_currentIndexChanged\0arg1\0"
    "on_radioCresc_clicked\0on_radioDecresc_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListaAlunos[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ListaAlunos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListaAlunos *_t = static_cast<ListaAlunos *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnAtualizar_clicked(); break;
        case 1: _t->on_boxOrdem_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_radioCresc_clicked(); break;
        case 3: _t->on_radioDecresc_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ListaAlunos::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ListaAlunos.data,
      qt_meta_data_ListaAlunos,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ListaAlunos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListaAlunos::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ListaAlunos.stringdata0))
        return static_cast<void*>(const_cast< ListaAlunos*>(this));
    return QWidget::qt_metacast(_clname);
}

int ListaAlunos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
