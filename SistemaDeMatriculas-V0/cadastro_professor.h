#ifndef CADASTRO_PROFESSOR_H
#define CADASTRO_PROFESSOR_H

#include <QWidget>
#include <QPixmap>
#include <QtDebug>
#include <QMessageBox>

#include "professor.h"
#include "pessoa.h"
#include "persistprofessor.h"


namespace Ui {
class cadastro_professor;
}

class cadastro_professor : public QWidget
{
    Q_OBJECT

public:
    explicit cadastro_professor(QWidget *parent = nullptr);
    ~cadastro_professor();
    bool check_inserted_text_name(QString text);
    bool check_inserted_text_commun(QString text); //Checa se o endereço, setor, graduação ou email é valido
    bool check_inserted_text_phone(QString text);  //Checa se o telefone é válido
    void hideall();  //Oculta todos os campos
    void showall();  //Exibe todos os campos
    void clear_all();  //Limpa todos os campos
private slots:

    void on_campo_cpf_returnPressed();

    void on_inserir_clicked();

    void on_campo_nome_returnPressed();

    void on_selecao_data_de_nascimento_editingFinished();

    void on_campo_endereco_returnPressed();

    void on_campo_setor_returnPressed();

    void on_selecao_estado_currentIndexChanged();

    void on_selecao_cidade_currentIndexChanged();

    void on_campo_graduacao_returnPressed();

    void on_selecao_titulacao_currentTextChanged(const QString &arg1);

    void on_campo_celular_returnPressed();

    void on_campo_email_returnPressed();

private:
    Ui::cadastro_professor *ui;

};

#endif // CADASTRO_PROFESSOR_H
