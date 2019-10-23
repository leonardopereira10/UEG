#include <QMdiSubWindow>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastroaluno.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	janelaInicial(new Ui::MainWindow)
{
	janelaInicial->setupUi(this);
	this->showMaximized();
	setCentralWidget(janelaInicial->mdiArea);

//	QPixmap bkg(":/imagens/backgound.png");
//	janelaInicial->mdiArea->setBackground(bkg);
}

MainWindow::~MainWindow()
{
	delete janelaInicial;
}

void MainWindow::on_actionCadastrarAluno_triggered()
{
	loadSubWindow(new cadastroAluno(this));
}

void MainWindow::loadSubWindow(QWidget *widget)
{
	QMdiSubWindow *window = new QMdiSubWindow;
	window->setAttribute(Qt::WA_DeleteOnClose);

	window->setWindowTitle(widget->windowTitle());
	window->setWindowIcon(widget->windowIcon());
	window->setMinimumSize(438, 450);

	window->setWidget(widget);
	janelaInicial->mdiArea->addSubWindow(window);
	window->show();
}

void MainWindow::on_actionSair_triggered()
{
	close();
}


