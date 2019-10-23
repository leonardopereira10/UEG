#ifndef PESSOA_H
#define PESSOA_H
#include <cpf.h>
#include <QDebug>

class Pessoa
{	
protected:
	Pessoa();

	virtual QString getCpf() const = 0;
	virtual void setCpf(const QString &value) = 0;

	virtual QString getNome() const = 0;
	virtual void setNome(const QString &value) = 0;

	virtual QString getLogradouro() const = 0;
	virtual void setLogradouro(const QString &value) = 0;

	virtual QString getSetor() const = 0;
	virtual void setSetor(const QString &value) = 0;

	virtual QString getCidade() const = 0;
	virtual void setCidade(const QString &value) = 0;

	virtual QString getEstado() const = 0;
	virtual void setEstado(const QString &value) = 0;

	virtual QString getCelular() const = 0;
	virtual void setCelular(const QString &value) = 0;

	virtual QString getEmail() const = 0;
	virtual void setEmail(const QString &value) = 0;

	QString cpf;
	QString nome;
	QString logradouro;
	QString setor;
	QString cidade;
	QString estado;
	QString celular;
	QString email;
};

#endif // PESSOA_H
