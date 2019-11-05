#include "cadastroaluno.h"
#include "ui_cadastroaluno.h"
#include "pessoa.h"

cadastroAluno::cadastroAluno(QWidget *parent) :
	QWidget(parent),
	janelaCadastro(new Ui::cadastroAluno)
{
	janelaCadastro->setupUi(this);

	ocultarCampos();
	// Propriedades do campoCpf
	janelaCadastro->campoCpf->setInputMask("999.999.999-99");
	janelaCadastro->campoCpf->setFocus();
	janelaCadastro->campoCpf->clear();

	// Propriedades de dateEdit
	janelaCadastro->dateEdit->setDate(QDate::currentDate());
	janelaCadastro->labelValidFields->setAlignment(Qt::AlignCenter);

	// Propriedades dos demais campos
	janelaCadastro->campoNome->setValidator(new QRegExpValidator(QRegExp("^[A-zÁÀÂÃÉÈÊÍÏÓÔÕÖÚÇÑáàâãéèêíïóôõöúçñ ]+"), this));
	janelaCadastro->campoEndereco->setValidator(new QRegExpValidator(QRegExp("^[0-9A-z-ÁÀÂÃÉÈÊÍÏÓÔÕÖÚÇÑáàâãéèêíïóôõöúçñ, ]+"), this));
	janelaCadastro->campoSetor->setValidator(new QRegExpValidator(QRegExp("^[0-9A-z-ÁÀÂÃÉÈÊÍÏÓÔÕÖÚÇÑáàâãéèêíïóôõöúçñ, ]+"), this));
	janelaCadastro->campoCelular->setValidator(new QRegExpValidator(QRegExp("^[0-9]+"), this));
	janelaCadastro->campoEmail->setValidator(new QRegExpValidator(QRegExp("^[0-9a-zA-Z-@_. ]+"), this));

	// Preencher caixas de estados, cidades e cursos
	janelaCadastro->boxEstado->setModel(Pessoa::getEstados());
	janelaCadastro->boxCidade->setModel(Pessoa::getCidades(janelaCadastro->boxEstado->currentIndex()));
	janelaCadastro->boxCurso->setModel(Pessoa::getCursos());
}

cadastroAluno::~cadastroAluno()
{
	delete janelaCadastro;
}

void cadastroAluno::ocultarCampos()
{
	janelaCadastro->campoMatricula->hide();
	janelaCadastro->labelMatricula->hide();

	janelaCadastro->dateEdit->hide();
	janelaCadastro->labelAno->hide();

	janelaCadastro->campoNome->hide();
	janelaCadastro->labelNome->hide();
	janelaCadastro->labelValidNome->hide();

	janelaCadastro->campoEndereco->hide();
	janelaCadastro->labelEndereco->hide();
	janelaCadastro->labelValidEndereco->hide();

	janelaCadastro->campoSetor->hide();
	janelaCadastro->labelSetor->hide();
	janelaCadastro->labelValidSetor->hide();

	janelaCadastro->boxCidade->hide();
	janelaCadastro->labelCidade->hide();
	janelaCadastro->labelValidCidade->hide();

	janelaCadastro->boxEstado->hide();
	janelaCadastro->labelEstado->hide();

	janelaCadastro->campoCelular->hide();
	janelaCadastro->labelCelular->hide();

	janelaCadastro->campoEmail->hide();
	janelaCadastro->labelEmail->hide();
	janelaCadastro->labelValidEmail->hide();

	janelaCadastro->boxCurso->hide();
	janelaCadastro->labelCurso->hide();
	janelaCadastro->labelValidCurso->hide();

	janelaCadastro->labelValidCpf->hide();
	janelaCadastro->labelInvalidCpf->show();

	janelaCadastro->labelValidFields->hide();

	janelaCadastro->btnCadastrar->hide();
}

