#include "consulta_professor.h"
#include "ui_consulta_professor.h"

Consulta_professor::Consulta_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Consulta_professor)
{
    ui->setupUi(this);
    this->showMaximized();
}

Consulta_professor::~Consulta_professor()
{
    delete ui;
}

void Consulta_professor::on_radio_cpf_clicked()
{
    ui->variavel->setText("CPF:");
    ui->campo_busca->setInputMask("###.###.###-##");
    ui->campo_busca->setMaxLength(14);
    ui->campo_busca->setFocus();
}

void Consulta_professor::on_radio_nome_clicked()
{
    ui->variavel->setText("Nome:");
    ui->campo_busca->setInputMask("");
    ui->campo_busca->setMaxLength(310);
    ui->campo_busca->setFocus();

}

void Consulta_professor::on_pushButton_clicked()
{
    if(ui->radio_cpf->isChecked()){
        ui->tableView->setModel(Professor::consultaProfessor(ui->campo_busca->text()));
        ui->campo_busca->setFocus();
        ui->campo_busca->selectAll();
    }
    if(ui->radio_nome->isChecked()){
        ui->tableView->setModel(Professor::consultaProfessorNome(ui->campo_busca->text()));
        ui->campo_busca->setFocus();
        ui->campo_busca->selectAll();
    }
}
