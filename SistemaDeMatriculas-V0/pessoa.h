#ifndef PESSOA_H
#define PESSOA_H

#include <QString>
#include <QDate>
#include <QSqlQueryModel>

class Pessoa
{
public:
	static bool validCpf(QString cpf);
	static bool analisaPessoa(QString cpf);

	// Cidades, Estados e Cursos do BD
	static QSqlQueryModel *getEstados();
	static QSqlQueryModel *getCidades(int codEstado);
	static int  getCodCidades(QString nome, int estado);
	static QSqlQueryModel *getCursos();
	static int getCodCurso(QString nome);

protected:
	Pessoa();
	virtual ~Pessoa();

	virtual QString getCpf() const = 0;
	virtual QString getNome() const = 0;
	virtual QDate getDtNascimento() const = 0;
	virtual QString getEndereco() const = 0;
	virtual QString getSetor() const = 0;
	virtual int getCidade() const = 0;
	virtual int getEstado() const = 0;
	virtual QString getTelefone() const = 0;
	virtual QString getEmail() const = 0;

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
