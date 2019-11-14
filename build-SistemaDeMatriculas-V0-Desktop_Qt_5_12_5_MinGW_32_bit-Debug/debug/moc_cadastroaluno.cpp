/****************************************************************************
** Meta object code from reading C++ file 'cadastroaluno.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SistemaDeMatriculas-V0/cadastroaluno.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cadastroaluno.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cadastroAluno_t {
    QByteArrayData data[17];
    char stringdata0[388];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cadastroAluno_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cadastroAluno_t qt_meta_stringdata_cadastroAluno = {
    {
QT_MOC_LITERAL(0, 0, 13), // "cadastroAluno"
QT_MOC_LITERAL(1, 14, 13), // "ocultarCampos"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "mostrarCampos"
QT_MOC_LITERAL(4, 43, 12), // "limparCampos"
QT_MOC_LITERAL(5, 56, 13), // "validarCampos"
QT_MOC_LITERAL(6, 70, 23), // "on_btnCadastrar_clicked"
QT_MOC_LITERAL(7, 94, 23), // "on_campoCpf_textChanged"
QT_MOC_LITERAL(8, 118, 27), // "on_dateEdit_editingFinished"
QT_MOC_LITERAL(9, 146, 26), // "on_campoNome_returnPressed"
QT_MOC_LITERAL(10, 173, 30), // "on_campoEndereco_returnPressed"
QT_MOC_LITERAL(11, 204, 27), // "on_campoSetor_returnPressed"
QT_MOC_LITERAL(12, 232, 32), // "on_boxEstado_currentIndexChanged"
QT_MOC_LITERAL(13, 265, 32), // "on_boxCidade_currentIndexChanged"
QT_MOC_LITERAL(14, 298, 29), // "on_campoCelular_returnPressed"
QT_MOC_LITERAL(15, 328, 27), // "on_campoEmail_returnPressed"
QT_MOC_LITERAL(16, 356, 31) // "on_boxCurso_currentIndexChanged"

    },
    "cadastroAluno\0ocultarCampos\0\0mostrarCampos\0"
    "limparCampos\0validarCampos\0"
    "on_btnCadastrar_clicked\0on_campoCpf_textChanged\0"
    "on_dateEdit_editingFinished\0"
    "on_campoNome_returnPressed\0"
    "on_campoEndereco_returnPressed\0"
    "on_campoSetor_returnPressed\0"
    "on_boxEstado_currentIndexChanged\0"
    "on_boxCidade_currentIndexChanged\0"
    "on_campoCelular_returnPressed\0"
    "on_campoEmail_returnPressed\0"
    "on_boxCurso_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cadastroAluno[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
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

void cadastroAluno::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cadastroAluno *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ocultarCampos(); break;
        case 1: _t->mostrarCampos(); break;
        case 2: _t->limparCampos(); break;
        case 3: { bool _r = _t->validarCampos();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->on_btnCadastrar_clicked(); break;
        case 5: _t->on_campoCpf_textChanged(); break;
        case 6: _t->on_dateEdit_editingFinished(); break;
        case 7: _t->on_campoNome_returnPressed(); break;
        case 8: _t->on_campoEndereco_returnPressed(); break;
        case 9: _t->on_campoSetor_returnPressed(); break;
        case 10: _t->on_boxEstado_currentIndexChanged(); break;
        case 11: _t->on_boxCidade_currentIndexChanged(); break;
        case 12: _t->on_campoCelular_returnPressed(); break;
        case 13: _t->on_campoEmail_returnPressed(); break;
        case 14: _t->on_boxCurso_currentIndexChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cadastroAluno::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_cadastroAluno.data,
    qt_meta_data_cadastroAluno,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cadastroAluno::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cadastroAluno::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cadastroAluno.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int cadastroAluno::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
