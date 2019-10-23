#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "pessoa.h"


class Professor : public Pessoa
{
public:
    Professor();
private:
    QString graduacao, titulacao;
};

#endif // PROFESSOR_H
