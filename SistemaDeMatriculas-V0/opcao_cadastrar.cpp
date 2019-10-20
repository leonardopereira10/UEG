#include "opcao_cadastrar.h"
#include "ui_opcao_cadastrar.h"
#include <QPixmap>

opcao_cadastrar::opcao_cadastrar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::opcao_cadastrar)
{
    ui->setupUi(this);

    QPixmap logo_aluno ("/Users/danyelliasmanso/UEG/Imagens/Aluno.png");
    ui->logo_aluno->setPixmap(logo_aluno);

    QPixmap logo_professor ("/Users/danyelliasmanso/Downloads/Professores.png");
    ui->logo_professor->setPixmap(logo_professor);

    QPixmap logo_curso ("/Users/danyelliasmanso/Downloads/Curso.png");
    ui->logo_curso->setPixmap(logo_curso);

    QPixmap logo_disciplina ("/Users/danyelliasmanso/Downloads/Disciplinas.png");
    ui->logo_disciplina->setPixmap(logo_disciplina);

}

opcao_cadastrar::~opcao_cadastrar()
{
    delete ui;
}

void opcao_cadastrar::on_btn_voltar_clicked()
{
    this->close();
    Menu_principal* menu = new Menu_principal;
    menu->show();
}

void opcao_cadastrar::on_btn_aluno_clicked()
{

}

void opcao_cadastrar::on_btn_professor_clicked()
{

}

void opcao_cadastrar::on_btn_curso_clicked()
{

}

void opcao_cadastrar::on_btn_disciplina_clicked()
{

}
