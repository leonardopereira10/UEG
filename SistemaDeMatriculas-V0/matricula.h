#ifndef MATRICULA_H
#define MATRICULA_H

#include <QSqlQueryModel>
#include <QString>

class Matricula {
private:
    int CodDisciplina;
    int CodAluno;//Matricula do aluno no curso
    float nota1;
    float nota2;
    float media = (nota1+nota2)/2;
    int ano;
    int semestre;

public:
  Matricula();

  Matricula(QString CodDisciplina, QString CodAluno, QString ano, QString semestre);
  Matricula(QString CodAluno);

  static bool VerificaDisciplinaExiste(QString value);

  static bool VerificaAlunoExistente(QString value);

  static void insereMatricula(Matricula matricula);

  static void ExcluirMatricula(Matricula matricula);

  static QSqlQueryModel *ListaDisciplinasPorAlunos(Matricula matricula);

  static QSqlQueryModel *ListarTodasMatriculas();

  static bool VerificaMatriculaExiste(Matricula matricula);
  int getCodDisciplina() const;
  int getCodAluno() const;
  float getNota1() const;
  void setNota1(float value);
  float getNota2() const;
  void setNota2(float value);
  int getAno() const;
  int getSemestre() const;
  float getMedia() const;
};

#endif // MATRICULA_H
