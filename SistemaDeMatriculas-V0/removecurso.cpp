#include "removecurso.h"
#include "ui_removecurso.h"

removeCurso::removeCurso(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::removeCurso)
{
    ui->setupUi(this);
}

removeCurso::~removeCurso()
{
    delete ui;
}
