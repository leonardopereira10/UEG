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

int Aluno::getMatricula() const
{
	return matricula;
}

void Aluno::setMatricula(int value)
{
	matricula = value;
}
