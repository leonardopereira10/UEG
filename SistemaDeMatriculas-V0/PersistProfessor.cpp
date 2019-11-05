#include "persistprofessor.h"

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
        qDebug() << "persistProfessor().getEstados()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
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
        qDebug() << "persistProfessor().getCidades()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
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
            qDebug() << "persistProfessor().analisaPessoa()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
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
        qDebug() << "persistProfessor::getCodCidades()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
    query.first();
    cod = query.value(0).toInt();
    db.close();
    return cod;
}

bool PersistProfessor::cadastraProfessor(Professor &Professor)
{
    bool result = true;
    QSqlQuery query(db);
    db.open();
    query.prepare("INSERT INTO Pessoas(CPF, Nome, Endereco, Setor, FK_IDCidade, Telefone, Email) "
                   "VALUES(:pCpf, :pNome, :pEndereco, :pSetor, :pCidade, :pTelefone, :pEmail); ");
    query.bindValue(":pCpf", getCpf());
    query.bindValue(":pNome", Professor.getNome());
    query.bindValue(":pEndereco", Professor.getEndereco());
    query.bindValue(":pSetor", Professor.getSetor());
    query.bindValue(":pCidade", Professor.getCidade());
    query.bindValue(":pTelefone", Professor.getTelefone());
    query.bindValue(":pEmail", Professor.getEmail());
    if(!query.exec()) {
        qDebug() << "persistProfessor().CadastraProfessor()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
        result = false;
    }
    query.prepare("INSERT INTO Professores(FK_CPF, Graduacao, Titulacao) "
                   "VALUES(:profCPF, :profGraduacao, :profTitulacao);");
    query.bindValue(":profCPF", Professor.getCpf());
    query.bindValue(":profGraduacao", Professor.getGraduacao());
    query.bindValue(":profTitulacao", Professor.getTitulacao());
    if(!query.exec()) {
        qDebug() << "persistProfessor().CadastraProfessor()\n\tdb: " << db.lastError() << "\n\tquery: " << query.lastError();
        result = false;
    }
    db.close();
    return result;
}
