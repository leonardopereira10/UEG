#include "menu_principal.h"
#include "ui_menu_principal.h"
#include <QPixmap>

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

void Menu_principal::on_btn_Cadastrar_clicked()
{
    this->close();
    opcao_cadastrar tela_cadastro;
    tela_cadastro.exec();

}
