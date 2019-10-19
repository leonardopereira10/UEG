#ifndef PESSOAS_H
#define PESSOAS_H
#include <QString>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

class Pessoas
{
  protected:
    QString CPF, nome, endereco, setor, cidade, estado, celular, email;
    Pessoas();
    Pessoas(QString CPF, QString nome, QString endereco, QString setor,
            QString cidade, QString estado, QString celular, QString email);


};

#endif // PESSOAS_H
