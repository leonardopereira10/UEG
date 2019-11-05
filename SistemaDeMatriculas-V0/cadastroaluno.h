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
	explicit cadastroAluno(QWidget *parent = 0);
	~cadastroAluno();

private slots:
	void ocultarCampos();
	void mostrarCampos();
	void limparCampos();
	bool validarCampos();

	void on_btnCadastrar_clicked();

	void on_campoCpf_textChanged();

	void on_dateEdit_editingFinished();

	void on_campoNome_returnPressed();

	void on_campoEndereco_returnPressed();

	void on_campoSetor_returnPressed();

	void on_boxEstado_currentIndexChanged();

	void on_boxCidade_currentIndexChanged();

	void on_campoCelular_returnPressed();

	void on_campoEmail_returnPressed();

	void on_boxCurso_currentIndexChanged();

private:
	Ui::cadastroAluno *janelaCadastro;
};

#endif // CADASTROALUNO_H
