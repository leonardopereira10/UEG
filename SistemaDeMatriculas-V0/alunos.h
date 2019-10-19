#ifndef ALUNOS_H
#define ALUNOS_H

#include "pessoas.h"

class Alunos : protected Pessoas
{
  public:
    Alunos();
    Alunos(QString a_matricula, QString a_CPF, QString a_nome, QString a_endereco,
           QString a_setor, QString a_cidade, QString a_estado, QString a_celular,
           QString a_email, int a_ano);

  private:
    QString matricula;
    int ano;
};

#endif // ALUNOS_H
