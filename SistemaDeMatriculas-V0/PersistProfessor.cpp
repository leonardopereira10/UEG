#include "PersistProfessor.h"
#include "professor.h"


PersistProfessor::PersistProfessor()
{    
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/BD/Projeto.db");

}

PersistProfessor::~PersistProfessor()
{

}

QSqlQueryModel *PersistProfessor::getEstados()
{
    QSqlQueryModel *modelEstados = new QSqlQueryModel();
    QSqlQuery query(db);
    db.open();
    query.prepare("SELECT sigla FROM estados ORDER BY sigla ASC");
    if(!query.exec())
        qDebug() << "PersistProfessor().getEstados()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
    modelEstados->setQuery(query);
    db.close();
    return modelEstados;
}

QSqlQueryModel *PersistProfessor::getCidades(int &codEstado)
{
    QSqlQueryModel *modelCidades = new QSqlQueryModel();
    QSqlQuery query(db);
    db.open();
    query.prepare("SELECT Cidades.Cidade "
                   "FROM Cidades, Estados "
                   "WHERE Cidades.FK_IDEstado=Estados.IDEstado "
                   "AND Estados.IDEstado=:uf "
                  "ORDER BY Cidades.Cidade ASC");
    query.bindValue(":uf", codEstado);
    if(!query.exec())
        qDebug() << "PersistProfessor().getCidades()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
    modelCidades->setQuery(query);
    db.close();
    return modelCidades;
}

bool PersistProfessor::analisaPessoa(QString &cpf){
        bool result = true;
        QSqlQuery query(db);
        db.open();
        query.prepare("SELECT COUNT(Pessoas.CPF) "
                       "FROM Pessoas "
                       "Where Pessoas.CPF=:cpf");
        query.bindValue(":cpf", cpf);
        if(!query.exec())
            qDebug() << "PersistProfessor().analisaPessoa()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
        query.first();
        if(query.value(0).toInt() != 0) {
             result = false;	// Pessoa já existe
        }
        db.close();
        return result;
}

int PersistProfessor::getCodCidades(QString &nome, int &estado)
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
        qDebug() << "PersistProfessor::getCodCidades()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
    query.first();
    cod = query.value(0).toInt();
    db.close();
    return cod;
}

bool PersistProfessor::cadastraProfessor(Professor &professor)
{
    bool result = true;
    QSqlQuery query(db);
    db.open();
    query.prepare("INSERT INTO Pessoas(CPF, Nome, Endereco, Setor, FK_IDCidade, Telefone, Email) "
                   "VALUES(:pCpf, :pNome, :pEndereco, :pSetor, :pCidade, :pTelefone, :pEmail); ");
    query.bindValue(":pCpf", professor.getCpf());
    query.bindValue(":pNome", professor.getNome());
    query.bindValue(":pEndereco", professor.getEndereco());
    query.bindValue(":pSetor", professor.getSetor());
    query.bindValue(":pCidade", professor.getCidade());
    query.bindValue(":pTelefone", professor.getTelefone());
    query.bindValue(":pEmail", professor.getEmail());
    if(!query.exec()) {
        qDebug() << "PersistProfessor().CadastraPessoa()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
        result = false;
    }
    query.prepare("INSERT INTO Professores(FK_CPF, Graduacao, Titulacao) "
                   "VALUES(:profCPF, :profGraduacao, :profTitulacao);");
    query.bindValue(":profCPF", professor.getCpf());
    query.bindValue(":profGraduacao", professor.getGraduacao());
    query.bindValue(":profTitulacao", professor.getTitulacao());
    if(!query.exec()) {
        qDebug() << "PersistProfessor().CadastraProfessor()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
        result = false;
    }
    db.close();
    return result;
}
QSqlQueryModel *PersistProfessor::consultaProfessor(Professor &professor)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query(db);
    db.open();
    query.prepare("SELECT Pessoas.CPF, Pessoas.Nome, Pessoas.Endereco, Pessoas.Setor, Cidades.Cidade, Estados.Estado, Pessoas.Telefone, Pessoas.Email, Professores.Graduacao, Professores.Titulacao "
                  "FROM Pessoas, Professores, Cidades , Estados "
                  "WHERE Pessoas.CPF = '"+professor.getCpf()+"' AND Professores.FK_CPF = Pessoas.CPF AND Pessoas.FK_IDCidade = Cidades.IDCidade AND Cidades.FK_IDEstado = Estados.IDEstado;");
    if(!query.exec())
        qDebug() << "PersistProfessor::consultaProfessor()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
    int cont = 0;
    while (query.next()) {
        cont ++;
    }
    if(cont >0){
    model->setQuery(query);
    db.close();
    return model;
    }
    else{
        model = nullptr;
        return model;
    }
}


QSqlQueryModel *PersistProfessor::consultaProfessorNome(Professor &professor)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query(db);
    db.open();
    query.prepare("SELECT Pessoas.CPF, Pessoas.Nome, Pessoas.Endereco, Pessoas.Setor, Cidades.Cidade, Estados.Estado, Pessoas.Telefone, Pessoas.Email, Professores.Graduacao, Professores.Titulacao "
                  "FROM Pessoas, Professores, Estados, Cidades "
                  "WHERE Professores.FK_CPF=Pessoas.CPF AND Pessoas.Nome LIKE '%"+professor.getNome()+"%' AND Pessoas.FK_IDCidade=Cidades.IDCidade AND Cidades.FK_IDEstado=Estados.IDEstado "
                  "ORDER BY Pessoas.Nome asc");
    if(!query.exec())
        qDebug() << "PersistProfessor::consultaProfessorNome()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
    model->setQuery(query);
    db.close();
    return model;
}
bool PersistProfessor::remove_professor(Professor &professor){
    db.open();
    QSqlQuery query(db);
    db.exec("PRAGMA foreign_keys = ON;");
    query.prepare("DELETE FROM Pessoas "
                  "WHERE EXISTS( "
                  "SELECT Professores.FK_CPF "
                  "FROM Professores "
                  "WHERE Professores.FK_CPF = Pessoas.CPF AND Professores.FK_CPF = '"+professor.getCpf()+"');");
    if(!query.exec()){
        qDebug() << "PersistProfessor::remove_professorquery()/n/tdb: " <<db.lastError()  <<"\n\rquery: " <<query.lastError();
        return false;
    }
    else{
        query.clear();
        db.close();
        return true;
    }
}

bool PersistProfessor::ExisteDisciplina(Professor &professor) {
    bool retorno = false;
    db.open();
    QSqlQuery query(db);
    query.prepare("select FK_CPFProfessor from Disciplinas where FK_CPFProfessor = '"+professor.getCpf()+"'");
    query.exec();
    if(query.next()){
        retorno = true;
    }
    query.clear();
    db.close();
    return retorno;
}

QSqlQueryModel *PersistProfessor::listarProfessor()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query(db);
    db.open();
    query.prepare("SELECT Professores.FK_CPF, Pessoas.Nome, Pessoas.Endereco, Pessoas.Setor, Cidades.Cidade, Estados.Estado, Pessoas.Telefone, Pessoas.Email, Professores.Graduacao, Professores.Titulacao "
                  "FROM Professores, Pessoas, Cidades , Estados "
                  "WHERE Pessoas.CPF = Professores.FK_CPF AND Pessoas.FK_IDCidade = Cidades.IDCidade AND Cidades.FK_IDEstado = Estados.IDEstado;");
    if(!query.exec())
        qDebug() << "PersistProfessor::consultaProfessor()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
    model->setQuery(query);
    db.close();
    return model;

}
