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
	explicit cadastroAluno(QWidget *parent = 0);
	~cadastroAluno();

private:
	Ui::cadastroAluno *janelaCadastro;
};

#endif // CADASTROALUNO_H