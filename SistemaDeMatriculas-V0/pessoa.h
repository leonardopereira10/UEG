#ifndef PESSOA_H
#define PESSOA_H

// TODO: Integrar método validCpf() na classe Pessoa como static

#include <QString>
#include <QDate>

class Pessoa
{
protected:
	Pessoa();
	virtual ~Pessoa();

	static bool validCpf(QString cpf);
	virtual bool analisaPessoa(QString cpf) = 0;

	QString cpf;
	QString nome;
	QDate dtNascimento;
	QString endereco;
	QString setor;
	int cidade;
	int estado;
	QString telefone;
	QString email;
};

#endif // PESSOA_H
