#ifndef PESSOA_H
#define PESSOA_H
#include <cpf.h>
#include <QDebug>

class Pessoa
{
protected:
	Pessoa();
    virtual ~Pessoa();

	virtual QString getCpf() const = 0;
	virtual void setCpf(const QString &value) = 0;

	virtual QString getNome() const = 0;
	virtual void setNome(const QString &value) = 0;

	virtual QString getEndereco() const = 0;
	virtual void setEndereco(const QString &value) = 0;

	virtual QString getSetor() const = 0;
	virtual void setSetor(const QString &value) = 0;

	virtual QString getCelular() const = 0;
	virtual void setCelular(const QString &value) = 0;

	virtual QString getEmail() const = 0;
	virtual void setEmail(const QString &value) = 0;

    virtual QString getData_de_nascimento() const = 0;
    virtual void setData_de_nascimento(const QString &value) = 0;

	virtual void pessoaCompleta(QString nome, QString endereco, QString setor, QString celular, QString email) = 0;
	virtual void pessoaCompleta(QString nome, QString endereco, QString setor, QString email) = 0;

	QString cpf;
	QString nome;
    QString data_de_nascimento;
	QString endereco;
	QString setor;
	QString celular;
	QString email;
};

#endif // PESSOA_H
