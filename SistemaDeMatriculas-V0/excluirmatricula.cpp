#include "excluirmatricula.h"
#include "matricula.h"
#include "ui_excluirmatricula.h"

#include <QMessageBox>

ExcluirMatricula::ExcluirMatricula(QWidget *parent)
    : QWidget(parent), ui(new Ui::ExcluirMatricula) {
  ui->setupUi(this);
}

ExcluirMatricula::~ExcluirMatricula() { delete ui; }

void ExcluirMatricula::on_BtnExcluir_clicked() {
  Matricula matricula(ui->txbCodAluno->text(), ui->txbCodDisciplina->text(), ui->txbAno->text(), ui->txbSemestre->text());
  if(!Matricula::VerificaAlunoExistente(ui->txbCodAluno->text()))
  {
      MensagemCampoNotFound("ID do Aluno");
  }
  if(!Matricula::VerificaDisciplinaExiste(ui->txbCodDisciplina->text()))
  {
      MensagemCampoNotFound("ID da Disciplina");
  }
  //else if !VerificaMatricula
  else
  {
  }
  Matricula::ExcluirMatricula(matricula);

}

void ExcluirMatricula::on_txbCodAluno_returnPressed()
{
    ui->txbCodDisciplina->setFocus();
}

void ExcluirMatricula::on_txbCodDisciplina_returnPressed()
{
    ui->txbAno->setFocus();
}

void ExcluirMatricula::on_txbAno_returnPressed()
{
    ui->txbSemestre->setFocus();
}

void ExcluirMatricula::on_txbSemestre_returnPressed()
{
    ui->BtnExcluir->click();
}

void ExcluirMatricula::MensagemCampoNotFound(char campo[])
{
    QMessageBox::warning(this, tr("Atenção!"),
                         tr(campo)+" não encontrado!",
                         QMessageBox::Ok);
}
