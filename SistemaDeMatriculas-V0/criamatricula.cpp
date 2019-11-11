#include "criamatricula.h"
#include "matricula.h"
#include "ui_criamatricula.h"

CriaMatricula::CriaMatricula(QWidget *parent)
    : QWidget(parent), ui(new Ui::CriaMatricula) {
  ui->setupUi(this);
  if (!Matricula ::VerificaDisciplinaExiste(ui->lineEdit->text())) {
    ui->ValidaDisciplina->setText("Codigo da disciplina inexistente");
    ui->pushButton_2->hide();
  }
  else {
    ui->ValidaDisciplina->setText("");
    ui->pushButton_2->show();
  }
  if (!Matricula ::VerificaAlunoExistente(ui->lineEdit_2->text())) {
    ui->validaAluno->setText("Matricula de Aluno inexistente");
    ui->pushButton_2->hide();
  }
  else {
    ui->validaAluno->setText("");
    ui->pushButton_2->show();
  }
  ui->lineEdit->selectAll();
}

CriaMatricula::~CriaMatricula() { delete ui; }

void CriaMatricula::on_lineEdit_editingFinished() {
  if (!Matricula ::VerificaDisciplinaExiste(ui->lineEdit->text())) {
    ui->ValidaDisciplina->setText("Codigo da disciplina inexistente");
    ui->pushButton_2->hide();
  } else {
    ui->ValidaDisciplina->setText("");

    if (Matricula ::VerificaAlunoExistente(ui->lineEdit_2->text())) {
      ui->pushButton_2->show();
    }
  }
}

void CriaMatricula::on_lineEdit_2_editingFinished() {
  if (!Matricula ::VerificaAlunoExistente(ui->lineEdit_2->text())) {
    ui->validaAluno->setText("Matricula de Aluno inexistente");
    ui->pushButton_2->hide();
  } else {
    ui->validaAluno->setText("");
    if (Matricula ::VerificaDisciplinaExiste(ui->lineEdit->text())) {
      ui->pushButton_2->show();
    }
  }
}

void CriaMatricula::on_pushButton_2_clicked() {
    Matricula dto(ui->lineEdit_2->text(), ui->lineEdit->text(), ui->lineEdit_3->text(), ui->lineEdit_4->text());
    if(!Matricula::VerificaMatriculaExiste(dto)){
        if(!ui->pushButton_2->isHidden()){
            Matricula::insereMatricula(dto);
        }
        else{}
        limpaTela();
        ui->lineEdit->setFocus();
        ui->lineEdit->selectAll();
    }
    else{

    }
}

void CriaMatricula::on_lineEdit_returnPressed()
{
    ui->lineEdit_2->setFocus();
}

void CriaMatricula::on_lineEdit_2_returnPressed()
{
    ui->lineEdit_2->editingFinished();
    ui->lineEdit_3->setFocus();
}

void CriaMatricula::on_lineEdit_3_returnPressed()
{
    ui->lineEdit_4->setFocus();
}

void CriaMatricula::on_lineEdit_4_returnPressed()
{
    ui->pushButton_2->click();
}

void CriaMatricula::limpaTela()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
}
