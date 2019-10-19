#ifndef TURMA_H
#define TURMA_H

#include "alunos.h"
#include "disciplinas.h"
#include "professores.h"

using namespace std;

class Turma
{
  private:
    Professores professor;
    QString IDTurma;
    Disciplinas disciplina;

  public:
    Turma(QString IDTurma, Professores professor,
          Disciplinas disciplina);
};

#endif // Turma_H
