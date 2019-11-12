#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMdiSubWindow>
#include "cadastro_professor.h"
#include "consulta_professor.h"
#include "remove_professor.h"
#include "listar_professor.h"
#include <QtSql>
#include <QMessageBox>

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

    void on_actionCadastrarProf_triggered();

    void on_actionConsultarProf_triggered();

    void on_actionRemoverProf_triggered();

    void on_actionListarProfs_triggered();

private:
    Ui::MainWindow *janelaInicial;
    void loadSubWindow(QWidget *widget);
};

#endif // MAINWINDOW_H
