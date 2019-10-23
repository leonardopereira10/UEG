/********************************************************************************
** Form generated from reading UI file 'opcao_classe.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPCAO_CLASSE_H
#define UI_OPCAO_CLASSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Opcao_classe
{
public:
    QPushButton *btn_voltar;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *logo_aluno;
    QLabel *logo_professor;
    QLabel *logo_curso;
    QLabel *logo_disciplina;
    QPushButton *btn_aluno;
    QPushButton *btn_professor;
    QPushButton *btn_curso;
    QPushButton *btn_disciplina;

    void setupUi(QDialog *Opcao_classe)
    {
        if (Opcao_classe->objectName().isEmpty())
            Opcao_classe->setObjectName(QStringLiteral("Opcao_classe"));
        Opcao_classe->resize(462, 204);
        btn_voltar = new QPushButton(Opcao_classe);
        btn_voltar->setObjectName(QStringLiteral("btn_voltar"));
        btn_voltar->setGeometry(QRect(176, 164, 120, 32));
        layoutWidget = new QWidget(Opcao_classe);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 391, 121));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        logo_aluno = new QLabel(layoutWidget);
        logo_aluno->setObjectName(QStringLiteral("logo_aluno"));
        logo_aluno->setScaledContents(true);

        gridLayout->addWidget(logo_aluno, 0, 0, 1, 1);

        logo_professor = new QLabel(layoutWidget);
        logo_professor->setObjectName(QStringLiteral("logo_professor"));
        logo_professor->setScaledContents(true);

        gridLayout->addWidget(logo_professor, 0, 1, 1, 1);

        logo_curso = new QLabel(layoutWidget);
        logo_curso->setObjectName(QStringLiteral("logo_curso"));
        logo_curso->setScaledContents(true);

        gridLayout->addWidget(logo_curso, 0, 2, 1, 1);

        logo_disciplina = new QLabel(layoutWidget);
        logo_disciplina->setObjectName(QStringLiteral("logo_disciplina"));
        logo_disciplina->setScaledContents(true);

        gridLayout->addWidget(logo_disciplina, 0, 3, 1, 1);

        btn_aluno = new QPushButton(layoutWidget);
        btn_aluno->setObjectName(QStringLiteral("btn_aluno"));

        gridLayout->addWidget(btn_aluno, 1, 0, 1, 1);

        btn_professor = new QPushButton(layoutWidget);
        btn_professor->setObjectName(QStringLiteral("btn_professor"));

        gridLayout->addWidget(btn_professor, 1, 1, 1, 1);

        btn_curso = new QPushButton(layoutWidget);
        btn_curso->setObjectName(QStringLiteral("btn_curso"));

        gridLayout->addWidget(btn_curso, 1, 2, 1, 1);

        btn_disciplina = new QPushButton(layoutWidget);
        btn_disciplina->setObjectName(QStringLiteral("btn_disciplina"));

        gridLayout->addWidget(btn_disciplina, 1, 3, 1, 1);


        retranslateUi(Opcao_classe);
        QObject::connect(btn_voltar, SIGNAL(clicked()), Opcao_classe, SLOT(close()));

        QMetaObject::connectSlotsByName(Opcao_classe);
    } // setupUi

    void retranslateUi(QDialog *Opcao_classe)
    {
        Opcao_classe->setWindowTitle(QApplication::translate("Opcao_classe", "Cadastro", Q_NULLPTR));
        btn_voltar->setText(QApplication::translate("Opcao_classe", "Voltar", Q_NULLPTR));
        logo_aluno->setText(QString());
        logo_professor->setText(QString());
        logo_curso->setText(QString());
        logo_disciplina->setText(QString());
        btn_aluno->setText(QApplication::translate("Opcao_classe", "Aluno", Q_NULLPTR));
        btn_professor->setText(QApplication::translate("Opcao_classe", "Professor", Q_NULLPTR));
        btn_curso->setText(QApplication::translate("Opcao_classe", "Curso", Q_NULLPTR));
        btn_disciplina->setText(QApplication::translate("Opcao_classe", "Disciplina", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Opcao_classe: public Ui_Opcao_classe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPCAO_CLASSE_H
