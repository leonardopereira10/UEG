#include "cadcurso.h"
#include "ui_cadcurso.h"
#include <QMessageBox>

cadCurso::cadCurso(QWidget *parent) :   //Construtor da Interface
    QWidget(parent),
    janelaCadastro(new Ui::cadCurso)
{
    janelaCadastro->setupUi(this);
    janelaCadastro->labelValid->setAlignment(Qt::AlignCenter);          //alinhamento do campo de validação

}

cadCurso::~cadCurso()
{
    delete janelaCadastro;
}

bool cadCurso::validarCampos()
{
    bool cont = true;
           //Verificar se os campos estao vazios
    if (janelaCadastro->campoNome->text().isEmpty() || janelaCadastro->boxDuracao->value() < 1)
        return !cont;
    if (janelaCadastro->campoIDCurso->text().isEmpty())
        return !cont;
    return cont;

}

void cadCurso::on_campoNome_returnPressed()
{
    janelaCadastro->boxDuracao->setFocus();
}

void cadCurso::on_boxDuracao_editingFinished()
{
    janelaCadastro->btnCadastrar->setFocus();
}

void cadCurso::on_btnCadastrar_clicked()
{
    if (!validarCampos()) {
        janelaCadastro->labelValid->setText("* Não podem estar vazios");
    }
    else {
         if (Curso::analisaCurso(janelaCadastro->campoIDCurso->text().toInt())){
            Curso curso(janelaCadastro->campoNome->text(),
                        janelaCadastro->boxDuracao->value(),
                        janelaCadastro->campoIDCurso->text().toInt());
            if (Curso::cadCurso(curso)) {
                QMessageBox::information(this, "Cadastro Realizado", "Curso Cadastrado Com Sucesso!");
            } else {
                QMessageBox::warning(this, "Erro ao Cadastrar", "Houve um erro ao cadastrar o curso");
            }
        } else {
            QMessageBox::warning(this, "Erro ao Cadastrar", "Curso já existe");
        }
    }
}


