#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "pessoa.h"


class Professor : public Pessoa, public Cpf
{
public:
    Professor();
    virtual ~Professor();
private:
    QString graduacao, titulacao;
};

#endif // PROFESSOR_H
