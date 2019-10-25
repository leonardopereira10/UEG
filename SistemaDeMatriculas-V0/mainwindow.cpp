#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cpf.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    janelaInicial(new Ui::MainWindow)
{
    banco_de_dados=QSqlDatabase::addDatabase("QSQLITE");
    janelaInicial->setupUi(this);
	this->showMaximized();
    banco_de_dados.setDatabaseName("/Users/danyelliasmanso/Sistemas_de_informacao (1)/P_O_O_2/SQLite/SCM 2.db");
    if(!banco_de_dados.open())
        QMessageBox::about(this, "Banco de Dados", "Conexão com o banco de dados não realizada.");
    else {
        QMessageBox::about(this, "Banco de Dadods", "Conexão com o banco de dados realizada com sucesso!");

    }
}

MainWindow::~MainWindow()
{
	delete janelaInicial;
}
void MainWindow::loadSubWindow(QWidget *widget)
{
    auto window = janelaInicial->mdiArea->addSubWindow(widget);
    window->setWindowTitle(widget->windowTitle());
    window->setWindowIcon(widget->windowIcon());
    window->show();
    window->setMinimumSize(561, 536);
}

void MainWindow::on_actionCadastrarProf_triggered()
{
    loadSubWindow(new cadastro_professor(this));
}
