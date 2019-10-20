/********************************************************************************
** Form generated from reading UI file 'cpf.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPF_H
#define UI_CPF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cpf
{
public:
    QLabel *validador;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *cpf;
    QLineEdit *campo_cpf;
    QPushButton *btn_cancelar;
    QPushButton *btn_ok;

    void setupUi(QDialog *Cpf)
    {
        if (Cpf->objectName().isEmpty())
            Cpf->setObjectName(QString::fromUtf8("Cpf"));
        Cpf->resize(293, 91);
        validador = new QLabel(Cpf);
        validador->setObjectName(QString::fromUtf8("validador"));
        validador->setGeometry(QRect(260, 14, 21, 20));
        validador->setPixmap(QPixmap(QString::fromUtf8("../Imagens/Erro.png")));
        validador->setScaledContents(true);
        layoutWidget = new QWidget(Cpf);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 234, 68));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cpf = new QLabel(layoutWidget);
        cpf->setObjectName(QString::fromUtf8("cpf"));
        QFont font;
        font.setFamily(QString::fromUtf8("Helvetica"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        cpf->setFont(font);

        horizontalLayout->addWidget(cpf);

        campo_cpf = new QLineEdit(layoutWidget);
        campo_cpf->setObjectName(QString::fromUtf8("campo_cpf"));

        horizontalLayout->addWidget(campo_cpf);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        btn_cancelar = new QPushButton(layoutWidget);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(btn_cancelar, 1, 0, 1, 1);

        btn_ok = new QPushButton(layoutWidget);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));

        gridLayout->addWidget(btn_ok, 1, 1, 1, 1);


        retranslateUi(Cpf);
        QObject::connect(btn_cancelar, SIGNAL(clicked()), Cpf, SLOT(close()));

        QMetaObject::connectSlotsByName(Cpf);
    } // setupUi

    void retranslateUi(QDialog *Cpf)
    {
        Cpf->setWindowTitle(QApplication::translate("Cpf", "Valida\303\247\303\243o de CPF", nullptr));
        validador->setText(QString());
        cpf->setText(QApplication::translate("Cpf", "Insira o CPF:", nullptr));
        campo_cpf->setInputMask(QApplication::translate("Cpf", "###.###.###-##", nullptr));
        btn_cancelar->setText(QApplication::translate("Cpf", "Cancelar", nullptr));
        btn_ok->setText(QApplication::translate("Cpf", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cpf: public Ui_Cpf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPF_H
