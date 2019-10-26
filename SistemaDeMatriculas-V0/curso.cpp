#include "curso.h"

int Curso::getCodigo() const
{
    return codigo;
}

void Curso::setCodigo(int value)
{
    codigo = value;
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

Disciplina Curso::getDisciplina() const
{
    return disciplina;
}

void Curso::setDisciplina(const Disciplina &value)
{
    disciplina = value;
}

Aluno Curso::getAlunos() const
{
    return alunos;
}

void Curso::setAlunos(const Aluno &value)
{
    alunos = value;
}

Professor Curso::getProfessores() const
{
    return professores;
}

void Curso::setProfessores(const Professor &value)
{
    professores = value;
}

opcao_cadastrar Curso::getCadCurso() const
{
    return cadCurso;
}

void Curso::setCadCurso(const opcao_cadastrar &value)
{
    cadCurso = value;
}

Curso::Curso()
{
    
}
