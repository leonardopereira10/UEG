/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCadastrarAluno;
    QAction *actionAnalisar;
    QAction *actionConsultar;
    QAction *actionCadastrarProf;
    QAction *actionConsultarProf;
    QAction *actionRemoverProf;
    QAction *actionListarAlunos;
    QAction *actionListarProfs;
    QAction *actionCadastrarCurso;
    QAction *actionConsultarCurso;
    QAction *actionRemoverCurso;
    QAction *actionListarCursos;
    QAction *actionCadastrar_4;
    QAction *actionCadastrar_5;
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
    QAction *actionConsultar_5;
    QAction *actionRemoverAluno;
    QAction *actionConsultarAluno;
    QWidget *centralWidget;
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
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 380);
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagens/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionCadastrarAluno = new QAction(MainWindow);
        actionCadastrarAluno->setObjectName(QStringLiteral("actionCadastrarAluno"));
        actionAnalisar = new QAction(MainWindow);
        actionAnalisar->setObjectName(QStringLiteral("actionAnalisar"));
        actionConsultar = new QAction(MainWindow);
        actionConsultar->setObjectName(QStringLiteral("actionConsultar"));
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
        actionCadastrar_4 = new QAction(MainWindow);
        actionCadastrar_4->setObjectName(QStringLiteral("actionCadastrar_4"));
        actionCadastrar_5 = new QAction(MainWindow);
        actionCadastrar_5->setObjectName(QStringLiteral("actionCadastrar_5"));
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
        icon1.addFile(QStringLiteral(":/imagens/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon1);
        actionManual = new QAction(MainWindow);
        actionManual->setObjectName(QStringLiteral("actionManual"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/imagens/manual.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionManual->setIcon(icon2);
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QStringLiteral("actionSobre"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/imagens/sobre.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre->setIcon(icon3);
        actionSelecionar_base_de_dados = new QAction(MainWindow);
        actionSelecionar_base_de_dados->setObjectName(QStringLiteral("actionSelecionar_base_de_dados"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/imagens/BancoDeDados.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelecionar_base_de_dados->setIcon(icon4);
        actionConsultar_5 = new QAction(MainWindow);
        actionConsultar_5->setObjectName(QStringLiteral("actionConsultar_5"));
        actionRemoverAluno = new QAction(MainWindow);
        actionRemoverAluno->setObjectName(QStringLiteral("actionRemoverAluno"));
        actionConsultarAluno = new QAction(MainWindow);
        actionConsultarAluno->setObjectName(QStringLiteral("actionConsultarAluno"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setGeometry(QRect(0, 0, 641, 321));
        mdiArea->setMinimumSize(QSize(641, 321));
        mdiArea->setMaximumSize(QSize(641, 321));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 23));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuAlunos = new QMenu(menuArquivo);
        menuAlunos->setObjectName(QStringLiteral("menuAlunos"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/imagens/Aluno.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuAlunos->setIcon(icon5);
        menuProfessores = new QMenu(menuArquivo);
        menuProfessores->setObjectName(QStringLiteral("menuProfessores"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/imagens/Professores.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuProfessores->setIcon(icon6);
        menuCursos = new QMenu(menuArquivo);
        menuCursos->setObjectName(QStringLiteral("menuCursos"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/imagens/Curso.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuCursos->setIcon(icon7);
        menuDisciplinas = new QMenu(menuArquivo);
        menuDisciplinas->setObjectName(QStringLiteral("menuDisciplinas"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/imagens/Disciplinas.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuDisciplinas->setIcon(icon8);
        menuMatriculas = new QMenu(menuArquivo);
        menuMatriculas->setObjectName(QStringLiteral("menuMatriculas"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/imagens/Cadastrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuMatriculas->setIcon(icon9);
        menuEditar = new QMenu(menuBar);
        menuEditar->setObjectName(QStringLiteral("menuEditar"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QStringLiteral("menuAjuda"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
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
        QObject::connect(actionSair, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionCadastrarAluno, SIGNAL(triggered()), MainWindow, SLOT(cadAluno()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sistema de controle de matr\303\255culas - SCM", Q_NULLPTR));
        actionCadastrarAluno->setText(QApplication::translate("MainWindow", "Cadastrar", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionCadastrarAluno->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, 1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAnalisar->setText(QApplication::translate("MainWindow", "Consultar", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionAnalisar->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, 2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionConsultar->setText(QApplication::translate("MainWindow", "Remover", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionConsultar->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, 3", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCadastrarProf->setText(QApplication::translate("MainWindow", "Cadastrar", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionCadastrarProf->setShortcut(QApplication::translate("MainWindow", "Ctrl+P, 1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionConsultarProf->setText(QApplication::translate("MainWindow", "Consultar", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionConsultarProf->setShortcut(QApplication::translate("MainWindow", "Ctrl+P, 2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRemoverProf->setText(QApplication::translate("MainWindow", "Remover", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionRemoverProf->setShortcut(QApplication::translate("MainWindow", "Ctrl+P, 3", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionListarAlunos->setText(QApplication::translate("MainWindow", "Listar", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionListarAlunos->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, 4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionListarProfs->setText(QApplication::translate("MainWindow", "Listar", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionListarProfs->setShortcut(QApplication::translate("MainWindow", "Ctrl+P, 4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCadastrarCurso->setText(QApplication::translate("MainWindow", "Cadastrar", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionCadastrarCurso->setShortcut(QApplication::translate("MainWindow", "Ctrl+C, 1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionConsultarCurso->setText(QApplication::translate("MainWindow", "Consultar", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionConsultarCurso->setShortcut(QApplication::translate("MainWindow", "Ctrl+C, 2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRemoverCurso->setText(QApplication::translate("MainWindow", "Remover", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionRemoverCurso->setShortcut(QApplication::translate("MainWindow", "Ctrl+C, 3", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionListarCursos->setText(QApplication::translate("MainWindow", "Listar", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionListarCursos->setShortcut(QApplication::translate("MainWindow", "Ctrl+C, 4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCadastrar_4->setText(QApplication::translate("MainWindow", "Cadastrar", Q_NULLPTR));
        actionCadastrar_5->setText(QApplication::translate("MainWindow", "Cadastrar", Q_NULLPTR));
        actionCadastrarDisc->setText(QApplication::translate("MainWindow", "Cadastrar", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionCadastrarDisc->setShortcut(QApplication::translate("MainWindow", "Ctrl+D, 1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionConsultarDisc->setText(QApplication::translate("MainWindow", "Consultar", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionConsultarDisc->setShortcut(QApplication::translate("MainWindow", "Ctrl+D, 2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRemoverDisc->setText(QApplication::translate("MainWindow", "Remover", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionRemoverDisc->setShortcut(QApplication::translate("MainWindow", "Ctrl+D, 3", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionListarDisc->setText(QApplication::translate("MainWindow", "Listar", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionListarDisc->setShortcut(QApplication::translate("MainWindow", "Ctrl+D, 4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionMatricular_aluno_em_disciplina->setText(QApplication::translate("MainWindow", "Matricular aluno em disciplina", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionMatricular_aluno_em_disciplina->setShortcut(QApplication::translate("MainWindow", "Ctrl+M, 1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionConsultar_matriculas_por_aluno->setText(QApplication::translate("MainWindow", "Consultar matriculas por aluno", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionConsultar_matriculas_por_aluno->setShortcut(QApplication::translate("MainWindow", "Ctrl+M, 2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRemover_matricula_para_disciplina->setText(QApplication::translate("MainWindow", "Remover matricula para disciplina", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionRemover_matricula_para_disciplina->setShortcut(QApplication::translate("MainWindow", "Ctrl+M, 3", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionListar_matriculas_para_disciplina->setText(QApplication::translate("MainWindow", "Listar matriculas para disciplina", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionListar_matriculas_para_disciplina->setShortcut(QApplication::translate("MainWindow", "Ctrl+M, 4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSair->setText(QApplication::translate("MainWindow", "Sair", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        actionSair->setWhatsThis(QApplication::translate("MainWindow", "Encerrar sistema", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        actionSair->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionManual->setText(QApplication::translate("MainWindow", "Manual", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionManual->setShortcut(QApplication::translate("MainWindow", "F1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSobre->setText(QApplication::translate("MainWindow", "Sobre", Q_NULLPTR));
        actionSelecionar_base_de_dados->setText(QApplication::translate("MainWindow", "Selecionar base de dados", Q_NULLPTR));
        actionConsultar_5->setText(QApplication::translate("MainWindow", "Consultar", Q_NULLPTR));
        actionRemoverAluno->setText(QApplication::translate("MainWindow", "Remover", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionRemoverAluno->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, 3", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionConsultarAluno->setText(QApplication::translate("MainWindow", "Consultar", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionConsultarAluno->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, 2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
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
