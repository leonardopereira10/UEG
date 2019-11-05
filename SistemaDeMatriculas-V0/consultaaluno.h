#ifndef CONSULTAALUNO_H
#define CONSULTAALUNO_H

#include <QWidget>

namespace Ui {
class ConsultaAluno;
}

class ConsultaAluno : public QWidget
{
	Q_OBJECT

public:
	explicit ConsultaAluno(QWidget *parent = 0);
	~ConsultaAluno();

private:
	Ui::ConsultaAluno *ui;
};

#endif // CONSULTAALUNO_H
