/****************************************************************************
** Meta object code from reading C++ file 'cadastro_professor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SistemaDeMatriculas-V0/cadastro_professor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cadastro_professor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cadastro_professor_t {
    QByteArrayData data[15];
    char stringdata0[365];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cadastro_professor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cadastro_professor_t qt_meta_stringdata_cadastro_professor = {
    {
QT_MOC_LITERAL(0, 0, 18), // "cadastro_professor"
QT_MOC_LITERAL(1, 19, 24), // "on_btn_cadastrar_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 18), // "on_inserir_clicked"
QT_MOC_LITERAL(4, 64, 27), // "on_campo_nome_returnPressed"
QT_MOC_LITERAL(5, 92, 31), // "on_campo_endereco_returnPressed"
QT_MOC_LITERAL(6, 124, 28), // "on_campo_setor_returnPressed"
QT_MOC_LITERAL(7, 153, 30), // "on_campo_celular_returnPressed"
QT_MOC_LITERAL(8, 184, 28), // "on_campo_email_returnPressed"
QT_MOC_LITERAL(9, 213, 26), // "on_campo_cpf_returnPressed"
QT_MOC_LITERAL(10, 240, 27), // "on_selecao_estado_activated"
QT_MOC_LITERAL(11, 268, 4), // "arg1"
QT_MOC_LITERAL(12, 273, 27), // "on_selecao_cidade_activated"
QT_MOC_LITERAL(13, 301, 32), // "on_campo_graduacao_returnPressed"
QT_MOC_LITERAL(14, 334, 30) // "on_selecao_titulacao_activated"

    },
    "cadastro_professor\0on_btn_cadastrar_clicked\0"
    "\0on_inserir_clicked\0on_campo_nome_returnPressed\0"
    "on_campo_endereco_returnPressed\0"
    "on_campo_setor_returnPressed\0"
    "on_campo_celular_returnPressed\0"
    "on_campo_email_returnPressed\0"
    "on_campo_cpf_returnPressed\0"
    "on_selecao_estado_activated\0arg1\0"
    "on_selecao_cidade_activated\0"
    "on_campo_graduacao_returnPressed\0"
    "on_selecao_titulacao_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cadastro_professor[] = {

 // content:
       8,       // revision
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
      10,    1,   82,    2, 0x08 /* Private */,
      12,    1,   85,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    1,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void cadastro_professor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cadastro_professor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_cadastrar_clicked(); break;
        case 1: _t->on_inserir_clicked(); break;
        case 2: _t->on_campo_nome_returnPressed(); break;
        case 3: _t->on_campo_endereco_returnPressed(); break;
        case 4: _t->on_campo_setor_returnPressed(); break;
        case 5: _t->on_campo_celular_returnPressed(); break;
        case 6: _t->on_campo_email_returnPressed(); break;
        case 7: _t->on_campo_cpf_returnPressed(); break;
        case 8: _t->on_selecao_estado_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_selecao_cidade_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_campo_graduacao_returnPressed(); break;
        case 11: _t->on_selecao_titulacao_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cadastro_professor::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_cadastro_professor.data,
    qt_meta_data_cadastro_professor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cadastro_professor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cadastro_professor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cadastro_professor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Cpf"))
        return static_cast< Cpf*>(this);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
