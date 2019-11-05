#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"

class Aluno : protected Pessoa
{
public:
	Aluno();
	Aluno(int matricula);
	Aluno(QString cpf, QString nome);
	Aluno(QString cpf, QString nome, QString endereco, QString setor,
			int cidade, int estado, QString telefone, QString email,
			QDate ano, int curso);
	virtual ~Aluno();

	void setMatricula(QString cpf);
	int getMatricula() const;
	QDate getAno() const;
	int getCurso() const;
	virtual QString getCpf() const;
	virtual QString getNome() const;
	virtual QDate getDtNascimento() const;
	virtual QString getEndereco() const;
	virtual QString getSetor() const;
	virtual int getCidade() const;
	virtual int getEstado() const;
	virtual QString getTelefone() const;
	virtual QString getEmail() const;

	static bool analisaAluno(int matricula);
	static bool cadastraAluno(Aluno aluno);

	static QSqlQueryModel *consultaAlunoCpf(Aluno alunoCpf);
	static QSqlQueryModel *consultaAlunoNome(Aluno alunoNome);
	static QSqlQueryModel *consultaAlunoMatricula(Aluno alunoMatricula);

private:
	int matricula;
	QDate ano;
	int curso;
};

#endif // ALUNO_H
