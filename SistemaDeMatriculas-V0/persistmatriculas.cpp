#include "persistmatriculas.h"

PersistMatriculas::PersistMatriculas() { db.setDatabaseName("Projeto.db"); }

void PersistMatriculas::ExcluirMatricula(Matricula dto) {
  db.open();
  QSqlQuery query(db);
  query.prepare("delete from Matriculas where FK_IDAluno = " + QString::number(dto.getCodAluno()) +
                " and FK_IDDisciplina = " + QString::number(dto.getCodDisciplina()) +
                " and Ano = " + QString::number(dto.getAno()) + " and Semestre = " + QString::number(dto.getSemestre()));
  query.exec();
  query.clear();
  db.close();
}

QSqlQueryModel *PersistMatriculas::ListaDisciplinasPorAlunos(Matricula dto) {
  db.open();
  QSqlQueryModel *model = new QSqlQueryModel();
  QSqlQuery query(db);
  query.prepare("select * from Matriculas where FK_IDAluno = " + QString::number(dto.getCodAluno()));
  query.exec();
  model->setQuery(query);
  db.close();
  return model;
}

void PersistMatriculas::Insere(Matricula matricula) {

  db.open();
  QSqlQuery query(db);
  query.prepare(
      "insert into Matriculas (FK_IDAluno, FK_IDDisciplina, Ano, Semestre) values(" +
      QString::number(matricula.getCodAluno()) + ", " + QString::number(matricula.getCodDisciplina()) + ", " +
      QString::number(matricula.getAno()) + ", " + QString::number(matricula.getSemestre()) + ")");
  query.exec();
  query.clear();
  db.close();
}

bool PersistMatriculas::ExisteAluno(QString idAluno)
{
    bool retorno = false;
    db.open();
    QSqlQuery query(db);
    query.prepare("select Matricula from Alunos where Matricula = "+ idAluno);
    query.exec();
    if(query.next()){
        retorno = true;
    }
    query.clear();
    db.close();
    return retorno;
}

QSqlQueryModel *PersistMatriculas::ListarTodasMatriculas() {
  db.open();
  QSqlQueryModel *model = new QSqlQueryModel();
  QSqlQuery query(db);
  query.prepare("select * from Matriculas");
  query.exec();
  model->setQuery(query);
  db.close();
  return model;
}

bool PersistMatriculas::ExisteDisciplina(QString idDisciplina) {
    bool retorno = false;
    db.open();
    QSqlQuery query(db);
    query.prepare("select IDDisciplina from Disciplinas where IDDisciplina = " + idDisciplina);
    query.exec();
    if(query.next()){
        retorno = true;
    }
    query.clear();
    db.close();
    return retorno;
}

bool PersistMatriculas::VerificaMatriculaExiste(Matricula matricula)
{
    bool retorno = false;
    db.open();
    QSqlQuery query(db);
    query.prepare("select FK_IDDisciplina from Matriculas where FK_IDDisciplina = " + QString::number(matricula.getCodDisciplina()) + " and FK_IDAluno = " + QString::number(matricula.getCodAluno()) + " and Semestre = " + QString::number(matricula.getSemestre()) + " and Ano = " + QString::number(matricula.getAno()));
    query.exec();
    if(query.next()){
        retorno = true;
    }
    query.clear();
    db.close();
    return retorno;
}

PersistMatriculas::~PersistMatriculas() {}
