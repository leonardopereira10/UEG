#ifndef CADASTRO_PROFESSOR_H
#define CADASTRO_PROFESSOR_H

#include <QWidget>
#include <professor.h>
#include <QPixmap>
#include "mainwindow.h"
#include <QtSql>



namespace Ui {
class cadastro_professor;
}

class cadastro_professor : public QWidget, public Cpf
{
    Q_OBJECT

public:
    explicit cadastro_professor(QWidget *parent = nullptr);
    ~cadastro_professor();

private slots:
    void on_btn_cadastrar_clicked();

    void on_inserir_clicked();

    void on_campo_nome_returnPressed();

    void on_campo_endereco_returnPressed();

    void on_campo_setor_returnPressed();

    void on_campo_celular_returnPressed();

    void on_campo_email_returnPressed();

    void on_campo_data_de_nascimento_returnPressed();

    void on_campo_cpf_returnPressed();

    void on_selecao_estado_activated(const QString &arg1);
    
    void on_selecao_cidade_activated(const QString &arg1);

    void on_campo_graduacao_returnPressed();

    void on_selecao_titulacao_activated(const QString &arg1);

private:
    Ui::cadastro_professor *ui;
};

#endif // CADASTRO_PROFESSOR_H
