/********************************************************************************
** Form generated from reading UI file 'listar_professor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAR_PROFESSOR_H
#define UI_LISTAR_PROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listar_professor
{
public:
    QTableView *tableView;
    QPushButton *btn_listar;

    void setupUi(QWidget *listar_professor)
    {
        if (listar_professor->objectName().isEmpty())
            listar_professor->setObjectName(QString::fromUtf8("listar_professor"));
        listar_professor->resize(1022, 617);
        tableView = new QTableView(listar_professor);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 60, 991, 541));
        btn_listar = new QPushButton(listar_professor);
        btn_listar->setObjectName(QString::fromUtf8("btn_listar"));
        btn_listar->setGeometry(QRect(457, 20, 75, 23));

        retranslateUi(listar_professor);

        QMetaObject::connectSlotsByName(listar_professor);
    } // setupUi

    void retranslateUi(QWidget *listar_professor)
    {
        listar_professor->setWindowTitle(QApplication::translate("listar_professor", "Form", nullptr));
        btn_listar->setText(QApplication::translate("listar_professor", "Listar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listar_professor: public Ui_listar_professor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAR_PROFESSOR_H
