#include "cadastroaluno.h"
#include "ui_cadastroaluno.h"

cadastroAluno::cadastroAluno(QWidget *parent) :
	QWidget(parent),
	janelaCadastro(new Ui::cadastroAluno)
{
	janelaCadastro->setupUi(this);
//	janelaCadastro->campoMatricula->hide();
//	janelaCadastro->labelMatricula->hide();

	janelaCadastro->campoCpf->setInputMask("999.999.999-99");
	janelaCadastro->campoCpf->setFocus();
	janelaCadastro->campoCpf->clear();
}

cadastroAluno::~cadastroAluno()
{
	delete janelaCadastro;
}

