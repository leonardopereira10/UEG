#include "turma.h"
#include "alunos.h"

using namespace std;

Turma::Turma(QString IDTurma, Professores professor,Disciplinas disciplina)
{
  this->IDTurma = IDTurma;
  this->professor = professor;
  this->disciplina = disciplina;
}

