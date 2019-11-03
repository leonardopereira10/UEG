#ifndef CADASTRO_PROFESSOR_H
#define CADASTRO_PROFESSOR_H

#include <QWidget>
#include <professor.h>
#include <QPixmap>
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
    bool check_inserted_text_Bday(QString text);
    bool check_inserted_text_commun(QString text);
    bool check_inserted_text_phone(QString text);
    void hideall();
    void showall();
    void fillBoxEstados();

private slots:


    void on_campo_cpf_returnPressed();

    void on_inserir_clicked();

    void on_campo_nome_returnPressed();

    void on_selecao_data_de_nascimento_userDateChanged(const QDate &date);

    void on_campo_endereco_returnPressed();

    void on_campo_setor_returnPressed();

    void on_selecao_estado_currentTextChanged(const QString &arg1);

    void on_selecao_cidade_currentTextChanged(const QString &arg1);

    void on_campo_graduacao_returnPressed();

    void on_selecao_titulacao_currentTextChanged(const QString &arg1);

    void on_campo_celular_returnPressed();

    void on_campo_email_returnPressed();

    void on_selecao_estado_activated(const QString &arg1);

    void on_selecao_cidade_activated(const QString &arg1);

private:
    Ui::cadastro_professor *ui;
};

#endif // CADASTRO_PROFESSOR_H
