#include "professor.h"

Professor::Professor()
{
    this->setCpf(nullptr);
    this->setNome(nullptr);
    this->setEndereco(nullptr);
    this->setEstado(nullptr);
    this->setCidade(nullptr);
    this->setSetor(nullptr);
    this->setCelular(nullptr);
    this->setEmail(nullptr);
    this->graduacao = nullptr;
    this->titulacao = nullptr;
}

Professor::Professor(QString cpf, QString nome, QString endereco, QString estado, QString cidade, QString setor,
                          QString celular, QString email, QString graduacao, QString titulacao){
    this->setCpf(cpf);
    this->setNome(nome);
    this->setEndereco(endereco);
    this->setEstado(estado);
    this->setCidade(cidade);
    this->setSetor(setor);
    this->setCelular(celular);
    this->setEmail(email);
    this->graduacao = graduacao;
    this->titulacao = titulacao;
}

QString Professor::getGraduacao() const
{
    return graduacao;
}

void Professor::setGraduacao(const QString &value)
{
    graduacao = value;
}

QString Professor::getTitulacao() const
{
    return titulacao;
}

void Professor::setTitulacao(const QString &value)
{
    titulacao = value;
}
