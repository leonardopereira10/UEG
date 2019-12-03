#include "persistaluno.h"

PersistAluno::PersistAluno()
{
	db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("/opt/SCM/Projeto.db");
}

PersistAluno::~PersistAluno()
{

}

QSqlQueryModel *PersistAluno::getEstados()
{
	db.open();
	QSqlQueryModel *modelEstados = new QSqlQueryModel();
	QSqlQuery query(db);
	query.prepare("SELECT sigla FROM estados ORDER BY Estados.sigla asc");
	if(!query.exec())
		qDebug() << "PersistAluno::getEstados()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	modelEstados->setQuery(query);
	db.close();
	return modelEstados;
}

QSqlQueryModel *PersistAluno::getCidades(int &codEstado)
{
	db.open();
	QSqlQueryModel *modelCidades = new QSqlQueryModel();
	QSqlQuery query(db);
	query.prepare("SELECT Cidades.Cidade "
				   "FROM Cidades, Estados "
				   "WHERE Cidades.FK_IDEstado=Estados.IDEstado "
				   "AND Estados.IDEstado=:uf ORDER BY Cidades.Cidade asc");
	query.bindValue(":uf", codEstado);
	if(!query.exec())
		qDebug() << "PersistAluno::getCidades()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	modelCidades->setQuery(query);
	db.close();
	return modelCidades;
}

int PersistAluno::getCodCidades(QString &nome, int &estado)
{
	db.open();
	int cod;
	QSqlQuery query(db);
	query.prepare("SELECT Cidades.IDCidade "
				   "FROM Cidades "
				   "WHERE Cidades.Cidade=:nome "
				   "AND Cidades.FK_IDEstado=:uf");
	query.bindValue(":nome", nome);
	query.bindValue(":uf", estado);
	if(!query.exec())
		qDebug() << "PersistAluno::getCodCidades()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	query.first();
	cod = query.value(0).toInt();
	db.close();
	return cod;
}

QSqlQueryModel *PersistAluno::getCursos()
{
	db.open();
	QSqlQueryModel *modelCursos = new QSqlQueryModel();
	QSqlQuery query(db);
	query.prepare("SELECT Cursos.Curso FROM Cursos ORDER BY Cursos.Curso asc");
	if(!query.exec())
		qDebug() << "PersistAluno::getCursos()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	modelCursos->setQuery(query);
	db.close();
	return modelCursos;
}

int PersistAluno::getCodCurso(QString &nome)
{
	db.open();
	int cod;
	QSqlQuery query(db);
	query.prepare("SELECT Cursos.IDCurso "
				   "FROM Cursos "
				   "WHERE Cursos.Curso=:nome");
	query.bindValue(":nome", nome);
	if(!query.exec())
		qDebug() << "PersistAluno::getCodCurso()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	query.first();
	cod = query.value(0).toInt();
	db.close();
	return cod;
}

bool PersistAluno::analisaPessoa(QString &cpf)
{
	db.open();
	bool result = true;
	QSqlQuery query(db);
	query.prepare("SELECT COUNT(Pessoas.CPF) "
				   "FROM Pessoas "
				   "WHERE Pessoas.CPF=:cpf");
	query.bindValue(":cpf", cpf);
	if(!query.exec())
		qDebug() << "PersistAluno::analisaPessoa()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	query.first();
	if(query.value(0).toInt() != 0)
		 result = false;
	db.close();
	return result;
}

bool PersistAluno::analisaAluno(int &matricula)
{
	db.open();
	bool result = false;
	QSqlQuery query(db);
	query.prepare("SELECT COUNT(Alunos.Matricula) "
				  "FROM Alunos "
				  "WHERE Alunos.Matricula=:matricula");
	query.bindValue(":matricula", matricula);
	if(!query.exec())
		qDebug() << "PersistAluno::analisaAluno()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	query.first();
	if(query.value(0).toInt() != 0)
		result = true;
	db.close();
	return result;
}

bool PersistAluno::cadastraAluno(Aluno &aluno)
{
	db.open();
	bool result = true;
	QSqlQuery query(db);
	query.prepare("INSERT INTO Pessoas(CPF, Nome, Endereco, Setor, FK_IDCidade, Telefone, Email) "
				   "VALUES(:pCpf, :pNome, :pEndereco, :pSetor, :pCidade, :pTelefone, :pEmail); ");
	query.bindValue(":pCpf", aluno.getCpf());
	query.bindValue(":pNome", aluno.getNome());
	query.bindValue(":pEndereco", aluno.getEndereco());
	query.bindValue(":pSetor", aluno.getSetor());
	query.bindValue(":pCidade", aluno.getCidade());
	query.bindValue(":pTelefone", aluno.getTelefone());
	query.bindValue(":pEmail", aluno.getEmail());
	if(!query.exec()) {
		qDebug() << "PersistAluno::cadastraAluno()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
		result = false;
	}
	query.prepare("INSERT INTO Alunos(FK_CPF, Ano, FK_IDCurso) "
				   "VALUES(:aCpf, :aAno, :aCurso);");
	query.bindValue(":aCpf", aluno.getCpf());
	query.bindValue(":aAno", aluno.getAno().year());
	query.bindValue(":aCurso", aluno.getCurso());
	if(!query.exec()) {
		qDebug() << "PersistAluno::cadastraAluno()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
		result = false;
	}
	db.close();
	return result;
}

