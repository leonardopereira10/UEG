#include "cadastroaluno.h"
#include "ui_cadastroaluno.h"
#include "cpf.h"

cadastroAluno::cadastroAluno(QWidget *parent) :
	QWidget(parent),
	janelaCadastro(new Ui::cadastroAluno)
{
	janelaCadastro->setupUi(this);

	hideFields();
	// Propriedades do campoCpf
	janelaCadastro->campoCpf->setInputMask("999.999.999-99");
	janelaCadastro->campoCpf->setFocus();
	janelaCadastro->campoCpf->clear();

	// Propriedades de dateEdit
	janelaCadastro->dateEdit->setDate(QDate::currentDate());
	janelaCadastro->labelValidFields->setAlignment(Qt::AlignCenter);

	// Verificar Driver QSQLITE
	if(QSqlDatabase::isDriverAvailable("QSQLITE")) {
		// Criar conexão com o banco
		db = QSqlDatabase::addDatabase("QSQLITE");
		db.setDatabaseName("/home/lucas/UEG/SistemaDeMatriculas-V0/BD/testDB");

		// Abrir banco
		if(db.open()) {
			query = new QSqlQuery(db);
			fillBoxEstados();
			fillBoxCidades();
		}
		else {
			qDebug() << "cadastroAluno(): " << db.lastError();
			janelaCadastro->labelValidFields->setText("Falha ao abrir banco de dados");
		}
	}
	else {
		qDebug() << "cadastroAluno(): " << db.lastError();
		janelaCadastro->labelValidFields->setText("ERRO: Driver QSQLITE não disponível");
	}
}

cadastroAluno::~cadastroAluno()
{
	delete janelaCadastro;
}

void cadastroAluno::hideFields()
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

void cadastroAluno::showFields()
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

bool cadastroAluno::validCpf_cad(QString cpfValue)
{
	QPixmap valid(":/recursos/Imagens/Confirmação.png");
	QPixmap invalid(":/recursos/Imagens/Erro.png");

	Cpf cpf(cpfValue);
	if(cpf.validCpf()) {
		// Verificar se cpfValue já existe no banco
		query->clear();
		query->prepare("SELECT COUNT(alunos.cpf) "
					   "FROM alunos "
					   "WHERE alunos.cpf=:cpf");
		query->bindValue(":cpf", cpfValue);
		if(!query->exec()) {
			qDebug() << "validCpf_cad(): " << query->lastError();
			return false;
		}
		query->first();
		// Caso cpfValue já exista
		if(query->value(0).toInt() != 0) {
			janelaCadastro->labelValidCpf->setPixmap(invalid);
			hideFields();
			qDebug() << "validCpf_cad(): Cpf já existe na base de dados";
			QMessageBox::warning(this, "CPF", "Já existe um aluno cadastrado com este CPF");
			janelaCadastro->campoCpf->selectAll();
			return false;
		}
		else {
			janelaCadastro->labelValidCpf->setPixmap(valid);
			showFields();
			return true;
		}
	}
	else {
		janelaCadastro->labelInvalidCpf->setPixmap(invalid);
		qDebug() << "validCpf_cad(): CPF inválido";
		hideFields();
		return false;
	}
}

bool cadastroAluno::validFields()
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

void cadastroAluno::fillBoxEstados()
{
	QSqlQueryModel *modelEstados = new QSqlQueryModel();

	query->clear();
	query->prepare("SELECT sigla FROM estados");

	if(!query->exec())
		qDebug() << "fillBoxEstados(): " << query->lastError();
	else {
		modelEstados->setQuery(*query);
		janelaCadastro->boxEstado->setModel(modelEstados);
	}
}

void cadastroAluno::fillBoxCidades()
{
	QSqlQueryModel *modelCidades = new QSqlQueryModel();

	query->clear();
	query->prepare("SELECT cidades.nome "
				   "FROM cidades, estados "
				   "WHERE cidades.estado=estados.cod_estados "
				   "AND estados.sigla=:uf");
	query->bindValue(":uf", janelaCadastro->boxEstado->currentText());

	if(!query->exec())
		qDebug() << "fillBoxCidades(): " << query->lastError();
	else {
		modelCidades->setQuery(*query);
		janelaCadastro->boxCidade->setModel(modelCidades);
	}
}

int cadastroAluno::getCodCidade()
{
	query->clear();
	query->prepare("SELECT cod_cidades "
				   "FROM cidades "
				   "WHERE cidades.nome=:cidade");
	query->bindValue(":cidade", janelaCadastro->boxCidade->currentText());

	if(!query->exec())
		qDebug() << "getCodCidade(): " << query->lastError();

	query->first();
	return query->value(0).toInt();
}

