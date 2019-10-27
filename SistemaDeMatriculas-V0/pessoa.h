#ifndef PESSOA_H
#define PESSOA_H
#include <cpf.h>

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

	virtual int getCidade() const = 0;
	virtual void setCidade(const int &value) = 0;

	virtual int getEstado() const = 0;
	virtual void setEstado(const int &value) = 0;

	virtual QString getCelular() const = 0;
	virtual void setCelular(const QString &value) = 0;

	virtual QString getEmail() const = 0;
	virtual void setEmail(const QString &value) = 0;

	QString cpf;
	QString nome;
	QString endereco;
	QString setor;
	int cidade;
	int estado;
	QString celular;
	QString email;
};

#endif // PESSOA_H
