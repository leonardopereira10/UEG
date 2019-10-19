#include "opcao_cadastrar.h"
#include "ui_opcao_cadastrar.h"

Opcao_Cadastrar::Opcao_Cadastrar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Opcao_Cadastrar)
{
    ui->setupUi(this);
}

Opcao_Cadastrar::~Opcao_Cadastrar()
{
    delete ui;
}
