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
	void cadAluno();

	void on_actionSair_triggered();

	void on_actionCadastrarAluno_triggered();

private:
	Ui::MainWindow *janelaInicial;

	void loadSubWindow(QWidget *widget);
};

#endif // MAINWINDOW_H
