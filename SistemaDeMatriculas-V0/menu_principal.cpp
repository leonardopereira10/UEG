#include "menu_principal.h"
#include "ui_menu_principal.h"
#include "opcao_classe.h"
#include "aluno.h"

Menu_principal::Menu_principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu_principal)
{
    ui->setupUi(this);

	QPixmap logo_cadastrar (":/imagens/Cadastrar.png");
    ui->logo_cadastrar->setPixmap(logo_cadastrar);

	QPixmap logo_consultar (":/imagens/pesquisar.png");
    ui->logo_consultar->setPixmap(logo_consultar);

	QPixmap logo_remover (":/imagens/remover.png");
    ui->logo_remover->setPixmap(logo_remover);
}

Menu_principal::~Menu_principal()
{
    delete ui;
}

// NOTE: Não criar novas instâncias de menu
void Menu_principal::on_btn_Cadastrar_clicked()
{
	this->hide();
	Opcao_classe select_class;
	select_class.exec();
	if(select_class.result() == 1) {
		Aluno novoAluno;
		novoAluno.pessoaBase("98867");
	}
	this->setVisible(true);
}

void Menu_principal::on_btn_consultar_clicked()
{
	this->hide();
	Opcao_classe select_class;
	select_class.setWindowTitle("Consulta");
	select_class.exec();
	this->setVisible(true);
}


void Menu_principal::on_btn_remover_clicked()
{
	this->hide();
	Opcao_classe select_class;
	select_class.setWindowTitle("Remover");
	select_class.exec();
	this->show();
}
