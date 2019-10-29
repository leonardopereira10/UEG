#include "cadastro_professor.h"
#include "ui_cadastro_professor.h"
#include "mainwindow.h"
#include <QMessageBox>


bool cadastro_professor::check_inserted_text_name(QString text){
    if(text.length() < 3)
        return false;
    else
        return true;
}

bool cadastro_professor::check_inserted_text_Bday(QString text)
{
    if(text.length() < 10)
        return false;
    else
        return true;
}

bool cadastro_professor::check_inserted_text_commun(QString text)
{
    if(text.length() < 5)
        return false;
    else
        return true;
}

bool cadastro_professor::check_inserted_text_phone(QString text)
{
    if(text.length() < 13)
        return false;
    else
        return true;
}

cadastro_professor::cadastro_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cadastro_professor)
{
    this->size();
    ui->setupUi(this);
    QPixmap logo_professor (":/imagens/Professores.png");
    ui->logo_professor->setPixmap(logo_professor.scaled(111,109, Qt::KeepAspectRatio));
    ui->aviso_incorreto->hide();
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
        banco_de_dados.setDatabaseName("/Users/danyelliasmanso/Sistemas_de_informacao (1)/P_O_O_2/SQLite/SCM 2.db");
        banco_de_dados.open();
        QSqlQuery query(banco_de_dados);
            if(query.exec("SELECT CPF from tb_Professores WHERE CPF = '"+ui->campo_cpf->text()+"'")){
                    int cont = 0;
                    while(query.next()){
                        cont++;
                    }
                        if(cont>0){
                            QMessageBox::about(this, "Cadastro", "Professor já cadastrado!");
                            ui->campo_cpf->clear();
                         }else{
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
    ui->btn_cadastrar->clicked();
    ui->btn_cadastrar->setFocus();
}

void cadastro_professor::on_selecao_estado_activated(const QString &arg1)
{
        QSqlQueryModel* modelo = new QSqlQueryModel();
        QSqlQuery* query = new QSqlQuery();

        if(arg1 == "AC"){
            query->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'AC'");
            query->exec();
            modelo->setQuery(*query);
            ui->selecao_cidade->setModel(modelo);
        }
        QSqlQueryModel* modal = new QSqlQueryModel();
        QSqlQuery* qry = new QSqlQuery();


        //Verificação da opção selecionada
        if(arg1 == "AC"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'AC'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setFocus();
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "AL"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'AL'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "AM"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'AM'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "AP"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'AP'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "BA"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'BA'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "CE"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'CE'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "DF"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'DF'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "ES"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'ES'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "GO"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'GO'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "MA"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'MA'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "MG"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'MG'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "MS"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'MS'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "MT"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'MT'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "PA"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'PA'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "PB"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'PB'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "PE"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'PE'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "PI"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'PI'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "PR"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'PR'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "RJ"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'RJ'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "RN"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'RN'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "RO"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'RO'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "RR"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'RR'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "RS"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'RS'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "SC"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'SC'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "SE"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'SE'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "SP"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'SP'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
        }

        if(arg1 == "TO"){
            qry->prepare("SELECT c.Cidade from Cidades c INNER JOIN Estados e WHERE c.Estado = e.IdEstado and e.UF = 'TO'");
            qry->exec();
            modal->setQuery(*qry);
            ui->selecao_cidade->setModel(modal);
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
    banco_de_dados.setDatabaseName("/Users/danyelliasmanso/Sistemas_de_informacao (1)/P_O_O_2/SQLite/SCM 2.db");
    banco_de_dados.open();
    QSqlQuery query(banco_de_dados);

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

    ui->aviso_incorreto->show();
    if(check_inserted_text_name(nome) == false){
        ui->campo_nome->setFocus();
        ui->aviso_incorreto->setText("Nome inserido é inválido!");
        ui->aviso_incorreto->adjustSize();
        ui->aviso_incorreto->setStyleSheet("background-color: red");
    }
        else{
                if(check_inserted_text_Bday(data_de_nascimento) == false){
                    ui->campo_data_de_nascimento->setFocus();
                    ui->aviso_incorreto->setText("Data de nascimento inválida!");
                    ui->aviso_incorreto->adjustSize();
                    ui->aviso_incorreto->setStyleSheet("background-color: red");
                }
                    else{
                        if(check_inserted_text_commun(endereco) == false){
                            ui->campo_endereco->setFocus();
                            ui->aviso_incorreto->setText("Endereço inserido é inválido!");
                            ui->aviso_incorreto->adjustSize();
                            ui->aviso_incorreto->setStyleSheet("background-color: red");
                        }
                           else{
                                if(check_inserted_text_commun(setor) == false){
                                    ui->campo_setor->setFocus();
                                    ui->aviso_incorreto->setText("Setor inserido é inválido!");
                                    ui->aviso_incorreto->adjustSize();
                                    ui->aviso_incorreto->setStyleSheet("background-color: red");
                                    }
                                    else{
                                        if(check_inserted_text_commun(graduacao) == false){
                                            ui->campo_graduacao->setFocus();
                                            ui->aviso_incorreto->setText("Graduação preenchida é inválida!");
                                            ui->aviso_incorreto->adjustSize();
                                            ui->aviso_incorreto->setStyleSheet("background-color: red");
                                        }
                                            else{
                                                if(check_inserted_text_phone(celular) == false){
                                                    ui->campo_celular->setFocus();
                                                    ui->aviso_incorreto->setText("Número de celular é inválido!");
                                                    ui->aviso_incorreto->adjustSize();
                                                    ui->aviso_incorreto->setStyleSheet("background-color: red");
                                                }
                                                else{
                                                    if(check_inserted_text_commun(email) == false){
                                                        ui->campo_email->setFocus();
                                                        ui->aviso_incorreto->setText("E-mail inválido!");
                                                        ui->aviso_incorreto->adjustSize();
                                                        ui->aviso_incorreto->setStyleSheet("background-color: red");
                                                    }
                                                    else{
                                                        ui->aviso_incorreto->adjustSize();
                                                        ui->aviso_incorreto->setStyleSheet("background-color: green");
                                                        ui->aviso_incorreto->setText("Verificação completada!");
                                                        ui->aviso_incorreto->adjustSize();

                                                        if(!query.prepare("INSERT INTO tb_Professores VALUES ('"+cpf+"', '"+nome+"', '"+data_de_nascimento+"', '"+endereco+"', '"+setor+"', '"+uf+"', '"+cidade+"', '"+celular+"', '"+email+"', '"+graduacao+"', '"+titulacao+"')")){
                                                            qDebug() <<query.lastError();
                                                        }
                                                        if(!query.exec()){
                                                            qDebug() <<"Erro ao cadastrar." <<banco_de_dados.lastError();
                                                        }
                                                        else{
                                                            QMessageBox::about(this, "Cadastro Realizado", "Cadastro realizado com Sucesso!");
                                                            query.clear();
                                                            banco_de_dados.close();

                                                            //Liberando o campo CPF para edição
                                                            ui->campo_cpf->setReadOnly(false);

                                                            //Esconde todos os campos
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

                                                            //Limpa todos os campos
                                                            ui->campo_cpf->clear();
                                                            ui->campo_nome->clear();
                                                            ui->campo_data_de_nascimento->clear();
                                                            ui->campo_endereco->clear();
                                                            ui->campo_setor->clear();
                                                            ui->campo_graduacao->clear();
                                                            ui->selecao_titulacao->clear();
                                                            ui->campo_celular->clear();
                                                            ui->campo_email->clear();
                                                        }
                                                    }
                                                }
                                            }
                                    }
                            }
                    }
         }


    }
