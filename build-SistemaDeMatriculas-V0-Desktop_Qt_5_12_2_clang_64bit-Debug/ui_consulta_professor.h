/********************************************************************************
** Form generated from reading UI file 'consulta_professor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTA_PROFESSOR_H
#define UI_CONSULTA_PROFESSOR_H

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

class Ui_consulta_professor
{
public:
    QLabel *label_variavel;
    QLineEdit *campo_pesquisa;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radio_cpf;
    QRadioButton *radio_nome;
    QPushButton *btn_pesquisar;
    QTableView *tabela_resultado;

    void setupUi(QWidget *consulta_professor)
    {
        if (consulta_professor->objectName().isEmpty())
            consulta_professor->setObjectName(QString::fromUtf8("consulta_professor"));
        consulta_professor->resize(1302, 728);
        label_variavel = new QLabel(consulta_professor);
        label_variavel->setObjectName(QString::fromUtf8("label_variavel"));
        label_variavel->setGeometry(QRect(21, 68, 29, 16));
        campo_pesquisa = new QLineEdit(consulta_professor);
        campo_pesquisa->setObjectName(QString::fromUtf8("campo_pesquisa"));
        campo_pesquisa->setGeometry(QRect(76, 64, 300, 21));
        layoutWidget = new QWidget(consulta_professor);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 161, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radio_cpf = new QRadioButton(layoutWidget);
        radio_cpf->setObjectName(QString::fromUtf8("radio_cpf"));

        horizontalLayout->addWidget(radio_cpf);

        radio_nome = new QRadioButton(layoutWidget);
        radio_nome->setObjectName(QString::fromUtf8("radio_nome"));

        horizontalLayout->addWidget(radio_nome);

        btn_pesquisar = new QPushButton(consulta_professor);
        btn_pesquisar->setObjectName(QString::fromUtf8("btn_pesquisar"));
        btn_pesquisar->setGeometry(QRect(381, 60, 113, 32));
        tabela_resultado = new QTableView(consulta_professor);
        tabela_resultado->setObjectName(QString::fromUtf8("tabela_resultado"));
        tabela_resultado->setGeometry(QRect(20, 110, 1261, 601));
        tabela_resultado->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tabela_resultado->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tabela_resultado->setAutoScroll(true);
        tabela_resultado->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tabela_resultado->setTextElideMode(Qt::ElideRight);
        tabela_resultado->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tabela_resultado->setShowGrid(true);
        tabela_resultado->setGridStyle(Qt::SolidLine);
        tabela_resultado->setSortingEnabled(false);
        tabela_resultado->setWordWrap(false);
        QWidget::setTabOrder(radio_cpf, radio_nome);

        retranslateUi(consulta_professor);

        QMetaObject::connectSlotsByName(consulta_professor);
    } // setupUi

    void retranslateUi(QWidget *consulta_professor)
    {
        consulta_professor->setWindowTitle(QApplication::translate("consulta_professor", "Consulta", nullptr));
        label_variavel->setText(QApplication::translate("consulta_professor", "CPF:", nullptr));
        radio_cpf->setText(QApplication::translate("consulta_professor", "CPF", nullptr));
        radio_nome->setText(QApplication::translate("consulta_professor", "Nome", nullptr));
        btn_pesquisar->setText(QApplication::translate("consulta_professor", "Pesquisar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class consulta_professor: public Ui_consulta_professor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTA_PROFESSOR_H
