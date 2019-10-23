#ifndef Opcao_classe_H
#define Opcao_classe_H

#include <QDialog>
#include <QPixmap>
#include <QMessageBox>
#include <QDebug>
#include "cpf.h"

namespace Ui {
	class Opcao_classe;
}

class Opcao_classe : public QDialog
{
	Q_OBJECT

public:
	explicit Opcao_classe(QWidget *parent = 0);
	~Opcao_classe();

private slots:
	void on_btn_aluno_clicked();

	void on_btn_professor_clicked();

	void on_btn_curso_clicked();

	void on_btn_disciplina_clicked();

private:
	Ui::Opcao_classe *ui;
};

#endif // Opcao_classe_H
