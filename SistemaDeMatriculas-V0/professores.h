#ifndef PROFESSORES_H
#define PROFESSORES_H

#include "pessoas.h"



class Professores : protected Pessoas
{
public:
    Professores(
                QString CPF,
                QString nome,
                QString endereco,
                QString setor,
                QString cidade,
                QString estado,
                QString celular,
                QString email,
                QString graduacao,
                QString titulo
            );
private:
    QString graduacao;
    QString titulo;
};

#endif // PROFESSORES_H
