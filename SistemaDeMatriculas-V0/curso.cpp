#include "curso.h"

Curso::Curso()
{

}

Curso::Curso(int idCurso, QString nome, float duracao)
{
    this->idCurso=idCurso;
    this->nome=nome;
    this->duracao=duracao;
}

int Curso::getIdCurso() const
{
    return idCurso;
}

void Curso::setIdCurso(int value)
{
    idCurso = value;
}

QString Curso::getNome() const
{
    return nome;
}

void Curso::setNome(const QString &value)
{
    nome = value;
}

float Curso::getDuracao() const
{
    return duracao;
}

void Curso::setDuracao(float value)
{
    duracao = value;
}
