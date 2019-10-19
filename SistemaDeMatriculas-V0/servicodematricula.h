#ifndef SERVICODEMATRICULA_H
#define SERVICODEMATRICULA_H

#include "alunos.h"
#include "disciplinas.h"
#include "professores.h"
#include <initializer_list>

using namespace std;

class ServicoDeMatricula
{
  private:
    initializer_list<Alunos> listaDeAlunos;
    Professores professor;
    QString IDTurma;
    Disciplinas disciplina;

  public:
    ServicoDeMatricula(QString IDTurma, Professores professor,
                       Disciplinas disciplina);
    void AdicionaAlunoNaTurma(Alunos aluno);
};

#endif // SERVICODEMATRICULA_H
