#ifndef CURSO_H
#define CURSO_H

#include <initializer_list>
#include "disciplinas.h"

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
