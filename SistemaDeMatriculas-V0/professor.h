#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "pessoa.h"
#include "persistprofessor.h"


class Professor : protected Pessoa
{
public:
    Professor();
    virtual ~Professor();

private:
    QString graduacao, titulacao;
};

#endif // PROFESSOR_H
