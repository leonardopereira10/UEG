#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"

class Aluno : protected Pessoa
{
public:
	Aluno();
	virtual ~Aluno();

	QString getCpf() const;
	void setCpf(const QString &value);

	QString getNome() const;
	void setNome(const QString &value);

	QString getLogradouro() const;
	void setLogradouro(const QString &value);

	QString getSetor() const;
	void setSetor(const QString &value);

	QString getCidade() const;
	void setCidade(const QString &value);

	QString getEstado() const;
	void setEstado(const QString &value);

	QString getCelular() const;
	void setCelular(const QString &value);

	QString getEmail() const;
	void setEmail(const QString &value);

private:
	int matricula;
	int ano;
};

#endif // ALUNO_H
