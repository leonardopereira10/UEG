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
public:
    static bool validCpf(QString cpf);

};

#endif // PESSOA_H
