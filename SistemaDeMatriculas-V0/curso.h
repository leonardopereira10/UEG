#ifndef CURSO_H
#define CURSO_H
#include <QDialog>
#include <QPixmap>
#include <QMessageBox>
#include <QtDebug>
#include "opcao_cadastrar.h"


class Curso
{
private:
    int idCurso;
    QString nome;
    float duracao;
    Disciplina disciplina;
    Aluno alunos;
    Professor professores;
    opcao_cadastrar cadCurso;

public:
    Curso();
    int getCodigo() const;
    void setCodigo(int value);
    QString getNome() const;
    void setNome(const QString &value);
    float getDuracao() const;
    void setDuracao(float value);
    Disciplina getDisciplina() const;
    void setDisciplina(const Disciplina &value);
    Aluno getAlunos() const;
    void setAlunos(const Aluno &value);
    Professor getProfessores() const;
    void setProfessores(const Professor &value);
};

#endif // CURSO_H
