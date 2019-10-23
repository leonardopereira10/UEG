#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"

class Aluno : protected Pessoa
{
public:
	Aluno();
	virtual ~Aluno();

	Aluno(int matricula, int ano);

	void pessoaBase(QString cpf);
	void pessoaCompleta(QString nome, QString endereco, QString setor, QString celular, QString email);
	void pessoaCompleta(QString nome, QString endereco, QString setor, QString email);

	QString cadAluno();
	QString consultAluno();
	void removeAluno();

private:
	int matricula;
	int ano;
};

#endif // ALUNO_H
