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
    Curso(QString nome, double duracao, int idCurso);  //construtor da classe

    static bool cadCurso(Curso curso);
    static bool analisaCurso(int idCurso);
    static bool removeCurso(int idCurso);

    QString getNome() const;
    double getDuracao() const;
    int getIdCurso() const;
};
#endif // CURSO_H
