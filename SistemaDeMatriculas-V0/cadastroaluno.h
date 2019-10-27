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
	void hideFields();
	void showFields();
	void validCpf_cad(QString cpf);
	bool validFields();
	void fillBoxEstados();
	void fillBoxCidades();
	int getCodCidade();
	bool commit_on_bd(Aluno aluno);

	void on_campoCpf_textChanged();

	// NOTE: Slot obsoleto on_campoCpf_editingFinished();
//	void on_campoCpf_editingFinished();

	void on_btnCadastrar_clicked();

	void on_boxEstado_currentIndexChanged();

private:
	Ui::cadastroAluno *janelaCadastro;
	QSqlDatabase db;
	QSqlQuery *query;
};

#endif // CADASTROALUNO_H
