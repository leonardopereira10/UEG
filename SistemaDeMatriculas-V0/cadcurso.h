#ifndef CADCURSO_H
#define CADCURSO_H

#include <QtSql>
#include <QDebug>
#include <QWidget>
#include "curso.h"

namespace Ui {
class cadCurso;
}

class cadCurso : public QWidget
{
    Q_OBJECT

public:
    explicit cadCurso(QWidget *parent = 0);
    ~cadCurso();

private slots:
    bool validarCampos();   //metodo para validar os valores digitados

    void on_campoNome_returnPressed();

    void on_boxDuracao_editingFinished();

    void on_btnCadastrar_clicked();

    bool enviarBd(Curso *curso);  //metodo para enviar banco de dados

private:
    Ui::cadCurso *janelaCadastro;
    QSqlDatabase db;             //objeto do bd
    QSqlQuery *query;            //objeto para comando a ser executado no banco de dados
};

#endif // CADCURSO_H
