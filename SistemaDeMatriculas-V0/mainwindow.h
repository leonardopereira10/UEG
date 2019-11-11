#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow();

private slots:
	void on_actionSair_triggered();

	void on_actionCadastrarAluno_triggered();

	void on_actionConsultarAluno_triggered();

	void on_actionRemoverAluno_triggered();

	void on_actionListarAlunos_triggered();

//	void on_actionMatricular_aluno_em_disciplina_triggered();

//	void on_actionConsultar_matriculas_por_aluno_triggered();

//	void on_actionRemover_matricula_para_disciplina_triggered();

//	void on_actionListar_matriculas_para_disciplina_triggered();

private:
	Ui::MainWindow *janelaInicial;
	void loadSubWindow(QWidget *widget);
};

#endif // MAINWINDOW_H
