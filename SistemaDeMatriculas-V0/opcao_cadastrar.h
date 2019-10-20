#ifndef OPCAO_CADASTRAR_H
#define OPCAO_CADASTRAR_H

#include <QDialog>

namespace Ui {
class opcao_cadastrar;
}

class opcao_cadastrar : public QDialog
{
    Q_OBJECT

public:
    explicit opcao_cadastrar(QWidget *parent = nullptr);
    ~opcao_cadastrar();

private:
    Ui::opcao_cadastrar *ui;
};

#endif // OPCAO_CADASTRAR_H
