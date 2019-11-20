#include <QMdiSubWindow>
#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "cadastroaluno.h"
//#include "consultaaluno.h"
//#include "removealuno.h"
//#include "listaalunos.h"
#include "cadcurso.h"
#include "removecurso.h"
#include "consultarcurso.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	janelaInicial(new Ui::MainWindow)
{
	janelaInicial->setupUi(this);
	this->showMaximized();
	setCentralWidget(janelaInicial->mdiArea);

}

MainWindow::~MainWindow()
{
	delete janelaInicial;
}

void MainWindow::loadSubWindow(QWidget *widget)
{
	QMdiSubWindow *window = new QMdiSubWindow;
	window->setAttribute(Qt::WA_DeleteOnClose);

	window->setWindowTitle(widget->windowTitle());
	window->setWindowIcon(widget->windowIcon());
	window->setMinimumSize(widget->size());

	window->setWidget(widget);
	janelaInicial->mdiArea->addSubWindow(window);
	window->show();
}

void MainWindow::on_actionOrganizar_janelas_lado_a_lado_triggered()
{
	janelaInicial->mdiArea->tileSubWindows();
}

void MainWindow::on_actionOrganizar_janelas_em_cascata_triggered()
{
	janelaInicial->mdiArea->cascadeSubWindows();
}

void MainWindow::on_actionSair_triggered()
{
	close();
}

// NOTE: Slots relacionados ao módulo Aluno

//void MainWindow::on_actionCadastrarAluno_triggered()
//{
//	loadSubWindow(new cadastroAluno(this));
//}

//void MainWindow::on_actionConsultarAluno_triggered()
//{
//	loadSubWindow(new ConsultaAluno(this));
//}

//void MainWindow::on_actionRemoverAluno_triggered()
//{
//	loadSubWindow(new RemoveAluno(this));
//}

//void MainWindow::on_actionListarAlunos_triggered()
//{
//	loadSubWindow(new ListaAlunos(this));
//}

void MainWindow::on_actionCadastrarCurso_triggered()
{
    loadSubWindow(new cadCurso(this));
}

void MainWindow::on_actionRemoverCurso_triggered()
{
    loadSubWindow(new removeCurso(this));
}

void MainWindow::on_actionConsultarCurso_triggered()
{
    loadSubWindow(new ConsultarCurso(this));
}
