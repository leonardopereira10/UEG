/********************************************************************************
** Form generated from reading UI file 'listartodasmatriculas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTARTODASMATRICULAS_H
#define UI_LISTARTODASMATRICULAS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListarTodasMatriculas
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QWidget *ListarTodasMatriculas)
    {
        if (ListarTodasMatriculas->objectName().isEmpty())
            ListarTodasMatriculas->setObjectName(QString::fromUtf8("ListarTodasMatriculas"));
        ListarTodasMatriculas->resize(740, 463);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/recursos/Imagens/Disciplinas.png"), QSize(), QIcon::Normal, QIcon::Off);
        ListarTodasMatriculas->setWindowIcon(icon);
        tabWidget = new QTabWidget(ListarTodasMatriculas);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 706, 385));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 681, 341));
        tabWidget->addTab(tab, QString());
        pushButton = new QPushButton(ListarTodasMatriculas);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(635, 10, 80, 29));

        retranslateUi(ListarTodasMatriculas);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ListarTodasMatriculas);
    } // setupUi

    void retranslateUi(QWidget *ListarTodasMatriculas)
    {
        ListarTodasMatriculas->setWindowTitle(QApplication::translate("ListarTodasMatriculas", "Listar Todas as Matriculas", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ListarTodasMatriculas", "Todas as matriculas", nullptr));
        pushButton->setText(QApplication::translate("ListarTodasMatriculas", "Atualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListarTodasMatriculas: public Ui_ListarTodasMatriculas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTARTODASMATRICULAS_H
