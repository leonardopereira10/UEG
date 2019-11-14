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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListaAlunos
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QRadioButton *radioCresc;
    QRadioButton *radioDecresc;
    QLabel *labelOrdem;
    QComboBox *boxOrdem;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAtualizar;

    void setupUi(QWidget *ListaAlunos)
    {
        if (ListaAlunos->objectName().isEmpty())
            ListaAlunos->setObjectName(QStringLiteral("ListaAlunos"));
        ListaAlunos->resize(1152, 510);
        QIcon icon;
        icon.addFile(QStringLiteral(":/recursos/Imagens/Aluno.png"), QSize(), QIcon::Normal, QIcon::Off);
        ListaAlunos->setWindowIcon(icon);
        layoutWidget = new QWidget(ListaAlunos);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 1118, 481));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setFrameShape(QFrame::StyledPanel);
        tableView->setFrameShadow(QFrame::Sunken);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView->setProperty("showDropIndicator", QVariant(true));
        tableView->setAlternatingRowColors(false);
        tableView->setSortingEnabled(true);

        gridLayout->addWidget(tableView, 1, 0, 1, 6);

        radioCresc = new QRadioButton(layoutWidget);
        radioCresc->setObjectName(QStringLiteral("radioCresc"));
        radioCresc->setChecked(true);

        gridLayout->addWidget(radioCresc, 0, 2, 1, 1);

        radioDecresc = new QRadioButton(layoutWidget);
        radioDecresc->setObjectName(QStringLiteral("radioDecresc"));

        gridLayout->addWidget(radioDecresc, 0, 3, 1, 1);

        labelOrdem = new QLabel(layoutWidget);
        labelOrdem->setObjectName(QStringLiteral("labelOrdem"));

        gridLayout->addWidget(labelOrdem, 0, 0, 1, 1);

        boxOrdem = new QComboBox(layoutWidget);
        boxOrdem->setObjectName(QStringLiteral("boxOrdem"));

        gridLayout->addWidget(boxOrdem, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(655, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        btnAtualizar = new QPushButton(layoutWidget);
        btnAtualizar->setObjectName(QStringLiteral("btnAtualizar"));

        gridLayout->addWidget(btnAtualizar, 0, 5, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(5, 1);

        retranslateUi(ListaAlunos);

        QMetaObject::connectSlotsByName(ListaAlunos);
    } // setupUi

    void retranslateUi(QWidget *ListaAlunos)
    {
        ListaAlunos->setWindowTitle(QApplication::translate("ListaAlunos", "Listar alunos", Q_NULLPTR));
        radioCresc->setText(QApplication::translate("ListaAlunos", "Crescente", Q_NULLPTR));
        radioDecresc->setText(QApplication::translate("ListaAlunos", "Decrescente", Q_NULLPTR));
        labelOrdem->setText(QApplication::translate("ListaAlunos", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Ordenar por:</span></p></body></html>", Q_NULLPTR));
        boxOrdem->clear();
        boxOrdem->insertItems(0, QStringList()
         << QApplication::translate("ListaAlunos", "Nome", Q_NULLPTR)
         << QApplication::translate("ListaAlunos", "Matricula", Q_NULLPTR)
         << QApplication::translate("ListaAlunos", "Curso", Q_NULLPTR)
         << QApplication::translate("ListaAlunos", "Ano", Q_NULLPTR)
         << QApplication::translate("ListaAlunos", "Cidade", Q_NULLPTR)
         << QApplication::translate("ListaAlunos", "Estado", Q_NULLPTR)
        );
        btnAtualizar->setText(QApplication::translate("ListaAlunos", "Atualizar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListaAlunos: public Ui_ListaAlunos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAALUNOS_H
