/********************************************************************************
** Form generated from reading UI file 'cadastroaluno.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROALUNO_H
#define UI_CADASTROALUNO_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastroAluno
{
public:
    QLabel *labelLogo;
    QLabel *labelValidCpf;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelCpf;
    QLineEdit *campoCpf;
    QLabel *labelAno;
    QDateEdit *dateEdit;
    QLabel *labelMatricula;
    QLineEdit *campoMatricula;
    QPushButton *btnCadastrar;
    QLabel *labelInvalidCpf;
    QLabel *labelValidNome;
    QLabel *labelValidEndereco;
    QLabel *labelValidSetor;
    QLabel *labelValidFields;
    QLabel *labelValidEmail;
    QLabel *labelValidCidade;
    QLabel *labelValidCurso;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLineEdit *campoNome;
    QLineEdit *campoEndereco;
    QLineEdit *campoCelular;
    QLabel *labelNome;
    QLabel *labelEndereco;
    QLabel *labelEmail;
    QLabel *labelEstado;
    QLabel *labelCelular;
    QLabel *labelCidade;
    QLabel *labelSetor;
    QLineEdit *campoSetor;
    QComboBox *boxEstado;
    QComboBox *boxCidade;
    QLineEdit *campoEmail;
    QLabel *labelCurso;
    QComboBox *boxCurso;

    void setupUi(QWidget *cadastroAluno)
    {
        if (cadastroAluno->objectName().isEmpty())
            cadastroAluno->setObjectName(QString::fromUtf8("cadastroAluno"));
        cadastroAluno->resize(438, 466);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cadastroAluno->sizePolicy().hasHeightForWidth());
        cadastroAluno->setSizePolicy(sizePolicy);
        cadastroAluno->setMinimumSize(QSize(0, 466));
        cadastroAluno->setMaximumSize(QSize(438, 466));
        cadastroAluno->setSizeIncrement(QSize(1, 1));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/recursos/Imagens/Cadastrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        cadastroAluno->setWindowIcon(icon);
        cadastroAluno->setAutoFillBackground(false);
        labelLogo = new QLabel(cadastroAluno);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        labelLogo->setGeometry(QRect(300, 10, 81, 101));
        labelValidCpf = new QLabel(cadastroAluno);
        labelValidCpf->setObjectName(QString::fromUtf8("labelValidCpf"));
        labelValidCpf->setGeometry(QRect(240, 10, 31, 31));
        layoutWidget = new QWidget(cadastroAluno);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 10, 184, 112));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelCpf = new QLabel(layoutWidget);
        labelCpf->setObjectName(QString::fromUtf8("labelCpf"));

        gridLayout->addWidget(labelCpf, 0, 0, 1, 1);

        campoCpf = new QLineEdit(layoutWidget);
        campoCpf->setObjectName(QString::fromUtf8("campoCpf"));

        gridLayout->addWidget(campoCpf, 0, 1, 1, 2);

        labelAno = new QLabel(layoutWidget);
        labelAno->setObjectName(QString::fromUtf8("labelAno"));

        gridLayout->addWidget(labelAno, 2, 0, 1, 1);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMaximumDate(QDate(7999, 12, 31));
        dateEdit->setMinimumDate(QDate(2019, 1, 1));
        dateEdit->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit->setCalendarPopup(true);
        dateEdit->setCurrentSectionIndex(0);
        dateEdit->setDate(QDate(2019, 1, 1));

        gridLayout->addWidget(dateEdit, 2, 1, 1, 2);

        labelMatricula = new QLabel(layoutWidget);
        labelMatricula->setObjectName(QString::fromUtf8("labelMatricula"));

        gridLayout->addWidget(labelMatricula, 1, 0, 1, 1);

        campoMatricula = new QLineEdit(layoutWidget);
        campoMatricula->setObjectName(QString::fromUtf8("campoMatricula"));
        campoMatricula->setFocusPolicy(Qt::NoFocus);
        campoMatricula->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 246, 247);"));
        campoMatricula->setReadOnly(true);

        gridLayout->addWidget(campoMatricula, 1, 2, 1, 1);

        btnCadastrar = new QPushButton(cadastroAluno);
        btnCadastrar->setObjectName(QString::fromUtf8("btnCadastrar"));
        btnCadastrar->setGeometry(QRect(130, 410, 171, 29));
        labelInvalidCpf = new QLabel(cadastroAluno);
        labelInvalidCpf->setObjectName(QString::fromUtf8("labelInvalidCpf"));
        labelInvalidCpf->setGeometry(QRect(240, 50, 31, 31));
        labelValidNome = new QLabel(cadastroAluno);
        labelValidNome->setObjectName(QString::fromUtf8("labelValidNome"));
        labelValidNome->setGeometry(QRect(404, 140, 31, 31));
        labelValidEndereco = new QLabel(cadastroAluno);
        labelValidEndereco->setObjectName(QString::fromUtf8("labelValidEndereco"));
        labelValidEndereco->setGeometry(QRect(404, 180, 31, 31));
        labelValidSetor = new QLabel(cadastroAluno);
        labelValidSetor->setObjectName(QString::fromUtf8("labelValidSetor"));
        labelValidSetor->setGeometry(QRect(404, 220, 31, 31));
        labelValidFields = new QLabel(cadastroAluno);
        labelValidFields->setObjectName(QString::fromUtf8("labelValidFields"));
        labelValidFields->setGeometry(QRect(110, 380, 221, 20));
        labelValidEmail = new QLabel(cadastroAluno);
        labelValidEmail->setObjectName(QString::fromUtf8("labelValidEmail"));
        labelValidEmail->setGeometry(QRect(404, 295, 31, 31));
        labelValidCidade = new QLabel(cadastroAluno);
        labelValidCidade->setObjectName(QString::fromUtf8("labelValidCidade"));
        labelValidCidade->setGeometry(QRect(404, 258, 31, 31));
        labelValidCurso = new QLabel(cadastroAluno);
        labelValidCurso->setObjectName(QString::fromUtf8("labelValidCurso"));
        labelValidCurso->setGeometry(QRect(404, 330, 31, 31));
        layoutWidget1 = new QWidget(cadastroAluno);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 142, 381, 222));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        campoNome = new QLineEdit(layoutWidget1);
        campoNome->setObjectName(QString::fromUtf8("campoNome"));
        campoNome->setMaxLength(50);

        gridLayout_2->addWidget(campoNome, 0, 2, 1, 6);

        campoEndereco = new QLineEdit(layoutWidget1);
        campoEndereco->setObjectName(QString::fromUtf8("campoEndereco"));
        campoEndereco->setMaxLength(50);

        gridLayout_2->addWidget(campoEndereco, 1, 3, 1, 5);

        campoCelular = new QLineEdit(layoutWidget1);
        campoCelular->setObjectName(QString::fromUtf8("campoCelular"));
        campoCelular->setMaxLength(11);

        gridLayout_2->addWidget(campoCelular, 4, 2, 1, 3);

        labelNome = new QLabel(layoutWidget1);
        labelNome->setObjectName(QString::fromUtf8("labelNome"));

        gridLayout_2->addWidget(labelNome, 0, 0, 1, 2);

        labelEndereco = new QLabel(layoutWidget1);
        labelEndereco->setObjectName(QString::fromUtf8("labelEndereco"));

        gridLayout_2->addWidget(labelEndereco, 1, 0, 1, 3);

        labelEmail = new QLabel(layoutWidget1);
        labelEmail->setObjectName(QString::fromUtf8("labelEmail"));

        gridLayout_2->addWidget(labelEmail, 4, 5, 1, 1);

        labelEstado = new QLabel(layoutWidget1);
        labelEstado->setObjectName(QString::fromUtf8("labelEstado"));

        gridLayout_2->addWidget(labelEstado, 3, 0, 1, 1);

        labelCelular = new QLabel(layoutWidget1);
        labelCelular->setObjectName(QString::fromUtf8("labelCelular"));

        gridLayout_2->addWidget(labelCelular, 4, 0, 1, 2);

        labelCidade = new QLabel(layoutWidget1);
        labelCidade->setObjectName(QString::fromUtf8("labelCidade"));

        gridLayout_2->addWidget(labelCidade, 3, 4, 1, 1);

        labelSetor = new QLabel(layoutWidget1);
        labelSetor->setObjectName(QString::fromUtf8("labelSetor"));

        gridLayout_2->addWidget(labelSetor, 2, 0, 1, 2);

        campoSetor = new QLineEdit(layoutWidget1);
        campoSetor->setObjectName(QString::fromUtf8("campoSetor"));
        campoSetor->setMaxLength(50);

        gridLayout_2->addWidget(campoSetor, 2, 2, 1, 6);

        boxEstado = new QComboBox(layoutWidget1);
        boxEstado->addItem(QString());
        boxEstado->setObjectName(QString::fromUtf8("boxEstado"));

        gridLayout_2->addWidget(boxEstado, 3, 1, 1, 3);

        boxCidade = new QComboBox(layoutWidget1);
        boxCidade->addItem(QString());
        boxCidade->setObjectName(QString::fromUtf8("boxCidade"));

        gridLayout_2->addWidget(boxCidade, 3, 5, 1, 3);

        campoEmail = new QLineEdit(layoutWidget1);
        campoEmail->setObjectName(QString::fromUtf8("campoEmail"));

        gridLayout_2->addWidget(campoEmail, 4, 6, 1, 2);

        labelCurso = new QLabel(layoutWidget1);
        labelCurso->setObjectName(QString::fromUtf8("labelCurso"));

        gridLayout_2->addWidget(labelCurso, 5, 0, 1, 1);

        boxCurso = new QComboBox(layoutWidget1);
        boxCurso->addItem(QString());
        boxCurso->setObjectName(QString::fromUtf8("boxCurso"));

        gridLayout_2->addWidget(boxCurso, 5, 1, 1, 7);

        gridLayout_2->setColumnStretch(3, 1);
        gridLayout_2->setColumnStretch(6, 10);
        gridLayout_2->setColumnStretch(7, 1);
        QWidget::setTabOrder(campoCpf, dateEdit);
        QWidget::setTabOrder(dateEdit, campoNome);
        QWidget::setTabOrder(campoNome, campoEndereco);
        QWidget::setTabOrder(campoEndereco, campoSetor);
        QWidget::setTabOrder(campoSetor, boxEstado);
        QWidget::setTabOrder(boxEstado, boxCidade);
        QWidget::setTabOrder(boxCidade, campoCelular);
        QWidget::setTabOrder(campoCelular, campoEmail);
        QWidget::setTabOrder(campoEmail, boxCurso);
        QWidget::setTabOrder(boxCurso, btnCadastrar);

        retranslateUi(cadastroAluno);

        boxEstado->setCurrentIndex(0);
        boxCidade->setCurrentIndex(0);
        boxCurso->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(cadastroAluno);
    } // setupUi

    void retranslateUi(QWidget *cadastroAluno)
    {
        cadastroAluno->setWindowTitle(QApplication::translate("cadastroAluno", "Cadastro de aluno", nullptr));
        labelLogo->setText(QApplication::translate("cadastroAluno", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/recursos/Imagens/Aluno.png\" heigth=\"90\" width=\"90\" /></p></body></html>", nullptr));
        labelValidCpf->setText(QString());
        labelCpf->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">CPF</span></p></body></html>", nullptr));
        campoCpf->setPlaceholderText(QString());
        labelAno->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Ano</span></p></body></html>", nullptr));
        dateEdit->setDisplayFormat(QApplication::translate("cadastroAluno", "yyyy", nullptr));
        labelMatricula->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Matricula</span></p></body></html>", nullptr));
        btnCadastrar->setText(QApplication::translate("cadastroAluno", "Cadastrar", nullptr));
        labelInvalidCpf->setText(QString());
        labelValidNome->setText(QString());
        labelValidEndereco->setText(QString());
        labelValidSetor->setText(QString());
        labelValidFields->setText(QString());
        labelValidEmail->setText(QString());
        labelValidCidade->setText(QString());
        labelValidCurso->setText(QString());
        campoNome->setPlaceholderText(QString());
        campoEndereco->setText(QString());
        campoCelular->setText(QString());
        labelNome->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Nome*</span></p></body></html>", nullptr));
        labelEndereco->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Endere\303\247o*</span></p></body></html>", nullptr));
        labelEmail->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">E-mail*</span></p></body></html>", nullptr));
        labelEstado->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">UF*</span></p></body></html>", nullptr));
        labelCelular->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Celular</span></p></body></html>", nullptr));
        labelCidade->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Cidade*</span></p></body></html>", nullptr));
        labelSetor->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Setor*</span></p></body></html>", nullptr));
        boxEstado->setItemText(0, QApplication::translate("cadastroAluno", "select", nullptr));

        boxEstado->setCurrentText(QApplication::translate("cadastroAluno", "select", nullptr));
        boxCidade->setItemText(0, QApplication::translate("cadastroAluno", "Select", nullptr));

        boxCidade->setCurrentText(QApplication::translate("cadastroAluno", "Select", nullptr));
        campoEmail->setText(QString());
        labelCurso->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Curso*</span></p></body></html>", nullptr));
        boxCurso->setItemText(0, QApplication::translate("cadastroAluno", "Select", nullptr));

    } // retranslateUi

};

namespace Ui {
    class cadastroAluno: public Ui_cadastroAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROALUNO_H
