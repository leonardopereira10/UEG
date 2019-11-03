#include "persistprofessor.h"
#include "persistprofessor.h"

persistProfessor::persistProfessor()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/TDF - Inhumas-GO/Documents/UEG/SistemaDeMatriculas-V0/Projeto.b");
    if(!db.open()){
        QMessageBox::critical(janela, "Banco de Dados", "'+<<db.lastError()+'");
    }
}

persistProfessor::~persistProfessor()
{
    delete db;
    delete query;
}

bool persistProfessor::analisaprofessor(QString cpf){
    query->clear();
    query->prepare("SELECT COUNT(p.FK_CPF) FROM Professores WHERE p.FK_CPF = :cpf");
    query->bindValue(":cpf", cpf);
    if(!query->exec()){
        qDebug() <<"Query with error: " << db->lastError();
        return false;
    }
    else{
    query->first();
    //Caso cpf já exista
    if(query->next() != 0){
        qDebug() << "Insert error in CPF: CPF exists in database.";
        QMessageBox::warning(janela, "Professor", "Professor já foi cadastrado.");
        return false;
    }
    else{
        return true;
    }
    }
}
