#ifndef CADASTROALUNO_H
#define CADASTROALUNO_H

#include <QWidget>
#include <QtSql>
#include <QDebug>
#include <QMessageBox>
#include "aluno.h"

namespace Ui {
class cadastroAluno;
}

class cadastroAluno : public QWidget
{
	Q_OBJECT

public:
	explicit cadastroAluno(QWidget *parent = nullptr);
	~cadastroAluno();

private slots:
	void hideFields();				// Ocultar campos caso cpf seja inválido
	void showFields();				// Exibir campos quando for necessário
	bool validCpf_cad(QString cpf);	// Validar cpf digitado
	bool validFields();				// Validar campos not-null na interface
	void fillBoxEstados();			// Preencher boxEstados com valores do banco de dados
	void fillBoxCidades();			// Preencher boxCidades com valores do banco de dados e de acordo com boxEstado
	int getCodCidade();				// Retorna o código da cidade selecionada
	bool commit_on_bd(Aluno *aluno);	// Grava no Banco de dados

	void on_campoCpf_textChanged();	// Chamar validCpf_cad() sempre que o texto "cpf" mudar

	void on_btnCadastrar_clicked();	// Chama validFields(), validCpf_cad() e commit_on_bd() e informa ao usuário o resultado

	void on_boxEstado_currentIndexChanged();	// Atualizar boxCidades sempre que boxEstados mudar

private:
	Ui::cadastroAluno *janelaCadastro;
	QSqlDatabase db;
	QSqlQuery *query;
};

#endif // CADASTROALUNO_H