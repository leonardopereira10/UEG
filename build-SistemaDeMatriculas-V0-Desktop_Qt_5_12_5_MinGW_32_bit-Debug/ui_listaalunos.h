/********************************************************************************
** Form generated from reading UI file 'listaalunos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAALUNOS_H
#define UI_LISTAALUNOS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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
    QWidget *widget;
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
            ListaAlunos->setObjectName(QString::fromUtf8("ListaAlunos"));
        ListaAlunos->resize(1152, 510);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/recursos/Imagens/Aluno.png"), QSize(), QIcon::Normal, QIcon::Off);
        ListaAlunos->setWindowIcon(icon);
        widget = new QWidget(ListaAlunos);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 1118, 481));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setFrameShape(QFrame::StyledPanel);
        tableView->setFrameShadow(QFrame::Sunken);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView->setProperty("showDropIndicator", QVariant(true));
        tableView->setAlternatingRowColors(false);

        gridLayout->addWidget(tableView, 1, 0, 1, 6);

        radioCresc = new QRadioButton(widget);
        radioCresc->setObjectName(QString::fromUtf8("radioCresc"));
        radioCresc->setChecked(true);

        gridLayout->addWidget(radioCresc, 0, 2, 1, 1);

        radioDecresc = new QRadioButton(widget);
        radioDecresc->setObjectName(QString::fromUtf8("radioDecresc"));

        gridLayout->addWidget(radioDecresc, 0, 3, 1, 1);

        labelOrdem = new QLabel(widget);
        labelOrdem->setObjectName(QString::fromUtf8("labelOrdem"));

        gridLayout->addWidget(labelOrdem, 0, 0, 1, 1);

        boxOrdem = new QComboBox(widget);
        boxOrdem->addItem(QString());
        boxOrdem->addItem(QString());
        boxOrdem->addItem(QString());
        boxOrdem->addItem(QString());
        boxOrdem->addItem(QString());
        boxOrdem->addItem(QString());
        boxOrdem->setObjectName(QString::fromUtf8("boxOrdem"));

        gridLayout->addWidget(boxOrdem, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(655, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        btnAtualizar = new QPushButton(widget);
        btnAtualizar->setObjectName(QString::fromUtf8("btnAtualizar"));

        gridLayout->addWidget(btnAtualizar, 0, 5, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(5, 1);

        retranslateUi(ListaAlunos);

        QMetaObject::connectSlotsByName(ListaAlunos);
    } // setupUi

    void retranslateUi(QWidget *ListaAlunos)
    {
        ListaAlunos->setWindowTitle(QApplication::translate("ListaAlunos", "Listar alunos", nullptr));
        radioCresc->setText(QApplication::translate("ListaAlunos", "Crescente", nullptr));
        radioDecresc->setText(QApplication::translate("ListaAlunos", "Decrescente", nullptr));
        labelOrdem->setText(QApplication::translate("ListaAlunos", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Ordenar por:</span></p></body></html>", nullptr));
        boxOrdem->setItemText(0, QApplication::translate("ListaAlunos", "Nome", nullptr));
        boxOrdem->setItemText(1, QApplication::translate("ListaAlunos", "Matricula", nullptr));
        boxOrdem->setItemText(2, QApplication::translate("ListaAlunos", "Curso", nullptr));
        boxOrdem->setItemText(3, QApplication::translate("ListaAlunos", "Ano", nullptr));
        boxOrdem->setItemText(4, QApplication::translate("ListaAlunos", "Cidade", nullptr));
        boxOrdem->setItemText(5, QApplication::translate("ListaAlunos", "Estado", nullptr));

        btnAtualizar->setText(QApplication::translate("ListaAlunos", "Atualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListaAlunos: public Ui_ListaAlunos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAALUNOS_H
