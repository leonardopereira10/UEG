#include "remove_professor.h"
#include "ui_remove_professor.h"

remove_professor::remove_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::remove_professor)
{
    ui->setupUi(this);
    ui->radio_cpf->setChecked(true);
    ui->radio_cpf->clicked();
}

remove_professor::~remove_professor()
{
    delete ui;
}

void remove_professor::on_radio_cpf_clicked()
{
    ui->variavel->setText("CPF:");
    ui->campo_busca->setInputMask("###.###.###-##");
    ui->campo_busca->setMaxLength(14);
    ui->campo_busca->setFocus();
}

void remove_professor::on_radio_nome_clicked()
{
    ui->variavel->setText("Nome:");
    ui->campo_busca->setInputMask("");
    ui->campo_busca->setMaxLength(310);
    ui->campo_busca->setFocus();
}

void remove_professor::on_campo_busca_returnPressed()
{
    ui->pushButton->clicked();
}

void remove_professor::on_pushButton_clicked()
{
    if(ui->radio_cpf->isChecked()){
        Professor professor(ui->campo_busca->text(), "NULL");
        ui->tableView->setModel(Professor::consultaProfessor(professor));
        ui->campo_busca->setFocus();
        ui->campo_busca->selectAll();
    }
    if(ui->radio_nome->isChecked()){
        Professor professor("NULL", ui->campo_busca->text());
        ui->tableView->setModel(Professor::consultaProfessorNome(professor));
        ui->campo_busca->setFocus();
        ui->campo_busca->selectAll();
    }

}


void remove_professor::on_tableView_doubleClicked(const QModelIndex &index)
{

}
