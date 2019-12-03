/********************************************************************************
** Form generated from reading UI file 'listarcurso.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTARCURSO_H
#define UI_LISTARCURSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListarCurso
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QWidget *ListarCurso)
    {
        if (ListarCurso->objectName().isEmpty())
            ListarCurso->setObjectName(QStringLiteral("ListarCurso"));
        ListarCurso->resize(496, 274);
        widget = new QWidget(ListarCurso);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 441, 228));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        tableView = new QTableView(widget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 1);


        retranslateUi(ListarCurso);

        QMetaObject::connectSlotsByName(ListarCurso);
    } // setupUi

    void retranslateUi(QWidget *ListarCurso)
    {
        ListarCurso->setWindowTitle(QApplication::translate("ListarCurso", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ListarCurso", "Listar Cursos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListarCurso: public Ui_ListarCurso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTARCURSO_H
