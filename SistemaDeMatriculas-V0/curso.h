#ifndef CURSO_H
#define CURSO_H

#include "disciplinas.h"
#include <initializer_list>

using namespace std;

class Curso
{
    initializer_list<Disciplinas> matrizCurricular;
    QString nomeCurso;
    QString tempoDeDuracao;

  public:
    Curso();
};

#endif // CURSO_H
