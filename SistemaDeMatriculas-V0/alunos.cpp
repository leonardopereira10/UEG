#include "alunos.h"

Alunos::Alunos(
                QString matricula,
                QString CPF,
                QString nome,
                QString endereco,
                QString setor,
                QString cidade,
                QString estado,
                QString celular,
                QString email,
                QString ano
                ) : Pessoas(CPF, nome, endereco, setor, cidade, estado, celular, email)
{
    this->matricula = matricula;
}
