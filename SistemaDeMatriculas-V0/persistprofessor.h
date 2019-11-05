#ifndef PERSISTPROFESSOR_H
#define PERSISTPROFESSOR_H
#include <mainwindow.h>
#include <QSqlDatabase>
#include <QtSql>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>


class persistProfessor
{
public:
    persistProfessor();
    ~persistProfessor();
    QSqlQueryModel *getEstados();
    QSqlQueryModel *getCidades(int &codEstado);
    bool analisaPessoa(QString &cpf);
    int getCodCidades(QString &nome, int &estado);
private:
    QSqlDatabase db;
};

#endif // PERSISTPROFESSOR_H
