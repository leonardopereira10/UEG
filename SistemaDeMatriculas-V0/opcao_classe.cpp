#include "opcao_classe.h"
#include "ui_opcao_classe.h"

Opcao_classe::Opcao_classe(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Opcao_classe)
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

Opcao_classe::~Opcao_classe()
{
	delete ui;
}

// NOTE: Removido método voltar de opção_cadastrar (usando sgnais agora)

void Opcao_classe::on_btn_aluno_clicked()
{
	this->blockSignals(true);
	Cpf janelaCpf;
	janelaCpf.exec();
	if(janelaCpf.result() == 1) {
		this->done(1);
	}
}

void Opcao_classe::on_btn_professor_clicked()
{
	this->blockSignals(true);
	Cpf janelaCpf;
	janelaCpf.exec();
}

void Opcao_classe::on_btn_curso_clicked()
{

}

void Opcao_classe::on_btn_disciplina_clicked()
{

}