void cadastroAluno::mostrarCampos()
{
	janelaCadastro->campoMatricula->show();
	janelaCadastro->labelMatricula->show();

	janelaCadastro->dateEdit->show();
	janelaCadastro->labelAno->show();

	janelaCadastro->campoNome->show();
	janelaCadastro->labelNome->show();
	janelaCadastro->labelValidNome->show();

	janelaCadastro->campoEndereco->show();
	janelaCadastro->labelEndereco->show();
	janelaCadastro->labelValidEndereco->show();

	janelaCadastro->campoSetor->show();
	janelaCadastro->labelSetor->show();
	janelaCadastro->labelValidSetor->show();

	janelaCadastro->boxCidade->show();
	janelaCadastro->labelCidade->show();
	janelaCadastro->labelValidCidade->show();

	janelaCadastro->boxEstado->show();
	janelaCadastro->labelEstado->show();

	janelaCadastro->campoCelular->show();
	janelaCadastro->labelCelular->show();

	janelaCadastro->campoEmail->show();
	janelaCadastro->labelEmail->show();
	janelaCadastro->labelValidEmail->show();

	janelaCadastro->boxCurso->show();
	janelaCadastro->labelCurso->show();
	janelaCadastro->labelValidCurso->show();

	janelaCadastro->labelValidCpf->show();
	janelaCadastro->labelInvalidCpf->hide();

	janelaCadastro->labelValidFields->show();

	janelaCadastro->btnCadastrar->show();
}

void cadastroAluno::limparCampos()
{
	janelaCadastro->campoNome->clear();
	janelaCadastro->campoMatricula->clear();
	janelaCadastro->campoEndereco->clear();
	janelaCadastro->campoSetor->clear();
	janelaCadastro->boxEstado->setCurrentIndex(0);
	janelaCadastro->boxCidade->setCurrentIndex(0);
	janelaCadastro->campoCelular->clear();
	janelaCadastro->campoEmail->clear();
	janelaCadastro->boxCurso->setCurrentIndex(0);
}

bool cadastroAluno::validarCampos()
{
	bool cont = true;
	QPixmap invalid(":/recursos/Imagens/Erro.png");

	if(janelaCadastro->campoNome->text().isEmpty()) {
		qDebug() << "validFields(): Nome não pode ser null";
		janelaCadastro->labelValidNome->setPixmap(invalid);
		cont = false;
	}
	else {
		janelaCadastro->labelValidNome->clear();
	}
	if(janelaCadastro->campoEndereco->text().isEmpty()) {
		qDebug() << "validFields(): Endereço não pode ser null";
		janelaCadastro->labelValidEndereco->setPixmap(invalid);
		cont = false;
	}
	else {
		janelaCadastro->labelValidEndereco->clear();
	}
	if(janelaCadastro->campoSetor->text().isEmpty()) {
		qDebug() << "validFields(): Setor não pode ser null";
		janelaCadastro->labelValidSetor->setPixmap(invalid);
		cont = false;
	}
	else {
		janelaCadastro->labelValidSetor->clear();
	}
	if(janelaCadastro->boxEstado->currentIndex() == -1 || janelaCadastro->boxCidade->currentIndex() == -1) {
		qDebug() << "validFields(): Estado e/ou Cidade não pode ser null";
		janelaCadastro->labelValidCidade->setPixmap(invalid);
		cont = false;
	}
	else {
		janelaCadastro->labelValidCidade->clear();
	}
	if(janelaCadastro->campoEmail->text().isEmpty()) {
		qDebug() << "validFields(): Email não pode ser null";
		janelaCadastro->labelValidEmail->setPixmap(invalid);
		cont = false;
	}
	else {
		janelaCadastro->labelValidEmail->clear();
	}
	if(janelaCadastro->boxCurso->currentIndex() == -1) {
		qDebug() << "validFields(): Curso não pode ser null";
		janelaCadastro->labelValidCurso->setPixmap(invalid);
		cont = false;
	}
	else {
		janelaCadastro->labelValidCurso->clear();
	}

	if(cont)
		return true;
	return false;
}

