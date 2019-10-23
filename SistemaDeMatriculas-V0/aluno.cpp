#include "aluno.h"

Aluno::Aluno()
{

}

Aluno::~Aluno()
{

}

Aluno::Aluno(int matricula, int ano)
{
	this->matricula = matricula;
	this->ano = ano;
}

void Aluno::pessoaBase(QString cpf)
{
	Pessoa::setCpf(cpf);
}

void Aluno::pessoaCompleta(QString nome, QString endereco, QString setor, QString celular, QString email)
{
	Pessoa::setNome(nome);
	Pessoa::setEndereco(endereco);
	Pessoa::setSetor(setor);
	Pessoa::setCelular(celular);
	Pessoa::setEmail(email);
}

void Aluno::pessoaCompleta(QString nome, QString endereco, QString setor, QString email)
{
	Pessoa::setNome(nome);
	Pessoa::setEndereco(endereco);
	Pessoa::setSetor(setor);
	Pessoa::setEmail(email);
}
