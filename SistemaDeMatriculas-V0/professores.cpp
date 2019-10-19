#include "professores.h"

//Construtor Default
Professores::Professores(){
    this->CPF = nullptr;
    this->nome = nullptr;
    this->endereco = nullptr;
    this->setor = nullptr;
    this->cidade = nullptr;
    this->estado = nullptr;
    this->celular = nullptr;
    this->email = nullptr;
    this->graduacao = nullptr;
    this->titulo = nullptr;
}

//Construtor com parâmetros
Professores::Professores (QString cpf_p, QString nome_p, QString endereco_p,
                          QString setor_p, QString cidade_p, QString estado_p,
                          QString celular_p, QString email_p, QString graduacao, QString titulo){

    this->CPF = cpf_p;
    this->nome = nome_p;
    this->endereco = endereco_p;
    this->setor = setor_p;
    this->cidade = cidade_p;
    this->estado = estado_p;
    this->celular = celular_p;
    this->email = email_p;
    this->graduacao = graduacao;
    this->titulo = titulo;
}
