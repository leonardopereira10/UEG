#include "consultaaluno.h"
#include "ui_consultaaluno.h"

// TODO: Ajustar consulta de aluno por matricula
// TODO: Ajustar consulta por nome

ConsultaAluno::ConsultaAluno(QWidget *parent) :
	QWidget(parent),
	janelaConsulta(new Ui::ConsultaAluno)
{
	janelaConsulta->setupUi(this);

	janelaConsulta->lineEditSearch->setValidator(new QRegExpValidator(QRegExp("^[0-9]+"), this));
}

ConsultaAluno::~ConsultaAluno()
{
	delete janelaConsulta;
}

void ConsultaAluno::on_radioMatricula_clicked()
{
	janelaConsulta->lineEditSearch->setMaxLength(15);
	janelaConsulta->lineEditSearch->clear();
	janelaConsulta->lineEditSearch->setValidator(new QRegExpValidator(QRegExp("^[0-9]+"), this));
	janelaConsulta->lineEditSearch->setFocus();
	janelaConsulta->lineEditSearch->selectAll();
}

void ConsultaAluno::on_radioCpf_clicked()
{
	janelaConsulta->lineEditSearch->setMaxLength(11);
	janelaConsulta->lineEditSearch->clear();
	janelaConsulta->lineEditSearch->setValidator(new QRegExpValidator(QRegExp("^[0-9]+"), this));
	janelaConsulta->lineEditSearch->setFocus();
	janelaConsulta->lineEditSearch->selectAll();
}

void ConsultaAluno::on_radioNome_clicked()
{
	janelaConsulta->lineEditSearch->setMaxLength(50);
	janelaConsulta->lineEditSearch->clear();
	janelaConsulta->lineEditSearch->setValidator(new QRegExpValidator(QRegExp("^[A-zÁÀÂÃÉÈÊÍÏÓÔÕÖÚÇÑáàâãéèêíïóôõöúçñ ]+"), this));
	janelaConsulta->lineEditSearch->setFocus();
	janelaConsulta->lineEditSearch->selectAll();
}

void ConsultaAluno::on_lineEditSearch_returnPressed()
{
	janelaConsulta->btnConsultar->click();
	janelaConsulta->lineEditSearch->setFocus();
	janelaConsulta->lineEditSearch->selectAll();
}

void ConsultaAluno::on_btnConsultar_clicked()
{
	if(janelaConsulta->radioMatricula->isChecked()) {
		Aluno aluno(janelaConsulta->lineEditSearch->text().toInt());
		janelaConsulta->tableView->setModel(Aluno::consultaAlunoMatricula(aluno));
		janelaConsulta->lineEditSearch->setFocus();
		janelaConsulta->lineEditSearch->selectAll();
	}
	else {
		if(janelaConsulta->radioCpf->isChecked()) {
			QLineEdit campoCpf;
			campoCpf.setInputMask("999.999.999-99");
			campoCpf.setText(janelaConsulta->lineEditSearch->text());
			Aluno aluno(campoCpf.text(), "NULL");
			janelaConsulta->tableView->setModel(Aluno::consultaAlunoCpf(aluno));
			janelaConsulta->lineEditSearch->setFocus();
			janelaConsulta->lineEditSearch->selectAll();
		}
		else {
			if(janelaConsulta->radioNome->isChecked()) {
				Aluno aluno("NULL", janelaConsulta->lineEditSearch->text());
				janelaConsulta->tableView->setModel(Aluno::consultaAlunoNome(aluno));
				janelaConsulta->lineEditSearch->setFocus();
				janelaConsulta->lineEditSearch->selectAll();
			}
		}
	}
}
