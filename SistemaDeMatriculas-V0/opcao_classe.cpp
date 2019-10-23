#include "opcao_classe.h"
#include "ui_opcao_classe.h"

opcao_classe::opcao_classe(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::opcao_classe)
{
	ui->setupUi(this);
}

opcao_classe::~opcao_classe()
{
	delete ui;
}
