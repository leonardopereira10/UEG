#include "persistmatriculas.h"

PersistMatriculas::PersistMatriculas() { db.setDatabaseName("Projeto.db"); }

void PersistMatriculas::ExcluirMatricula(Matricula &dto) {
    db.open();
    QSqlQuery query(db);
    query.prepare("delete from Matriculas where FK_IDAluno = :IDAluno and FK_IDDisciplina = :IDDisciplina and Ano = :Ano and Semestre = :Semestre");
    query.bindValue(":IDAluno", dto.getCodAluno());
    query.bindValue(":IDDisciplina", dto.getCodDisciplina());
    query.bindValue(":Ano", dto.getAno());
    query.bindValue(":Semestre", dto.getSemestre());
    query.exec();
    query.clear();
    db.close();
}

QSqlQueryModel *PersistMatriculas::ListaDisciplinasPorAlunos(Matricula &dto) {
    db.open();
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query(db);
    query.prepare("select Matriculas.IDMatricula, Pessoas.Nome, Disciplinas.Disciplina, Matriculas.Ano, Matriculas.Semestre, Matriculas.Nota1, Matriculas.Nota2, Matriculas.NotaFinal from Matriculas, Alunos, Disciplinas, Pessoas where Alunos.FK_CPF = Pessoas.CPF and Disciplinas.IDDisciplina = Matriculas.FK_IDDisciplina and Matriculas.FK_IDAluno = Alunos.Matricula and FK_IDAluno = :IDAluno ORDER by Matriculas.Ano and Matriculas.Semestre");
    query.bindValue(":IDAluno", dto.getCodAluno());
    query.exec();
    model->setQuery(query);
    db.close();
    return model;
}

void PersistMatriculas::Insere(Matricula &dto) {

    db.open();
    QSqlQuery query(db);
    query.prepare(
                "insert into Matriculas (FK_IDAluno, FK_IDDisciplina, Ano, Semestre) values(:IDAluno, :IDDisciplina, :Ano, :Semestre)");
    query.bindValue(":IDAluno", dto.getCodAluno());
    query.bindValue(":IDDisciplina", dto.getCodDisciplina());
    query.bindValue(":Ano", dto.getAno());
    query.bindValue(":Semestre", dto.getSemestre());
    query.exec();
    query.clear();
    db.close();
}

bool PersistMatriculas::AlunoPossuiMatricula(int &MatriculaAluno)
{
    bool result = true;
    QSqlQuery query(db);
    db.open();
    query.prepare("SELECT COUNT(IDMatricula) "
                  "FROM Matriculas "
                  "WHERE Matriculas.FK_IDAluno=:matricula");
    query.bindValue(":matricula", MatriculaAluno);
    if(!query.exec())
        qDebug() << "PersistMatriculas::AlunoPossuiMatricula():\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
    query.first();
    if(query.value(0).toInt() == 0)
        result = false;
    db.close();
    return result;
}

bool PersistMatriculas::ExisteAluno(QString &idAluno)
{
    bool retorno = false;
    db.open();
    QSqlQuery query(db);
    query.prepare("select Matricula from Alunos where Matricula = :IDAluno");
    query.bindValue(":IDAluno",idAluno);
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
    query.prepare("select Alunos.Matricula, "
                          "Pessoas.Nome, "
                          "Disciplinas.Disciplina, "
                          "Matriculas.Ano, "
                          "Matriculas.Semestre "
                  "from Matriculas,"
                          " Alunos,"
                          " Disciplinas,"
                          " Pessoas "
                  "where Alunos.FK_CPF = Pessoas.CPF "
                          "and Disciplinas.IDDisciplina = Matriculas.FK_IDDisciplina "
                          "and Matriculas.FK_IDAluno = Alunos.Matricula "
                  "ORDER by Alunos.Matricula");
    query.exec();
    model->setQuery(query);
    db.close();
    return model;
}

bool PersistMatriculas::ExisteDisciplina(QString &idDisciplina) {
    bool retorno = false;
    db.open();
    QSqlQuery query(db);
    query.prepare("select IDDisciplina from Disciplinas where IDDisciplina = :idDisciplina");
    query.bindValue(":idDisciplina", idDisciplina);
    query.exec();
    if(query.next()){
        retorno = true;
    }
    query.clear();
    db.close();
    return retorno;
}

bool PersistMatriculas::VerificaMatriculaExiste(Matricula &dto)
{
    bool retorno = false;
    db.open();
    QSqlQuery query(db);
    query.prepare("select FK_IDDisciplina from Matriculas where FK_IDDisciplina = :IDDisciplina and FK_IDAluno = :IDAluno and Semestre = :Semestre and Ano = :Ano");
    query.bindValue(":IDAluno", dto.getCodAluno());
    query.bindValue(":IDDisciplina", dto.getCodDisciplina());
    query.bindValue(":Ano", dto.getAno());
    query.bindValue(":Semestre", dto.getSemestre());
    query.exec();
    if(query.next()){
        retorno = true;
    }
    query.clear();
    db.close();
    return retorno;
}

PersistMatriculas::~PersistMatriculas() {}
