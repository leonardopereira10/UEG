#include "confirmacao_remover.h"
#include "ui_confirmacao_remover.h"

confirmacao_remover::confirmacao_remover(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmacao_remover)
{
    ui->setupUi(this);
}

confirmacao_remover::~confirmacao_remover()
{
    delete ui;
}
