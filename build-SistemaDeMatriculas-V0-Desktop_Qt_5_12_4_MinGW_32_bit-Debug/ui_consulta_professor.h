/********************************************************************************
** Form generated from reading UI file 'consulta_professor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTA_PROFESSOR_H
#define UI_CONSULTA_PROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Consulta_professor
{
public:
    QRadioButton *radio_cpf;
    QRadioButton *radio_nome;
    QLabel *variavel;
    QLineEdit *campo_busca;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QWidget *Consulta_professor)
    {
        if (Consulta_professor->objectName().isEmpty())
            Consulta_professor->setObjectName(QString::fromUtf8("Consulta_professor"));
        Consulta_professor->resize(1022, 654);
        radio_cpf = new QRadioButton(Consulta_professor);
        radio_cpf->setObjectName(QString::fromUtf8("radio_cpf"));
        radio_cpf->setGeometry(QRect(20, 10, 49, 20));
        radio_nome = new QRadioButton(Consulta_professor);
        radio_nome->setObjectName(QString::fromUtf8("radio_nome"));
        radio_nome->setGeometry(QRect(120, 10, 60, 20));
        variavel = new QLabel(Consulta_professor);
        variavel->setObjectName(QString::fromUtf8("variavel"));
        variavel->setGeometry(QRect(21, 51, 55, 16));
        campo_busca = new QLineEdit(Consulta_professor);
        campo_busca->setObjectName(QString::fromUtf8("campo_busca"));
        campo_busca->setGeometry(QRect(89, 51, 310, 20));
        campo_busca->setMaximumSize(QSize(16777215, 16777215));
        pushButton = new QPushButton(Consulta_professor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 50, 75, 23));
        tableView = new QTableView(Consulta_professor);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 100, 991, 541));

        retranslateUi(Consulta_professor);

        QMetaObject::connectSlotsByName(Consulta_professor);
    } // setupUi

    void retranslateUi(QWidget *Consulta_professor)
    {
        Consulta_professor->setWindowTitle(QApplication::translate("Consulta_professor", "Consulta", nullptr));
        radio_cpf->setText(QApplication::translate("Consulta_professor", "CPF", nullptr));
        radio_nome->setText(QApplication::translate("Consulta_professor", "Nome", nullptr));
        variavel->setText(QApplication::translate("Consulta_professor", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("Consulta_professor", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Consulta_professor: public Ui_Consulta_professor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTA_PROFESSOR_H
