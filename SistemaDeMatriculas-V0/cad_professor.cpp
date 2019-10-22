#include "cad_professor.h"
#include "ui_cad_professor.h"

cad_professor::cad_professor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cad_professor)
{
    ui->setupUi(this);
    QPixmap logo_professor_cad (":/imagens/Professores.png");
    ui->logo_professor_cad->setPixmap(logo_professor_cad);

}

cad_professor::~cad_professor()
{
    delete ui;
}
cad_professor::cad_professor(QString cpf, QString nome, QString endereco, QString estado, QString cidade, QString setor,
                             QString celular, QString email, QString graduacao, QString titulacao){
    this->setCpf(cpf);
    this->setNome(nome);
    this->setEndereco(endereco);
    this->setEstado(estado);
    this->setCidade(cidade);
    this->setSetor(setor);
    this->setCelular(celular);
    this->setEmail(email);
    this->graduacao = graduacao;
    this->titulacao = titulacao;
}

void cad_professor::on_btn_cancelar_clicked()
{
    this->close();

}

void cad_professor::on_campo_nome_returnPressed()
{
    ui->data_de_nascimento->setFocus();
}
