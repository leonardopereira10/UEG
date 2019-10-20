#include "opcao_cadastrar.h"
#include "ui_opcao_cadastrar.h"
#include <QPixmap>

opcao_cadastrar::opcao_cadastrar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::opcao_cadastrar)
{
    ui->setupUi(this);

	QPixmap logo_aluno (":/imagens/Aluno.png");
    ui->logo_aluno->setPixmap(logo_aluno);

	QPixmap logo_professor (":/imagens/Professores.png");
    ui->logo_professor->setPixmap(logo_professor);

	QPixmap logo_curso (":/imagens/Curso.png");
    ui->logo_curso->setPixmap(logo_curso);

	QPixmap logo_disciplina (":/imagens/Disciplinas.png");
    ui->logo_disciplina->setPixmap(logo_disciplina);

}

opcao_cadastrar::~opcao_cadastrar()
{
    delete ui;
}

// NOTE: Removido método voltar de opção_cadastrar (usando sgnais agora)

void opcao_cadastrar::on_btn_aluno_clicked()
{
	this->blockSignals(true);
	Cpf janelacpf;
	janelacpf.exec();
}

void opcao_cadastrar::on_btn_professor_clicked()
{
    this->blockSignals(true);
    Cpf janelacpf;
    janelacpf.exec();
}

void opcao_cadastrar::on_btn_curso_clicked()
{

}

void opcao_cadastrar::on_btn_disciplina_clicked()
{

}
