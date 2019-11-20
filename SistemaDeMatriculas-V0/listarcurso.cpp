#include "listarcurso.h"
#include "ui_listarcurso.h"

ListarCurso::ListarCurso(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListarCurso)
{
    ui->setupUi(this);
}

ListarCurso::~ListarCurso()
{
    delete ui;
}
