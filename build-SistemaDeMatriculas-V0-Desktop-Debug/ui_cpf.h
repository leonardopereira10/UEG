/********************************************************************************
** Form generated from reading UI file 'cpf.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPF_H
#define UI_CPF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cpf
{
public:
    QLabel *validador;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *cpf;
    QLineEdit *campo_cpf;
    QPushButton *btn_cancelar;
    QPushButton *btn_ok;

    void setupUi(QDialog *Cpf)
    {
        if (Cpf->objectName().isEmpty())
            Cpf->setObjectName(QStringLiteral("Cpf"));
        Cpf->resize(293, 91);
        validador = new QLabel(Cpf);
        validador->setObjectName(QStringLiteral("validador"));
        validador->setGeometry(QRect(260, 14, 21, 20));
        validador->setPixmap(QPixmap(QString::fromUtf8("../Imagens/Erro.png")));
        validador->setScaledContents(true);
        widget = new QWidget(Cpf);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 234, 66));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cpf = new QLabel(widget);
        cpf->setObjectName(QStringLiteral("cpf"));
        QFont font;
        font.setFamily(QStringLiteral("Helvetica"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        cpf->setFont(font);

        horizontalLayout->addWidget(cpf);

        campo_cpf = new QLineEdit(widget);
        campo_cpf->setObjectName(QStringLiteral("campo_cpf"));

        horizontalLayout->addWidget(campo_cpf);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        btn_cancelar = new QPushButton(widget);
        btn_cancelar->setObjectName(QStringLiteral("btn_cancelar"));

        gridLayout->addWidget(btn_cancelar, 1, 0, 1, 1);

        btn_ok = new QPushButton(widget);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        gridLayout->addWidget(btn_ok, 1, 1, 1, 1);


        retranslateUi(Cpf);

        QMetaObject::connectSlotsByName(Cpf);
    } // setupUi

    void retranslateUi(QDialog *Cpf)
    {
        Cpf->setWindowTitle(QApplication::translate("Cpf", "Valida\303\247\303\243o de CPF", Q_NULLPTR));
        validador->setText(QString());
        cpf->setText(QApplication::translate("Cpf", "Insira o CPF:", Q_NULLPTR));
        campo_cpf->setInputMask(QApplication::translate("Cpf", "###.###.###-##", Q_NULLPTR));
        btn_cancelar->setText(QApplication::translate("Cpf", "Cancelar", Q_NULLPTR));
        btn_ok->setText(QApplication::translate("Cpf", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Cpf: public Ui_Cpf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPF_H
