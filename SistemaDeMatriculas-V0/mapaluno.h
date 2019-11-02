#ifndef MAPALUNO_H
#define MAPALUNO_H

#include <QtSql>
#include <QMessageBox>
#include "aluno.h"
using namespace std;

class MapAluno
{
public:
	MapAluno();
	~MapAluno();

	bool cadastraAluno(Aluno *aluno);

	bool analisaPessoa(QString cpf);
	bool analisaAluno(int matricula);

	QSqlQueryModel consultaAlunoCpf(QString cpf);
	QSqlQueryModel consultaAlunoNome(QString nome);
	QSqlQueryModel consultaAlunoMatricula(int matricula);

	bool removeAluno(QString *cpf);
	bool removeAluno(int matricula);

	QSqlQueryModel listaAlunos(QString nome);

private:
	QSqlDatabase *db;
	QSqlQuery *query;
};

#endif // MAPALUNO_H
