#include "excluirmatricula.h"
#include "matricula.h"
#include "ui_excluirmatricula.h"

ExcluirMatricula::ExcluirMatricula(QWidget *parent)
    : QWidget(parent), ui(new Ui::ExcluirMatricula) {
  ui->setupUi(this);
}

ExcluirMatricula::~ExcluirMatricula() { delete ui; }

void ExcluirMatricula::on_pushButton_4_clicked() {
  Matricula matricula(ui->txbCodAluno->text(), ui->txbCodDisciplina->text(), ui->txbAno->text(), ui->txbSemestre->text());
  if(Matricula::VerificaAlunoExistente(ui->txbCodAluno->text()))
      ui->RetornoDeErro->setText("Aluno não encontrado");
  else if(Matricula::VerificaDisciplinaExiste(ui->txbCodDisciplina->text())){
      ui->RetornoDeErro->setText("Disciplina inexistente");
  }
  //else if !VerificaMatricula
  else{ui->RetornoDeErro->setText("");}
  Matricula::ExcluirMatricula(matricula);

}
