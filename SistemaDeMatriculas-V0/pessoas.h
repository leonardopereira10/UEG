#ifndef PESSOAS_H
#define PESSOAS_H
#include <QString>


class Pessoas
{
protected:
	QString CPF, nome, endereco, setor, cidade, estado, celular, email;
    Pessoas(
            QString CPF,
            QString nome,
            QString endereco,
            QString setor,
            QString cidade,
            QString estado,
            QString celular,
            QString email
            );
};

#endif // PESSOAS_H
