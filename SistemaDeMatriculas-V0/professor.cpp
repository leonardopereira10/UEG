#include "professor.h"
#include "PersistProfessor.h"

Professor::Professor(QString CPF, QString Nome, QString Endereco,
                     QString Setor, int Cidade, int Estado, QString Graduacao, QString Titulacao,
                     QString Telefone, QString Email)
{
    this->cpf = CPF;
    this->nome = Nome;
    this->endereco = Endereco;
    this->setor = Setor;
    this->cidade = Cidade;
    this->estado = Estado;
    this->graduacao = Graduacao;
    this->titulacao = Titulacao;
    this->telefone = Telefone;
    this->email = Email;

}

Professor::Professor(QString CPF, QString Nome)
{
    this->cpf = CPF;
    this->nome = Nome;
}

Professor::~Professor()
{

}

QString Professor::getCpf() const
{
    return Pessoa::cpf;
}

QString Professor::getNome() const
{
    return Pessoa::nome;
}

QString Professor::getEndereco() const
{
    return  Pessoa::endereco;
}

QString Professor::getSetor() const
{
    return Pessoa::setor;
}

int Professor::getCidade() const
{
    return Pessoa::cidade;
}

int Professor::getEstado() const
{
    return Pessoa::estado;
}

QString Professor::getTelefone() const
{
    return Pessoa::telefone;
}

QString Professor::getEmail() const
{
    return Pessoa::email;
}

QString Professor::getGraduacao() const
{
    return graduacao;
}

QString Professor::getTitulacao() const
{
    return titulacao;
}

bool Professor::cadastraProfessor(Professor &professor)
{
    PersistProfessor sqlite;
    return sqlite.cadastraProfessor(professor);
}
QSqlQueryModel *Professor::consultaProfessor(Professor &professor){
    PersistProfessor sqlite;
    return sqlite.consultaProfessor(professor);
}
QSqlQueryModel *Professor::consultaProfessorNome(Professor &professor){
    PersistProfessor sqlite;
    return sqlite.consultaProfessorNome(professor);
}
bool Professor::removeProfessor(Professor &professor){
    PersistProfessor sqlite;
    return sqlite.remove_professor(professor);
}
bool Professor::ExisteDisciplina(Professor &professor){
    PersistProfessor sqlite;
    return sqlite.ExisteDisciplina(professor);
}
QSqlQueryModel *Professor::listarProfessor(){
    PersistProfessor sqlite;
    return sqlite.listarProfessor();
}



