#include "mapaluno.h"

MapAluno::MapAluno()
{
	if(QSqlDatabase::isDriverAvailable("QSQLITE")) {
		*db = QSqlDatabase::addDatabase("QSQLITE");
		db->setDatabaseName("/home/lucas/Documents/projN2/SistemaDeMatriculas-V0/BD/testDB");
	}
	else {
		qDebug() << "MapAluno(): " << db->lastError();
	}
}

MapAluno::~MapAluno()
{
	delete db;
	delete query;
}
