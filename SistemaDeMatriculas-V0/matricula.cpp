#include "matricula.h"
#include "persistmatriculas.h"
int Matricula::getCodDisciplina() const
{
    return CodDisciplina;
}

int Matricula::getCodAluno() const
{
    return CodAluno;
}

float Matricula::getNota1() const
{
    return nota1;
}

void Matricula::setNota1(float value)
{
    nota1 = value;
}

float Matricula::getNota2() const
{
    return nota2;
}

void Matricula::setNota2(float value)
{
    nota2 = value;
}

int Matricula::getAno() const
{
    return ano;
}

int Matricula::getSemestre() const
{
    return semestre;
}

float Matricula::getMedia() const
{
    return media;
}

Matricula::Matricula() {}

Matricula::Matricula(QString CodDisciplina, QString CodAluno, QString ano, QString semestre)
{
    this->CodDisciplina = CodDisciplina.toInt();
    this->CodAluno = CodAluno.toInt();
    this->ano = ano.toInt();
    this->semestre = semestre.toInt();
}

Matricula::Matricula(QString CodAluno)
{
	this->CodAluno = CodAluno.toInt();
}

bool Matricula::AlunoPossuiMatricula(int MatriculaAluno)
{
	PersistMatriculas SQLite;
	return SQLite.AlunoPossuiMatricula(MatriculaAluno);
}

bool Matricula::VerificaDisciplinaExiste(QString value) {
    PersistMatriculas SQLite;
    return SQLite.ExisteDisciplina(value);
}

bool Matricula::VerificaAlunoExistente(QString value) {
    PersistMatriculas SQLite;
   return SQLite.ExisteAluno(value);
}

void Matricula::insereMatricula(Matricula matricula) {
  PersistMatriculas SQLite;
  SQLite.Insere(matricula);
}

void Matricula::ExcluirMatricula(Matricula matricula) {
  PersistMatriculas SQLite;
  SQLite.ExcluirMatricula(matricula);
}

QSqlQueryModel *Matricula::ListaDisciplinasPorAlunos(Matricula matricula) {
  PersistMatriculas SQLite;
  return SQLite.ListaDisciplinasPorAlunos(matricula);
}

QSqlQueryModel *Matricula::ListarTodasMatriculas() {
  PersistMatriculas SQLite;
  return SQLite.ListarTodasMatriculas();
}

bool Matricula::VerificaMatriculaExiste(Matricula matricula)
{
    PersistMatriculas SQLite;
    return SQLite.VerificaMatriculaExiste(matricula);
}
