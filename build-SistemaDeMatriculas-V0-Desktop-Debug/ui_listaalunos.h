/********************************************************************************
** Form generated from reading UI file 'listaalunos.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAALUNOS_H
#define UI_LISTAALUNOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListaAlunos
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAtualizar;

    void setupUi(QWidget *ListaAlunos)
    {
        if (ListaAlunos->objectName().isEmpty())
            ListaAlunos->setObjectName(QStringLiteral("ListaAlunos"));
        ListaAlunos->resize(1152, 484);
        QIcon icon;
        icon.addFile(QStringLiteral(":/recursos/Imagens/Aluno.png"), QSize(), QIcon::Normal, QIcon::Off);
        ListaAlunos->setWindowIcon(icon);
        widget = new QWidget(ListaAlunos);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 1121, 441));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(widget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setFrameShape(QFrame::StyledPanel);
        tableView->setFrameShadow(QFrame::Sunken);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView->setProperty("showDropIndicator", QVariant(true));
        tableView->setAlternatingRowColors(false);

        gridLayout->addWidget(tableView, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(988, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        btnAtualizar = new QPushButton(widget);
        btnAtualizar->setObjectName(QStringLiteral("btnAtualizar"));

        gridLayout->addWidget(btnAtualizar, 1, 1, 1, 1);


        retranslateUi(ListaAlunos);

        QMetaObject::connectSlotsByName(ListaAlunos);
    } // setupUi

    void retranslateUi(QWidget *ListaAlunos)
    {
        ListaAlunos->setWindowTitle(QApplication::translate("ListaAlunos", "Listar alunos", Q_NULLPTR));
        btnAtualizar->setText(QApplication::translate("ListaAlunos", "Atualizar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListaAlunos: public Ui_ListaAlunos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAALUNOS_H
