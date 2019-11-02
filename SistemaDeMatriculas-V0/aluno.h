#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"
#include "mapaluno.h"

// NOTE: Atributo celular definido como not null
// TODO: Verificar se aluno já cursa ou cursou o respectivo curso

class Aluno : protected Pessoa
{
public:
	Aluno(QString cpf, QString nome, QString endereco, QString setor,
			int cidade, int estado, QString telefone, QString email,
			QDate ano, int curso);
	virtual ~Aluno();

	virtual bool analisaPessoa(QString cpf);
	bool analisaCurso(int idCurso);

	int getMatricula() const;
	void setMatricula(int value);

private:
	int matricula;
	QDate ano;
	int curso;
};

#endif // ALUNO_H
