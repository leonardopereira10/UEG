#ifndef LISTAALUNOS_H
#define LISTAALUNOS_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class ListaAlunos;
}

class ListaAlunos : public QWidget
{
	Q_OBJECT

public:
	explicit ListaAlunos(QWidget *parent = 0);
	~ListaAlunos();

private:
	Ui::ListaAlunos *ui;
};

#endif // LISTAALUNOS_H
