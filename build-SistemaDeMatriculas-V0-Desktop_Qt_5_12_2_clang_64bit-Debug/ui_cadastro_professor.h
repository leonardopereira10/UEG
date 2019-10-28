/********************************************************************************
** Form generated from reading UI file 'cadastro_professor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_PROFESSOR_H
#define UI_CADASTRO_PROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastro_professor
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *cpf;
    QLineEdit *campo_cpf;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *logo_professor;
    QSpacerItem *verticalSpacer;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *graduacao;
    QHBoxLayout *horizontalLayout_7;
    QLabel *uf;
    QComboBox *selecao_estado;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QLineEdit *campo_endereco;
    QLabel *endereco;
    QHBoxLayout *horizontalLayout_6;
    QLabel *setor;
    QLineEdit *campo_setor;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *nome;
    QLineEdit *campo_nome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *celular;
    QLineEdit *campo_celular;
    QSpacerItem *horizontalSpacer_5;
    QLabel *titulacao;
    QHBoxLayout *horizontalLayout_5;
    QLabel *data_de_nascimento;
    QLineEdit *campo_data_de_nascimento;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *selecao_titulacao;
    QHBoxLayout *horizontalLayout_2;
    QLabel *email;
    QLineEdit *campo_email;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *campo_graduacao;
    QHBoxLayout *horizontalLayout_8;
    QLabel *cidade;
    QComboBox *selecao_cidade;
    QLabel *aviso_cpf;
    QPushButton *inserir;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *btn_cadastrar;
    QLabel *aviso_incorreto;

    void setupUi(QWidget *cadastro_professor)
    {
        if (cadastro_professor->objectName().isEmpty())
            cadastro_professor->setObjectName(QString::fromUtf8("cadastro_professor"));
        cadastro_professor->resize(561, 536);
        layoutWidget = new QWidget(cadastro_professor);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 45, 168, 23));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cpf = new QLabel(layoutWidget);
        cpf->setObjectName(QString::fromUtf8("cpf"));
        cpf->setMaximumSize(QSize(30, 21));

        gridLayout->addWidget(cpf, 0, 0, 1, 1);

        campo_cpf = new QLineEdit(layoutWidget);
        campo_cpf->setObjectName(QString::fromUtf8("campo_cpf"));
        campo_cpf->setMaximumSize(QSize(110, 21));

        gridLayout->addWidget(campo_cpf, 0, 1, 1, 1, Qt::AlignLeft);

        layoutWidget1 = new QWidget(cadastro_professor);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 10, 231, 111));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        logo_professor = new QLabel(layoutWidget1);
        logo_professor->setObjectName(QString::fromUtf8("logo_professor"));
        logo_professor->setEnabled(true);
        logo_professor->setMaximumSize(QSize(111, 109));
        logo_professor->setScaledContents(true);

        horizontalLayout->addWidget(logo_professor);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        layoutWidget2 = new QWidget(cadastro_professor);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 146, 532, 310));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        graduacao = new QLabel(layoutWidget2);
        graduacao->setObjectName(QString::fromUtf8("graduacao"));
        graduacao->setMaximumSize(QSize(80, 16777215));

        gridLayout_3->addWidget(graduacao, 6, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetNoConstraint);
        uf = new QLabel(layoutWidget2);
        uf->setObjectName(QString::fromUtf8("uf"));
        uf->setMaximumSize(QSize(20, 26));

        horizontalLayout_7->addWidget(uf);

        selecao_estado = new QComboBox(layoutWidget2);
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->addItem(QString());
        selecao_estado->setObjectName(QString::fromUtf8("selecao_estado"));
        selecao_estado->setMaximumSize(QSize(80, 32));

        horizontalLayout_7->addWidget(selecao_estado);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        gridLayout_3->addLayout(horizontalLayout_7, 4, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        campo_endereco = new QLineEdit(layoutWidget2);
        campo_endereco->setObjectName(QString::fromUtf8("campo_endereco"));
        campo_endereco->setMaximumSize(QSize(450, 21));

        gridLayout_2->addWidget(campo_endereco, 0, 1, 1, 1);

        endereco = new QLabel(layoutWidget2);
        endereco->setObjectName(QString::fromUtf8("endereco"));
        endereco->setMaximumSize(QSize(60, 21));

        gridLayout_2->addWidget(endereco, 0, 0, 1, 1, Qt::AlignLeft);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        setor = new QLabel(layoutWidget2);
        setor->setObjectName(QString::fromUtf8("setor"));

        horizontalLayout_6->addWidget(setor);

        campo_setor = new QLineEdit(layoutWidget2);
        campo_setor->setObjectName(QString::fromUtf8("campo_setor"));

        horizontalLayout_6->addWidget(campo_setor);

        horizontalSpacer_7 = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        gridLayout_3->addLayout(horizontalLayout_6, 3, 0, 1, 4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        nome = new QLabel(layoutWidget2);
        nome->setObjectName(QString::fromUtf8("nome"));

        horizontalLayout_4->addWidget(nome);

        campo_nome = new QLineEdit(layoutWidget2);
        campo_nome->setObjectName(QString::fromUtf8("campo_nome"));
        campo_nome->setMaximumSize(QSize(500, 21));

        horizontalLayout_4->addWidget(campo_nome);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        celular = new QLabel(layoutWidget2);
        celular->setObjectName(QString::fromUtf8("celular"));

        horizontalLayout_3->addWidget(celular);

        campo_celular = new QLineEdit(layoutWidget2);
        campo_celular->setObjectName(QString::fromUtf8("campo_celular"));

        horizontalLayout_3->addWidget(campo_celular);

        horizontalSpacer_5 = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        gridLayout_3->addLayout(horizontalLayout_3, 9, 0, 1, 4);

        titulacao = new QLabel(layoutWidget2);
        titulacao->setObjectName(QString::fromUtf8("titulacao"));
        titulacao->setMaximumSize(QSize(60, 26));

        gridLayout_3->addWidget(titulacao, 6, 2, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        data_de_nascimento = new QLabel(layoutWidget2);
        data_de_nascimento->setObjectName(QString::fromUtf8("data_de_nascimento"));

        horizontalLayout_5->addWidget(data_de_nascimento);

        campo_data_de_nascimento = new QLineEdit(layoutWidget2);
        campo_data_de_nascimento->setObjectName(QString::fromUtf8("campo_data_de_nascimento"));
        campo_data_de_nascimento->setMaximumSize(QSize(80, 21));

        horizontalLayout_5->addWidget(campo_data_de_nascimento);

        horizontalSpacer_4 = new QSpacerItem(278, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_3->addLayout(horizontalLayout_5, 1, 0, 1, 4);

        selecao_titulacao = new QComboBox(layoutWidget2);
        selecao_titulacao->addItem(QString());
        selecao_titulacao->addItem(QString());
        selecao_titulacao->addItem(QString());
        selecao_titulacao->addItem(QString());
        selecao_titulacao->addItem(QString());
        selecao_titulacao->addItem(QString());
        selecao_titulacao->setObjectName(QString::fromUtf8("selecao_titulacao"));

        gridLayout_3->addWidget(selecao_titulacao, 6, 3, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        email = new QLabel(layoutWidget2);
        email->setObjectName(QString::fromUtf8("email"));

        horizontalLayout_2->addWidget(email);

        campo_email = new QLineEdit(layoutWidget2);
        campo_email->setObjectName(QString::fromUtf8("campo_email"));

        horizontalLayout_2->addWidget(campo_email);

        horizontalSpacer_6 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        gridLayout_3->addLayout(horizontalLayout_2, 10, 0, 1, 4);

        campo_graduacao = new QLineEdit(layoutWidget2);
        campo_graduacao->setObjectName(QString::fromUtf8("campo_graduacao"));
        campo_graduacao->setMaximumSize(QSize(200, 21));

        gridLayout_3->addWidget(campo_graduacao, 6, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        cidade = new QLabel(layoutWidget2);
        cidade->setObjectName(QString::fromUtf8("cidade"));
        cidade->setMaximumSize(QSize(50, 26));

        horizontalLayout_8->addWidget(cidade);

        selecao_cidade = new QComboBox(layoutWidget2);
        selecao_cidade->setObjectName(QString::fromUtf8("selecao_cidade"));
        selecao_cidade->setMaximumSize(QSize(350, 32));

        horizontalLayout_8->addWidget(selecao_cidade);


        gridLayout_3->addLayout(horizontalLayout_8, 4, 1, 1, 1);

        aviso_cpf = new QLabel(cadastro_professor);
        aviso_cpf->setObjectName(QString::fromUtf8("aviso_cpf"));
        aviso_cpf->setGeometry(QRect(353, 20, 80, 16));
        inserir = new QPushButton(cadastro_professor);
        inserir->setObjectName(QString::fromUtf8("inserir"));
        inserir->setGeometry(QRect(368, 78, 70, 32));
        layoutWidget3 = new QWidget(cadastro_professor);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(150, 480, 217, 32));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        btn_cadastrar = new QPushButton(layoutWidget3);
        btn_cadastrar->setObjectName(QString::fromUtf8("btn_cadastrar"));
        btn_cadastrar->setStyleSheet(QString::fromUtf8("btn_cadastrar->setSyleSheet->rgba(0, 0, 255, 191)"));

        horizontalLayout_9->addWidget(btn_cadastrar);

        aviso_incorreto = new QLabel(cadastro_professor);
        aviso_incorreto->setObjectName(QString::fromUtf8("aviso_incorreto"));
        aviso_incorreto->setGeometry(QRect(370, 122, 59, 16));
        QWidget::setTabOrder(campo_cpf, inserir);
        QWidget::setTabOrder(inserir, campo_nome);
        QWidget::setTabOrder(campo_nome, campo_data_de_nascimento);
        QWidget::setTabOrder(campo_data_de_nascimento, campo_endereco);
        QWidget::setTabOrder(campo_endereco, campo_setor);
        QWidget::setTabOrder(campo_setor, selecao_estado);
        QWidget::setTabOrder(selecao_estado, selecao_cidade);
        QWidget::setTabOrder(selecao_cidade, campo_graduacao);
        QWidget::setTabOrder(campo_graduacao, selecao_titulacao);
        QWidget::setTabOrder(selecao_titulacao, campo_celular);
        QWidget::setTabOrder(campo_celular, campo_email);
        QWidget::setTabOrder(campo_email, btn_cadastrar);

        retranslateUi(cadastro_professor);

        QMetaObject::connectSlotsByName(cadastro_professor);
    } // setupUi

    void retranslateUi(QWidget *cadastro_professor)
    {
        cadastro_professor->setWindowTitle(QApplication::translate("cadastro_professor", "Cadastro de Professor", nullptr));
        cpf->setText(QApplication::translate("cadastro_professor", "CPF: ", nullptr));
        campo_cpf->setInputMask(QApplication::translate("cadastro_professor", "###.###.###-##", nullptr));
        logo_professor->setText(QApplication::translate("cadastro_professor", "TextLabel", nullptr));
        graduacao->setText(QApplication::translate("cadastro_professor", "Gradua\303\247\303\243o:", nullptr));
        uf->setText(QApplication::translate("cadastro_professor", "UF:", nullptr));
        selecao_estado->setItemText(0, QApplication::translate("cadastro_professor", "AC", nullptr));
        selecao_estado->setItemText(1, QApplication::translate("cadastro_professor", "AL", nullptr));
        selecao_estado->setItemText(2, QApplication::translate("cadastro_professor", "AP", nullptr));
        selecao_estado->setItemText(3, QApplication::translate("cadastro_professor", "AM", nullptr));
        selecao_estado->setItemText(4, QApplication::translate("cadastro_professor", "BA", nullptr));
        selecao_estado->setItemText(5, QApplication::translate("cadastro_professor", "CE", nullptr));
        selecao_estado->setItemText(6, QApplication::translate("cadastro_professor", "DF", nullptr));
        selecao_estado->setItemText(7, QApplication::translate("cadastro_professor", "ES", nullptr));
        selecao_estado->setItemText(8, QApplication::translate("cadastro_professor", "GO", nullptr));
        selecao_estado->setItemText(9, QApplication::translate("cadastro_professor", "MA", nullptr));
        selecao_estado->setItemText(10, QApplication::translate("cadastro_professor", "MT", nullptr));
        selecao_estado->setItemText(11, QApplication::translate("cadastro_professor", "MS", nullptr));
        selecao_estado->setItemText(12, QApplication::translate("cadastro_professor", "MG", nullptr));
        selecao_estado->setItemText(13, QApplication::translate("cadastro_professor", "PA", nullptr));
        selecao_estado->setItemText(14, QApplication::translate("cadastro_professor", "PB", nullptr));
        selecao_estado->setItemText(15, QApplication::translate("cadastro_professor", "PR", nullptr));
        selecao_estado->setItemText(16, QApplication::translate("cadastro_professor", "PE", nullptr));
        selecao_estado->setItemText(17, QApplication::translate("cadastro_professor", "PI", nullptr));
        selecao_estado->setItemText(18, QApplication::translate("cadastro_professor", "RJ", nullptr));
        selecao_estado->setItemText(19, QApplication::translate("cadastro_professor", "RN", nullptr));
        selecao_estado->setItemText(20, QApplication::translate("cadastro_professor", "RS", nullptr));
        selecao_estado->setItemText(21, QApplication::translate("cadastro_professor", "RO", nullptr));
        selecao_estado->setItemText(22, QApplication::translate("cadastro_professor", "RR", nullptr));
        selecao_estado->setItemText(23, QApplication::translate("cadastro_professor", "SC", nullptr));
        selecao_estado->setItemText(24, QApplication::translate("cadastro_professor", "SP", nullptr));
        selecao_estado->setItemText(25, QApplication::translate("cadastro_professor", "SE", nullptr));
        selecao_estado->setItemText(26, QApplication::translate("cadastro_professor", "TO", nullptr));

        endereco->setText(QApplication::translate("cadastro_professor", "Endere\303\247o:", nullptr));
        setor->setText(QApplication::translate("cadastro_professor", "Setor:", nullptr));
        nome->setText(QApplication::translate("cadastro_professor", "Nome:", nullptr));
        celular->setText(QApplication::translate("cadastro_professor", "Celular:", nullptr));
        campo_celular->setInputMask(QApplication::translate("cadastro_professor", "(##)#####-####", nullptr));
        titulacao->setText(QApplication::translate("cadastro_professor", "Titula\303\247\303\243o:", nullptr));
        data_de_nascimento->setText(QApplication::translate("cadastro_professor", "Data de Nascimento:", nullptr));
        campo_data_de_nascimento->setInputMask(QApplication::translate("cadastro_professor", "##/##/####", nullptr));
        selecao_titulacao->setItemText(0, QApplication::translate("cadastro_professor", "Bacharelado", nullptr));
        selecao_titulacao->setItemText(1, QApplication::translate("cadastro_professor", "Licenciatura", nullptr));
        selecao_titulacao->setItemText(2, QApplication::translate("cadastro_professor", "Especializa\303\247\303\243o", nullptr));
        selecao_titulacao->setItemText(3, QApplication::translate("cadastro_professor", "Mestrado", nullptr));
        selecao_titulacao->setItemText(4, QApplication::translate("cadastro_professor", "Doutorado", nullptr));
        selecao_titulacao->setItemText(5, QApplication::translate("cadastro_professor", "P\303\263s-Doutorado", nullptr));

        email->setText(QApplication::translate("cadastro_professor", "E-mail:", nullptr));
        cidade->setText(QApplication::translate("cadastro_professor", "Cidade:", nullptr));
        aviso_cpf->setText(QApplication::translate("cadastro_professor", "TextLabel", nullptr));
        inserir->setText(QApplication::translate("cadastro_professor", "Inserir", nullptr));
        btn_cadastrar->setText(QApplication::translate("cadastro_professor", "Cadastrar", nullptr));
        aviso_incorreto->setText(QApplication::translate("cadastro_professor", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastro_professor: public Ui_cadastro_professor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_PROFESSOR_H
