#include "consultamatricula.h"
#include "matricula.h"
#include "ui_consultamatricula.h"

ConsultaMatricula::ConsultaMatricula(QWidget *parent)
    : QWidget(parent), ui(new Ui::ConsultaMatricula) {
  ui->setupUi(this);
}

ConsultaMatricula::~ConsultaMatricula() { delete ui; }

void ConsultaMatricula::on_pushButton_3_clicked() {
  Matricula matricula(ui->lineEdit_5->text());
  ui->tableView->setModel(Matricula::ListaDisciplinasPorAlunos(matricula));
}
