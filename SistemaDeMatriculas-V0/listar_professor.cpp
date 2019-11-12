#include "listar_professor.h"
#include "ui_listar_professor.h"

listar_professor::listar_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::listar_professor)
{
    ui->setupUi(this);
}

listar_professor::~listar_professor()
{
    delete ui;
}
