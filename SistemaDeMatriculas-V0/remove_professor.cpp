#include "remove_professor.h"
#include "ui_remove_professor.h"

remove_professor::remove_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::remove_professor)
{
    ui->setupUi(this);
    ui->radio_cpf->setChecked(true);
    ui->campo_pesquisa->setInputMask("###.###.###-##");
    ui->campo_pesquisa->setMaximumWidth(110);
    ui->btn_remover->setStyleSheet("background-color: red");
}

remove_professor::~remove_professor()
{
    delete ui;
}

void remove_professor::on_radio_cpf_clicked()
{
    ui->tabela_resultado->clearSpans();
    ui->label_variavel->setText("CPF:");
    ui->label_variavel->adjustSize();
    ui->campo_pesquisa->setInputMask("###.###.###-##");
    ui->campo_pesquisa->setFixedWidth(110);
}

void remove_professor::on_radio_nome_clicked()
{
    ui->tabela_resultado->clearSpans();
    ui->label_variavel->setText("Nome:");
    ui->label_variavel->adjustSize();
    ui->campo_pesquisa->setInputMask("");
    ui->campo_pesquisa->setFixedWidth(300);
}

void remove_professor::on_btn_pesquisar_clicked()
{

}

void remove_professor::on_campo_pesquisa_returnPressed()
{
    ui->btn_pesquisar->clicked();
}

void remove_professor::on_btn_remover_clicked()
{



}

void remove_professor::on_tabela_resultado_doubleClicked(const QModelIndex &index)
{

}
