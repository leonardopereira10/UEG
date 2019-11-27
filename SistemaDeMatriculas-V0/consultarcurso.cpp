#include "consultarcurso.h"
#include "ui_consultarcurso.h"

ConsultarCurso::ConsultarCurso(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConsultarCurso)
{
    ui->setupUi(this);
}


ConsultarCurso::~ConsultarCurso()
{
    delete ui;
}

bool ConsultarCurso::validarCampos()
{
    if (ui->lineEdit->text().isEmpty()) {
        return false;
    } return true;
}

void ConsultarCurso::on_lineEdit_returnPressed()
{
    ui->pushButton->setFocus();
    ui->pushButton->click();
}

void ConsultarCurso::on_pushButton_clicked()
{
    if (!validarCampos()){
        QMessageBox::warning(this,"Erro","Não podem estar vazios");
    } else{
        if (Curso::analisaCurso(ui->lineEdit->text().toInt())){
            QMessageBox::warning(this, "Erro","Curso não Existe");
        } else {
               Curso curso;
               curso.setIdCurso(ui->lineEdit->text().toInt());
               ui->tableView->setModel(Curso::consultarCurso(ui->lineEdit->text().toInt()));
        }
    }
}
