#ifndef OPCAO_CADASTRAR_H
#define OPCAO_CADASTRAR_H

#include <QDialog>
#include <menu_principal.h>
#include "cpf.h"

namespace Ui {
class opcao_cadastrar;
}

class opcao_cadastrar : public QDialog
{
    Q_OBJECT

public:
    explicit opcao_cadastrar(QWidget *parent = nullptr);
    ~opcao_cadastrar();

private slots:
    void on_btn_voltar_clicked();

    void on_btn_aluno_clicked();

    void on_btn_professor_clicked();

    void on_btn_curso_clicked();

    void on_btn_disciplina_clicked();

private:
    Ui::opcao_cadastrar *ui;
};

#endif // OPCAO_CADASTRAR_H
