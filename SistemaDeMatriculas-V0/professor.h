#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "pessoa.h"
#include "persistprofessor.h"


class Professor : protected Pessoa
{
public:
    Professor(QString CPF, QString Nome, QDate DtNascimento, QString Endereco,
              QString Setor, int Cidade, int Estado, QString Graduacao, QString Titulacao,
              QString Telefone, QString Email);
    virtual ~Professor();

    virtual QString getCpf() const;
    virtual QString getNome() const;
    virtual QDate getDtNascimento() const;
    virtual QString getEndereco() const;
    virtual QString getSetor() const;
    virtual int getCidade() const;
    virtual int getEstado() const;
    virtual QString getTelefone() const;
    virtual QString getEmail() const;

    QString getGraduacao() const;
    QString getTitulacao() const;


    static bool cadastraProfessor(Professor Professor);
private:
    QString graduacao, titulacao;
};

#endif // PROFESSOR_H
