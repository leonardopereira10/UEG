#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <QString>
#include <QDate>
#include "pessoa.h"

class Professor : protected Pessoa
{
public:
    Professor(QString CPF, QString Nome, QString Endereco, QString Setor, int Cidade, int Estado, QString Graduacao, QString Titulacao, QString Telefone, QString Email);
    Professor(QString CPF, QString Nome);

    ~Professor();

    virtual QString getCpf() const ;
    virtual QString getNome() const;
    virtual QString getEndereco() const;
    virtual QString getSetor() const;
    virtual int getCidade() const;
    virtual int getEstado() const;
    virtual QString getTelefone() const;
    virtual QString getEmail() const;

    QString getGraduacao() const;
    QString getTitulacao() const;


    static bool cadastraProfessor(Professor &professor);
    static QSqlQueryModel *consultaProfessor(Professor &professor);
    static QSqlQueryModel *consultaProfessorNome(Professor &professor);
    static bool removeProfessor(Professor &professor);
    static bool ExisteDisciplina(Professor &professor);
private:
    QString graduacao, titulacao;
};

#endif // PROFESSOR_H
