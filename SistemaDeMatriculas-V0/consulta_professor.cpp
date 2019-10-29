#include "consulta_professor.h"
#include "ui_consulta_professor.h"

consulta_professor::consulta_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::consulta_professor)
{
    ui->setupUi(this);
    this->showMaximized();
    ui->radio_cpf->setChecked(true);
    ui->campo_pesquisa->setInputMask("###.###.###-##");
    ui->campo_pesquisa->setMaximumWidth(110);
}

consulta_professor::~consulta_professor()
{
    delete ui;
}

void consulta_professor::on_radio_cpf_clicked()
{
    ui->tabela_resultado->clearSpans();
    ui->label_variavel->setText("CPF:");
    ui->label_variavel->adjustSize();
    ui->campo_pesquisa->setInputMask("###.###.###-##");
    ui->campo_pesquisa->setFixedWidth(110);
}

void consulta_professor::on_radio_nome_clicked()
{
    ui->tabela_resultado->clearSpans();
    ui->label_variavel->setText("Nome:");
    ui->label_variavel->adjustSize();
    ui->campo_pesquisa->setInputMask("");
    ui->campo_pesquisa->setFixedWidth(300);

}

void consulta_professor::on_btn_pesquisar_clicked()
{
    banco_de_dados.setDatabaseName("/Users/danyelliasmanso/Sistemas_de_informacao (1)/P_O_O_2/SQLite/SCM 2.db");
    banco_de_dados.open();
    QSqlQueryModel * molde = new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery(banco_de_dados);


    //Pesquisa quando digitar o CPF
    if(ui->campo_pesquisa->width() == 110){
    query->prepare("SELECT * FROM tb_Professores WHERE CPF = '"+ui->campo_pesquisa->text()+"' ORDER BY Professor asc");
    query->exec();
    molde->setQuery(*query);
    ui->tabela_resultado->setModel(molde);
    banco_de_dados.close();
    }

    //Pesquisa quando digitar o nome
    if(ui->campo_pesquisa->width() == 300){
        query->prepare("SELECT * FROM tb_Professores WHERE Professor like '%"+ui->campo_pesquisa->text()+"%' ORDER BY Professor asc");
        query->exec();
        molde->setQuery(*query);
        ui->tabela_resultado->setModel(molde);
        banco_de_dados.close();
    }
}

void consulta_professor::on_campo_pesquisa_returnPressed()
{
    ui->btn_pesquisar->clicked();
}


//ui->tableWidget->horizontalHeader()->resizeSections(QHeaderView::ResizeToContents);
//ui->tableWidget->verticalHeader()->resizeSections(QHeaderView::ResizeToContents);
