#include "persistcurso.h"

PersistCurso::PersistCurso()
{
    if(QSqlDatabase::isDriverAvailable("QSQLITE")) {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("/home/samea/UEG/SistemaDeMatriculas-V0/Projeto.db");
    }
    else {
           qDebug() <<"PersistCurso::PersistCurso(): " << db.lastError();
    }
}

PersistCurso::~PersistCurso()
{

}

bool PersistCurso::cadastrarCurso(Curso &curso)
{
    QSqlQuery query(db);
    db.open();
    query.prepare("INSERT INTO Cursos(Curso,Duracao) "
                  "VALUES(:Nome,:Duracao) ");
    query.bindValue(":Nome", curso.getNome());
    query.bindValue(":Duracao", curso.getDuracao());
    if (!query.exec()) {
        qDebug() <<"PersistCurso::cadastrarCurso \n\tdb: " << db.lastError() <<"\n\tquery: " << query.lastError();
        return false;
    }
    return true;
}

bool PersistCurso::analisaCurso(int &idCurso)
{
    QSqlQuery query(db);
    db.open();
    query.prepare("SELECT COUNT(Curso.IDCurso) "
                  "FROM Curso "
                  "WHERE Curso.IDCurso=:idCurso");
    query.bindValue(":idCurso",idCurso);
    if (!query.exec())
        qDebug() <<"PersistCurso::analisaCurso \n\tdb: " << db.lastError() <<"\n\tquery: " << query.lastError();
    query.first();
    db.close();
    if(query.value(0).toInt() != 0)
        return false;
    return true;
}
