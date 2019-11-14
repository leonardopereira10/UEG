/********************************************************************************
** Form generated from reading UI file 'removecurso.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVECURSO_H
#define UI_REMOVECURSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_removeCurso
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QWidget *removeCurso)
    {
        if (removeCurso->objectName().isEmpty())
            removeCurso->setObjectName(QStringLiteral("removeCurso"));
        removeCurso->resize(400, 300);
        label = new QLabel(removeCurso);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 41, 16));
        pushButton = new QPushButton(removeCurso);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 210, 90, 28));
        lineEdit = new QLineEdit(removeCurso);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 30, 181, 28));
        label_2 = new QLabel(removeCurso);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 20, 91, 101));

        retranslateUi(removeCurso);

        QMetaObject::connectSlotsByName(removeCurso);
    } // setupUi

    void retranslateUi(QWidget *removeCurso)
    {
        removeCurso->setWindowTitle(QApplication::translate("removeCurso", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("removeCurso", "Nome: ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("removeCurso", "Remover", Q_NULLPTR));
        label_2->setText(QApplication::translate("removeCurso", "<html><head/><body><p><img src=\":/recursos/Imagens/Curso.png\" heigth=\"90\" width=\"90\" /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class removeCurso: public Ui_removeCurso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVECURSO_H
