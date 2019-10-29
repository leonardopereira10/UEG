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
    QLabel *labelValidCpf;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelCpf;
    QLineEdit *campoCpf;
    QLabel *labelMatricula;
    QLineEdit *campoMatricula;
    QLabel *labelAno;
    QDateEdit *dateEdit;
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
            cadastroAluno->setObjectName(QStringLiteral("cadastroAluno"));
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
        icon.addFile(QStringLiteral(":/imagens/Imagens/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        cadastroAluno->setWindowIcon(icon);
        cadastroAluno->setAutoFillBackground(false);
        labelLogo = new QLabel(cadastroAluno);
        labelLogo->setObjectName(QStringLiteral("labelLogo"));
        labelLogo->setGeometry(QRect(300, 10, 81, 101));
        labelValidCpf = new QLabel(cadastroAluno);
        labelValidCpf->setObjectName(QStringLiteral("labelValidCpf"));
        labelValidCpf->setGeometry(QRect(240, 10, 31, 31));
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
        campoMatricula->setAutoFillBackground(true);
        campoMatricula->setReadOnly(true);
        campoMatricula->setClearButtonEnabled(false);

        gridLayout->addWidget(campoMatricula, 1, 2, 1, 1);

        labelAno = new QLabel(layoutWidget);
        labelAno->setObjectName(QStringLiteral("labelAno"));

        gridLayout->addWidget(labelAno, 2, 0, 1, 1);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setMaximumDate(QDate(7999, 12, 31));
        dateEdit->setMinimumDate(QDate(2019, 1, 1));
        dateEdit->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit->setCalendarPopup(true);
        dateEdit->setCurrentSectionIndex(0);
        dateEdit->setDate(QDate(2019, 1, 1));

        gridLayout->addWidget(dateEdit, 2, 1, 1, 2);

        btnCadastrar = new QPushButton(cadastroAluno);
        btnCadastrar->setObjectName(QStringLiteral("btnCadastrar"));
        btnCadastrar->setGeometry(QRect(130, 410, 171, 29));
        labelInvalidCpf = new QLabel(cadastroAluno);
        labelInvalidCpf->setObjectName(QStringLiteral("labelInvalidCpf"));
        labelInvalidCpf->setGeometry(QRect(240, 50, 31, 31));
        labelValidNome = new QLabel(cadastroAluno);
        labelValidNome->setObjectName(QStringLiteral("labelValidNome"));
        labelValidNome->setGeometry(QRect(404, 140, 31, 31));
        labelValidEndereco = new QLabel(cadastroAluno);
        labelValidEndereco->setObjectName(QStringLiteral("labelValidEndereco"));
        labelValidEndereco->setGeometry(QRect(404, 180, 31, 31));
        labelValidSetor = new QLabel(cadastroAluno);
        labelValidSetor->setObjectName(QStringLiteral("labelValidSetor"));
        labelValidSetor->setGeometry(QRect(404, 220, 31, 31));
        labelValidFields = new QLabel(cadastroAluno);
        labelValidFields->setObjectName(QStringLiteral("labelValidFields"));
        labelValidFields->setGeometry(QRect(110, 380, 221, 20));
        labelValidEmail = new QLabel(cadastroAluno);
        labelValidEmail->setObjectName(QStringLiteral("labelValidEmail"));
        labelValidEmail->setGeometry(QRect(404, 295, 31, 31));
        labelValidCidade = new QLabel(cadastroAluno);
        labelValidCidade->setObjectName(QStringLiteral("labelValidCidade"));
        labelValidCidade->setGeometry(QRect(404, 258, 31, 31));
        labelValidCurso = new QLabel(cadastroAluno);
        labelValidCurso->setObjectName(QStringLiteral("labelValidCurso"));
        labelValidCurso->setGeometry(QRect(404, 330, 31, 31));
        layoutWidget1 = new QWidget(cadastroAluno);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 142, 381, 222));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        campoNome = new QLineEdit(layoutWidget1);
        campoNome->setObjectName(QStringLiteral("campoNome"));
        campoNome->setMaxLength(50);

        gridLayout_2->addWidget(campoNome, 0, 2, 1, 6);

        campoEndereco = new QLineEdit(layoutWidget1);
        campoEndereco->setObjectName(QStringLiteral("campoEndereco"));
        campoEndereco->setMaxLength(50);

        gridLayout_2->addWidget(campoEndereco, 1, 3, 1, 5);

        campoCelular = new QLineEdit(layoutWidget1);
        campoCelular->setObjectName(QStringLiteral("campoCelular"));
        campoCelular->setMaxLength(11);

        gridLayout_2->addWidget(campoCelular, 4, 2, 1, 3);

        labelNome = new QLabel(layoutWidget1);
        labelNome->setObjectName(QStringLiteral("labelNome"));

        gridLayout_2->addWidget(labelNome, 0, 0, 1, 2);

        labelEndereco = new QLabel(layoutWidget1);
        labelEndereco->setObjectName(QStringLiteral("labelEndereco"));

        gridLayout_2->addWidget(labelEndereco, 1, 0, 1, 3);

        labelEmail = new QLabel(layoutWidget1);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));

        gridLayout_2->addWidget(labelEmail, 4, 5, 1, 1);

        labelEstado = new QLabel(layoutWidget1);
        labelEstado->setObjectName(QStringLiteral("labelEstado"));

        gridLayout_2->addWidget(labelEstado, 3, 0, 1, 1);

        labelCelular = new QLabel(layoutWidget1);
        labelCelular->setObjectName(QStringLiteral("labelCelular"));

        gridLayout_2->addWidget(labelCelular, 4, 0, 1, 2);

        labelCidade = new QLabel(layoutWidget1);
        labelCidade->setObjectName(QStringLiteral("labelCidade"));

        gridLayout_2->addWidget(labelCidade, 3, 4, 1, 1);

        labelSetor = new QLabel(layoutWidget1);
        labelSetor->setObjectName(QStringLiteral("labelSetor"));

        gridLayout_2->addWidget(labelSetor, 2, 0, 1, 2);

        campoSetor = new QLineEdit(layoutWidget1);
        campoSetor->setObjectName(QStringLiteral("campoSetor"));
        campoSetor->setMaxLength(50);

        gridLayout_2->addWidget(campoSetor, 2, 2, 1, 6);

        boxEstado = new QComboBox(layoutWidget1);
        boxEstado->setObjectName(QStringLiteral("boxEstado"));

        gridLayout_2->addWidget(boxEstado, 3, 1, 1, 3);

        boxCidade = new QComboBox(layoutWidget1);
        boxCidade->setObjectName(QStringLiteral("boxCidade"));

        gridLayout_2->addWidget(boxCidade, 3, 5, 1, 3);

        campoEmail = new QLineEdit(layoutWidget1);
        campoEmail->setObjectName(QStringLiteral("campoEmail"));

        gridLayout_2->addWidget(campoEmail, 4, 6, 1, 2);

        labelCurso = new QLabel(layoutWidget1);
        labelCurso->setObjectName(QStringLiteral("labelCurso"));

        gridLayout_2->addWidget(labelCurso, 5, 0, 1, 1);

        boxCurso = new QComboBox(layoutWidget1);
        boxCurso->setObjectName(QStringLiteral("boxCurso"));

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
        cadastroAluno->setWindowTitle(QApplication::translate("cadastroAluno", "Cadastro de aluno", Q_NULLPTR));
        labelLogo->setText(QApplication::translate("cadastroAluno", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/recursos/Imagens/Aluno.png\" heigth=\"90\" width=\"90\" /></p></body></html>", Q_NULLPTR));
        labelValidCpf->setText(QString());
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
        dateEdit->setDisplayFormat(QApplication::translate("cadastroAluno", "yyyy", Q_NULLPTR));
        btnCadastrar->setText(QApplication::translate("cadastroAluno", "Cadastrar", Q_NULLPTR));
        labelInvalidCpf->setText(QString());
        labelValidNome->setText(QString());
        labelValidEndereco->setText(QString());
        labelValidSetor->setText(QString());
        labelValidFields->setText(QString());
        labelValidEmail->setText(QString());
        labelValidCidade->setText(QString());
        labelValidCurso->setText(QString());
        campoEndereco->setText(QString());
        campoCelular->setText(QString());
        labelNome->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Nome*</span></p></body></html>", Q_NULLPTR));
        labelEndereco->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Endere\303\247o*</span></p></body></html>", Q_NULLPTR));
        labelEmail->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">E-mail*</span></p></body></html>", Q_NULLPTR));
        labelEstado->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">UF*</span></p></body></html>", Q_NULLPTR));
        labelCelular->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Celular</span></p></body></html>", Q_NULLPTR));
        labelCidade->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Cidade*</span></p></body></html>", Q_NULLPTR));
        labelSetor->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Setor*</span></p></body></html>", Q_NULLPTR));
        boxEstado->clear();
        boxEstado->insertItems(0, QStringList()
         << QApplication::translate("cadastroAluno", "select", Q_NULLPTR)
        );
        boxEstado->setCurrentText(QApplication::translate("cadastroAluno", "select", Q_NULLPTR));
        boxCidade->clear();
        boxCidade->insertItems(0, QStringList()
         << QApplication::translate("cadastroAluno", "Select", Q_NULLPTR)
        );
        boxCidade->setCurrentText(QApplication::translate("cadastroAluno", "Select", Q_NULLPTR));
        campoEmail->setText(QString());
        labelCurso->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Curso*</span></p></body></html>", Q_NULLPTR));
        boxCurso->clear();
        boxCurso->insertItems(0, QStringList()
         << QApplication::translate("cadastroAluno", "Select", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class cadastroAluno: public Ui_cadastroAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROALUNO_H
