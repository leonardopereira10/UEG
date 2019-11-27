#include <QMdiSubWindow>
#include <QSize>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastroaluno.h"
#include "consultaaluno.h"
#include "removealuno.h"
#include "listaalunos.h"
#include "criamatricula.h"
#include "consultamatricula.h"
#include "excluirmatricula.h"
#include "listartodasmatriculas.h"
#include "cadcurso.h"
#include "consultarcurso.h"
#include "removecurso.h"
#include "listarcurso.h"
#include "cadastro_professor.h"
#include "consulta_professor.h"
#include "listar_professor.h"
#include "remove_professor.h"

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

void MainWindow::on_actionCadastrarAluno_triggered()
{
	loadSubWindow(new cadastroAluno(this));
}

void MainWindow::on_actionConsultarAluno_triggered()
{
	loadSubWindow(new ConsultaAluno(this));
}

void MainWindow::on_actionRemoverAluno_triggered()
{
	loadSubWindow(new RemoveAluno(this));
}

void MainWindow::on_actionListarAlunos_triggered()
{
	loadSubWindow(new ListaAlunos(this));
}

void MainWindow::on_actionMatricular_aluno_em_disciplina_triggered()
{
	loadSubWindow(new CriaMatricula(this));
}

void MainWindow::on_actionConsultar_matriculas_por_aluno_triggered()
{
	loadSubWindow(new ConsultaMatricula(this));
}

void MainWindow::on_actionRemover_matricula_para_disciplina_triggered()
{
	loadSubWindow(new ExcluirMatricula(this));
}

void MainWindow::on_actionListar_matriculas_para_disciplina_triggered()
{
	loadSubWindow(new ListarTodasMatriculas(this));
}

void MainWindow::on_actionCadastrarCurso_triggered()
{
	loadSubWindow(new cadCurso(this));
}

void MainWindow::on_actionConsultarCurso_triggered()
{
	loadSubWindow(new ConsultarCurso(this));
}

void MainWindow::on_actionRemoverCurso_triggered()
{
	loadSubWindow(new removeCurso(this));
}

void MainWindow::on_actionListarCursos_triggered()
{
	loadSubWindow(new ListarCurso(this));
}

void MainWindow::on_actionCadastrarProf_triggered()
{
	loadSubWindow(new cadastro_professor(this));
}

void MainWindow::on_actionConsultarProf_triggered()
{
	loadSubWindow(new Consulta_professor(this));
}

void MainWindow::on_actionRemoverProf_triggered()
{
	loadSubWindow(new remove_professor(this));
}

void MainWindow::on_actionListarProfs_triggered()
{
	loadSubWindow(new listar_professor(this));
}
