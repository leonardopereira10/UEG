/********************************************************************************
** Form generated from reading UI file 'remove_professor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVE_PROFESSOR_H
#define UI_REMOVE_PROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_remove_professor
{
public:
    QLabel *label_variavel;
    QLineEdit *campo_pesquisa;
    QTableView *tabela_resultado;
    QPushButton *btn_remover;
    QPushButton *btn_pesquisar;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radio_cpf;
    QRadioButton *radio_nome;

    void setupUi(QWidget *remove_professor)
    {
        if (remove_professor->objectName().isEmpty())
            remove_professor->setObjectName(QString::fromUtf8("remove_professor"));
        remove_professor->resize(718, 446);
        label_variavel = new QLabel(remove_professor);
        label_variavel->setObjectName(QString::fromUtf8("label_variavel"));
        label_variavel->setGeometry(QRect(23, 70, 70, 16));
        campo_pesquisa = new QLineEdit(remove_professor);
        campo_pesquisa->setObjectName(QString::fromUtf8("campo_pesquisa"));
        campo_pesquisa->setGeometry(QRect(90, 70, 291, 21));
        tabela_resultado = new QTableView(remove_professor);
        tabela_resultado->setObjectName(QString::fromUtf8("tabela_resultado"));
        tabela_resultado->setGeometry(QRect(20, 110, 661, 192));
        btn_remover = new QPushButton(remove_professor);
        btn_remover->setObjectName(QString::fromUtf8("btn_remover"));
        btn_remover->setGeometry(QRect(280, 360, 113, 32));
        btn_remover->setAutoFillBackground(true);
        btn_pesquisar = new QPushButton(remove_professor);
        btn_pesquisar->setObjectName(QString::fromUtf8("btn_pesquisar"));
        btn_pesquisar->setGeometry(QRect(400, 65, 113, 32));
        widget = new QWidget(remove_professor);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 16, 211, 20));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radio_cpf = new QRadioButton(widget);
        radio_cpf->setObjectName(QString::fromUtf8("radio_cpf"));

        horizontalLayout->addWidget(radio_cpf);

        radio_nome = new QRadioButton(widget);
        radio_nome->setObjectName(QString::fromUtf8("radio_nome"));

        horizontalLayout->addWidget(radio_nome);


        retranslateUi(remove_professor);

        QMetaObject::connectSlotsByName(remove_professor);
    } // setupUi

    void retranslateUi(QWidget *remove_professor)
    {
        remove_professor->setWindowTitle(QApplication::translate("remove_professor", "Form", nullptr));
        label_variavel->setText(QApplication::translate("remove_professor", "CPF:", nullptr));
        btn_remover->setText(QApplication::translate("remove_professor", "Remover", nullptr));
        btn_pesquisar->setText(QApplication::translate("remove_professor", "Pesquisar", nullptr));
        radio_cpf->setText(QApplication::translate("remove_professor", "CPF", nullptr));
        radio_nome->setText(QApplication::translate("remove_professor", "Nome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remove_professor: public Ui_remove_professor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVE_PROFESSOR_H
