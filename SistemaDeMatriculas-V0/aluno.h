#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"

class Aluno : Pessoa
{
public:
	Aluno();
	Aluno(int matricula, int ano);


private:
	int matricula;
	int ano;
};

#endif // ALUNO_H
