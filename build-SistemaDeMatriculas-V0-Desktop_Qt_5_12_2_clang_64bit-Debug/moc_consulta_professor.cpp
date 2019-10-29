/****************************************************************************
** Meta object code from reading C++ file 'consulta_professor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SistemaDeMatriculas-V0/consulta_professor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'consulta_professor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_consulta_professor_t {
    QByteArrayData data[6];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_consulta_professor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_consulta_professor_t qt_meta_stringdata_consulta_professor = {
    {
QT_MOC_LITERAL(0, 0, 18), // "consulta_professor"
QT_MOC_LITERAL(1, 19, 20), // "on_radio_cpf_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 21), // "on_radio_nome_clicked"
QT_MOC_LITERAL(4, 63, 24), // "on_btn_pesquisar_clicked"
QT_MOC_LITERAL(5, 88, 31) // "on_campo_pesquisa_returnPressed"

    },
    "consulta_professor\0on_radio_cpf_clicked\0"
    "\0on_radio_nome_clicked\0on_btn_pesquisar_clicked\0"
    "on_campo_pesquisa_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_consulta_professor[] = {

 // content:
       8,       // revision
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
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void consulta_professor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<consulta_professor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_radio_cpf_clicked(); break;
        case 1: _t->on_radio_nome_clicked(); break;
        case 2: _t->on_btn_pesquisar_clicked(); break;
        case 3: _t->on_campo_pesquisa_returnPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject consulta_professor::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_consulta_professor.data,
    qt_meta_data_consulta_professor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *consulta_professor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *consulta_professor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_consulta_professor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int consulta_professor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
