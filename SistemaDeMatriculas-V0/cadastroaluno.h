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

private:
	Ui::cadastroAluno *janelaCadastro;
};

#endif // CADASTROALUNO_H
