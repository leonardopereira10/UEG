#include "consulta_professor.h"
#include "ui_consulta_professor.h"

Consulta_professor::Consulta_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Consulta_professor)
{
    ui->setupUi(this);
    this->showMaximized();
}

Consulta_professor::~Consulta_professor()
{
    delete ui;
}
