#ifndef PERSISTPROFESSOR_H
#define PERSISTPROFESSOR_H
#include <QSqlDatabase>
#include <QtSql>


class persistProfessor
{
public:
    persistProfessor();
    ~persistProfessor();
    bool analisaprofessor(QString cpf);
private:
    QSqlDatabase *db;
    QSqlQuery *query;

};

#endif // PERSISTPROFESSOR_H
