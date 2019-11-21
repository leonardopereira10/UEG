/********************************************************************************
** Form generated from reading UI file 'remove_professor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVE_PROFESSOR_H
#define UI_REMOVE_PROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_remove_professor
{
public:
    QPushButton *pushButton;
    QLabel *aviso_cpf;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *cpf;
    QLineEdit *campo_cpf;

    void setupUi(QWidget *remove_professor)
    {
        if (remove_professor->objectName().isEmpty())
            remove_professor->setObjectName(QString::fromUtf8("remove_professor"));
        remove_professor->resize(280, 86);
        pushButton = new QPushButton(remove_professor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 30, 75, 23));
        aviso_cpf = new QLabel(remove_professor);
        aviso_cpf->setObjectName(QString::fromUtf8("aviso_cpf"));
        aviso_cpf->setGeometry(QRect(90, 10, 80, 16));
        layoutWidget1 = new QWidget(remove_professor);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 168, 23));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cpf = new QLabel(layoutWidget1);
        cpf->setObjectName(QString::fromUtf8("cpf"));
        cpf->setMaximumSize(QSize(30, 21));

        gridLayout->addWidget(cpf, 0, 0, 1, 1);

        campo_cpf = new QLineEdit(layoutWidget1);
        campo_cpf->setObjectName(QString::fromUtf8("campo_cpf"));
        campo_cpf->setMaximumSize(QSize(110, 21));

        gridLayout->addWidget(campo_cpf, 0, 1, 1, 1, Qt::AlignLeft);


        retranslateUi(remove_professor);

        QMetaObject::connectSlotsByName(remove_professor);
    } // setupUi

    void retranslateUi(QWidget *remove_professor)
    {
        remove_professor->setWindowTitle(QApplication::translate("remove_professor", "Form", nullptr));
        pushButton->setText(QApplication::translate("remove_professor", "Remover", nullptr));
        aviso_cpf->setText(QApplication::translate("remove_professor", "TextLabel", nullptr));
        cpf->setText(QApplication::translate("remove_professor", "CPF: ", nullptr));
        campo_cpf->setInputMask(QApplication::translate("remove_professor", "###.###.###-##", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remove_professor: public Ui_remove_professor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVE_PROFESSOR_H
