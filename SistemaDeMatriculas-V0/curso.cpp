#include "curso.h"
#include "persistcurso.h"

QString Curso::getNome() const
{
    return nome;
}

double Curso::getDuracao() const
{
    return duracao;
}

int Curso::getIdCurso() const
{
    return idCurso;
}

Curso::Curso()
{

}

Curso::Curso(QString nome, double duracao, int idCurso)  //Inicialização do objeto
{
    this->nome=nome;
    this->duracao=duracao;
    this->idCurso=idCurso;
}

bool Curso::cadCurso(Curso curso)
{
    PersistCurso sqlite;
    return  sqlite.cadastrarCurso(curso);
}

bool Curso::analisaCurso(int idCurso)
{
    PersistCurso sqlite;
    return  sqlite.analisaCurso(idCurso);
}



