#include "pessoas.h"

Pessoas::Pessoas(
                    QString CPF,
                    QString nome,
                    QString endereco,
                    QString setor,
                    QString cidade,
                    QString estado,
                    QString celular,
                    QString email
                )
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
