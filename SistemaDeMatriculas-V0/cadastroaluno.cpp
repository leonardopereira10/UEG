#include <QDate>
#include <QDebug>
#include "cadastroaluno.h"
#include "ui_cadastroaluno.h"
#include "cpf.h"

cadastroAluno::cadastroAluno(QWidget *parent) :
	QWidget(parent),
	janelaCadastro(new Ui::cadastroAluno)
{
	janelaCadastro->setupUi(this);
	hideFields();

	janelaCadastro->dateEdit->setDate(QDate::currentDate());
	janelaCadastro->labelValidFields->setAlignment(Qt::AlignCenter);

	janelaCadastro->campoCpf->setInputMask("999.999.999-99");
	janelaCadastro->campoCpf->setFocus();
	janelaCadastro->campoCpf->clear();
}

cadastroAluno::~cadastroAluno()
{
	delete janelaCadastro;
}

void cadastroAluno::hideFields()
{
	janelaCadastro->campoMatricula->hide();
	janelaCadastro->labelMatricula->hide();
	janelaCadastro->dateEdit->hide();
	janelaCadastro->labelAno->hide();
	janelaCadastro->campoNome->hide();
	janelaCadastro->labelNome->hide();
	janelaCadastro->campoEndereco->hide();
	janelaCadastro->labelEndereco->hide();
	janelaCadastro->campoSetor->hide();
	janelaCadastro->labelSetor->hide();
	janelaCadastro->boxCidade->hide();
	janelaCadastro->labelCidade->hide();
	janelaCadastro->boxEstado->hide();
	janelaCadastro->labelEstado->hide();
	janelaCadastro->campoCelular->hide();
	janelaCadastro->labelCelular->hide();
	janelaCadastro->labelEmail->hide();
	janelaCadastro->campoEmail->hide();
	janelaCadastro->btnCadastrar->hide();
	janelaCadastro->labelValidCpf->hide();
	janelaCadastro->labelInvalidCpf->show();
}

void cadastroAluno::showFields()
{
	janelaCadastro->campoMatricula->show();
	janelaCadastro->labelMatricula->show();
	janelaCadastro->dateEdit->show();
	janelaCadastro->labelAno->show();
	janelaCadastro->campoNome->show();
	janelaCadastro->labelNome->show();
	janelaCadastro->campoEndereco->show();
	janelaCadastro->labelEndereco->show();
	janelaCadastro->campoSetor->show();
	janelaCadastro->labelSetor->show();
	janelaCadastro->boxCidade->show();
	janelaCadastro->labelCidade->show();
	janelaCadastro->boxEstado->show();
	janelaCadastro->labelEstado->show();
	janelaCadastro->campoCelular->show();
	janelaCadastro->labelCelular->show();
	janelaCadastro->campoEmail->show();
	janelaCadastro->labelEmail->show();
	janelaCadastro->btnCadastrar->show();
	janelaCadastro->labelValidCpf->show();
	janelaCadastro->labelInvalidCpf->hide();
}

bool cadastroAluno::validCpf_cad(QString cpfText)
{
	QPixmap valid(":/imagens/Imagens/Confirmação.png");
	QPixmap invalid(":/imagens/Imagens/Erro.png");

	Cpf cpf(cpfText);
	if(cpf.validCpf()) {
		janelaCadastro->labelValidCpf->setPixmap(valid);
		showFields();
		janelaCadastro->dateEdit->setFocus();
		return true;
	}
	else {
		janelaCadastro->labelInvalidCpf->setPixmap(invalid);
		hideFields();
		return false;
	}
}

bool cadastroAluno::validFields()
{
	bool cont = true;
	QPixmap invalid(":/imagens/Imagens/Erro.png");

	if(janelaCadastro->campoNome->text().isEmpty()) {
		janelaCadastro->labelValidNome->setPixmap(invalid);
		cont = false;
	}
	else {
		janelaCadastro->labelValidNome->clear();
	}
	if(janelaCadastro->campoEndereco->text().isEmpty()) {
		janelaCadastro->labelValidEndereco->setPixmap(invalid);
		cont = false;
	}
	else {
		janelaCadastro->labelValidEndereco->clear();
	}
	if(janelaCadastro->campoSetor->text().isEmpty()) {
		janelaCadastro->labelValidSetor->setPixmap(invalid);
		cont = false;
	}
	else {
		janelaCadastro->labelValidSetor->clear();
	}
	if(janelaCadastro->boxEstado->currentIndex() == 0 || janelaCadastro->boxCidade->currentIndex() == 0) {
		janelaCadastro->labelValidCidade->setPixmap(invalid);
		cont = false;
	}
	else {
		janelaCadastro->labelValidCidade->clear();
	}
	if(janelaCadastro->campoEmail->text().isEmpty()) {
		janelaCadastro->labelValidEmail->setPixmap(invalid);
		cont = false;
	}
	else {
		janelaCadastro->labelValidEmail->clear();
	}

	if(cont)
		return true;
	return false;
}

void cadastroAluno::on_campoCpf_textChanged()
{
	validCpf_cad(janelaCadastro->campoCpf->text());
}

void cadastroAluno::on_campoCpf_editingFinished()
{
	validCpf_cad(janelaCadastro->campoCpf->text());
}

void cadastroAluno::on_btnCadastrar_clicked()
{
	if(!validFields()) {
		janelaCadastro->labelValidFields->setText("* Não podem ficar vazios");
	}
}
