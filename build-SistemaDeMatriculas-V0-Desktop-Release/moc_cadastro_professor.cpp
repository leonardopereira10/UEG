/****************************************************************************
** Meta object code from reading C++ file 'cadastro_professor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SistemaDeMatriculas-V0/cadastro_professor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cadastro_professor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cadastro_professor_t {
    QByteArrayData data[14];
    char stringdata0[389];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cadastro_professor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cadastro_professor_t qt_meta_stringdata_cadastro_professor = {
    {
QT_MOC_LITERAL(0, 0, 18), // "cadastro_professor"
QT_MOC_LITERAL(1, 19, 26), // "on_campo_cpf_returnPressed"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 18), // "on_inserir_clicked"
QT_MOC_LITERAL(4, 66, 27), // "on_campo_nome_returnPressed"
QT_MOC_LITERAL(5, 94, 31), // "on_campo_endereco_returnPressed"
QT_MOC_LITERAL(6, 126, 28), // "on_campo_setor_returnPressed"
QT_MOC_LITERAL(7, 155, 37), // "on_selecao_estado_currentInde..."
QT_MOC_LITERAL(8, 193, 37), // "on_selecao_cidade_currentInde..."
QT_MOC_LITERAL(9, 231, 32), // "on_campo_graduacao_returnPressed"
QT_MOC_LITERAL(10, 264, 39), // "on_selecao_titulacao_currentT..."
QT_MOC_LITERAL(11, 304, 30), // "on_campo_celular_returnPressed"
QT_MOC_LITERAL(12, 335, 28), // "on_campo_email_returnPressed"
QT_MOC_LITERAL(13, 364, 24) // "on_btn_cadastrar_clicked"

    },
    "cadastro_professor\0on_campo_cpf_returnPressed\0"
    "\0on_inserir_clicked\0on_campo_nome_returnPressed\0"
    "on_campo_endereco_returnPressed\0"
    "on_campo_setor_returnPressed\0"
    "on_selecao_estado_currentIndexChanged\0"
    "on_selecao_cidade_currentIndexChanged\0"
    "on_campo_graduacao_returnPressed\0"
    "on_selecao_titulacao_currentTextChanged\0"
    "on_campo_celular_returnPressed\0"
    "on_campo_email_returnPressed\0"
    "on_btn_cadastrar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cadastro_professor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

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
    QMetaType::Void,

       0        // eod
};

void cadastro_professor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cadastro_professor *_t = static_cast<cadastro_professor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_campo_cpf_returnPressed(); break;
        case 1: _t->on_inserir_clicked(); break;
        case 2: _t->on_campo_nome_returnPressed(); break;
        case 3: _t->on_campo_endereco_returnPressed(); break;
        case 4: _t->on_campo_setor_returnPressed(); break;
        case 5: _t->on_selecao_estado_currentIndexChanged(); break;
        case 6: _t->on_selecao_cidade_currentIndexChanged(); break;
        case 7: _t->on_campo_graduacao_returnPressed(); break;
        case 8: _t->on_selecao_titulacao_currentTextChanged(); break;
        case 9: _t->on_campo_celular_returnPressed(); break;
        case 10: _t->on_campo_email_returnPressed(); break;
        case 11: _t->on_btn_cadastrar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cadastro_professor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cadastro_professor.data,
      qt_meta_data_cadastro_professor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cadastro_professor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cadastro_professor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cadastro_professor.stringdata0))
        return static_cast<void*>(const_cast< cadastro_professor*>(this));
    return QWidget::qt_metacast(_clname);
}

int cadastro_professor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE