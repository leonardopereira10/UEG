#include "cad_professores.h"
#include "ui_cad_professores.h"

Cad_Professores::Cad_Professores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cad_Professores)
{
    ui->setupUi(this);
}

Cad_Professores::~Cad_Professores()
{
    delete ui;
}

QString Cad_Professores::getGraducao() const
{
    return graducao;
}

void Cad_Professores::setGraducao(const QString &value)
{
    graducao = value;
}

QString Cad_Professores::getTitulacao() const
{
    return titulacao;
}

void Cad_Professores::setTitulacao(const QString &value)
{
    titulacao = value;
}

Cad_Professores::Cad_Professores(){
    this->CPF = nullptr;
    this->nome = nullptr;
    this->endereco = nullptr;
    this->setor = nullptr;
    this->cidade = nullptr;
    this->estado = nullptr;
    this->celular = nullptr;
    this->email = nullptr;
    this->graducao = nullptr;
    this->titulacao = nullptr;
}
Cad_Professores::Cad_Professores(QString CPF, QString nome, QString endereco, QString setor,
                                 QString cidade, QString estado, QString celular, QString email,
                                 QString graducao, QString titulacao){
    this->CPF = CPF;
    this->nome = nome;
    this->endereco = endereco;
    this->setor = setor;
    this->cidade = cidade;
    this->estado = estado;
    this->celular = celular;
    this->email = email;
    this->graducao = graducao;
    this->titulacao = titulacao;

}
