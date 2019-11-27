#ifndef CURSO_H
#define CURSO_H
#include <QString>
#include <QtSql>


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
    static QSqlQueryModel *consultarCurso(int idCurso);
    static QSqlQueryModel *listarCurso();

    QString getNome() const;
    double getDuracao() const;
    int getIdCurso() const;
    void setIdCurso(int value);
};
#endif // CURSO_H
