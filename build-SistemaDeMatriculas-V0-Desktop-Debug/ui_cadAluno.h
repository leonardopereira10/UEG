/********************************************************************************
** Form generated from reading UI file 'cadAluno.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADALUNO_H
#define UI_CADALUNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Aluno
{
public:

    void setupUi(QDialog *Aluno)
    {
        if (Aluno->objectName().isEmpty())
            Aluno->setObjectName(QStringLiteral("Aluno"));
        Aluno->resize(400, 300);

        retranslateUi(Aluno);

        QMetaObject::connectSlotsByName(Aluno);
    } // setupUi

    void retranslateUi(QDialog *Aluno)
    {
        Aluno->setWindowTitle(QApplication::translate("Aluno", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Aluno: public Ui_Aluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADALUNO_H
