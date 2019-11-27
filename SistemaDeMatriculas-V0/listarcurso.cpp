#include "listarcurso.h"
#include "ui_listarcurso.h"
#include "curso.h"

ListarCurso::ListarCurso(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListarCurso)
{
    ui->setupUi(this);
    ui->tableView->setModel(Curso::listarCurso());
}

ListarCurso::~ListarCurso()
{
    delete ui;
}

void ListarCurso::on_pushButton_clicked()
{
    ui->tableView->setModel(Curso::listarCurso());
}
