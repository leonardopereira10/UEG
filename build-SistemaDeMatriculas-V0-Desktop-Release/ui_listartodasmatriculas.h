/********************************************************************************
** Form generated from reading UI file 'listartodasmatriculas.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTARTODASMATRICULAS_H
#define UI_LISTARTODASMATRICULAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            ListarTodasMatriculas->setObjectName(QStringLiteral("ListarTodasMatriculas"));
        ListarTodasMatriculas->resize(740, 463);
        QIcon icon;
        icon.addFile(QStringLiteral(":/recursos/Imagens/Disciplinas.png"), QSize(), QIcon::Normal, QIcon::Off);
        ListarTodasMatriculas->setWindowIcon(icon);
        tabWidget = new QTabWidget(ListarTodasMatriculas);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 706, 385));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 681, 341));
        tabWidget->addTab(tab, QString());
        pushButton = new QPushButton(ListarTodasMatriculas);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(635, 10, 80, 29));

        retranslateUi(ListarTodasMatriculas);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ListarTodasMatriculas);
    } // setupUi

    void retranslateUi(QWidget *ListarTodasMatriculas)
    {
        ListarTodasMatriculas->setWindowTitle(QApplication::translate("ListarTodasMatriculas", "Listar Todas as Matriculas", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ListarTodasMatriculas", "Todas as matriculas", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ListarTodasMatriculas", "Atualizar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListarTodasMatriculas: public Ui_ListarTodasMatriculas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTARTODASMATRICULAS_H
