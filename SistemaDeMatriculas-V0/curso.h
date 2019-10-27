#ifndef CURSO_H
#define CURSO_H
#include <QString>


class Curso
{
private:
    int idCurso;
    QString nome;
    double duracao;

public:
    Curso();
    Curso(QString nome, double duracao);

    int getIdCurso() const;
    void setIdCurso(int value);

    QString getNome() const;
    void setNome(const QString &value);

    double getDuracao() const;
    void setDuracao(double value);
};

#endif // CURSO_H
