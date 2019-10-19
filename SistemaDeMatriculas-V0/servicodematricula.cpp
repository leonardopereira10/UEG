#include <list>
#include "servicodematricula.h"
#include "alunos.h"

using namespace std;

ServicoDeMatricula::ServicoDeMatricula(QString IDTurma, Professores professor,
                                       Disciplinas disciplina, int tamanhoTurma)
{
  this->IDTurma = IDTurma;
  this->professor = professor;
  this->disciplina = disciplina;
  this->listaDeAlunos.resize(tamanhoTurma);
}

void ServicoDeMatricula::AdicionaAlunoNaTurma(Alunos aluno)
{
  this->listaDeAlunos.push_front(aluno);
  this->listaDeAlunos.sort(aluno.getNome());
}
