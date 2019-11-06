#include "consulta_professor.h"
#include "ui_consulta_professor.h"

Consulta_professor::Consulta_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Consulta_professor)
{
    ui->setupUi(this);
    this->showMaximized();
    ui->radio_cpf->setChecked(true);
    ui->variavel->setText("CPF:");
    ui->campo_busca->setInputMask("###.###.###-##");
    ui->campo_busca->setMinimumWidth(110);
    ui->campo_busca->setFocus();
}

Consulta_professor::~Consulta_professor()
{
    delete ui;
}

void Consulta_professor::on_radio_cpf_clicked()
{
    ui->variavel->setText("CPF:");
    ui->campo_busca->setInputMask("###.###.###-##");
    ui->campo_busca->setMaximumWidth(110);
    ui->campo_busca->setFocus();
}

void Consulta_professor::on_radio_nome_clicked()
{
    ui->variavel->setText("Nome:");
    ui->campo_busca->setInputMask("");
    ui->campo_busca->setMinimumWidth(310);
    ui->campo_busca->setFocus();

}

void Consulta_professor::on_pushButton_clicked()
{
    if(ui->campo_busca->maximumWidth() == 110){
        ui->tableView->setModel(Professor::consultaProfessor(ui->campo_busca->text()));
        ui->campo_busca->setFocus();
        ui->campo_busca->selectAll();
    }
    else{
        ui->tableView->setModel(Professor::consultaProfessorNome(ui->campo_busca->text()));
        ui->campo_busca->setFocus();
        ui->campo_busca->selectAll();
    }
}
