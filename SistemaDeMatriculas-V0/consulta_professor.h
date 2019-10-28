#ifndef CONSULTA_PROFESSOR_H
#define CONSULTA_PROFESSOR_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include "mainwindow.h"


namespace Ui {
class consulta_professor;
}

class consulta_professor : public QWidget
{
    Q_OBJECT

public:
    explicit consulta_professor(QWidget *parent = nullptr);
    ~consulta_professor();
    QSqlDatabase banco_de_dados;

private slots:
    void on_radio_cpf_clicked();

    void on_radio_nome_clicked();

    void on_btn_pesquisar_clicked();

    void on_campo_pesquisa_returnPressed();

private:
    Ui::consulta_professor *ui;
};

#endif // CONSULTA_PROFESSOR_H
