/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SistemaDeMatriculas-V0/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[13];
    char stringdata0[471];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 48), // "on_actionOrganizar_janelas_la..."
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 47), // "on_actionOrganizar_janelas_em..."
QT_MOC_LITERAL(4, 109, 23), // "on_actionSair_triggered"
QT_MOC_LITERAL(5, 133, 33), // "on_actionCadastrarAluno_trigg..."
QT_MOC_LITERAL(6, 167, 33), // "on_actionConsultarAluno_trigg..."
QT_MOC_LITERAL(7, 201, 31), // "on_actionRemoverAluno_triggered"
QT_MOC_LITERAL(8, 233, 31), // "on_actionListarAlunos_triggered"
QT_MOC_LITERAL(9, 265, 49), // "on_actionMatricular_aluno_em_..."
QT_MOC_LITERAL(10, 315, 49), // "on_actionConsultar_matriculas..."
QT_MOC_LITERAL(11, 365, 52), // "on_actionRemover_matricula_pa..."
QT_MOC_LITERAL(12, 418, 52) // "on_actionListar_matriculas_pa..."

    },
    "MainWindow\0on_actionOrganizar_janelas_lado_a_lado_triggered\0"
    "\0on_actionOrganizar_janelas_em_cascata_triggered\0"
    "on_actionSair_triggered\0"
    "on_actionCadastrarAluno_triggered\0"
    "on_actionConsultarAluno_triggered\0"
    "on_actionRemoverAluno_triggered\0"
    "on_actionListarAlunos_triggered\0"
    "on_actionMatricular_aluno_em_disciplina_triggered\0"
    "on_actionConsultar_matriculas_por_aluno_triggered\0"
    "on_actionRemover_matricula_para_disciplina_triggered\0"
    "on_actionListar_matriculas_para_disciplina_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
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
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

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

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionOrganizar_janelas_lado_a_lado_triggered(); break;
        case 1: _t->on_actionOrganizar_janelas_em_cascata_triggered(); break;
        case 2: _t->on_actionSair_triggered(); break;
        case 3: _t->on_actionCadastrarAluno_triggered(); break;
        case 4: _t->on_actionConsultarAluno_triggered(); break;
        case 5: _t->on_actionRemoverAluno_triggered(); break;
        case 6: _t->on_actionListarAlunos_triggered(); break;
        case 7: _t->on_actionMatricular_aluno_em_disciplina_triggered(); break;
        case 8: _t->on_actionConsultar_matriculas_por_aluno_triggered(); break;
        case 9: _t->on_actionRemover_matricula_para_disciplina_triggered(); break;
        case 10: _t->on_actionListar_matriculas_para_disciplina_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
