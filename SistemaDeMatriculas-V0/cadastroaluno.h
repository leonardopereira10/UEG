#ifndef CADASTROALUNO_H
#define CADASTROALUNO_H

#include <QWidget>

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
	bool validCpf_cad(QString cpf);
	bool validFields();

	void on_campoCpf_textChanged();

	void on_campoCpf_editingFinished();

	void on_btnCadastrar_clicked();

private:
	Ui::cadastroAluno *janelaCadastro;
};

#endif // CADASTROALUNO_H
