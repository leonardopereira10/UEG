#include "pessoas.h"

Pessoas::Pessoas(){
    this->CPF = nullptr;
    this->nome = nullptr;
    this->endereco = nullptr;
    this->setor = nullptr;
    this->cidade = nullptr;
    this->estado = nullptr;
    this->celular = nullptr;
    this->email = nullptr;
}


Pessoas::Pessoas(QString CPF, QString nome, QString endereco, QString setor,
                 QString cidade, QString estado, QString celular,
                 QString email)
{
  this->CPF = CPF;
  this->nome = nome;
  this->endereco = endereco;
  this->setor = setor;
  this->cidade = cidade;
  this->estado = estado;
  this->celular = celular;
  this->email = email;
}


