#include <list>
#include "turma.h"
#include "alunos.h"

using namespace std;

Turma::Turma(QString IDTurma, Professores professor,
             Disciplinas disciplina, int tamanhoTurma)
{
  this->IDTurma = IDTurma;
  this->professor = professor;
  this->disciplina = disciplina;
  this->listaDeAlunos.resize(tamanhoTurma);
}

void Turma::AdicionaAlunoNaTurma(Alunos aluno)
{
  this->listaDeAlunos.push_front(aluno);
  this->listaDeAlunos.sort(aluno.getNome());
}
