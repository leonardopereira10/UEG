#ifndef MAPMATRICULAS_H
#define MAPMATRICULAS_H
#include "matricula.h"
#include "qsqldatabase.h"
#include <QSqlQuery>

#include <QSqlQueryModel>

using namespace std;

class PersistMatriculas {
  QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

public:
  PersistMatriculas();
  void ExcluirMatricula(Matricula dto);
  QSqlQueryModel *ListaDisciplinasPorAlunos(Matricula dto);
  QSqlQueryModel *ListarTodasMatriculas();
  void Insere(Matricula matricula);
  bool ExisteAluno(QString idAluno);
  bool ExisteDisciplina(QString idDisciplina);
  bool VerificaMatriculaExiste(Matricula matricula);
  ~PersistMatriculas();
};

#endif // MAPMATRICULAS_H
