#include "opcao_cadastrar.h"
#include "ui_opcao_cadastrar.h"

opcao_cadastrar::opcao_cadastrar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::opcao_cadastrar)
{
    ui->setupUi(this);
}

opcao_cadastrar::~opcao_cadastrar()
{
    delete ui;
}
