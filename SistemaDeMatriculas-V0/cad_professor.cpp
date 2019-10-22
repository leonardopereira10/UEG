#include "cad_professor.h"
#include "ui_cad_professor.h"

cad_professor::cad_professor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cad_professor)
{
    ui->setupUi(this);
}

cad_professor::~cad_professor()
{
    delete ui;
}
