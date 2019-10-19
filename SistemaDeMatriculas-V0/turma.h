#ifndef TURMA_H
#define TURMA_H

#include "alunos.h"
#include "disciplinas.h"
#include "professores.h"
#include <list>

using namespace std;

class Turma
{
  private:
    list<Alunos> listaDeAlunos;
    Professores professor;
    QString IDTurma;
    Disciplinas disciplina;

  public:
    Turma(QString IDTurma, Professores professor,
          Disciplinas disciplina, int tamanhoTurma);
    void AdicionaAlunoNaTurma(Alunos aluno);
};

#endif // Turma_H
