/****************************************************************************
** Meta object code from reading C++ file 'cadastroaluno.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SistemaDeMatriculas-V0/cadastroaluno.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cadastroaluno.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cadastroAluno_t {
    QByteArrayData data[16];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cadastroAluno_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cadastroAluno_t qt_meta_stringdata_cadastroAluno = {
    {
QT_MOC_LITERAL(0, 0, 13), // "cadastroAluno"
QT_MOC_LITERAL(1, 14, 10), // "hideFields"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "showFields"
QT_MOC_LITERAL(4, 37, 12), // "validCpf_cad"
QT_MOC_LITERAL(5, 50, 3), // "cpf"
QT_MOC_LITERAL(6, 54, 11), // "validFields"
QT_MOC_LITERAL(7, 66, 14), // "fillBoxEstados"
QT_MOC_LITERAL(8, 81, 14), // "fillBoxCidades"
QT_MOC_LITERAL(9, 96, 12), // "getCodCidade"
QT_MOC_LITERAL(10, 109, 12), // "commit_on_bd"
QT_MOC_LITERAL(11, 122, 6), // "Aluno*"
QT_MOC_LITERAL(12, 129, 5), // "aluno"
QT_MOC_LITERAL(13, 135, 23), // "on_campoCpf_textChanged"
QT_MOC_LITERAL(14, 159, 23), // "on_btnCadastrar_clicked"
QT_MOC_LITERAL(15, 183, 32) // "on_boxEstado_currentIndexChanged"

    },
    "cadastroAluno\0hideFields\0\0showFields\0"
    "validCpf_cad\0cpf\0validFields\0"
    "fillBoxEstados\0fillBoxCidades\0"
    "getCodCidade\0commit_on_bd\0Aluno*\0aluno\0"
    "on_campoCpf_textChanged\0on_btnCadastrar_clicked\0"
    "on_boxEstado_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cadastroAluno[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    1,   71,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,    5,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Bool, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cadastroAluno::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cadastroAluno *_t = static_cast<cadastroAluno *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hideFields(); break;
        case 1: _t->showFields(); break;
        case 2: { bool _r = _t->validCpf_cad((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->validFields();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->fillBoxEstados(); break;
        case 5: _t->fillBoxCidades(); break;
        case 6: { int _r = _t->getCodCidade();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->commit_on_bd((*reinterpret_cast< Aluno*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->on_campoCpf_textChanged(); break;
        case 9: _t->on_btnCadastrar_clicked(); break;
        case 10: _t->on_boxEstado_currentIndexChanged(); break;
        default: ;
        }
    }
}

const QMetaObject cadastroAluno::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cadastroAluno.data,
      qt_meta_data_cadastroAluno,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cadastroAluno::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cadastroAluno::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cadastroAluno.stringdata0))
        return static_cast<void*>(const_cast< cadastroAluno*>(this));
    return QWidget::qt_metacast(_clname);
}

int cadastroAluno::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE