/********************************************************************************
** Form generated from reading UI file 'cad_professor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAD_PROFESSOR_H
#define UI_CAD_PROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cad_professor
{
public:
    QLabel *cpf;
    QLabel *nome;
    QLabel *endereco;
    QLabel *setor;
    QLabel *UF;
    QLabel *cidade;
    QLabel *email;
    QLabel *telefone;
    QLabel *graducao;
    QLabel *titulacao;
    QLabel *data_de_nascimento;
    QLineEdit *campo_cpf;
    QLineEdit *campo_nome;
    QDateEdit *campo_data_de_nascimento;
    QLineEdit *campo_endereco;
    QLineEdit *campo_setor;
    QLineEdit *campo_email;
    QLineEdit *campo_telefone;
    QLineEdit *camp_graduacao;
    QLabel *logo_professor_cad;
    QLabel *label;
    QPushButton *btn_cadastrar;
    QPushButton *btn_cancelar;
    QComboBox *campo_estado;
    QComboBox *campo_cidade;
    QComboBox *campo_titulacao;

    void setupUi(QDialog *cad_professor)
    {
        if (cad_professor->objectName().isEmpty())
            cad_professor->setObjectName(QString::fromUtf8("cad_professor"));
        cad_professor->resize(563, 424);
        cpf = new QLabel(cad_professor);
        cpf->setObjectName(QString::fromUtf8("cpf"));
        cpf->setGeometry(QRect(375, 24, 29, 16));
        nome = new QLabel(cad_professor);
        nome->setObjectName(QString::fromUtf8("nome"));
        nome->setGeometry(QRect(21, 96, 40, 16));
        endereco = new QLabel(cad_professor);
        endereco->setObjectName(QString::fromUtf8("endereco"));
        endereco->setGeometry(QRect(21, 158, 61, 16));
        setor = new QLabel(cad_professor);
        setor->setObjectName(QString::fromUtf8("setor"));
        setor->setGeometry(QRect(21, 189, 37, 16));
        UF = new QLabel(cad_professor);
        UF->setObjectName(QString::fromUtf8("UF"));
        UF->setGeometry(QRect(21, 222, 21, 16));
        cidade = new QLabel(cad_professor);
        cidade->setObjectName(QString::fromUtf8("cidade"));
        cidade->setGeometry(QRect(180, 222, 47, 16));
        email = new QLabel(cad_professor);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(21, 256, 43, 16));
        telefone = new QLabel(cad_professor);
        telefone->setObjectName(QString::fromUtf8("telefone"));
        telefone->setGeometry(QRect(21, 288, 56, 16));
        graducao = new QLabel(cad_professor);
        graducao->setObjectName(QString::fromUtf8("graducao"));
        graducao->setGeometry(QRect(21, 321, 70, 16));
        titulacao = new QLabel(cad_professor);
        titulacao->setObjectName(QString::fromUtf8("titulacao"));
        titulacao->setGeometry(QRect(324, 324, 60, 16));
        data_de_nascimento = new QLabel(cad_professor);
        data_de_nascimento->setObjectName(QString::fromUtf8("data_de_nascimento"));
        data_de_nascimento->setGeometry(QRect(21, 127, 125, 16));
        campo_cpf = new QLineEdit(cad_professor);
        campo_cpf->setObjectName(QString::fromUtf8("campo_cpf"));
        campo_cpf->setGeometry(QRect(410, 24, 125, 21));
        campo_cpf->setCursor(QCursor(Qt::ForbiddenCursor));
        campo_nome = new QLineEdit(cad_professor);
        campo_nome->setObjectName(QString::fromUtf8("campo_nome"));
        campo_nome->setGeometry(QRect(70, 96, 471, 21));
        campo_data_de_nascimento = new QDateEdit(cad_professor);
        campo_data_de_nascimento->setObjectName(QString::fromUtf8("campo_data_de_nascimento"));
        campo_data_de_nascimento->setGeometry(QRect(150, 127, 89, 21));
        campo_endereco = new QLineEdit(cad_professor);
        campo_endereco->setObjectName(QString::fromUtf8("campo_endereco"));
        campo_endereco->setGeometry(QRect(88, 158, 451, 21));
        campo_setor = new QLineEdit(cad_professor);
        campo_setor->setObjectName(QString::fromUtf8("campo_setor"));
        campo_setor->setGeometry(QRect(63, 189, 241, 21));
        campo_email = new QLineEdit(cad_professor);
        campo_email->setObjectName(QString::fromUtf8("campo_email"));
        campo_email->setGeometry(QRect(72, 256, 291, 21));
        campo_telefone = new QLineEdit(cad_professor);
        campo_telefone->setObjectName(QString::fromUtf8("campo_telefone"));
        campo_telefone->setGeometry(QRect(83, 286, 125, 21));
        camp_graduacao = new QLineEdit(cad_professor);
        camp_graduacao->setObjectName(QString::fromUtf8("camp_graduacao"));
        camp_graduacao->setGeometry(QRect(95, 320, 181, 21));
        logo_professor_cad = new QLabel(cad_professor);
        logo_professor_cad->setObjectName(QString::fromUtf8("logo_professor_cad"));
        logo_professor_cad->setGeometry(QRect(20, 10, 61, 61));
        logo_professor_cad->setPixmap(QPixmap(QString::fromUtf8(":/imagens/Professores.png")));
        logo_professor_cad->setScaledContents(true);
        label = new QLabel(cad_professor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(94, 30, 195, 14));
        QFont font;
        font.setFamily(QString::fromUtf8("Helvetica"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        btn_cadastrar = new QPushButton(cad_professor);
        btn_cadastrar->setObjectName(QString::fromUtf8("btn_cadastrar"));
        btn_cadastrar->setGeometry(QRect(440, 380, 102, 32));
        btn_cadastrar->setLayoutDirection(Qt::LeftToRight);
        btn_cadastrar->setStyleSheet(QString::fromUtf8("backgroundColourButton->setStyleSheet(\"background-color: blue\");\n"
""));
        btn_cadastrar->setAutoExclusive(false);
        btn_cancelar = new QPushButton(cad_professor);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(330, 380, 96, 32));
        campo_estado = new QComboBox(cad_professor);
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->addItem(QString());
        campo_estado->setObjectName(QString::fromUtf8("campo_estado"));
        campo_estado->setGeometry(QRect(41, 215, 91, 32));
        campo_cidade = new QComboBox(cad_professor);
        campo_cidade->setObjectName(QString::fromUtf8("campo_cidade"));
        campo_cidade->setGeometry(QRect(227, 216, 201, 32));
        campo_titulacao = new QComboBox(cad_professor);
        campo_titulacao->addItem(QString());
        campo_titulacao->addItem(QString());
        campo_titulacao->addItem(QString());
        campo_titulacao->addItem(QString());
        campo_titulacao->addItem(QString());
        campo_titulacao->setObjectName(QString::fromUtf8("campo_titulacao"));
        campo_titulacao->setGeometry(QRect(390, 317, 151, 32));

        retranslateUi(cad_professor);

        QMetaObject::connectSlotsByName(cad_professor);
    } // setupUi

    void retranslateUi(QDialog *cad_professor)
    {
        cad_professor->setWindowTitle(QApplication::translate("cad_professor", "Cadastro", nullptr));
        cpf->setText(QApplication::translate("cad_professor", "CPF:", nullptr));
        nome->setText(QApplication::translate("cad_professor", "Nome:", nullptr));
        endereco->setText(QApplication::translate("cad_professor", "Endere\303\247o:", nullptr));
        setor->setText(QApplication::translate("cad_professor", "Setor:", nullptr));
        UF->setText(QApplication::translate("cad_professor", "UF:", nullptr));
        cidade->setText(QApplication::translate("cad_professor", "Cidade:", nullptr));
        email->setText(QApplication::translate("cad_professor", "E-mail:", nullptr));
        telefone->setText(QApplication::translate("cad_professor", "Telefone:", nullptr));
        graducao->setText(QApplication::translate("cad_professor", "Gradua\303\247\303\243o:", nullptr));
        titulacao->setText(QApplication::translate("cad_professor", "T\303\255tula\303\247\303\243o:", nullptr));
        data_de_nascimento->setText(QApplication::translate("cad_professor", "Data de nascimento:", nullptr));
        logo_professor_cad->setText(QString());
        label->setText(QApplication::translate("cad_professor", "CADASTRO DE PROFESSOR", nullptr));
        btn_cadastrar->setText(QApplication::translate("cad_professor", "Cadastrar", nullptr));
        btn_cancelar->setText(QApplication::translate("cad_professor", "Cancelar", nullptr));
        campo_estado->setItemText(0, QApplication::translate("cad_professor", "AC", nullptr));
        campo_estado->setItemText(1, QApplication::translate("cad_professor", "AL", nullptr));
        campo_estado->setItemText(2, QApplication::translate("cad_professor", "AP", nullptr));
        campo_estado->setItemText(3, QApplication::translate("cad_professor", "AM", nullptr));
        campo_estado->setItemText(4, QApplication::translate("cad_professor", "BA", nullptr));
        campo_estado->setItemText(5, QApplication::translate("cad_professor", "CE", nullptr));
        campo_estado->setItemText(6, QApplication::translate("cad_professor", "DF", nullptr));
        campo_estado->setItemText(7, QApplication::translate("cad_professor", "ES", nullptr));
        campo_estado->setItemText(8, QApplication::translate("cad_professor", "GO", nullptr));
        campo_estado->setItemText(9, QApplication::translate("cad_professor", "MA", nullptr));
        campo_estado->setItemText(10, QApplication::translate("cad_professor", "MT", nullptr));
        campo_estado->setItemText(11, QApplication::translate("cad_professor", "MS", nullptr));
        campo_estado->setItemText(12, QApplication::translate("cad_professor", "MG", nullptr));
        campo_estado->setItemText(13, QApplication::translate("cad_professor", "PA", nullptr));
        campo_estado->setItemText(14, QApplication::translate("cad_professor", "PB", nullptr));
        campo_estado->setItemText(15, QApplication::translate("cad_professor", "PR", nullptr));
        campo_estado->setItemText(16, QApplication::translate("cad_professor", "PE", nullptr));
        campo_estado->setItemText(17, QApplication::translate("cad_professor", "PI", nullptr));
        campo_estado->setItemText(18, QApplication::translate("cad_professor", "RJ", nullptr));
        campo_estado->setItemText(19, QApplication::translate("cad_professor", "RN", nullptr));
        campo_estado->setItemText(20, QApplication::translate("cad_professor", "RS", nullptr));
        campo_estado->setItemText(21, QApplication::translate("cad_professor", "RO", nullptr));
        campo_estado->setItemText(22, QApplication::translate("cad_professor", "RR", nullptr));
        campo_estado->setItemText(23, QApplication::translate("cad_professor", "SC", nullptr));
        campo_estado->setItemText(24, QApplication::translate("cad_professor", "SP", nullptr));
        campo_estado->setItemText(25, QApplication::translate("cad_professor", "SE", nullptr));
        campo_estado->setItemText(26, QApplication::translate("cad_professor", "TO", nullptr));

        campo_titulacao->setItemText(0, QApplication::translate("cad_professor", "Bacharelado", nullptr));
        campo_titulacao->setItemText(1, QApplication::translate("cad_professor", "Lincenciatura", nullptr));
        campo_titulacao->setItemText(2, QApplication::translate("cad_professor", "P\303\263s-Gradua\303\247\303\243o", nullptr));
        campo_titulacao->setItemText(3, QApplication::translate("cad_professor", "Mestrado", nullptr));
        campo_titulacao->setItemText(4, QApplication::translate("cad_professor", "Doutorado", nullptr));

    } // retranslateUi

};

namespace Ui {
    class cad_professor: public Ui_cad_professor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAD_PROFESSOR_H
