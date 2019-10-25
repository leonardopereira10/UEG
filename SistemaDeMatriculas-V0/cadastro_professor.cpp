#include "cadastro_professor.h"
#include "ui_cadastro_professor.h"
#include <QMessageBox>


cadastro_professor::cadastro_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cadastro_professor)
{
    ui->setupUi(this);
    QPixmap logo_professor (":/imagens/Professores.png");
    ui->logo_professor->setPixmap(logo_professor.scaled(111,109, Qt::KeepAspectRatio));
    ui->aviso_cpf->hide();
    ui->campo_cpf->setFocus();
    ui->nome->hide();
    ui->data_de_nascimento->hide();
    ui->endereco->hide();
    ui->setor->hide();
    ui->uf->hide();
    ui->cidade->hide();
    ui->celular->hide();
    ui->email->hide();
    ui->campo_nome->hide();
    ui->campo_data_de_nascimento->hide();
    ui->campo_endereco->hide();
    ui->campo_setor->hide();
    ui->selecao_estado->hide();
    ui->selecao_cidade->hide();
    ui->graduacao->hide();
    ui->campo_graduacao->hide();
    ui->titulacao->hide();
    ui->selecao_titulacao->hide();
    ui->campo_celular->hide();
    ui->campo_email->hide();
    ui->btn_cadastrar->hide();
}

cadastro_professor::~cadastro_professor()
{
    delete ui;
}

void cadastro_professor::on_inserir_clicked()
{
    setCpf(ui->campo_cpf->text());
    if(!validCpf()){
        ui->aviso_cpf->show();
        ui->aviso_cpf->setText("CPF inválido!");
        ui->campo_cpf->selectAll();
        ui->campo_cpf->setFocus();
    }
    else{
        ui->aviso_cpf->setText("CPF válido!");
        ui->campo_cpf->setReadOnly(true);
        ui->nome->show();
        ui->data_de_nascimento->show();
        ui->endereco->show();
        ui->setor->show();
        ui->uf->show();
        ui->cidade->show();
        ui->celular->show();
        ui->email->show();
        ui->campo_nome->show();
        ui->campo_endereco->show();
        ui->campo_setor->show();
        ui->selecao_estado->show();
        ui->selecao_cidade->show();
        ui->graduacao->show();
        ui->campo_graduacao->show();
        ui->titulacao->show();
        ui->selecao_titulacao->show();
        ui->campo_celular->show();
        ui->campo_data_de_nascimento->show();
        ui->campo_email->show();
        ui->btn_cadastrar->show();
        ui->campo_nome->setFocus();
    }
}

void cadastro_professor::on_campo_cpf_returnPressed()
{
    ui->inserir->click();
}

void cadastro_professor::on_campo_nome_returnPressed()
{
    ui->campo_data_de_nascimento->setFocus();
}
void cadastro_professor::on_campo_data_de_nascimento_returnPressed()
{
    ui->campo_endereco->setFocus();
}

void cadastro_professor::on_campo_endereco_returnPressed()
{
    ui->campo_setor->setFocus();
}

void cadastro_professor::on_campo_setor_returnPressed()
{
    ui->selecao_estado->setFocus();
}

void cadastro_professor::on_campo_celular_returnPressed()
{
    ui->campo_email->setFocus();
}

void cadastro_professor::on_campo_email_returnPressed()
{
    ui->btn_cadastrar->setFocus();
}

void cadastro_professor::on_selecao_estado_activated(const QString &arg1)
{
        QSqlQueryModel * modal = new QSqlQueryModel();
        QSqlQuery* qry = new QSqlQuery();

        if(arg1 == "AC"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'AC'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "AL"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'AL'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "AM"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'AM'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "AP"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'AP'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "BA"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'BA'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "CE"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'CE'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "DF"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'DF'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "ES"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'ES'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "GO"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'GO'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "MA"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'MA'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "MG"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'MG'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "MS"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'MS'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "MT"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'MT'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "PA"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'PA'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "PB"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'PB'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "PE"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'PE'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "PI"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'PI'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "PR"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'PR'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "RJ"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'RJ'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "RN"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'RN'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "RO"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'RO'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "RR"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'RR'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "RS"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'RS'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "SC"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'SC'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "SE"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'SE'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "SP"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'SP'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

        if(arg1 == "TO"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'TO'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
            qDebug() <<(modal->rowCount());
        }

}

void cadastro_professor::on_selecao_cidade_activated(const QString &arg1)
{
    ui->campo_graduacao->setFocus();
}

void cadastro_professor::on_campo_graduacao_returnPressed()
{
    ui->selecao_titulacao->setFocus();
}

void cadastro_professor::on_selecao_titulacao_activated(const QString &arg1)
{
    ui->campo_celular->setFocus();
}

void cadastro_professor::on_btn_cadastrar_clicked()
{

    QSqlQuery qry;

    QString cpf = ui->campo_cpf->text();
    QString nome = ui->campo_nome->text();
    QString data_de_nascimento = ui->campo_data_de_nascimento->text();
    QString endereco = ui->campo_endereco->text();
    QString setor = ui->campo_setor->text();
    QString uf = ui->selecao_estado->currentText();
    QString cidade = ui->selecao_cidade->currentText();
    QString celular = ui->campo_celular->text();
    QString email = ui->campo_email->text();
    QString graduacao = ui->campo_graduacao->text();
    QString titulacao = ui->selecao_titulacao->currentText();

    qry.prepare("INSERT INTO tb_Professores (CPF, Professor, Nascimento, Logradouro, Setor, Cidade, Estado, Celular, Email, Graduacao, Titulacao) VALUES"
                "('"+cpf+"', '"+nome+"', '"+data_de_nascimento+"', '"+endereco+"', '"+setor+"', '"+cidade+"', '"+uf+"', '"+celular+"', '"+email+"', '"+graduacao+"', '"+titulacao+"')");
    if(qry.exec()){
    QMessageBox::about(this, "Cadastro Realizado", "Cadastro realizado com Sucesso!");
    }
    else{
        qDebug() <<"Erro ao cadastrar.";
    }
}
