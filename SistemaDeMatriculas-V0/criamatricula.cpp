#include "criamatricula.h"
#include "matricula.h"
#include "ui_criamatricula.h"

#include <QMessageBox>

CriaMatricula::CriaMatricula(QWidget *parent)
    : QWidget(parent), ui(new Ui::CriaMatricula) {
    ui->setupUi(this);
    ui->lineEdit->selectAll();
}

CriaMatricula::~CriaMatricula() { delete ui; }

void CriaMatricula::on_pushButton_2_clicked() {
    Matricula dto( ui->lineEdit->text(), ui->lineEdit_2->text(),ui->lineEdit_3->text(), ui->lineEdit_4->text());
    if(!Matricula::VerificaMatriculaExiste(dto)){
        if(!ui->pushButton_2->isHidden()){
            Matricula::insereMatricula(dto);
        }
        else{
        }
        limpaTela();
        ui->lineEdit->setFocus();
        ui->lineEdit->selectAll();
    }
    else{
        if(ui->lineEdit_3->text()==""||ui->lineEdit_4->text()=="")
        {
            QMessageBox::warning(this, tr("Atenção!"),
                                 tr("\nPor favor, insira ano e semestre corretamente.\n"),
                                 QMessageBox::Ok);
        }
        else
        {
            QMessageBox::warning(this, tr("Atenção!"),
                                 tr("\nMatricula já existe.\n"),
                                 QMessageBox::Ok);
        }
    }
}

void CriaMatricula::on_lineEdit_returnPressed()
{
    if (!Matricula ::VerificaDisciplinaExiste(ui->lineEdit->text())) {
        QMessageBox::warning(this, tr("Atenção!"),
                             tr("\nCodigo da disciplina inexistente.\n"),
                             QMessageBox::Ok);
        ui->pushButton_2->hide();
        //ui->lineEdit->setFocus();
    }
    else
    {
        ui->lineEdit_2->setFocus();
        if (Matricula ::VerificaAlunoExistente(ui->lineEdit_2->text()))
        {
            ui->pushButton_2->show();
        }
    }
}

void CriaMatricula::on_lineEdit_2_returnPressed()
{
    if (!Matricula ::VerificaAlunoExistente(ui->lineEdit_2->text())) {
        QMessageBox::warning(this, tr("Atenção!"),
                             tr("\nMatricula do aluno inexistente.\n"),
                             QMessageBox::Ok);
        ui->pushButton_2->hide();
        //ui->lineEdit_2->setFocus();
    } else {
        ui->lineEdit_3->setFocus();
        if (Matricula ::VerificaDisciplinaExiste(ui->lineEdit->text())) {
            ui->pushButton_2->show();
        }
    }
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
