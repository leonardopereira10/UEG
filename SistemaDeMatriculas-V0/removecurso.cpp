#include "removecurso.h"
#include "ui_removecurso.h"
#include <QMessageBox>

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

bool removeCurso::validarCampos()
{
    if (ui->lineEdit->text().isEmpty()) {
        return false;
    } return true;
}

void removeCurso::on_pushButton_clicked()
{
    if (!validarCampos()){
        QMessageBox::warning(this,"Erro","Não podem estar vazios");
    } else{
        if (!Curso::analisaCurso(ui->lineEdit->text().toInt())){
            if (Curso::removeCurso(ui->lineEdit->text().toInt())){
                QMessageBox::information(this, "Remover Curso", "Curso Removido com Sucesso");
            }  else {
                QMessageBox::warning(this, "Erro", "Erro ao remover curso");
            }
        } else {
            QMessageBox::warning(this, "Erro","Curso não Existe");
        }
    }
}

void removeCurso::on_lineEdit_returnPressed()
{
    ui->pushButton->setFocus();
    ui->pushButton->click();
}
