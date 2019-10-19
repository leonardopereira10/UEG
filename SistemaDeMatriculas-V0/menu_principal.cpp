#include "menu_principal.h"
#include "ui_menu_principal.h"

Menu_principal::Menu_principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu_principal)
{
    ui->setupUi(this);
}

Menu_principal::~Menu_principal()
{
    delete ui;
}
