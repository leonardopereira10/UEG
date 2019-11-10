#ifndef PERSISTPROFESSOR_H
#define PERSISTPROFESSOR_H
#include <QSqlDatabase>
#include <QtSql>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "professor.h"



class PersistProfessor
{
public:
    PersistProfessor();
    ~PersistProfessor();

    QSqlQueryModel *getEstados();
    QSqlQueryModel *getCidades(int &codEstado);
    int getCodCidades(QString &nome, int &estado);

    bool analisaPessoa(QString &cpf);
    bool cadastraProfessor(Professor &professor);
    QSqlQueryModel *consultaProfessor(Professor &professor);
    QSqlQueryModel *consultaProfessorNome(Professor &professor);
private:

    QSqlDatabase db;
};

#endif // PERSISTPROFESSOR_H
