/********************************************************************************
** Form generated from reading UI file 'cadastroaluno.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROALUNO_H
#define UI_CADASTROALUNO_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastroAluno
{
public:
    QLabel *labelLogo;
    QLabel *labelValidCpd;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelCpf;
    QLineEdit *campoCpf;
    QLabel *labelMatricula;
    QLineEdit *campoMatricula;
    QLabel *labelAno;
    QDateEdit *dateEdit;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *labelNome;
    QLineEdit *campoNome;
    QLabel *labelEndereco;
    QLineEdit *campoEndereco;
    QLabel *labelSetor;
    QLineEdit *campoSetor;
    QLabel *labelCidade;
    QComboBox *boxCidade;
    QLabel *labelEstado;
    QComboBox *boxEstado;
    QPushButton *btnCadastrar;

    void setupUi(QWidget *cadastroAluno)
    {
        if (cadastroAluno->objectName().isEmpty())
            cadastroAluno->setObjectName(QStringLiteral("cadastroAluno"));
        cadastroAluno->resize(433, 421);
        labelLogo = new QLabel(cadastroAluno);
        labelLogo->setObjectName(QStringLiteral("labelLogo"));
        labelLogo->setGeometry(QRect(300, 10, 81, 101));
        labelValidCpd = new QLabel(cadastroAluno);
        labelValidCpd->setObjectName(QStringLiteral("labelValidCpd"));
        labelValidCpd->setGeometry(QRect(240, 10, 31, 31));
        layoutWidget = new QWidget(cadastroAluno);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 10, 184, 111));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelCpf = new QLabel(layoutWidget);
        labelCpf->setObjectName(QStringLiteral("labelCpf"));

        gridLayout->addWidget(labelCpf, 0, 0, 1, 1);

        campoCpf = new QLineEdit(layoutWidget);
        campoCpf->setObjectName(QStringLiteral("campoCpf"));

        gridLayout->addWidget(campoCpf, 0, 1, 1, 2);

        labelMatricula = new QLabel(layoutWidget);
        labelMatricula->setObjectName(QStringLiteral("labelMatricula"));

        gridLayout->addWidget(labelMatricula, 1, 0, 1, 2);

        campoMatricula = new QLineEdit(layoutWidget);
        campoMatricula->setObjectName(QStringLiteral("campoMatricula"));
        campoMatricula->setFocusPolicy(Qt::NoFocus);
        campoMatricula->setReadOnly(true);
        campoMatricula->setClearButtonEnabled(false);

        gridLayout->addWidget(campoMatricula, 1, 2, 1, 1);

        labelAno = new QLabel(layoutWidget);
        labelAno->setObjectName(QStringLiteral("labelAno"));

        gridLayout->addWidget(labelAno, 2, 0, 1, 1);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setMaximumDate(QDate(7999, 12, 31));
        dateEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit, 2, 1, 1, 2);

        layoutWidget1 = new QWidget(cadastroAluno);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 140, 381, 152));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        labelNome = new QLabel(layoutWidget1);
        labelNome->setObjectName(QStringLiteral("labelNome"));

        gridLayout_2->addWidget(labelNome, 0, 0, 1, 1);

        campoNome = new QLineEdit(layoutWidget1);
        campoNome->setObjectName(QStringLiteral("campoNome"));

        gridLayout_2->addWidget(campoNome, 0, 1, 1, 4);

        labelEndereco = new QLabel(layoutWidget1);
        labelEndereco->setObjectName(QStringLiteral("labelEndereco"));

        gridLayout_2->addWidget(labelEndereco, 1, 0, 1, 2);

        campoEndereco = new QLineEdit(layoutWidget1);
        campoEndereco->setObjectName(QStringLiteral("campoEndereco"));

        gridLayout_2->addWidget(campoEndereco, 1, 2, 1, 3);

        labelSetor = new QLabel(layoutWidget1);
        labelSetor->setObjectName(QStringLiteral("labelSetor"));

        gridLayout_2->addWidget(labelSetor, 2, 0, 1, 1);

        campoSetor = new QLineEdit(layoutWidget1);
        campoSetor->setObjectName(QStringLiteral("campoSetor"));

        gridLayout_2->addWidget(campoSetor, 2, 1, 1, 4);

        labelCidade = new QLabel(layoutWidget1);
        labelCidade->setObjectName(QStringLiteral("labelCidade"));

        gridLayout_2->addWidget(labelCidade, 3, 0, 1, 1);

        boxCidade = new QComboBox(layoutWidget1);
        boxCidade->setObjectName(QStringLiteral("boxCidade"));

        gridLayout_2->addWidget(boxCidade, 3, 1, 1, 2);

        labelEstado = new QLabel(layoutWidget1);
        labelEstado->setObjectName(QStringLiteral("labelEstado"));

        gridLayout_2->addWidget(labelEstado, 3, 3, 1, 1);

        boxEstado = new QComboBox(layoutWidget1);
        boxEstado->setObjectName(QStringLiteral("boxEstado"));

        gridLayout_2->addWidget(boxEstado, 3, 4, 1, 1);

        gridLayout_2->setColumnStretch(1, 10);
        gridLayout_2->setColumnStretch(2, 150);
        btnCadastrar = new QPushButton(cadastroAluno);
        btnCadastrar->setObjectName(QStringLiteral("btnCadastrar"));
        btnCadastrar->setGeometry(QRect(121, 331, 171, 29));
        QWidget::setTabOrder(campoCpf, dateEdit);
        QWidget::setTabOrder(dateEdit, campoNome);
        QWidget::setTabOrder(campoNome, campoEndereco);
        QWidget::setTabOrder(campoEndereco, campoSetor);
        QWidget::setTabOrder(campoSetor, boxCidade);
        QWidget::setTabOrder(boxCidade, boxEstado);

        retranslateUi(cadastroAluno);

        QMetaObject::connectSlotsByName(cadastroAluno);
    } // setupUi

    void retranslateUi(QWidget *cadastroAluno)
    {
        cadastroAluno->setWindowTitle(QApplication::translate("cadastroAluno", "Cadastro de aluno", Q_NULLPTR));
        labelLogo->setText(QApplication::translate("cadastroAluno", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/imagens/Aluno.png\" height=\"85\" width=\"85\" /></p></body></html>", Q_NULLPTR));
        labelValidCpd->setText(QString());
        labelCpf->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">CPF</span></p></body></html>", Q_NULLPTR));
        labelMatricula->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Matricula</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        campoMatricula->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        campoMatricula->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        campoMatricula->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        campoMatricula->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        campoMatricula->setText(QString());
        campoMatricula->setPlaceholderText(QString());
        labelAno->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Ano</span></p></body></html>", Q_NULLPTR));
        dateEdit->setDisplayFormat(QApplication::translate("cadastroAluno", "dd/MM/yyyy", Q_NULLPTR));
        labelNome->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Nome</span></p></body></html>", Q_NULLPTR));
        labelEndereco->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Endere\303\247o</span></p></body></html>", Q_NULLPTR));
        campoEndereco->setText(QString());
        labelSetor->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Setor</span></p></body></html>", Q_NULLPTR));
        labelCidade->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Cidade</span></p></body></html>", Q_NULLPTR));
        labelEstado->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">UF</span></p></body></html>", Q_NULLPTR));
        btnCadastrar->setText(QApplication::translate("cadastroAluno", "Cadastrar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class cadastroAluno: public Ui_cadastroAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROALUNO_H
