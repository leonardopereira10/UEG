#include "cad_professor.h"
#include "ui_cad_professor.h"

cad_professor::cad_professor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cad_professor)
{
    ui->setupUi(this);
    QPixmap logo_professor_cad (":/imagens/Professores.png");
    ui->logo_professor_cad->setPixmap(logo_professor_cad);

}

cad_professor::~cad_professor()
{
    delete ui;
}

void cad_professor::on_btn_cancelar_clicked()
{
    this->close();

}

void cad_professor::on_campo_nome_returnPressed()
{
    ui->data_de_nascimento->setFocus();
}

void cad_professor::on_btn_cadastrar_clicked()
{

}
