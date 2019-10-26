#ifndef CURSO_H
#define CURSO_H
#include <QString>


class Curso
{
private:
    int idCurso;
    QString nome;
    float duracao;

public:
    Curso();
    Curso(int idCurso, QString nome, float duracao);

    int getIdCurso() const;
    void setIdCurso(int value);

    QString getNome() const;
    void setNome(const QString &value);

    float getDuracao() const;
    void setDuracao(float value);
};

#endif // CURSO_H
