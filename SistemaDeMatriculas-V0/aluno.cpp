#include "aluno.h"

Aluno::Aluno()
{

}

Aluno::~Aluno()
{

}


// Getter and setter CPF ---------------
QString Aluno::getCpf() const
{
	return Pessoa::cpf;
}
void Aluno::setCpf(const QString &value)
{
	Pessoa::cpf = value;
}


// Getter and setter NOME ---------------
QString Aluno::getNome() const
{
	return Pessoa::nome;
}
void Aluno::setNome(const QString &value)
{
	Pessoa::nome = value;
}


// Getter and setter LOGRADOURO ---------------
QString Aluno::getLogradouro() const
{
	return Pessoa::logradouro;
}
void Aluno::setLogradouro(const QString &value)
{
	Pessoa::logradouro = value;
}


// Getter and setter SETOR ---------------
QString Aluno::getSetor() const
{
	return Pessoa::setor;
}
void Aluno::setSetor(const QString &value)
{
	Pessoa::setor = value;
}


// Getter and setter CIDADE ---------------
QString Aluno::getCidade() const
{
	return Pessoa::cidade;
}
void Aluno::setCidade(const QString &value)
{
	Pessoa::cidade = value;
}


// Getter and setter ESTADO ---------------
QString Aluno::getEstado() const
{
	return Pessoa::estado;
}
void Aluno::setEstado(const QString &value)
{
	Pessoa::estado = value;
}


// Getter and setter CELULAR ---------------
QString Aluno::getCelular() const
{
	return Pessoa::celular;
}
void Aluno::setCelular(const QString &value)
{
	Pessoa::celular = value;
}


// Getter and setter EMAIL ---------------
QString Aluno::getEmail() const
{
	return Pessoa::email;
}
void Aluno::setEmail(const QString &value)
{
	Pessoa::email = value;
}
