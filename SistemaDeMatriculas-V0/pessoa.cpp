#include "pessoa.h"

Pessoa::Pessoa()
{
    this->cpf = nullptr;
    this->nome = nullptr;
    this->endereco = nullptr;
    this->setor = nullptr;
    this->cidade = nullptr;
    this->estado = nullptr;
    this->celular = nullptr;
    this->email = nullptr;
}

QString Pessoa::getCpf() const
{
	return cpf;
}

void Pessoa::setCpf(const QString &value)
{
	cpf = value;
}

QString Pessoa::getNome() const
{
	return nome;
}

void Pessoa::setNome(const QString &value)
{
	nome = value;
}

QString Pessoa::getEndereco() const
{
	return endereco;
}

void Pessoa::setEndereco(const QString &value)
{
	endereco = value;
}

QString Pessoa::getSetor() const
{
	return setor;
}

void Pessoa::setSetor(const QString &value)
{
	setor = value;
}

QString Pessoa::getCelular() const
{
	return celular;
}

void Pessoa::setCelular(const QString &value)
{
	celular = value;
}

QString Pessoa::getEmail() const
{
	return email;
}

void Pessoa::setEmail(const QString &value)
{
	email = value;
}

QString Pessoa::getCidade() const
{
    return cidade;
}

void Pessoa::setCidade(const QString &value)
{
    cidade = value;
}

QString Pessoa::getEstado() const
{
    return estado;
}

void Pessoa::setEstado(const QString &value)
{
    estado = value;
}
