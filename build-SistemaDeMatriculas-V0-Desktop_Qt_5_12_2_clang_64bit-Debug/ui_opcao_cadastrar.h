/********************************************************************************
** Form generated from reading UI file 'opcao_cadastrar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPCAO_CADASTRAR_H
#define UI_OPCAO_CADASTRAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opcao_cadastrar
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

    void setupUi(QDialog *opcao_cadastrar)
    {
        if (opcao_cadastrar->objectName().isEmpty())
            opcao_cadastrar->setObjectName(QString::fromUtf8("opcao_cadastrar"));
        opcao_cadastrar->resize(462, 204);
        btn_voltar = new QPushButton(opcao_cadastrar);
        btn_voltar->setObjectName(QString::fromUtf8("btn_voltar"));
        btn_voltar->setGeometry(QRect(176, 170, 120, 32));
        layoutWidget = new QWidget(opcao_cadastrar);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 26, 391, 121));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        logo_aluno = new QLabel(layoutWidget);
        logo_aluno->setObjectName(QString::fromUtf8("logo_aluno"));
        logo_aluno->setScaledContents(true);

        gridLayout->addWidget(logo_aluno, 0, 0, 1, 1);

        logo_professor = new QLabel(layoutWidget);
        logo_professor->setObjectName(QString::fromUtf8("logo_professor"));
        logo_professor->setScaledContents(true);

        gridLayout->addWidget(logo_professor, 0, 1, 1, 1);

        logo_curso = new QLabel(layoutWidget);
        logo_curso->setObjectName(QString::fromUtf8("logo_curso"));
        logo_curso->setScaledContents(true);

        gridLayout->addWidget(logo_curso, 0, 2, 1, 1);

        logo_disciplina = new QLabel(layoutWidget);
        logo_disciplina->setObjectName(QString::fromUtf8("logo_disciplina"));
        logo_disciplina->setScaledContents(true);

        gridLayout->addWidget(logo_disciplina, 0, 3, 1, 1);

        btn_aluno = new QPushButton(layoutWidget);
        btn_aluno->setObjectName(QString::fromUtf8("btn_aluno"));

        gridLayout->addWidget(btn_aluno, 1, 0, 1, 1);

        btn_professor = new QPushButton(layoutWidget);
        btn_professor->setObjectName(QString::fromUtf8("btn_professor"));

        gridLayout->addWidget(btn_professor, 1, 1, 1, 1);

        btn_curso = new QPushButton(layoutWidget);
        btn_curso->setObjectName(QString::fromUtf8("btn_curso"));

        gridLayout->addWidget(btn_curso, 1, 2, 1, 1);

        btn_disciplina = new QPushButton(layoutWidget);
        btn_disciplina->setObjectName(QString::fromUtf8("btn_disciplina"));

        gridLayout->addWidget(btn_disciplina, 1, 3, 1, 1);


        retranslateUi(opcao_cadastrar);

        QMetaObject::connectSlotsByName(opcao_cadastrar);
    } // setupUi

    void retranslateUi(QDialog *opcao_cadastrar)
    {
        opcao_cadastrar->setWindowTitle(QApplication::translate("opcao_cadastrar", "Cadastro", nullptr));
        btn_voltar->setText(QApplication::translate("opcao_cadastrar", "Voltar", nullptr));
        logo_aluno->setText(QString());
        logo_professor->setText(QString());
        logo_curso->setText(QString());
        logo_disciplina->setText(QString());
        btn_aluno->setText(QApplication::translate("opcao_cadastrar", "Aluno", nullptr));
        btn_professor->setText(QApplication::translate("opcao_cadastrar", "Professor", nullptr));
        btn_curso->setText(QApplication::translate("opcao_cadastrar", "Curso", nullptr));
        btn_disciplina->setText(QApplication::translate("opcao_cadastrar", "Disciplina", nullptr));
    } // retranslateUi

};

namespace Ui {
    class opcao_cadastrar: public Ui_opcao_cadastrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPCAO_CADASTRAR_H
