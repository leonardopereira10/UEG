#include "professores.h"

Professores::Professores(QString CPF,
                         QString nome,
                         QString endereco,
                         QString setor,
                         QString cidade,
                         QString estado,
                         QString celular,
                         QString email,
                         QString graduacao,
                         QString titulo) : Pessoas(CPF, nome, endereco, setor, cidade, estado, celular, email)
{
    this->titulo = titulo;
    this->graduacao = graduacao;
}
