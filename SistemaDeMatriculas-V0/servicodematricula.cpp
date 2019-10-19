#include "servicodematricula.h"
#include "alunos.h"

ServicoDeMatricula::ServicoDeMatricula(QString IDTurma, Professores professor,
                                       Disciplinas disciplina)
{
  this->IDTurma = IDTurma;
  this->professor = professor;
  this->disciplina = disciplina;
}

void ServicoDeMatricula::AdicionaAlunoNaTurma(Alunos aluno)
{
  this->listaDeAlunos.Add(aluno);
}
