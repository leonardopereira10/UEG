#include "cadastro_professor.h"
#include "ui_cadastro_professor.h"
#include <QMessageBox>


bool cadastro_professor::check_inserted_text_name(QString text){
    if(text.length() < 3)
        return false;
    else
        return true;
}

bool cadastro_professor::check_inserted_text_commun(QString text)
{
    if(text.length() < 5)
        return false;
    else
        return true;
}

bool cadastro_professor::check_inserted_text_phone(QString text)
{
    if(text.length() < 13)
        return false;
    else
        return true;
}

void cadastro_professor::hideall()
{
    ui->aviso_incorreto->hide();
    ui->aviso_cpf->hide();
    ui->campo_cpf->setFocus();
    ui->nome->hide();
    ui->data_de_nascimento->hide();
    ui->selecao_data_de_nascimento->hide();
    ui->endereco->hide();
    ui->setor->hide();
    ui->uf->hide();
    ui->cidade->hide();
    ui->celular->hide();
    ui->email->hide();
    ui->campo_nome->hide();
    ui->campo_endereco->hide();
    ui->campo_setor->hide();
    ui->selecao_estado->hide();
    ui->selecao_cidade->hide();
    ui->graduacao->hide();
    ui->campo_graduacao->hide();
    ui->titulacao->hide();
    ui->selecao_titulacao->hide();
    ui->campo_celular->hide();
    ui->campo_email->hide();
    ui->btn_cadastrar->hide();

}

void cadastro_professor::showall()
{
    ui->nome->show();
    ui->data_de_nascimento->show();
    ui->selecao_data_de_nascimento->show();
    ui->endereco->show();
    ui->setor->show();
    ui->uf->show();
    ui->cidade->show();
    ui->celular->show();
    ui->email->show();
    ui->campo_nome->show();
    ui->campo_endereco->show();
    ui->campo_setor->show();
    ui->selecao_estado->show();
    ui->selecao_cidade->show();
    ui->graduacao->show();
    ui->campo_graduacao->show();
    ui->titulacao->show();
    ui->selecao_titulacao->show();
    ui->campo_celular->show();
    ui->campo_email->show();
    ui->btn_cadastrar->show();

}

cadastro_professor::cadastro_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cadastro_professor)
{
    this->size();
    ui->setupUi(this);
    QPixmap logo_professor (":/imagens/Professores.png");
    ui->logo_professor->setPixmap(logo_professor.scaled(111,109, Qt::KeepAspectRatio));
    hideall();
}

cadastro_professor::~cadastro_professor()
{
    delete ui;
}


void cadastro_professor::on_campo_cpf_returnPressed()
{

}

void cadastro_professor::on_inserir_clicked()
{
    Pessoa::validCpf(ui->campo_cpf->text());
}