void cadastroAluno::on_btnCadastrar_clicked()
{
	// Verificar se existem campos vazios
	if(!validFields()) {
		janelaCadastro->labelValidFields->setText("* Não podem ficar vazios");
	}
	else {
		Aluno aluno;

		// Completar todos os dados de aluno
		if(!janelaCadastro->campoCelular->text().isEmpty()) {
			aluno.alunoCompleto(janelaCadastro->campoCpf->text(),
						janelaCadastro->campoNome->text(),
						janelaCadastro->campoEndereco->text(),
						janelaCadastro->campoSetor->text(),
						janelaCadastro->boxEstado->currentIndex(),
						getCodCidade(),
						janelaCadastro->campoCelular->text(),
						janelaCadastro->campoEmail->text(),
						janelaCadastro->dateEdit->text(),
						janelaCadastro->boxCurso->currentIndex());
		}
		// Completar apenas dados not-null de alunos
		else {
			aluno.alunoBase(janelaCadastro->campoCpf->text(),
						janelaCadastro->campoNome->text(),
						janelaCadastro->campoEndereco->text(),
						janelaCadastro->campoSetor->text(),
						janelaCadastro->boxEstado->currentIndex(),
						getCodCidade(),
						janelaCadastro->campoEmail->text(),
						janelaCadastro->dateEdit->text(),
						janelaCadastro->boxCurso->currentIndex());
		}

		// Validar cpf
		if(validCpf_cad(aluno.getCpf())) {
			// Tentar enviar dados ao BD
			if(!commit_on_bd(&aluno)) {
				qDebug() << "commit_on_bd(): " << query->lastError();
				QMessageBox::warning(this, "Erro ao cadastrar", "Houve um erro ao cadastrar no banco de dados");
			}
			else {
				// Recuperar matricula do aluno recém cadastrado
				aluno.setMatricula(query->lastInsertId().toInt());

				janelaCadastro->campoMatricula->setText(QString::number(aluno.getMatricula()));
				QMessageBox::information(this, "Cadastro realizado", "Aluno cadastrado com sucesso!");
			}
		}
		else {
			janelaCadastro->campoCpf->setFocus();
			janelaCadastro->campoCpf->selectAll();
			return;
		}
	}
}

bool cadastroAluno::commit_on_bd(Aluno *aluno)
{
	query->clear();

	if(!janelaCadastro->campoCelular->text().isEmpty()) {
		query->prepare("INSERT INTO alunos(cpf, nome, endereco, setor, estado, cidade, celular, email, ano, curso) "
					   "VALUES (:cpf, :nome, :endereco, :setor, :estado, :cidade, :celular, :email, :ano, :curso);");
		query->bindValue(":cpf", aluno->getCpf());
		query->bindValue(":nome", aluno->getNome());
		query->bindValue(":endereco", aluno->getEndereco());
		query->bindValue(":setor", aluno->getSetor());
		query->bindValue(":estado", aluno->getEstado());
		query->bindValue(":cidade", aluno->getCidade());
		query->bindValue(":celular", aluno->getCelular());
		query->bindValue(":email", aluno->getEmail());
		query->bindValue(":ano", aluno->getAno());
		query->bindValue(":curso", aluno->getCurso());
	}
	else {
		query->prepare("INSERT INTO alunos(cpf, nome, endereco, setor, estado, cidade, email, ano, curso) "
					   "VALUES (:cpf, :nome, :endereco, :setor, :estado, :cidade, :email, :ano, :curso);");
		query->bindValue(":cpf", aluno->getCpf());
		query->bindValue(":cpf", aluno->getCpf());
		query->bindValue(":nome", aluno->getNome());
		query->bindValue(":endereco", aluno->getEndereco());
		query->bindValue(":setor", aluno->getSetor());
		query->bindValue(":estado", aluno->getEstado());
		query->bindValue(":cidade", aluno->getCidade());
		query->bindValue(":email", aluno->getEmail());
		query->bindValue(":ano", aluno->getAno());
		query->bindValue(":curso", aluno->getCurso());
	}
	return query->exec();
}

void cadastroAluno::on_campoCpf_textChanged()
{
	if(validCpf_cad(janelaCadastro->campoCpf->text())) {
		janelaCadastro->dateEdit->setFocus();
		janelaCadastro->dateEdit->selectAll();
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
	fillBoxCidades();
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
