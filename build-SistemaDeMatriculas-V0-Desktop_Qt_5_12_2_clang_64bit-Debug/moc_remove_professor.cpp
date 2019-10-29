/****************************************************************************
** Meta object code from reading C++ file 'remove_professor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SistemaDeMatriculas-V0/remove_professor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remove_professor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_remove_professor_t {
    QByteArrayData data[10];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_remove_professor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_remove_professor_t qt_meta_stringdata_remove_professor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "remove_professor"
QT_MOC_LITERAL(1, 17, 20), // "on_radio_cpf_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 21), // "on_radio_nome_clicked"
QT_MOC_LITERAL(4, 61, 24), // "on_btn_pesquisar_clicked"
QT_MOC_LITERAL(5, 86, 31), // "on_campo_pesquisa_returnPressed"
QT_MOC_LITERAL(6, 118, 22), // "on_btn_remover_clicked"
QT_MOC_LITERAL(7, 141, 33), // "on_tabela_resultado_doubleCli..."
QT_MOC_LITERAL(8, 175, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 187, 5) // "index"

    },
    "remove_professor\0on_radio_cpf_clicked\0"
    "\0on_radio_nome_clicked\0on_btn_pesquisar_clicked\0"
    "on_campo_pesquisa_returnPressed\0"
    "on_btn_remover_clicked\0"
    "on_tabela_resultado_doubleClicked\0"
    "QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_remove_professor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void remove_professor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<remove_professor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_radio_cpf_clicked(); break;
        case 1: _t->on_radio_nome_clicked(); break;
        case 2: _t->on_btn_pesquisar_clicked(); break;
        case 3: _t->on_campo_pesquisa_returnPressed(); break;
        case 4: _t->on_btn_remover_clicked(); break;
        case 5: _t->on_tabela_resultado_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject remove_professor::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_remove_professor.data,
    qt_meta_data_remove_professor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *remove_professor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *remove_professor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_remove_professor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int remove_professor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
