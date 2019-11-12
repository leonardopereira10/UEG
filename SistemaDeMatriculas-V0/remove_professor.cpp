#include "remove_professor.h"
#include "ui_remove_professor.h"


remove_professor::remove_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::remove_professor)
{
    ui->setupUi(this);
    ui->aviso_cpf->hide();
    ui->campo_cpf->setFocus();
}

remove_professor::~remove_professor()
{
    delete ui;
}

void remove_professor::on_campo_cpf_returnPressed()
{
    ui->pushButton->clicked();
}

void remove_professor::on_pushButton_clicked()
{
    if(!Pessoa::validCpf(ui->campo_cpf->text())){
        ui->aviso_cpf->show();
        ui->aviso_cpf->setText("CPF Inválido!");
        ui->aviso_cpf->setStyleSheet("color: red;");
        ui->campo_cpf->setFocus();
        ui->campo_cpf->selectAll();
    }
    else{
        ui->aviso_cpf->hide();
        Professor professor(ui->campo_cpf->text(), "NULL");
        if(Professor::consultaProfessor(professor) == nullptr){
                ui->aviso_cpf->hide();
                QMessageBox::warning(this, "Remoção", "Nenhum professor encontrado.");
                ui->campo_cpf->setFocus();
                ui->campo_cpf->selectAll();
        }
        else{
            if(Professor::ExisteDisciplina(professor) == false){
                QMessageBox msg;

                msg.setText("Tem certeza que deseja remover?");
                QPushButton *sim = msg.addButton(tr("Sim"), QMessageBox::ActionRole);
                QPushButton *nao = msg.addButton(QMessageBox::Abort);

                msg.exec();

                if(msg.clickedButton() == sim){
                Professor::removeProfessor(professor);
                QMessageBox::about(this, "Remoção", "Professor removido com sucesso!");
                ui->campo_cpf->setFocus();
                ui->campo_cpf->clear();
                }
                if(msg.clickedButton() == nao){
                    ui->campo_cpf->setFocus();
                    ui->campo_cpf->selectAll();
                }
            }
            else{
                QMessageBox::critical(this, "Remoção", "Professor não pode ser emovido, pois possui discplinas a ministrar.");
                ui->campo_cpf->setFocus();
                ui->campo_cpf->selectAll();
            }
        }
    }
}
