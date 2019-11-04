#include "persistaluno.h"
#include "aluno.h"

Aluno::Aluno(QString cpf, QString nome, QString endereco, QString setor,
			 int cidade, int estado, QString telefone, QString email,
			 QDate ano, int curso)
{
	this->cpf = cpf;
	this->nome = nome;
	this->endereco = endereco;
	this->setor = setor;
	this->cidade = cidade;
	this->estado = estado;
	this->telefone = telefone;
	this->email = email;
	this->ano = ano;
	this->curso = curso;
}

Aluno::~Aluno()
{

}

void Aluno::setMatricula(QString cpf)
{
	PersistAluno Sqlite;
	matricula = Sqlite.getMatricula_fromDB(cpf);
}

int Aluno::getMatricula() const
{
	return matricula;
}

QDate Aluno::getAno() const
{
	return ano;
}

int Aluno::getCurso() const
{
	return curso;
}

QString Aluno::getCpf() const
{
	return Pessoa::cpf;
}

QString Aluno::getNome() const
{
	return Pessoa::nome;
}

QDate Aluno::getDtNascimento() const
{
	return Pessoa::dtNascimento;
}

QString Aluno::getEndereco() const
{
	return Pessoa::endereco;
}

QString Aluno::getSetor() const
{
	return Pessoa::setor;
}

int Aluno::getCidade() const
{
	return Pessoa::cidade;
}

int Aluno::getEstado() const
{
	return Pessoa::estado;
}

QString Aluno::getTelefone() const
{
	return Pessoa::telefone;
}

QString Aluno::getEmail() const
{
	return Pessoa::email;
}

bool Aluno::cadastraAluno(Aluno aluno)
{
	PersistAluno Sqlite;
	return Sqlite.cadastraAluno(aluno);
}












