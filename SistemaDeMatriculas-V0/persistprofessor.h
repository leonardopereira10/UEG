#ifndef PERSISTPROFESSOR_H
#define PERSISTPROFESSOR_H
#include <mainwindow.h>
#include <QSqlDatabase>
#include <QtSql>
#include <QMessageBox>


class persistProfessor
{
public:
    persistProfessor();
    ~persistProfessor();
    bool analisaprofessor(QString cpf);
private:
    QMainWindow *janela;
    QSqlDatabase *db;
    QSqlQuery *query;

};

#endif // PERSISTPROFESSOR_H
