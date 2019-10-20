#ifndef MENU_PRINCIPAL_H
#define MENU_PRINCIPAL_H

#include <QMainWindow>
#include "opcao_cadastrar.h"

namespace Ui {
class Menu_principal;
}

class Menu_principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu_principal(QWidget *parent = nullptr);
    ~Menu_principal();

private slots:
    void on_btn_Cadastrar_clicked();

private:
    Ui::Menu_principal *ui;
};

#endif // MENU_PRINCIPAL_H
