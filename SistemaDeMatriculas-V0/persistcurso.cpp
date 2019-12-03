#include "persistcurso.h"

PersistCurso::PersistCurso()
{
    if(QSqlDatabase::isDriverAvailable("QSQLITE")) {
        db = QSqlDatabase::addDatabase("QSQLITE");
		db.setDatabaseName("/opt/SCM/Projeto.db");
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
	db.open();
    QSqlQuery query(db);
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
	db.open();
    int retorno = true;
    QSqlQuery query(db);
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
	db.open();
    bool result = true;
    QSqlQuery query(db);
    query.prepare("DELETE FROM Cursos WHERE Cursos.IDCurso=:IDCurso");
    query.bindValue(":IDCurso", idCurso);
    if (!query.exec()){
        qDebug() << "PersistCurso::removeCurso \n\t: " << db.lastError() <<"\n\tquery: " << query.lastError();
        result = false;
    }
    db.close();
    return result;
}

QSqlQueryModel *PersistCurso::consultaCurso(int &idCurso)
{
	db.open();
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query(db);
    query.prepare("select Curso, IDCurso as Codigo, Duracao from Cursos where Cursos.IDCurso=:IDCurso");
    query.bindValue(":IDCurso", idCurso);
    if(!query.exec())
            qDebug() << "PersistCurso::consultaCurso\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
    model->setQuery(query);
    db.close();
    return model;
}

QSqlQueryModel *PersistCurso::listarCurso()
{
	db.open();
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query(db);
    query.prepare("select Curso, IDCurso, Duracao from Cursos");
    if(!query.exec())
            qDebug() << "PersistCurso::listarCurso\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
    model->setQuery(query);
    db.close();
    return model;
}
