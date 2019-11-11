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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListaAlunos
{
public:

    void setupUi(QWidget *ListaAlunos)
    {
        if (ListaAlunos->objectName().isEmpty())
            ListaAlunos->setObjectName(QStringLiteral("ListaAlunos"));
        ListaAlunos->resize(400, 300);

        retranslateUi(ListaAlunos);

        QMetaObject::connectSlotsByName(ListaAlunos);
    } // setupUi

    void retranslateUi(QWidget *ListaAlunos)
    {
        ListaAlunos->setWindowTitle(QApplication::translate("ListaAlunos", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListaAlunos: public Ui_ListaAlunos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAALUNOS_H
