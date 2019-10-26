#include "cadcurso.h"
#include "ui_cadcurso.h"

cadCurso::cadCurso(QWidget *parent) :
    QWidget(parent),
    janelaCadastro(new Ui::cadCurso)
{
    janelaCadastro->setupUi(this);

}

cadCurso::~cadCurso()
{
    delete janelaCadastro;
}

bool cadCurso::validarCampos()
{
    bool cont = true;

    if (janelaCadastro->campoNome->text().isEmpty() || janelaCadastro->boxDuracao->value() < 1)
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
        janelaCadastro->labelValid->setAlignment(Qt::AlignCenter);
        janelaCadastro->labelValid->setText("* Não podem estar vazios");
    }
    else {
        janelaCadastro->labelValid->clear();

    }
}
