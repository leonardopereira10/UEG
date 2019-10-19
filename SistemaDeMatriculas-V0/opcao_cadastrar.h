#ifndef OPCAO_CADASTRAR_H
#define OPCAO_CADASTRAR_H

#include <QMainWindow>

namespace Ui {
class Opcao_Cadastrar;
}

class Opcao_Cadastrar : public QMainWindow
{
    Q_OBJECT

public:
    explicit Opcao_Cadastrar(QWidget *parent = nullptr);
    ~Opcao_Cadastrar();

private:
    Ui::Opcao_Cadastrar *ui;
};

#endif // OPCAO_CADASTRAR_H
