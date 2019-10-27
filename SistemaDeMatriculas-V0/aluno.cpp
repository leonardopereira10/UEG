#include "aluno.h"

Aluno::Aluno()
{

}

void Aluno::alunoCompleto(QString cpf, QString nome, QString endereco, QString setor, int estado, int cidade, QString celular, QString email, QString ano, int curso)
{
	this->cpf = cpf;
	this->nome = nome;
	this->endereco = endereco;
	this->setor = setor;
	this->estado = estado;
	this->cidade = cidade;
	this->celular = celular;
	this->email = email;
	this->ano = ano;
	this->curso = curso;
}

void Aluno::alunoBase(QString cpf, QString nome, QString endereco, QString setor, int estado, int cidade, QString email, QString ano, int curso)
{
	this->cpf = cpf;
	this->nome = nome;
	this->endereco = endereco;
	this->setor = setor;
	this->estado = estado;
	this->cidade = cidade;
	this->email = email;
	this->ano = ano;
	this->curso = curso;
}

Aluno::~Aluno()
{

}

QString Aluno::getCpf() const
{
	return Pessoa::cpf;
}
void Aluno::setCpf(const QString &value)
{
	Pessoa::cpf = value;
}

QString Aluno::getNome() const
{
	return Pessoa::nome;
}
void Aluno::setNome(const QString &value)
{
	Pessoa::nome = value;
}

QString Aluno::getEndereco() const
{
	return Pessoa::endereco;
}
void Aluno::setEndereco(const QString &value)
{
	Pessoa::endereco = value;
}

QString Aluno::getSetor() const
{
	return Pessoa::setor;
}
void Aluno::setSetor(const QString &value)
{
	Pessoa::setor = value;
}

int Aluno::getCidade() const
{
	return Pessoa::cidade;
}
void Aluno::setCidade(const int &value)
{
	Pessoa::cidade = value;
}

int Aluno::getEstado() const
{
	return Pessoa::estado;
}
void Aluno::setEstado(const int &value)
{
	Pessoa::estado = value;
}

QString Aluno::getCelular() const
{
	return Pessoa::celular;
}
void Aluno::setCelular(const QString &value)
{
	Pessoa::celular = value;
}

QString Aluno::getEmail() const
{
	return Pessoa::email;
}
void Aluno::setEmail(const QString &value)
{
	Pessoa::email = value;
}

int Aluno::getMatricula() const
{
	return matricula;
}

void Aluno::setMatricula(int value)
{
	matricula = value;
}


QString Aluno::getAno() const
{
	return ano;
}

void Aluno::setAno(QString value)
{
	ano = value;
}

int Aluno::getCurso() const
{
	return curso;
}

void Aluno::setCurso(const int &value)
{
	curso = value;
}
