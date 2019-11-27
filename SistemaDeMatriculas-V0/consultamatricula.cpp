#include "consultamatricula.h"
#include "matricula.h"
#include "ui_consultamatricula.h"
#include <QString>
#include <QMessageBox>

ConsultaMatricula::ConsultaMatricula(QWidget *parent)
    : QWidget(parent), ui(new Ui::ConsultaMatricula) {
  ui->setupUi(this);
}

ConsultaMatricula::~ConsultaMatricula() { delete ui; }

void ConsultaMatricula::on_pushButton_3_clicked() {
    if(!Matricula::AlunoPossuiMatricula(ui->lineEdit_5->text().toInt()))
    {
        QMessageBox::warning(this, tr("Atenção!"),
                                       tr("\nAluno especificado não possui matrículas.\n"),
                                       QMessageBox::Ok);
        ui->tableView->setModel(NULL);
    }
    else
    {
        Matricula matricula(ui->lineEdit_5->text());
        ui->tableView->setModel(Matricula::ListaDisciplinasPorAlunos(matricula));
    }
  ui->tableView->resizeColumnToContents(0);
  ui->tableView->resizeColumnToContents(3);
  ui->tableView->resizeColumnToContents(4);
  ui->tableView->resizeColumnToContents(5);
  ui->tableView->resizeColumnToContents(6);
  ui->tableView->resizeColumnToContents(7);
}

void ConsultaMatricula::on_lineEdit_5_returnPressed()
{
    ui->pushButton_3->click();
}
