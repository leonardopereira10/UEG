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

void Curso::setIdCurso(int value)
{
    idCurso = value;
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

bool Curso::removeCurso(int idCurso)
{
    PersistCurso sqlite;
    return sqlite.removeCurso(idCurso);
}

QSqlQueryModel *Curso::consultarCurso(int idCurso)
{
    PersistCurso sqlite;
    return sqlite.consultaCurso(idCurso);
}

QSqlQueryModel *Curso::listarCurso()
{
    PersistCurso sqlite;
    return  sqlite.listarCurso();
}


