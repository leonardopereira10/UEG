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
    query.prepare("INSERT INTO Cursos(IDCurso, Curso, Duracao) "
                  "VALUES(:IDCurso, :Nome, :Duracao) ");
    query.bindValue(":IDCurso", curso.getIdCurso());
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
    int retorno = true;
    QSqlQuery query(db);
    db.open();
    query.prepare("SELECT COUNT(Cursos.IDCurso) "
                  "FROM Cursos "
                  "WHERE Cursos.IDCurso=:idCurso");
    query.bindValue(":idCurso",idCurso);
    if (!query.exec())
        qDebug() <<"PersistCurso::analisaCurso \n\tdb: " << db.lastError() <<"\n\tquery: " << query.lastError();
    query.first();
    if(query.value(0).toInt() != 0)
        retorno = false;
    db.close();
    return retorno;
}

bool PersistCurso::removeCurso(int &idCurso)
{
    bool result = true;
    QSqlQuery query(db);
    db.open();
    query.prepare("DELETE FROM Cursos WHERE Cursos.IDCurso=:IDCurso");
    query.bindValue(":IDCurso", idCurso);
    if (!query.exec()){
        qDebug() << "PersistCurso::removeCurso \n\t: " << db.lastError() <<"\n\tquery: " << query.lastError();
        result = false;
    }
    db.close();
    return result;
}
