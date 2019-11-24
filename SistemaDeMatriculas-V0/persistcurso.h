#ifndef PERSISTCURSO_H
#define PERSISTCURSO_H
#include "curso.h"
#include <QtSql>


class PersistCurso
{
private:
    QSqlDatabase db;

public:
    PersistCurso();
    ~PersistCurso();

    bool cadastrarCurso(Curso &curso);
    bool analisaCurso(int &idCurso);
    bool removeCurso(int &idCurso);
    QSqlQueryModel *consultaCurso(int &idCurso);
    QSqlQueryModel *listarCurso();
};

#endif // PERSISTCURSO_H
