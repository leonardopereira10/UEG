#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    janelaInicial(new Ui::MainWindow)
{
    banco_de_dados=QSqlDatabase::addDatabase("QSQLITE");
    janelaInicial->setupUi(this);
	this->showMaximized();
    banco_de_dados.setDatabaseName("C:/Users/TDF - Inhumas-GO/Documents/UEG/SistemaDeMatriculas-V0/Projeto.db");
    if(!banco_de_dados.open())
        QMessageBox::critical(this, "Banco de Dados", "Conexão com o banco de dados não realizada.");
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
    window->showMaximized();
}

void MainWindow::on_actionCadastrarProf_triggered()
{
    loadSubWindow(new cadastro_professor(this));
}

