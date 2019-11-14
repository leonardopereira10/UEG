#include "listaalunos.h"
#include "ui_listaalunos.h"
#include <QMessageBox>

ListaAlunos::ListaAlunos(QWidget *parent) :
	QWidget(parent),
	janelaLista(new Ui::ListaAlunos)
{
	janelaLista->setupUi(this);

	if(janelaLista->radioCresc->isChecked())
		janelaLista->tableView->setModel(Aluno::listaAlunos(janelaLista->boxOrdem->currentText(), "asc"));
	else {
		if(janelaLista->radioDecresc->isChecked())
			janelaLista->tableView->setModel(Aluno::listaAlunos(janelaLista->boxOrdem->currentText(), "desc"));
		else
			QMessageBox::warning(this, "ERRO", "Ordem de listagem não checada");
	}
}

ListaAlunos::~ListaAlunos()
{
	delete janelaLista;
}

void ListaAlunos::on_btnAtualizar_clicked()
{
	if(janelaLista->radioCresc->isChecked())
		janelaLista->tableView->setModel(Aluno::listaAlunos(janelaLista->boxOrdem->currentText(), "asc"));
	else {
		if(janelaLista->radioDecresc->isChecked())
			janelaLista->tableView->setModel(Aluno::listaAlunos(janelaLista->boxOrdem->currentText(), "desc"));
		else
			QMessageBox::warning(this, "ERRO", "Ordem de listagem não checada");
	}
}

void ListaAlunos::on_boxOrdem_currentIndexChanged(const QString &arg1)
{
	if(janelaLista->radioCresc->isChecked())
		janelaLista->tableView->setModel(Aluno::listaAlunos(arg1, "asc"));
	else {
		if(janelaLista->radioDecresc->isChecked())
			janelaLista->tableView->setModel(Aluno::listaAlunos(arg1, "desc"));
		else
			QMessageBox::warning(this, "ERRO", "Ordem de listagem não checada");
	}
}

void ListaAlunos::on_radioCresc_clicked()
{
	if(janelaLista->radioCresc->isChecked())
		janelaLista->tableView->setModel(Aluno::listaAlunos(janelaLista->boxOrdem->currentText(), "asc"));
	else {
		if(janelaLista->radioDecresc->isChecked())
			janelaLista->tableView->setModel(Aluno::listaAlunos(janelaLista->boxOrdem->currentText(), "desc"));
		else
			QMessageBox::warning(this, "ERRO", "Ordem de listagem não checada");
	}
}

void ListaAlunos::on_radioDecresc_clicked()
{
	if(janelaLista->radioCresc->isChecked())
		janelaLista->tableView->setModel(Aluno::listaAlunos(janelaLista->boxOrdem->currentText(), "asc"));
	else {
		if(janelaLista->radioDecresc->isChecked())
			janelaLista->tableView->setModel(Aluno::listaAlunos(janelaLista->boxOrdem->currentText(), "desc"));
		else
			QMessageBox::warning(this, "ERRO", "Ordem de listagem não checada");
	}
}
