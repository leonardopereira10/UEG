#include "listaalunos.h"
#include "ui_listaalunos.h"

ListaAlunos::ListaAlunos(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::ListaAlunos)
{
	ui->setupUi(this);
}

ListaAlunos::~ListaAlunos()
{
	delete ui;
}