int PersistAluno::getMatricula_fromDB(QString &cpf)
{
	db.open();
	QSqlQuery query(db);
	query.prepare("SELECT Alunos.Matricula "
					   "FROM Alunos "
					   "WHERE Alunos.FK_CPF=:cpf");
	query.bindValue(":cpf", cpf);
	if(!query.exec())
		qDebug() << "PersistAluno::getMatricula()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	query.first();
	db.close();
	return query.value(0).toInt();
}

QSqlQueryModel *PersistAluno::consultaAlunoCpf(Aluno &alunoCpf)
{
	db.open();
	QSqlQueryModel *model = new QSqlQueryModel();
	QSqlQuery query(db);
	query.prepare("SELECT Pessoas.CPF, Pessoas.Nome, Alunos.Matricula, Cursos.Curso, Alunos.Ano, Pessoas.Endereco, Pessoas.Setor, Cidades.Cidade, Estados.Estado, Pessoas.Telefone, Pessoas.Email "
				  "FROM Pessoas, Alunos, Cursos, Estados, Cidades "
				  "WHERE Pessoas.CPF=:cpf AND Alunos.FK_CPF=Pessoas.CPF AND Pessoas.FK_IDCidade=Cidades.IDCidade AND Alunos.FK_IDCurso=Cursos.IDCurso AND Cidades.FK_IDEstado=Estados.IDEstado "
				  "ORDER BY Pessoas.Nome asc");
	query.bindValue(":cpf", alunoCpf.getCpf());
	if(!query.exec())
		qDebug() << "PersistAluno::consultaAlunoCpf()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	model->setQuery(query);
	db.close();
	return model;
}

QSqlQueryModel *PersistAluno::consultaAlunoNome(Aluno &alunoNome)
{
	db.open();
	QSqlQueryModel *model = new QSqlQueryModel();
	QSqlQuery query(db);
	query.prepare("SELECT Pessoas.CPF, Pessoas.Nome, Alunos.Matricula, Cursos.Curso, Alunos.Ano, Pessoas.Endereco, Pessoas.Setor, Cidades.Cidade, Estados.Estado, Pessoas.Telefone, Pessoas.Email "
				  "FROM Pessoas, Alunos, Cursos, Estados, Cidades "
				  "WHERE Alunos.FK_CPF=Pessoas.CPF AND Pessoas.Nome LIKE '"+alunoNome.getNome()+"%' AND Pessoas.FK_IDCidade=Cidades.IDCidade AND Alunos.FK_IDCurso=Cursos.IDCurso AND Cidades.FK_IDEstado=Estados.IDEstado "
				  "ORDER BY Pessoas.Nome asc");
	if(!query.exec())
		qDebug() << "PersistAluno::consultaAlunoNome()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	model->setQuery(query);
	db.close();
	return model;
}

QSqlQueryModel *PersistAluno::consultaAlunoMatricula(Aluno &alunoMatricula)
{
	db.open();
	QSqlQueryModel *model = new QSqlQueryModel();
	QSqlQuery query(db);
	query.prepare("SELECT Pessoas.CPF, Pessoas.Nome, Alunos.Matricula, Cursos.Curso, Alunos.Ano, Pessoas.Endereco, Pessoas.Setor, Cidades.Cidade, Estados.Estado, Pessoas.Telefone, Pessoas.Email "
				  "FROM Pessoas, Alunos, Cursos, Estados, Cidades "
				  "WHERE Alunos.FK_CPF=Pessoas.CPF AND Alunos.Matricula=:matricula AND Pessoas.FK_IDCidade=Cidades.IDCidade AND Alunos.FK_IDCurso=Cursos.IDCurso AND Cidades.FK_IDEstado=Estados.IDEstado "
				  "ORDER BY Pessoas.Nome asc");
	query.bindValue(":matricula", alunoMatricula.getMatricula());
	if(!query.exec())
		qDebug() << "PersistAluno::consultaAlunoMatricula()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	model->setQuery(query);
	db.close();
	return model;
}

bool PersistAluno::removeAluno(int &matricula)
{
	db.open();
	bool result = true;
	QSqlQuery query(db);
	db.exec("PRAGMA foreign_keys = ON;");
	query.prepare("DELETE FROM Pessoas "
				  "WHERE EXISTS( "
				  "SELECT Alunos.FK_CPF "
				  "FROM Alunos "
				  "WHERE Alunos.FK_CPF=Pessoas.CPF AND Alunos.Matricula=:matricula);");
	query.bindValue(":matricula", matricula);
	if(!query.exec()) {
		qDebug() << "PersistAluno::removeAluno()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
		result = false;
	}
	db.close();
	return result;
}

QSqlQueryModel *PersistAluno::listaAlunos(QString &coluna, QString &ordem)
{
	db.open();
	QSqlQueryModel *model = new QSqlQueryModel();
	QSqlQuery query(db);
	query.prepare("SELECT Pessoas.CPF, Pessoas.Nome, Alunos.Matricula, Cursos.Curso, Alunos.Ano, Pessoas.Endereco, Pessoas.Setor, Cidades.Cidade, Estados.Estado, Pessoas.Telefone, Pessoas.Email "
				  "FROM Pessoas, Alunos, Cursos, Estados, Cidades "
				  "WHERE Alunos.FK_CPF=Pessoas.CPF AND Pessoas.FK_IDCidade=Cidades.IDCidade AND Alunos.FK_IDCurso=Cursos.IDCurso AND Cidades.FK_IDEstado=Estados.IDEstado "
				  "ORDER BY "+coluna+" "+ordem+";");
	if(!query.exec())
		qDebug() << "PersistAluno::listaAlunos\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	model->setQuery(query);
	db.close();
	return model;
}
