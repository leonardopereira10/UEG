#ifndef OPCAO_CLASSE_H
#define OPCAO_CLASSE_H

#include <QDialog>

namespace Ui {
class opcao_classe;
}

class opcao_classe : public QDialog
{
	Q_OBJECT

public:
	explicit opcao_classe(QWidget *parent = 0);
	~opcao_classe();

private:
	Ui::opcao_classe *ui;
};

#endif // OPCAO_CLASSE_H
