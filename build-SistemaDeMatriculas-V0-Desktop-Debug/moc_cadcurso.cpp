/****************************************************************************
** Meta object code from reading C++ file 'cadcurso.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SistemaDeMatriculas-V0/cadcurso.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cadcurso.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cadCurso_t {
    QByteArrayData data[7];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cadCurso_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cadCurso_t qt_meta_stringdata_cadCurso = {
    {
QT_MOC_LITERAL(0, 0, 8), // "cadCurso"
QT_MOC_LITERAL(1, 9, 13), // "validarCampos"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 26), // "on_campoNome_returnPressed"
QT_MOC_LITERAL(4, 51, 29), // "on_boxDuracao_editingFinished"
QT_MOC_LITERAL(5, 81, 29), // "on_campoIDCurso_returnPressed"
QT_MOC_LITERAL(6, 111, 23) // "on_btnCadastrar_clicked"

    },
    "cadCurso\0validarCampos\0\0"
    "on_campoNome_returnPressed\0"
    "on_boxDuracao_editingFinished\0"
    "on_campoIDCurso_returnPressed\0"
    "on_btnCadastrar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cadCurso[] = {

 // content:
       7,       // revision
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
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cadCurso::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cadCurso *_t = static_cast<cadCurso *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->validarCampos();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->on_campoNome_returnPressed(); break;
        case 2: _t->on_boxDuracao_editingFinished(); break;
        case 3: _t->on_campoIDCurso_returnPressed(); break;
        case 4: _t->on_btnCadastrar_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject cadCurso::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cadCurso.data,
      qt_meta_data_cadCurso,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cadCurso::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cadCurso::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cadCurso.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int cadCurso::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
