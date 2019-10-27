#ifndef CURSO_H
#define CURSO_H
#include <QString>


class Curso
{
private:
    int idCurso;   //Declaração de variaveis
    QString nome;
    double duracao;

public:           //Criação de métodos
    Curso();
    Curso(QString nome, double duracao);  //construtor da classe

    int getIdCurso() const;      //get e set id curso
    void setIdCurso(int value);

    QString getNome() const;    //get e set nome
    void setNome(const QString &value);

    double getDuracao() const;    //get e set duração
    void setDuracao(double value);
};

#endif // CURSO_H
