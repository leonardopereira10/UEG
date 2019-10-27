#include <QMdiSubWindow>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadcurso.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	janelaInicial(new Ui::MainWindow)
{
	janelaInicial->setupUi(this);
	this->showMaximized();
	setCentralWidget(janelaInicial->mdiArea);

    QPixmap bkg(":/recursos/Imagens/backgound.png");
	janelaInicial->mdiArea->setBackground(bkg);
}

MainWindow::~MainWindow()
{
	delete janelaInicial;
}

// NOTE: metodo referente ao modulo aluno
/*void MainWindow::on_actionCadastrarAluno_triggered()
{
	loadSubWindow(new cadastroAluno(this));
}
*/

void MainWindow::on_actionCadastrarCurso_triggered()
{
    loadSubWindow(new cadCurso(this));
}

void MainWindow::loadSubWindow(QWidget *widget)
{
	QMdiSubWindow *window = new QMdiSubWindow;
	window->setAttribute(Qt::WA_DeleteOnClose);

	window->setWindowTitle(widget->windowTitle());
	window->setWindowIcon(widget->windowIcon());
    window->setMinimumSize(438, 455); // TODO: corrigir tamanho das janelas

	window->setWidget(widget);
	janelaInicial->mdiArea->addSubWindow(window);
	window->show();
}

void MainWindow::on_actionSair_triggered()
{
	close();
}




