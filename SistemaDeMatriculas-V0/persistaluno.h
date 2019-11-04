#ifndef PERSISTALUNO_H
#define PERSISTALUNO_H

#include <QtSql>
#include "aluno.h"
using namespace std;

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

	bool cadastraAluno(Aluno &aluno);
	int getMatricula_fromDB(QString &cpf);

//	QSqlQueryModel *consultaAlunoCpf(QString &cpf);
//	QSqlQueryModel *consultaAlunoNome(QString &nome);
//	QSqlQueryModel *consultaAlunoMatricula(int &matricula);

//	bool removeAluno(QString &cpf);
//	bool removeAluno(int &matricula);

//	QSqlQueryModel *listaAlunos(QString &nome);

private:
	QSqlDatabase db;
};

#endif // PERSISTALUNO_H
