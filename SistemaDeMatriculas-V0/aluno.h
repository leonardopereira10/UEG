#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"

class Aluno : protected Pessoa
{
public:
	Aluno();

	void alunoCompleto(QString cpf, QString nome, QString endereco, QString setor,
		  int estado, int cidade, QString celular, QString email,
		  QString ano, int curso);
	void alunoBase(QString cpf, QString nome, QString endereco, QString setor,
		  int estado, int cidade, QString email,
		  QString ano, int curso);

	virtual ~Aluno();

	QString getCpf() const;
	void setCpf(const QString &value);

	QString getNome() const;
	void setNome(const QString &value);

	QString getEndereco() const;
	void setEndereco(const QString &value);

	QString getSetor() const;
	void setSetor(const QString &value);

	int getCidade() const;
	void setCidade(const int &value);

	int getEstado() const;
	void setEstado(const int &value);

	QString getCelular() const;
	void setCelular(const QString &value);

	QString getEmail() const;
	void setEmail(const QString &value);

	int getMatricula() const;

	QString getAno() const;
	void setAno(QString value);

	int getCurso() const;
	void setCurso(const int &value);

private:
	int matricula; // NOTE: Matricula não está sendo setada/usada
	QString ano;
	int curso;
};

#endif // ALUNO_H
