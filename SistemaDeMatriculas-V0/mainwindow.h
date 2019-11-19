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
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
	void on_actionOrganizar_janelas_lado_a_lado_triggered();

	void on_actionOrganizar_janelas_em_cascata_triggered();

	void on_actionSair_triggered();

//	void on_actionCadastrarAluno_triggered();

//	void on_actionConsultarAluno_triggered();

//	void on_actionRemoverAluno_triggered();

//	void on_actionListarAlunos_triggered();

    void on_actionCadastrarCurso_triggered();

    void on_actionRemoverCurso_triggered();

private:
	Ui::MainWindow *janelaInicial;
	void loadSubWindow(QWidget *widget);
};

#endif // MAINWINDOW_H
