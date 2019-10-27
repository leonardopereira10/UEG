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
    bool validarCampos();

    void on_campoNome_returnPressed();

    void on_boxDuracao_editingFinished();

    void on_btnCadastrar_clicked();

    bool enviarBd(Curso *curso);

private:
    Ui::cadCurso *janelaCadastro;
    QSqlDatabase db;
    QSqlQuery *query;
};

#endif // CADCURSO_H
