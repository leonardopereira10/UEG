#ifndef ALUNOS_H
#define ALUNOS_H

#include "pessoas.h"

class Alunos : Pessoas
{
public:
    Alunos();

private:
	int matricula;
	int ano;
};

#endif // ALUNOS_H
