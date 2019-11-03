/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
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
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(665, 384);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionCadastrarAluno = new QAction(MainWindow);
        actionCadastrarAluno->setObjectName(QString::fromUtf8("actionCadastrarAluno"));
        actionCadastrarProf = new QAction(MainWindow);
        actionCadastrarProf->setObjectName(QString::fromUtf8("actionCadastrarProf"));
        actionConsultarProf = new QAction(MainWindow);
        actionConsultarProf->setObjectName(QString::fromUtf8("actionConsultarProf"));
        actionRemoverProf = new QAction(MainWindow);
        actionRemoverProf->setObjectName(QString::fromUtf8("actionRemoverProf"));
        actionListarAlunos = new QAction(MainWindow);
        actionListarAlunos->setObjectName(QString::fromUtf8("actionListarAlunos"));
        actionListarProfs = new QAction(MainWindow);
        actionListarProfs->setObjectName(QString::fromUtf8("actionListarProfs"));
        actionCadastrarCurso = new QAction(MainWindow);
        actionCadastrarCurso->setObjectName(QString::fromUtf8("actionCadastrarCurso"));
        actionConsultarCurso = new QAction(MainWindow);
        actionConsultarCurso->setObjectName(QString::fromUtf8("actionConsultarCurso"));
        actionRemoverCurso = new QAction(MainWindow);
        actionRemoverCurso->setObjectName(QString::fromUtf8("actionRemoverCurso"));
        actionListarCursos = new QAction(MainWindow);
        actionListarCursos->setObjectName(QString::fromUtf8("actionListarCursos"));
        actionCadastrarDisc = new QAction(MainWindow);
        actionCadastrarDisc->setObjectName(QString::fromUtf8("actionCadastrarDisc"));
        actionConsultarDisc = new QAction(MainWindow);
        actionConsultarDisc->setObjectName(QString::fromUtf8("actionConsultarDisc"));
        actionRemoverDisc = new QAction(MainWindow);
        actionRemoverDisc->setObjectName(QString::fromUtf8("actionRemoverDisc"));
        actionListarDisc = new QAction(MainWindow);
        actionListarDisc->setObjectName(QString::fromUtf8("actionListarDisc"));
        actionMatricular_aluno_em_disciplina = new QAction(MainWindow);
        actionMatricular_aluno_em_disciplina->setObjectName(QString::fromUtf8("actionMatricular_aluno_em_disciplina"));
        actionConsultar_matriculas_por_aluno = new QAction(MainWindow);
        actionConsultar_matriculas_por_aluno->setObjectName(QString::fromUtf8("actionConsultar_matriculas_por_aluno"));
        actionRemover_matricula_para_disciplina = new QAction(MainWindow);
        actionRemover_matricula_para_disciplina->setObjectName(QString::fromUtf8("actionRemover_matricula_para_disciplina"));
        actionListar_matriculas_para_disciplina = new QAction(MainWindow);
        actionListar_matriculas_para_disciplina->setObjectName(QString::fromUtf8("actionListar_matriculas_para_disciplina"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon1);
        actionManual = new QAction(MainWindow);
        actionManual->setObjectName(QString::fromUtf8("actionManual"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/manual.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionManual->setIcon(icon2);
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/sobre.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre->setIcon(icon3);
        actionSelecionar_base_de_dados = new QAction(MainWindow);
        actionSelecionar_base_de_dados->setObjectName(QString::fromUtf8("actionSelecionar_base_de_dados"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imagens/BancoDeDados.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelecionar_base_de_dados->setIcon(icon4);
        actionRemoverAluno = new QAction(MainWindow);
        actionRemoverAluno->setObjectName(QString::fromUtf8("actionRemoverAluno"));
        actionConsultarAluno = new QAction(MainWindow);
        actionConsultarAluno->setObjectName(QString::fromUtf8("actionConsultarAluno"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 665, 22));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuAlunos = new QMenu(menuArquivo);
        menuAlunos->setObjectName(QString::fromUtf8("menuAlunos"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imagens/Aluno.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuAlunos->setIcon(icon5);
        menuProfessores = new QMenu(menuArquivo);
        menuProfessores->setObjectName(QString::fromUtf8("menuProfessores"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imagens/Professores.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuProfessores->setIcon(icon6);
        menuCursos = new QMenu(menuArquivo);
        menuCursos->setObjectName(QString::fromUtf8("menuCursos"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/imagens/Curso.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuCursos->setIcon(icon7);
        menuDisciplinas = new QMenu(menuArquivo);
        menuDisciplinas->setObjectName(QString::fromUtf8("menuDisciplinas"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/imagens/Disciplinas.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuDisciplinas->setIcon(icon8);
        menuMatriculas = new QMenu(menuArquivo);
        menuMatriculas->setObjectName(QString::fromUtf8("menuMatriculas"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/imagens/Cadastrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuMatriculas->setIcon(icon9);
        menuEditar = new QMenu(menuBar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QString::fromUtf8("menuAjuda"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sistema de controle de matr\303\255culas - SCM", nullptr));
        actionCadastrarAluno->setText(QApplication::translate("MainWindow", "Cadastrar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCadastrarAluno->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, 1", nullptr));
#endif // QT_NO_SHORTCUT
        actionCadastrarProf->setText(QApplication::translate("MainWindow", "Cadastrar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCadastrarProf->setShortcut(QApplication::translate("MainWindow", "Ctrl+P, 1", nullptr));
#endif // QT_NO_SHORTCUT
        actionConsultarProf->setText(QApplication::translate("MainWindow", "Consultar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionConsultarProf->setShortcut(QApplication::translate("MainWindow", "Ctrl+P, 2", nullptr));
#endif // QT_NO_SHORTCUT
        actionRemoverProf->setText(QApplication::translate("MainWindow", "Remover", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRemoverProf->setShortcut(QApplication::translate("MainWindow", "Ctrl+P, 3", nullptr));
#endif // QT_NO_SHORTCUT
        actionListarAlunos->setText(QApplication::translate("MainWindow", "Listar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionListarAlunos->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, 4", nullptr));
#endif // QT_NO_SHORTCUT
        actionListarProfs->setText(QApplication::translate("MainWindow", "Listar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionListarProfs->setShortcut(QApplication::translate("MainWindow", "Ctrl+P, 4", nullptr));
#endif // QT_NO_SHORTCUT
        actionCadastrarCurso->setText(QApplication::translate("MainWindow", "Cadastrar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCadastrarCurso->setShortcut(QApplication::translate("MainWindow", "Ctrl+C, 1", nullptr));
#endif // QT_NO_SHORTCUT
        actionConsultarCurso->setText(QApplication::translate("MainWindow", "Consultar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionConsultarCurso->setShortcut(QApplication::translate("MainWindow", "Ctrl+C, 2", nullptr));
#endif // QT_NO_SHORTCUT
        actionRemoverCurso->setText(QApplication::translate("MainWindow", "Remover", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRemoverCurso->setShortcut(QApplication::translate("MainWindow", "Ctrl+C, 3", nullptr));
#endif // QT_NO_SHORTCUT
        actionListarCursos->setText(QApplication::translate("MainWindow", "Listar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionListarCursos->setShortcut(QApplication::translate("MainWindow", "Ctrl+C, 4", nullptr));
#endif // QT_NO_SHORTCUT
        actionCadastrarDisc->setText(QApplication::translate("MainWindow", "Cadastrar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCadastrarDisc->setShortcut(QApplication::translate("MainWindow", "Ctrl+D, 1", nullptr));
#endif // QT_NO_SHORTCUT
        actionConsultarDisc->setText(QApplication::translate("MainWindow", "Consultar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionConsultarDisc->setShortcut(QApplication::translate("MainWindow", "Ctrl+D, 2", nullptr));
#endif // QT_NO_SHORTCUT
        actionRemoverDisc->setText(QApplication::translate("MainWindow", "Remover", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRemoverDisc->setShortcut(QApplication::translate("MainWindow", "Ctrl+D, 3", nullptr));
#endif // QT_NO_SHORTCUT
        actionListarDisc->setText(QApplication::translate("MainWindow", "Listar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionListarDisc->setShortcut(QApplication::translate("MainWindow", "Ctrl+D, 4", nullptr));
#endif // QT_NO_SHORTCUT
        actionMatricular_aluno_em_disciplina->setText(QApplication::translate("MainWindow", "Matricular aluno em disciplina", nullptr));
#ifndef QT_NO_SHORTCUT
        actionMatricular_aluno_em_disciplina->setShortcut(QApplication::translate("MainWindow", "Ctrl+M, 1", nullptr));
#endif // QT_NO_SHORTCUT
        actionConsultar_matriculas_por_aluno->setText(QApplication::translate("MainWindow", "Consultar matriculas por aluno", nullptr));
#ifndef QT_NO_SHORTCUT
        actionConsultar_matriculas_por_aluno->setShortcut(QApplication::translate("MainWindow", "Ctrl+M, 2", nullptr));
#endif // QT_NO_SHORTCUT
        actionRemover_matricula_para_disciplina->setText(QApplication::translate("MainWindow", "Remover matricula para disciplina", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRemover_matricula_para_disciplina->setShortcut(QApplication::translate("MainWindow", "Ctrl+M, 3", nullptr));
#endif // QT_NO_SHORTCUT
        actionListar_matriculas_para_disciplina->setText(QApplication::translate("MainWindow", "Listar matriculas para disciplina", nullptr));
#ifndef QT_NO_SHORTCUT
        actionListar_matriculas_para_disciplina->setShortcut(QApplication::translate("MainWindow", "Ctrl+M, 4", nullptr));
#endif // QT_NO_SHORTCUT
        actionSair->setText(QApplication::translate("MainWindow", "Sair", nullptr));
#ifndef QT_NO_WHATSTHIS
        actionSair->setWhatsThis(QApplication::translate("MainWindow", "Encerrar sistema", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        actionSair->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionManual->setText(QApplication::translate("MainWindow", "Manual", nullptr));
#ifndef QT_NO_SHORTCUT
        actionManual->setShortcut(QApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_NO_SHORTCUT
        actionSobre->setText(QApplication::translate("MainWindow", "Sobre", nullptr));
        actionSelecionar_base_de_dados->setText(QApplication::translate("MainWindow", "Selecionar base de dados", nullptr));
        actionRemoverAluno->setText(QApplication::translate("MainWindow", "Remover", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRemoverAluno->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, 3", nullptr));
#endif // QT_NO_SHORTCUT
        actionConsultarAluno->setText(QApplication::translate("MainWindow", "Consultar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionConsultarAluno->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, 2", nullptr));
#endif // QT_NO_SHORTCUT
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
        menuAlunos->setTitle(QApplication::translate("MainWindow", "Alunos", nullptr));
        menuProfessores->setTitle(QApplication::translate("MainWindow", "Professores", nullptr));
        menuCursos->setTitle(QApplication::translate("MainWindow", "Cursos", nullptr));
        menuDisciplinas->setTitle(QApplication::translate("MainWindow", "Disciplinas", nullptr));
        menuMatriculas->setTitle(QApplication::translate("MainWindow", "Matriculas", nullptr));
        menuEditar->setTitle(QApplication::translate("MainWindow", "Editar", nullptr));
        menuAjuda->setTitle(QApplication::translate("MainWindow", "Ajuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
