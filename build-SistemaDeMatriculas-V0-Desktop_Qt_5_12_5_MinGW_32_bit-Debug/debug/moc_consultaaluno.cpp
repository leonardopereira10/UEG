/****************************************************************************
** Meta object code from reading C++ file 'consultaaluno.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SistemaDeMatriculas-V0/consultaaluno.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'consultaaluno.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConsultaAluno_t {
    QByteArrayData data[7];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConsultaAluno_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConsultaAluno_t qt_meta_stringdata_ConsultaAluno = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ConsultaAluno"
QT_MOC_LITERAL(1, 14, 25), // "on_radioMatricula_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 19), // "on_radioCpf_clicked"
QT_MOC_LITERAL(4, 61, 20), // "on_radioNome_clicked"
QT_MOC_LITERAL(5, 82, 31), // "on_lineEditSearch_returnPressed"
QT_MOC_LITERAL(6, 114, 23) // "on_btnConsultar_clicked"

    },
    "ConsultaAluno\0on_radioMatricula_clicked\0"
    "\0on_radioCpf_clicked\0on_radioNome_clicked\0"
    "on_lineEditSearch_returnPressed\0"
    "on_btnConsultar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConsultaAluno[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ConsultaAluno::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConsultaAluno *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_radioMatricula_clicked(); break;
        case 1: _t->on_radioCpf_clicked(); break;
        case 2: _t->on_radioNome_clicked(); break;
        case 3: _t->on_lineEditSearch_returnPressed(); break;
        case 4: _t->on_btnConsultar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ConsultaAluno::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ConsultaAluno.data,
    qt_meta_data_ConsultaAluno,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConsultaAluno::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConsultaAluno::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConsultaAluno.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ConsultaAluno::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
