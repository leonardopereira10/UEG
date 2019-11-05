#ifndef PERSISTPROFESSOR_H
#define PERSISTPROFESSOR_H
#include <mainwindow.h>
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
    bool analisaPessoa(QString &cpf);
    int getCodCidades(QString &nome, int &estado);
    bool cadastraProfessor(Professor &Professor);
private:
    QSqlDatabase db;
};

#endif // PERSISTPROFESSOR_H
