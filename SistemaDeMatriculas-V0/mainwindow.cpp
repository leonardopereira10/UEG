#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cpf.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	janelaInicial(new Ui::MainWindow)
{
	janelaInicial->setupUi(this);
	this->showMaximized();
}

MainWindow::~MainWindow()
{
	delete janelaInicial;
}

void MainWindow::cadAluno()
{

}
