#include "consulta_professor.h"
#include "ui_consulta_professor.h"

consulta_professor::consulta_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::consulta_professor)
{
    ui->setupUi(this);
    this->showMaximized();
    ui->radio_cpf->setChecked(true);
    ui->campo_pesquisa->setInputMask("###.###.###-##");
    ui->campo_pesquisa->setMaximumWidth(110);
}

consulta_professor::~consulta_professor()
{
    delete ui;
}

void consulta_professor::on_radio_cpf_clicked()
{
    ui->tabela_resultado->clearSpans();
    ui->label_variavel->setText("CPF:");
    ui->label_variavel->adjustSize();
    ui->campo_pesquisa->setInputMask("###.###.###-##");
    ui->campo_pesquisa->setFixedWidth(110);
}

void consulta_professor::on_radio_nome_clicked()
{
    ui->tabela_resultado->clearSpans();
    ui->label_variavel->setText("Nome:");
    ui->label_variavel->adjustSize();
    ui->campo_pesquisa->setInputMask("");
    ui->campo_pesquisa->setFixedWidth(300);

}

void consulta_professor::on_btn_pesquisar_clicked()
{

}

void consulta_professor::on_campo_pesquisa_returnPressed()
{
    ui->btn_pesquisar->clicked();
}
