#include "cadastro_professor.h"
#include "ui_cadastro_professor.h"


bool cadastro_professor::check_inserted_text_name(QString text){
    if(text.length() < 3)
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

void cadastro_professor::hideall()
{
    ui->aviso_incorreto->hide();
    ui->aviso_cpf->hide();
    ui->campo_cpf->setFocus();
    ui->nome->hide();
    ui->endereco->hide();
    ui->setor->hide();
    ui->uf->hide();
    ui->cidade->hide();
    ui->celular->hide();
    ui->email->hide();
    ui->campo_nome->hide();
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

void cadastro_professor::showall()
{
    ui->nome->show();
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
    ui->campo_email->show();
    ui->btn_cadastrar->show();

}

void cadastro_professor::clear_all(){
    ui->campo_nome->clear();
    ui->campo_endereco->clear();
    ui->campo_setor->clear();
    ui->selecao_estado->setCurrentIndex(0);
    ui->selecao_cidade->setCurrentIndex(0);
    ui->campo_graduacao->clear();
    ui->campo_celular->clear();
    ui->campo_email->clear();
}


cadastro_professor::cadastro_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cadastro_professor)
{
    this->size();
    ui->setupUi(this);
    QPixmap logo_professor (":/imagens/Professores.png");
    ui->logo_professor->setPixmap(logo_professor.scaled(111,109, Qt::KeepAspectRatio));
    clear_all();
    hideall();

    ui->selecao_estado->setModel(PersistProfessor().getEstados());
    ui->selecao_cidade->setModel(Pessoa::getCidades(ui->selecao_estado->currentIndex()));

}

cadastro_professor::~cadastro_professor()
{
    delete ui;
}

void cadastro_professor::on_campo_cpf_returnPressed()
{
    ui->inserir->clicked();
}

void cadastro_professor::on_inserir_clicked()
{
    if(!(Pessoa::validCpf(ui->campo_cpf->text()))){
            ui->aviso_cpf->show();
            ui->aviso_cpf->setText("CPF Inválido!");
            ui->aviso_cpf->setStyleSheet("color: red;");
            ui->campo_cpf->setFocus();
            ui->campo_cpf->selectAll();
    }
    else{
        if(Pessoa::analisaPessoa(ui->campo_cpf->text())){
            ui->aviso_cpf->show();
            ui->aviso_cpf->setText("CPF Válido!");
            ui->aviso_cpf->setStyleSheet("color: green;");
            ui->campo_cpf->setReadOnly(true);
            showall();
            ui->campo_nome->setPlaceholderText("Insira seu nome");
            ui->campo_endereco->setPlaceholderText("Insira seu endereço");
            ui->campo_setor->setPlaceholderText("Insira seu setor");
            ui->campo_graduacao->setPlaceholderText("Insira sua graduação");
            ui->campo_email->setPlaceholderText("Insira seu email");

            ui->campo_nome->setFocus();
        }
        else{
            QMessageBox::warning(this, "Atenção", "Já existe um Professor cadastrado com esse CPF.");
            clear_all();
            ui->campo_cpf->setFocus();
            ui->campo_cpf->selectAll();
        }
      }
}


void cadastro_professor::on_campo_nome_returnPressed()
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

void cadastro_professor::on_selecao_estado_currentIndexChanged()
{
    ui->selecao_cidade->setFocus();
    ui->selecao_cidade->setModel(Pessoa::getCidades(ui->selecao_estado->currentIndex()));
}

void cadastro_professor::on_selecao_cidade_currentIndexChanged()
{
    ui->campo_graduacao->setFocus();
}

void cadastro_professor::on_campo_graduacao_returnPressed()
{
    ui->selecao_titulacao->setFocus();
}

void cadastro_professor::on_selecao_titulacao_currentTextChanged()
{
    ui->campo_celular->setFocus();
}

void cadastro_professor::on_campo_celular_returnPressed()
{
    ui->campo_email->setFocus();
}

void cadastro_professor::on_campo_email_returnPressed()
{
    ui->btn_cadastrar->clicked();
}

//Cadastro no banco
void cadastro_professor::on_btn_cadastrar_clicked()
{
    if(check_inserted_text_name(ui->campo_nome->text()) && check_inserted_text_commun(ui->campo_endereco->text()) &&
            check_inserted_text_commun(ui->campo_setor->text()) && check_inserted_text_commun(ui->campo_graduacao->text()) &&
             check_inserted_text_phone(ui->campo_celular->text()) && check_inserted_text_commun(ui->campo_email->text())){

    Professor Professor(ui->campo_cpf->text(), ui->campo_nome->text(),
                        ui->campo_endereco->text(), ui->campo_setor->text(), Pessoa::getCodCidades(ui->selecao_cidade->currentText(), ui->selecao_estado->currentIndex()),
                        ui->selecao_estado->currentIndex(), ui->campo_graduacao->text(), ui->selecao_titulacao->currentText(),
                        ui->campo_celular->text(), ui->campo_email->text());

                // Tentar enviar dados ao BD
                if(!Professor::cadastraProfessor(Professor)) {
                    QMessageBox::warning(this, "Erro ao cadastrar", "Houve um erro ao cadastrar no banco de dados");
                }
                else {
                    QMessageBox::information(this, "Cadastro realizado", "Professor cadastrado com sucesso!");
                    hideall();
                    ui->campo_cpf->setFocus();
                    ui->campo_cpf->clear();
                    ui->campo_cpf->setReadOnly(false);
                }

            }
    else{
        QMessageBox::critical(this, "ERRO", " Existem campos preenchidos incorretamente! Verifique-os");
    }
}

