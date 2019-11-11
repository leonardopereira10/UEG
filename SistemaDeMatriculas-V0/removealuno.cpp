#include "removealuno.h"
#include "ui_removealuno.h"
#include <QMessageBox>

RemoveAluno::RemoveAluno(QWidget *parent) :
	QWidget(parent),
	janelaRemove(new Ui::RemoveAluno)
{
	janelaRemove->setupUi(this);

	janelaRemove->lineEditMatricula->setValidator(new QRegExpValidator(QRegExp("^[0-9]+"), this));
}

RemoveAluno::~RemoveAluno()
{
	delete janelaRemove;
}

void RemoveAluno::on_btn_remover_clicked()
{
	if(Aluno::analisaAluno(janelaRemove->lineEditMatricula->text().toInt())) {
		QMessageBox::information(this, "Aluno existe", "Existe um aluno cadastrado com esta matricula no sistema");
		janelaRemove->lineEditMatricula->setFocus();
		janelaRemove->lineEditMatricula->selectAll();
	}
	else {
		QMessageBox::warning(this, "Aluno não cadastrado", "Não há nenhum aluno cadastrado com esta matricula no sistema");
		janelaRemove->lineEditMatricula->setFocus();
		janelaRemove->lineEditMatricula->selectAll();
	}
}

void RemoveAluno::on_lineEditMatricula_returnPressed()
{
	janelaRemove->btn_remover->setFocus();
	janelaRemove->btn_remover->click();
}
