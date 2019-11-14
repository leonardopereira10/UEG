#ifndef PERSISTALUNO_H
#define PERSISTALUNO_H

#include <QtSql>
#include "aluno.h"

class PersistAluno
{
public:
	PersistAluno();
	~PersistAluno();

	QSqlQueryModel *getEstados();
	QSqlQueryModel *getCidades(int &codEstado);
	int  getCodCidades(QString &nome, int &estado);
	QSqlQueryModel *getCursos();
	int getCodCurso(QString &nome);

	bool analisaPessoa(QString &cpf);
	bool analisaAluno(int &matricula);

	bool cadastraAluno(Aluno &aluno);
	int getMatricula_fromDB(QString &cpf);

	QSqlQueryModel *consultaAlunoCpf(Aluno &alunoCpf);
	QSqlQueryModel *consultaAlunoNome(Aluno &alunoNome);
	QSqlQueryModel *consultaAlunoMatricula(Aluno &alunoMatricula);

	bool removeAluno(int &matricula);

	QSqlQueryModel *listaAlunos(QString &coluna, QString &ordem);

private:
	QSqlDatabase db;
};

#endif // PERSISTALUNO_H
