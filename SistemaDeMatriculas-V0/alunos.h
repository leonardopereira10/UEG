#ifndef ALUNOS_H
#define ALUNOS_H

#include "pessoas.h"

class Alunos : protected Pessoas
{
public:
    Alunos(
            QString CPF,
            QString nome,
            QString endereco,
            QString setor,
            QString cidade,
            QString estado,
            QString celular,
            QString email
        );

private:
	int matricula;
	int ano;
};

#endif // ALUNOS_H
