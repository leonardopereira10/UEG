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
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QWidget *Consulta_professor)
    {
        if (Consulta_professor->objectName().isEmpty())
            Consulta_professor->setObjectName(QString::fromUtf8("Consulta_professor"));
        Consulta_professor->resize(1022, 654);
        radioButton = new QRadioButton(Consulta_professor);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 10, 42, 17));
        radioButton_2 = new QRadioButton(Consulta_professor);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(120, 10, 50, 17));
        label = new QLabel(Consulta_professor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(21, 51, 47, 16));
        lineEdit = new QLineEdit(Consulta_professor);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(78, 51, 310, 20));
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
        Consulta_professor->setWindowTitle(QApplication::translate("Consulta_professor", "Form", nullptr));
        radioButton->setText(QApplication::translate("Consulta_professor", "CPF", nullptr));
        radioButton_2->setText(QApplication::translate("Consulta_professor", "Nome", nullptr));
        label->setText(QApplication::translate("Consulta_professor", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("Consulta_professor", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Consulta_professor: public Ui_Consulta_professor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTA_PROFESSOR_H
