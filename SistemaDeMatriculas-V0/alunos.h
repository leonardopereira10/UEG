#ifndef ALUNOS_H
#define ALUNOS_H

#include "pessoas.h"

class Alunos : protected Pessoas
{
  public:
    Alunos(QString matricula, QString CPF, QString nome, QString endereco,
           QString setor, QString cidade, QString estado, QString celular,
           QString email, QString ano);

  private:
    QString matricula;
    int ano;
};

#endif // ALUNOS_H