void cadastroAluno::on_btnCadastrar_clicked()
{
	// Verificar se existem campos vazios
	if(!validarCampos()) {
		janelaCadastro->labelValidFields->setText("* Não podem ficar vazios");
	}
	else {
		if(Pessoa::analisaPessoa(janelaCadastro->campoCpf->text())) {
			Aluno aluno(janelaCadastro->campoCpf->text(), janelaCadastro->campoNome->text(),
						janelaCadastro->campoEndereco->text(), janelaCadastro->campoSetor->text(),
						Pessoa::getCodCidades(janelaCadastro->boxCidade->currentText(), janelaCadastro->boxEstado->currentIndex()),
						janelaCadastro->boxEstado->currentIndex(), janelaCadastro->campoCelular->text(),
						janelaCadastro->campoEmail->text(), janelaCadastro->dateEdit->date(), Pessoa::getCodCurso(janelaCadastro->boxCurso->currentText()));

			// Tentar enviar dados ao BD
			if(!Aluno::cadastraAluno(aluno)) {
				QMessageBox::warning(this, "Erro ao cadastrar", "Houve um erro ao cadastrar no banco de dados");
			}
			else {
				aluno.setMatricula(janelaCadastro->campoCpf->text());
				janelaCadastro->campoMatricula->setText(QString::number(aluno.getMatricula()));
				QMessageBox::information(this, "Cadastro realizado", "Aluno cadastrado com sucesso!");
			}
		}
		else {
			QMessageBox::warning(this, "Atenção", "Já existe um aluno cadastrado com este cpf");
		}
	}
	janelaCadastro->campoCpf->setFocus();
	janelaCadastro->campoCpf->selectAll();
}

void cadastroAluno::on_campoCpf_textChanged()
{
	if(Pessoa::validCpf(janelaCadastro->campoCpf->text())) {
		if(Pessoa::analisaPessoa(janelaCadastro->campoCpf->text())) {
			mostrarCampos();
			janelaCadastro->dateEdit->setFocus();
			janelaCadastro->dateEdit->selectAll();
		}
		else {
			QMessageBox::warning(this, "Atenção", "Já existe um aluno cadastrado com este cpf");
			janelaCadastro->campoCpf->setFocus();
			janelaCadastro->campoCpf->selectAll();
			limparCampos();
		}
	}
	else {
		ocultarCampos();
		limparCampos();
	}
}

void cadastroAluno::on_dateEdit_editingFinished()
{
	janelaCadastro->campoNome->setFocus();
	janelaCadastro->campoNome->selectAll();
}

void cadastroAluno::on_campoNome_returnPressed()
{
	janelaCadastro->campoEndereco->setFocus();
	janelaCadastro->campoEndereco->selectAll();
}

void cadastroAluno::on_campoEndereco_returnPressed()
{
	janelaCadastro->campoSetor->setFocus();
	janelaCadastro->campoSetor->selectAll();
}

void cadastroAluno::on_campoSetor_returnPressed()
{
	janelaCadastro->boxEstado->setFocus();
}

void cadastroAluno::on_boxEstado_currentIndexChanged()
{
	janelaCadastro->boxCidade->setModel(Pessoa::getCidades(janelaCadastro->boxEstado->currentIndex()));
	janelaCadastro->boxCidade->setFocus();
}

void cadastroAluno::on_boxCidade_currentIndexChanged()
{
	janelaCadastro->campoCelular->setFocus();
	janelaCadastro->campoCelular->selectAll();
}

void cadastroAluno::on_campoCelular_returnPressed()
{
	janelaCadastro->campoEmail->setFocus();
	janelaCadastro->campoEmail->selectAll();
}

void cadastroAluno::on_campoEmail_returnPressed()
{
	janelaCadastro->boxCurso->setFocus();
}

void cadastroAluno::on_boxCurso_currentIndexChanged()
{
	janelaCadastro->btnCadastrar->setFocus();
}
