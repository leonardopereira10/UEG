#ifndef REMOVE_PROFESSOR_H
#define REMOVE_PROFESSOR_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "confirmacao_remover.h"

namespace Ui {
class remove_professor;
}

class remove_professor : public QWidget
{
    Q_OBJECT

public:
    explicit remove_professor(QWidget *parent = nullptr);
    ~remove_professor();
    QSqlDatabase banco_de_dados;


private slots:
    void on_radio_cpf_clicked();

    void on_radio_nome_clicked();

    void on_btn_pesquisar_clicked();

    void on_campo_pesquisa_returnPressed();

    void on_btn_remover_clicked();

private:
    Ui::remove_professor *ui;
};

#endif // REMOVE_PROFESSOR_H
