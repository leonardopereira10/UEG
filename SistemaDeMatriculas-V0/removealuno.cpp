#include "removealuno.h"
#include "ui_removealuno.h"
#include <QMessageBox>
#include <qvalidator.h>
#include "matricula.h"

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
	Aluno aluno(janelaRemove->lineEditMatricula->text().toInt());
	if(Aluno::analisaAluno(aluno.getMatricula())) {
		if(!Matricula::AlunoPossuiMatricula(aluno.getMatricula())) {
			if(Aluno::removeAluno(aluno.getMatricula())) {
				QMessageBox::information(this, "Aluno removido", "O aluno solicitado foi removido com sucesso do sistema");
			}
			else {
				QMessageBox::warning(this, "Aluno não removido", "Houve um erro ao remover o aluno do sistema");
			}
		}
		else {
			QMessageBox::warning(this, "Aluno possui matrículas", "O aluno possui matrículas ativas no sistema\nPor-favor, remova-as antes de remover o aluno");
		}
	}
	else {
		QMessageBox::warning(this, "Aluno não cadastrado", "Não há nenhum aluno cadastrado com esta matricula no sistema");
	}
	janelaRemove->lineEditMatricula->setFocus();
	janelaRemove->lineEditMatricula->selectAll();
}

void RemoveAluno::on_lineEditMatricula_returnPressed()
{
	janelaRemove->btn_remover->setFocus();
	janelaRemove->btn_remover->click();
}
