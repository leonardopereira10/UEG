#include "cadastro_professor.h"
#include "ui_cadastro_professor.h"

cadastro_professor::cadastro_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cadastro_professor)
{
    ui->setupUi(this);
    QPixmap logo_professor (":/imagens/Professores.png");
    ui->logo_professor->setPixmap(logo_professor);
}

cadastro_professor::~cadastro_professor()
{
    delete ui;
}
