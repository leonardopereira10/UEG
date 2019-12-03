/********************************************************************************
** Form generated from reading UI file 'criamatricula.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRIAMATRICULA_H
#define UI_CRIAMATRICULA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CriaMatricula
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *ValidaDisciplina;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *validaAluno;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CriaMatricula)
    {
        if (CriaMatricula->objectName().isEmpty())
            CriaMatricula->setObjectName(QStringLiteral("CriaMatricula"));
        CriaMatricula->resize(312, 297);
        QIcon icon;
        icon.addFile(QStringLiteral(":/recursos/Imagens/Cadastrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        CriaMatricula->setWindowIcon(icon);
        layoutWidget = new QWidget(CriaMatricula);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 40, 231, 190));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        ValidaDisciplina = new QLabel(layoutWidget);
        ValidaDisciplina->setObjectName(QStringLiteral("ValidaDisciplina"));
        ValidaDisciplina->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        verticalLayout->addWidget(ValidaDisciplina);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);


        verticalLayout_2->addLayout(horizontalLayout);

        validaAluno = new QLabel(layoutWidget);
        validaAluno->setObjectName(QStringLiteral("validaAluno"));
        validaAluno->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        verticalLayout_2->addWidget(validaAluno);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_3->addWidget(lineEdit_4);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_3->addWidget(pushButton_2);

        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, pushButton_2);

        retranslateUi(CriaMatricula);

        QMetaObject::connectSlotsByName(CriaMatricula);
    } // setupUi

    void retranslateUi(QWidget *CriaMatricula)
    {
        CriaMatricula->setWindowTitle(QApplication::translate("CriaMatricula", "Vincular Aluno \303\240 Disciplina", Q_NULLPTR));
        label->setText(QApplication::translate("CriaMatricula", "C\303\263digo da disciplina: ", Q_NULLPTR));
        lineEdit->setInputMask(QApplication::translate("CriaMatricula", "0000000000000000", Q_NULLPTR));
        lineEdit->setText(QString());
        ValidaDisciplina->setText(QString());
        label_3->setText(QApplication::translate("CriaMatricula", "Matricula do aluno: ", Q_NULLPTR));
        lineEdit_2->setInputMask(QApplication::translate("CriaMatricula", "0000000000000000", Q_NULLPTR));
        validaAluno->setText(QString());
        label_5->setText(QApplication::translate("CriaMatricula", "Ano:", Q_NULLPTR));
        lineEdit_3->setInputMask(QApplication::translate("CriaMatricula", "0000", Q_NULLPTR));
        label_6->setText(QApplication::translate("CriaMatricula", "Semestre:", Q_NULLPTR));
        lineEdit_4->setInputMask(QApplication::translate("CriaMatricula", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("CriaMatricula", "\302\272", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CriaMatricula", "Matricular", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CriaMatricula: public Ui_CriaMatricula {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRIAMATRICULA_H
