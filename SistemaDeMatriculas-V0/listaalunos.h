#ifndef LISTAALUNOS_H
#define LISTAALUNOS_H

#include <QWidget>
#include "aluno.h"

namespace Ui {
class ListaAlunos;
}

class ListaAlunos : public QWidget
{
	Q_OBJECT

public:
	explicit ListaAlunos(QWidget *parent = 0);
	~ListaAlunos();

private slots:
	void on_btnAtualizar_clicked();

	void on_boxOrdem_currentIndexChanged(const QString &arg1);

	void on_radioCresc_clicked();

	void on_radioDecresc_clicked();

private:
	Ui::ListaAlunos *janelaLista;
};

#endif // LISTAALUNOS_H
