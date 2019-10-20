#ifndef PESSOA_H
#define PESSOA_H
#include <cpf.h>
#include <QDebug>

class Pessoa
{
protected:
	Pessoa();

	QString getCpf() const;
	void setCpf(const QString &value);

	QString getNome() const;
	void setNome(const QString &value);

	QString getEndereco() const;
	void setEndereco(const QString &value);

	QString getSetor() const;
	void setSetor(const QString &value);

	QString getCelular() const;
	void setCelular(const QString &value);

	QString getEmail() const;
	void setEmail(const QString &value);

	virtual void pessoaBase(QString cpf) = 0;
	virtual void pessoaCompleta(QString nome, QString endereco, QString setor, QString celular, QString email) = 0;
	virtual void pessoaCompleta(QString nome, QString endereco, QString setor, QString email) = 0;



private:
	QString cpf;
	QString nome;
	QString endereco;
	QString setor;
	QString celular;
	QString email;
};

#endif // PESSOA_H