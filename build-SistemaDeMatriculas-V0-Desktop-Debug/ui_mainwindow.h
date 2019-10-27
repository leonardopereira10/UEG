/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCadastrarAluno;
    QAction *actionCadastrarProf;
    QAction *actionConsultarProf;
    QAction *actionRemoverProf;
    QAction *actionListarAlunos;
    QAction *actionListarProfs;
    QAction *actionCadastrarCurso;
    QAction *actionConsultarCurso;
    QAction *actionRemoverCurso;
    QAction *actionListarCursos;
    QAction *actionCadastrarDisc;
    QAction *actionConsultarDisc;
    QAction *actionRemoverDisc;
    QAction *actionListarDisc;
    QAction *actionMatricular_aluno_em_disciplina;
    QAction *actionConsultar_matriculas_por_aluno;
    QAction *actionRemover_matricula_para_disciplina;
    QAction *actionListar_matriculas_para_disciplina;
    QAction *actionSair;
    QAction *actionManual;
    QAction *actionSobre;
    QAction *actionSelecionar_base_de_dados;
    QAction *actionRemoverAluno;
    QAction *actionConsultarAluno;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuAlunos;
    QMenu *menuProfessores;
    QMenu *menuCursos;
    QMenu *menuDisciplinas;
    QMenu *menuMatriculas;
    QMenu *menuEditar;
    QMenu *menuAjuda;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(665, 384);
        QIcon icon;
        icon.addFile(QStringLiteral(":/recursos/Imagens/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionCadastrarAluno = new QAction(MainWindow);
        actionCadastrarAluno->setObjectName(QStringLiteral("actionCadastrarAluno"));
        actionCadastrarProf = new QAction(MainWindow);
        actionCadastrarProf->setObjectName(QStringLiteral("actionCadastrarProf"));
        actionConsultarProf = new QAction(MainWindow);
        actionConsultarProf->setObjectName(QStringLiteral("actionConsultarProf"));
        actionRemoverProf = new QAction(MainWindow);
        actionRemoverProf->setObjectName(QStringLiteral("actionRemoverProf"));
        actionListarAlunos = new QAction(MainWindow);
        actionListarAlunos->setObjectName(QStringLiteral("actionListarAlunos"));
        actionListarProfs = new QAction(MainWindow);
        actionListarProfs->setObjectName(QStringLiteral("actionListarProfs"));
        actionCadastrarCurso = new QAction(MainWindow);
        actionCadastrarCurso->setObjectName(QStringLiteral("actionCadastrarCurso"));
        actionConsultarCurso = new QAction(MainWindow);
        actionConsultarCurso->setObjectName(QStringLiteral("actionConsultarCurso"));
        actionRemoverCurso = new QAction(MainWindow);
        actionRemoverCurso->setObjectName(QStringLiteral("actionRemoverCurso"));
        actionListarCursos = new QAction(MainWindow);
        actionListarCursos->setObjectName(QStringLiteral("actionListarCursos"));
        actionCadastrarDisc = new QAction(MainWindow);
        actionCadastrarDisc->setObjectName(QStringLiteral("actionCadastrarDisc"));
        actionConsultarDisc = new QAction(MainWindow);
        actionConsultarDisc->setObjectName(QStringLiteral("actionConsultarDisc"));
        actionRemoverDisc = new QAction(MainWindow);
        actionRemoverDisc->setObjectName(QStringLiteral("actionRemoverDisc"));
        actionListarDisc = new QAction(MainWindow);
        actionListarDisc->setObjectName(QStringLiteral("actionListarDisc"));
        actionMatricular_aluno_em_disciplina = new QAction(MainWindow);
        actionMatricular_aluno_em_disciplina->setObjectName(QStringLiteral("actionMatricular_aluno_em_disciplina"));
        actionConsultar_matriculas_por_aluno = new QAction(MainWindow);
        actionConsultar_matriculas_por_aluno->setObjectName(QStringLiteral("actionConsultar_matriculas_por_aluno"));
        actionRemover_matricula_para_disciplina = new QAction(MainWindow);
        actionRemover_matricula_para_disciplina->setObjectName(QStringLiteral("actionRemover_matricula_para_disciplina"));
        actionListar_matriculas_para_disciplina = new QAction(MainWindow);
        actionListar_matriculas_para_disciplina->setObjectName(QStringLiteral("actionListar_matriculas_para_disciplina"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/recursos/Imagens/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon1);
        actionManual = new QAction(MainWindow);
        actionManual->setObjectName(QStringLiteral("actionManual"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/recursos/Imagens/manual.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionManual->setIcon(icon2);
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QStringLiteral("actionSobre"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/recursos/Imagens/sobre.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre->setIcon(icon3);
        actionSelecionar_base_de_dados = new QAction(MainWindow);
        actionSelecionar_base_de_dados->setObjectName(QStringLiteral("actionSelecionar_base_de_dados"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/recursos/Imagens/BancoDeDados.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelecionar_base_de_dados->setIcon(icon4);
        actionRemoverAluno = new QAction(MainWindow);
        actionRemoverAluno->setObjectName(QStringLiteral("actionRemoverAluno"));
        actionConsultarAluno = new QAction(MainWindow);
        actionConsultarAluno->setObjectName(QStringLiteral("actionConsultarAluno"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 665, 23));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuAlunos = new QMenu(menuArquivo);
        menuAlunos->setObjectName(QStringLiteral("menuAlunos"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/recursos/Imagens/Aluno.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuAlunos->setIcon(icon5);
        menuProfessores = new QMenu(menuArquivo);
        menuProfessores->setObjectName(QStringLiteral("menuProfessores"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/recursos/Imagens/Professores.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuProfessores->setIcon(icon6);
        menuCursos = new QMenu(menuArquivo);
        menuCursos->setObjectName(QStringLiteral("menuCursos"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/recursos/Imagens/Curso.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuCursos->setIcon(icon7);
        menuDisciplinas = new QMenu(menuArquivo);
        menuDisciplinas->setObjectName(QStringLiteral("menuDisciplinas"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/recursos/Imagens/Disciplinas.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuDisciplinas->setIcon(icon8);
        menuMatriculas = new QMenu(menuArquivo);
        menuMatriculas->setObjectName(QStringLiteral("menuMatriculas"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/recursos/Imagens/Cadastrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuMatriculas->setIcon(icon9);
        menuEditar = new QMenu(menuBar);
        menuEditar->setObjectName(QStringLiteral("menuEditar"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QStringLiteral("menuAjuda"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuEditar->menuAction());
        menuBar->addAction(menuAjuda->menuAction());
        menuArquivo->addAction(menuAlunos->menuAction());
        menuArquivo->addAction(menuProfessores->menuAction());
        menuArquivo->addAction(menuCursos->menuAction());
        menuArquivo->addAction(menuDisciplinas->menuAction());
        menuArquivo->addAction(menuMatriculas->menuAction());
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);
        menuAlunos->addAction(actionCadastrarAluno);
        menuAlunos->addAction(actionConsultarAluno);
        menuAlunos->addAction(actionRemoverAluno);
        menuAlunos->addAction(actionListarAlunos);
        menuProfessores->addAction(actionCadastrarProf);
        menuProfessores->addAction(actionConsultarProf);
        menuProfessores->addAction(actionRemoverProf);
        menuProfessores->addAction(actionListarProfs);
        menuCursos->addAction(actionCadastrarCurso);
        menuCursos->addAction(actionConsultarCurso);
        menuCursos->addAction(actionRemoverCurso);
        menuCursos->addAction(actionListarCursos);
        menuDisciplinas->addAction(actionCadastrarDisc);
        menuDisciplinas->addAction(actionConsultarDisc);
        menuDisciplinas->addAction(actionRemoverDisc);
        menuDisciplinas->addAction(actionListarDisc);
        menuMatriculas->addAction(actionMatricular_aluno_em_disciplina);
        menuMatriculas->addAction(actionConsultar_matriculas_por_aluno);
        menuMatriculas->addAction(actionRemover_matricula_para_disciplina);
        menuMatriculas->addAction(actionListar_matriculas_para_disciplina);
        menuEditar->addAction(actionSelecionar_base_de_dados);
        menuAjuda->addAction(actionManual);
        menuAjuda->addSeparator();
        menuAjuda->addAction(actionSobre);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sistema de controle de matr\303\255culas - SCM", Q_NULLPTR));
        actionCadastrarAluno->setText(QApplication::translate("MainWindow", "Cadastrar", Q_NULLPTR));
        actionCadastrarAluno->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, 1", Q_NULLPTR));
        actionCadastrarProf->setText(QApplication::translate("MainWindow", "Cadastrar", Q_NULLPTR));
        actionCadastrarProf->setShortcut(QApplication::translate("MainWindow", "Ctrl+P, 1", Q_NULLPTR));
        actionConsultarProf->setText(QApplication::translate("MainWindow", "Consultar", Q_NULLPTR));
        actionConsultarProf->setShortcut(QApplication::translate("MainWindow", "Ctrl+P, 2", Q_NULLPTR));
        actionRemoverProf->setText(QApplication::translate("MainWindow", "Remover", Q_NULLPTR));
        actionRemoverProf->setShortcut(QApplication::translate("MainWindow", "Ctrl+P, 3", Q_NULLPTR));
        actionListarAlunos->setText(QApplication::translate("MainWindow", "Listar", Q_NULLPTR));
        actionListarAlunos->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, 4", Q_NULLPTR));
        actionListarProfs->setText(QApplication::translate("MainWindow", "Listar", Q_NULLPTR));
        actionListarProfs->setShortcut(QApplication::translate("MainWindow", "Ctrl+P, 4", Q_NULLPTR));
        actionCadastrarCurso->setText(QApplication::translate("MainWindow", "Cadastrar", Q_NULLPTR));
        actionCadastrarCurso->setShortcut(QApplication::translate("MainWindow", "Ctrl+C, 1", Q_NULLPTR));
        actionConsultarCurso->setText(QApplication::translate("MainWindow", "Consultar", Q_NULLPTR));
        actionConsultarCurso->setShortcut(QApplication::translate("MainWindow", "Ctrl+C, 2", Q_NULLPTR));
        actionRemoverCurso->setText(QApplication::translate("MainWindow", "Remover", Q_NULLPTR));
        actionRemoverCurso->setShortcut(QApplication::translate("MainWindow", "Ctrl+C, 3", Q_NULLPTR));
        actionListarCursos->setText(QApplication::translate("MainWindow", "Listar", Q_NULLPTR));
        actionListarCursos->setShortcut(QApplication::translate("MainWindow", "Ctrl+C, 4", Q_NULLPTR));
        actionCadastrarDisc->setText(QApplication::translate("MainWindow", "Cadastrar", Q_NULLPTR));
        actionCadastrarDisc->setShortcut(QApplication::translate("MainWindow", "Ctrl+D, 1", Q_NULLPTR));
        actionConsultarDisc->setText(QApplication::translate("MainWindow", "Consultar", Q_NULLPTR));
        actionConsultarDisc->setShortcut(QApplication::translate("MainWindow", "Ctrl+D, 2", Q_NULLPTR));
        actionRemoverDisc->setText(QApplication::translate("MainWindow", "Remover", Q_NULLPTR));
        actionRemoverDisc->setShortcut(QApplication::translate("MainWindow", "Ctrl+D, 3", Q_NULLPTR));
        actionListarDisc->setText(QApplication::translate("MainWindow", "Listar", Q_NULLPTR));
        actionListarDisc->setShortcut(QApplication::translate("MainWindow", "Ctrl+D, 4", Q_NULLPTR));
        actionMatricular_aluno_em_disciplina->setText(QApplication::translate("MainWindow", "Matricular aluno em disciplina", Q_NULLPTR));
        actionMatricular_aluno_em_disciplina->setShortcut(QApplication::translate("MainWindow", "Ctrl+M, 1", Q_NULLPTR));
        actionConsultar_matriculas_por_aluno->setText(QApplication::translate("MainWindow", "Consultar matriculas por aluno", Q_NULLPTR));
        actionConsultar_matriculas_por_aluno->setShortcut(QApplication::translate("MainWindow", "Ctrl+M, 2", Q_NULLPTR));
        actionRemover_matricula_para_disciplina->setText(QApplication::translate("MainWindow", "Remover matricula para disciplina", Q_NULLPTR));
        actionRemover_matricula_para_disciplina->setShortcut(QApplication::translate("MainWindow", "Ctrl+M, 3", Q_NULLPTR));
        actionListar_matriculas_para_disciplina->setText(QApplication::translate("MainWindow", "Listar matriculas para disciplina", Q_NULLPTR));
        actionListar_matriculas_para_disciplina->setShortcut(QApplication::translate("MainWindow", "Ctrl+M, 4", Q_NULLPTR));
        actionSair->setText(QApplication::translate("MainWindow", "Sair", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        actionSair->setWhatsThis(QApplication::translate("MainWindow", "Encerrar sistema", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionSair->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
        actionManual->setText(QApplication::translate("MainWindow", "Manual", Q_NULLPTR));
        actionManual->setShortcut(QApplication::translate("MainWindow", "F1", Q_NULLPTR));
        actionSobre->setText(QApplication::translate("MainWindow", "Sobre", Q_NULLPTR));
        actionSelecionar_base_de_dados->setText(QApplication::translate("MainWindow", "Selecionar base de dados", Q_NULLPTR));
        actionRemoverAluno->setText(QApplication::translate("MainWindow", "Remover", Q_NULLPTR));
        actionRemoverAluno->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, 3", Q_NULLPTR));
        actionConsultarAluno->setText(QApplication::translate("MainWindow", "Consultar", Q_NULLPTR));
        actionConsultarAluno->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, 2", Q_NULLPTR));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", Q_NULLPTR));
        menuAlunos->setTitle(QApplication::translate("MainWindow", "Alunos", Q_NULLPTR));
        menuProfessores->setTitle(QApplication::translate("MainWindow", "Professores", Q_NULLPTR));
        menuCursos->setTitle(QApplication::translate("MainWindow", "Cursos", Q_NULLPTR));
        menuDisciplinas->setTitle(QApplication::translate("MainWindow", "Disciplinas", Q_NULLPTR));
        menuMatriculas->setTitle(QApplication::translate("MainWindow", "Matriculas", Q_NULLPTR));
        menuEditar->setTitle(QApplication::translate("MainWindow", "Editar", Q_NULLPTR));
        menuAjuda->setTitle(QApplication::translate("MainWindow", "Ajuda", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
