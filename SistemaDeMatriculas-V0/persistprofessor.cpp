#include "persistprofessor.h"
#include "persistprofessor.h"

persistProfessor::persistProfessor()
{
    if(QSqlDatabase::isDriverAvailable((" QSQLITE"))){
        *db = QSqlDatabase::addDatabase("QSQLITE");
        db->setDatabaseName("C:/Users/TDF - Inhumas-GO/Documents/UEG/SistemaDeMatriculas-V0/Projeto.db");
    }
    else{
        qDebug() <<"PersisProfessor: " << db->lastError();
    }
}

persistProfessor::~persistProfessor()
{
    delete db;
    delete query;
}

bool persistProfessor::analisaprofessor(QString cpf){
    query->clear();
    query->prepare("")
}
