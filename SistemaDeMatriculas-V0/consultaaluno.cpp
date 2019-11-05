#include "consultaaluno.h"
#include "ui_consultaaluno.h"

ConsultaAluno::ConsultaAluno(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::ConsultaAluno)
{
	ui->setupUi(this);
}

ConsultaAluno::~ConsultaAluno()
{
	delete ui;
}
