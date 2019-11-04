#include "persistaluno.h"

PersistAluno::PersistAluno()
{
	db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("/home/lucas/UEG/SistemaDeMatriculas-V0/Projeto.db");
}

PersistAluno::~PersistAluno()
{

}

QSqlQueryModel *PersistAluno::getEstados()
{
	QSqlQueryModel *modelEstados = new QSqlQueryModel();
	QSqlQuery query(db);
	db.open();
	query.prepare("SELECT sigla FROM estados");
	if(!query.exec())
		qDebug() << "PersistAluno::getEstados()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	modelEstados->setQuery(query);
	db.close();
	return modelEstados;
}

QSqlQueryModel *PersistAluno::getCidades(int &codEstado)
{
	QSqlQueryModel *modelCidades = new QSqlQueryModel();
	QSqlQuery query(db);
	db.open();
	query.prepare("SELECT Cidades.Cidade "
				   "FROM Cidades, Estados "
				   "WHERE Cidades.FK_IDEstado=Estados.IDEstado "
				   "AND Estados.IDEstado=:uf");
	query.bindValue(":uf", codEstado);
	if(!query.exec())
		qDebug() << "PersistAluno::getCidades()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	modelCidades->setQuery(query);
	db.close();
	return modelCidades;
}

int PersistAluno::getCodCidades(QString &nome, int &estado)
{
	int cod;
	QSqlQuery query(db);
	db.open();
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
	QSqlQueryModel *modelCursos = new QSqlQueryModel();
	QSqlQuery query(db);
	db.open();
	query.prepare("SELECT Cursos.Curso FROM Cursos");
	if(!query.exec())
		qDebug() << "PersistAluno::getCursos()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	modelCursos->setQuery(query);
	db.close();
	return modelCursos;
}

int PersistAluno::getCodCurso(QString &nome)
{
	int cod;
	QSqlQuery query(db);
	db.open();
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
	bool result = true;
	QSqlQuery query(db);
	db.open();
	query.prepare("SELECT COUNT(Pessoas.CPF) "
				   "FROM Pessoas "
				   "Where Pessoas.CPF=:cpf");
	query.bindValue(":cpf", cpf);
	if(!query.exec())
		qDebug() << "PersistAluno::analisaPessoa()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
	query.first();
	if(query.value(0).toInt() != 0) {
		 result = false;	// Pessoa já existe
	}
	db.close();
	return result;
}

bool PersistAluno::cadastraAluno(Aluno &aluno)
{
	bool result = true;
	QSqlQuery query(db);
	db.open();
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
	QSqlQuery query(db);
	db.open();
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
