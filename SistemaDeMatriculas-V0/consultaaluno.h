#ifndef CONSULTAALUNO_H
#define CONSULTAALUNO_H

#include <QWidget>
#include "aluno.h"

namespace Ui {
class ConsultaAluno;
}

class ConsultaAluno : public QWidget
{
	Q_OBJECT

public:
	explicit ConsultaAluno(QWidget *parent = 0);
	~ConsultaAluno();

private slots:
	void on_radioMatricula_clicked();

	void on_radioCpf_clicked();

	void on_radioNome_clicked();

	void on_lineEditSearch_returnPressed();

	void on_btnConsultar_clicked();

private:
	Ui::ConsultaAluno *janelaConsulta;
};

#endif // CONSULTAALUNO_H
