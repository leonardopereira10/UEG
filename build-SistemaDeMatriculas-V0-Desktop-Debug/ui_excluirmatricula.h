/********************************************************************************
** Form generated from reading UI file 'excluirmatricula.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCLUIRMATRICULA_H
#define UI_EXCLUIRMATRICULA_H

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

class Ui_ExcluirMatricula
{
public:
    QLabel *RetornoDeErro;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *txbAno;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *txbSemestre;
    QLabel *label;
    QPushButton *pushButton_4;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QLineEdit *txbCodAluno;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *txbCodDisciplina;

    void setupUi(QWidget *ExcluirMatricula)
    {
        if (ExcluirMatricula->objectName().isEmpty())
            ExcluirMatricula->setObjectName(QStringLiteral("ExcluirMatricula"));
        ExcluirMatricula->resize(357, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/recursos/Imagens/remover.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExcluirMatricula->setWindowIcon(icon);
        RetornoDeErro = new QLabel(ExcluirMatricula);
        RetornoDeErro->setObjectName(QStringLiteral("RetornoDeErro"));
        RetornoDeErro->setGeometry(QRect(80, 220, 211, 21));
        RetornoDeErro->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        layoutWidget = new QWidget(ExcluirMatricula);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 110, 128, 109));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_3->addWidget(label_9);

        txbAno = new QLineEdit(layoutWidget);
        txbAno->setObjectName(QStringLiteral("txbAno"));

        horizontalLayout_3->addWidget(txbAno);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_5->addWidget(label_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        txbSemestre = new QLineEdit(layoutWidget);
        txbSemestre->setObjectName(QStringLiteral("txbSemestre"));
        txbSemestre->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_4->addWidget(txbSemestre);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_3->addWidget(pushButton_4);

        layoutWidget1 = new QWidget(ExcluirMatricula);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(55, 30, 243, 70));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout->addWidget(label_11);

        txbCodAluno = new QLineEdit(layoutWidget1);
        txbCodAluno->setObjectName(QStringLiteral("txbCodAluno"));

        horizontalLayout->addWidget(txbCodAluno);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);

        txbCodDisciplina = new QLineEdit(layoutWidget1);
        txbCodDisciplina->setObjectName(QStringLiteral("txbCodDisciplina"));

        horizontalLayout_2->addWidget(txbCodDisciplina);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ExcluirMatricula);

        QMetaObject::connectSlotsByName(ExcluirMatricula);
    } // setupUi

    void retranslateUi(QWidget *ExcluirMatricula)
    {
        ExcluirMatricula->setWindowTitle(QApplication::translate("ExcluirMatricula", "Form", Q_NULLPTR));
        RetornoDeErro->setText(QString());
        label_9->setText(QApplication::translate("ExcluirMatricula", "Ano:", Q_NULLPTR));
        txbAno->setInputMask(QApplication::translate("ExcluirMatricula", "0000", Q_NULLPTR));
        label_8->setText(QApplication::translate("ExcluirMatricula", "Semestre:", Q_NULLPTR));
        txbSemestre->setInputMask(QApplication::translate("ExcluirMatricula", "0", Q_NULLPTR));
        label->setText(QApplication::translate("ExcluirMatricula", "\302\272", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("ExcluirMatricula", "Excluir", Q_NULLPTR));
        label_11->setText(QApplication::translate("ExcluirMatricula", "Matricula do aluno: ", Q_NULLPTR));
        txbCodAluno->setInputMask(QApplication::translate("ExcluirMatricula", "0000000000000000", Q_NULLPTR));
        label_10->setText(QApplication::translate("ExcluirMatricula", "C\303\263digo da disciplina: ", Q_NULLPTR));
        txbCodDisciplina->setInputMask(QApplication::translate("ExcluirMatricula", "0000000000000000", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExcluirMatricula: public Ui_ExcluirMatricula {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCLUIRMATRICULA_H
