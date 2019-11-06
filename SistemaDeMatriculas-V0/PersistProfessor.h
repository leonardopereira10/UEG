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
    QSqlQueryModel *consultaProfessor(QString CPF);
    QSqlQueryModel *consultaProfessorNome(QString nome);
private:

    QSqlDatabase db;
};

#endif // PERSISTPROFESSOR_H
