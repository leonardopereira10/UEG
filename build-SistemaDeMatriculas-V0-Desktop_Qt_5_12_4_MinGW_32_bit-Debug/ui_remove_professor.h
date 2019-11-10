/********************************************************************************
** Form generated from reading UI file 'remove_professor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVE_PROFESSOR_H
#define UI_REMOVE_PROFESSOR_H

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

class Ui_remove_professor
{
public:
    QPushButton *pushButton;
    QRadioButton *radio_nome;
    QRadioButton *radio_cpf;
    QLabel *variavel;
    QLineEdit *campo_busca;
    QTableView *tableView;

    void setupUi(QWidget *remove_professor)
    {
        if (remove_professor->objectName().isEmpty())
            remove_professor->setObjectName(QString::fromUtf8("remove_professor"));
        remove_professor->resize(1021, 659);
        pushButton = new QPushButton(remove_professor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 50, 75, 23));
        radio_nome = new QRadioButton(remove_professor);
        radio_nome->setObjectName(QString::fromUtf8("radio_nome"));
        radio_nome->setGeometry(QRect(110, 10, 60, 20));
        radio_cpf = new QRadioButton(remove_professor);
        radio_cpf->setObjectName(QString::fromUtf8("radio_cpf"));
        radio_cpf->setGeometry(QRect(10, 10, 49, 20));
        variavel = new QLabel(remove_professor);
        variavel->setObjectName(QString::fromUtf8("variavel"));
        variavel->setGeometry(QRect(11, 51, 55, 16));
        campo_busca = new QLineEdit(remove_professor);
        campo_busca->setObjectName(QString::fromUtf8("campo_busca"));
        campo_busca->setGeometry(QRect(79, 51, 310, 20));
        campo_busca->setMaximumSize(QSize(16777215, 16777215));
        tableView = new QTableView(remove_professor);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 100, 991, 541));

        retranslateUi(remove_professor);

        QMetaObject::connectSlotsByName(remove_professor);
    } // setupUi

    void retranslateUi(QWidget *remove_professor)
    {
        remove_professor->setWindowTitle(QApplication::translate("remove_professor", "Form", nullptr));
        pushButton->setText(QApplication::translate("remove_professor", "Buscar", nullptr));
        radio_nome->setText(QApplication::translate("remove_professor", "Nome", nullptr));
        radio_cpf->setText(QApplication::translate("remove_professor", "CPF", nullptr));
        variavel->setText(QApplication::translate("remove_professor", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remove_professor: public Ui_remove_professor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVE_PROFESSOR_H
