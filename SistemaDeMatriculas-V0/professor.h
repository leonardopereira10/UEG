#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <pessoa.h>


class Professor : public Pessoa
{
public:
    Professor();
    Professor(QString cpf, QString nome, QString endereco, QString estado, QString cidade, QString setor,
              QString celular, QString email, QString graduacao, QString titulacao);

    QString getGraduacao() const;
    void setGraduacao(const QString &value);

    QString getTitulacao() const;
    void setTitulacao(const QString &value);

private:
    QString graduacao, titulacao;
};

#endif // PROFESSOR_H
