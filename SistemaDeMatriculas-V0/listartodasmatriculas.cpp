#include "listartodasmatriculas.h"
#include "matricula.h"
#include "ui_listartodasmatriculas.h"

ListarTodasMatriculas::ListarTodasMatriculas(QWidget *parent)
    : QWidget(parent), ui(new Ui::ListarTodasMatriculas) {
  ui->setupUi(this);
  ui->tableView->setModel(Matricula::ListarTodasMatriculas());
}

ListarTodasMatriculas::~ListarTodasMatriculas() {}

void ListarTodasMatriculas::on_pushButton_clicked() {
  ui->tableView->setModel(Matricula::ListarTodasMatriculas());
}
