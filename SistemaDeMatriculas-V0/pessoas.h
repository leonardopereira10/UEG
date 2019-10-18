#ifndef PESSOAS_H
#define PESSOAS_H
#include <QString>


class Pessoas
{
protected:
    QString CPF, nome, endereco, setor, celular, email;
    Pessoas();
    Pessoas(QString CPF);
};

#endif // PESSOAS_H
