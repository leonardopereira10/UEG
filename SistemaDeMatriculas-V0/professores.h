#ifndef PROFESSORES_H
#define PROFESSORES_H

#include "pessoas.h"


class Professores : protected Pessoas
{
  public:
    Professores();
    Professores(QString cpf_p, QString nome_p, QString endereco_p,
                QString setor_p, QString cidade_p, QString estado_p,
                QString celular_p, QString email_p, QString graduacao, QString titulo);

  private:
    QString graduacao;
    QString titulo;

};

#endif // PROFESSORES_H
