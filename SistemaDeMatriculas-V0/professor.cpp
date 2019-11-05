#include "professor.h"
#include "persistprofessor.h"

Professor::Professor(QString CPF, QString Nome, QDate DtNascimento, QString Endereco,
                     QString Setor, int Cidade, int Estado, QString Graduacao, QString Titulacao,
                     QString Telefone, QString Email)
{
    this->cpf = CPF;
    this->nome = Nome;
    this->dtNascimento = DtNascimento;
    this->endereco = Endereco;
    this->setor = Setor;
    this->cidade = Cidade;
    this->estado = Estado;
    this->graduacao = Graduacao;
    this->titulacao = Titulacao;
    this->telefone = Telefone;
    this->email = Email;

}

Professor::~Professor()
{

}

QString Professor::getCpf() const
{
    return Pessoa::getCpf();
}

QString Professor::getNome() const
{
    return Pessoa::getNome();
}

QDate Professor::getDtNascimento() const
{
    return Pessoa::getDtNascimento();
}

QString Professor::getEndereco() const
{
    return  Pessoa::getEndereco();
}

QString Professor::getSetor() const
{
    return Pessoa::getSetor();
}

int Professor::getCidade() const
{
    return Pessoa::getCidade();
}

int Professor::getEstado() const
{
    return Pessoa::getEstado();
}

QString Professor::getTelefone() const
{
    return Pessoa::getTelefone();
}

QString Professor::getEmail() const
{
    return Pessoa::getEmail();
}

QString Professor::getGraduacao() const
{
    return graduacao;
}

QString Professor::getTitulacao() const
{
    return titulacao;
}

bool Professor::cadastraProfessor(Professor professor)
{
    PersistProfessor sqlite;
    return sqlite.cadastraProfessor(professor);
}



