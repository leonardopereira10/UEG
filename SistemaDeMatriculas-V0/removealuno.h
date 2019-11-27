#ifndef REMOVEALUNO_H
#define REMOVEALUNO_H

#include <QWidget>
#include "aluno.h"

namespace Ui {
class RemoveAluno;
}

class RemoveAluno : public QWidget
{
	Q_OBJECT

public:
	explicit RemoveAluno(QWidget *parent = 0);
	~RemoveAluno();

private slots:
	void on_btn_remover_clicked();

	void on_lineEditMatricula_returnPressed();

private:
	Ui::RemoveAluno *janelaRemove;
};

#endif // REMOVEALUNO_H
