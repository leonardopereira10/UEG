/********************************************************************************
** Form generated from reading UI file 'cadastro_professor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_PROFESSOR_H
#define UI_CADASTRO_PROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastro_professor
{
public:
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *cpf;
    QLineEdit *campo_cpf;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *logo_professor;
    QSpacerItem *verticalSpacer;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLineEdit *campo_endereco;
    QLabel *endereco;
    QHBoxLayout *horizontalLayout_4;
    QLabel *nome;
    QLineEdit *campo_nome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *celular;
    QLineEdit *campo_celular;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *selecao_titulacao;
    QLineEdit *campo_graduacao;
    QHBoxLayout *horizontalLayout_8;
    QLabel *cidade;
    QComboBox *selecao_cidade;
    QLabel *graduacao;
    QHBoxLayout *horizontalLayout_6;
    QLabel *setor;
    QLineEdit *campo_setor;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *uf;
    QComboBox *selecao_estado;
    QSpacerItem *horizontalSpacer;
    QLabel *titulacao;
    QHBoxLayout *horizontalLayout_2;
    QLabel *email;
    QLineEdit *campo_email;
    QSpacerItem *horizontalSpacer_6;
    QLabel *aviso_cpf;
    QPushButton *inserir;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *btn_cadastrar;
    QLabel *aviso_incorreto;

    void setupUi(QWidget *cadastro_professor)
    {
        if (cadastro_professor->objectName().isEmpty())
            cadastro_professor->setObjectName(QStringLiteral("cadastro_professor"));
        cadastro_professor->resize(561, 536);
        layoutWidget1 = new QWidget(cadastro_professor);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(320, 45, 168, 23));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cpf = new QLabel(layoutWidget1);
        cpf->setObjectName(QStringLiteral("cpf"));
        cpf->setMaximumSize(QSize(30, 21));

        gridLayout->addWidget(cpf, 0, 0, 1, 1);

        campo_cpf = new QLineEdit(layoutWidget1);
        campo_cpf->setObjectName(QStringLiteral("campo_cpf"));
        campo_cpf->setMaximumSize(QSize(110, 21));

        gridLayout->addWidget(campo_cpf, 0, 1, 1, 1, Qt::AlignLeft);

        layoutWidget2 = new QWidget(cadastro_professor);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 10, 231, 111));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        logo_professor = new QLabel(layoutWidget2);
        logo_professor->setObjectName(QStringLiteral("logo_professor"));
        logo_professor->setEnabled(true);
        logo_professor->setMaximumSize(QSize(111, 109));
        logo_professor->setScaledContents(true);

        horizontalLayout->addWidget(logo_professor);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        layoutWidget3 = new QWidget(cadastro_professor);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 146, 532, 310));
        gridLayout_3 = new QGridLayout(layoutWidget3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        campo_endereco = new QLineEdit(layoutWidget3);
        campo_endereco->setObjectName(QStringLiteral("campo_endereco"));
        campo_endereco->setMaximumSize(QSize(450, 21));

        gridLayout_2->addWidget(campo_endereco, 0, 1, 1, 1);

        endereco = new QLabel(layoutWidget3);
        endereco->setObjectName(QStringLiteral("endereco"));
        endereco->setMaximumSize(QSize(60, 21));

        gridLayout_2->addWidget(endereco, 0, 0, 1, 1, Qt::AlignLeft);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        nome = new QLabel(layoutWidget3);
        nome->setObjectName(QStringLiteral("nome"));

        horizontalLayout_4->addWidget(nome);

        campo_nome = new QLineEdit(layoutWidget3);
        campo_nome->setObjectName(QStringLiteral("campo_nome"));
        campo_nome->setMaximumSize(QSize(500, 21));

        horizontalLayout_4->addWidget(campo_nome);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        celular = new QLabel(layoutWidget3);
        celular->setObjectName(QStringLiteral("celular"));

        horizontalLayout_3->addWidget(celular);

        campo_celular = new QLineEdit(layoutWidget3);
        campo_celular->setObjectName(QStringLiteral("campo_celular"));

        horizontalLayout_3->addWidget(campo_celular);

        horizontalSpacer_5 = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        gridLayout_3->addLayout(horizontalLayout_3, 8, 0, 1, 4);

        selecao_titulacao = new QComboBox(layoutWidget3);
        selecao_titulacao->setObjectName(QStringLiteral("selecao_titulacao"));

        gridLayout_3->addWidget(selecao_titulacao, 5, 3, 1, 1);

        campo_graduacao = new QLineEdit(layoutWidget3);
        campo_graduacao->setObjectName(QStringLiteral("campo_graduacao"));
        campo_graduacao->setMaximumSize(QSize(200, 21));

        gridLayout_3->addWidget(campo_graduacao, 5, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        cidade = new QLabel(layoutWidget3);
        cidade->setObjectName(QStringLiteral("cidade"));
        cidade->setMaximumSize(QSize(50, 26));

        horizontalLayout_8->addWidget(cidade);

        selecao_cidade = new QComboBox(layoutWidget3);
        selecao_cidade->setObjectName(QStringLiteral("selecao_cidade"));
        selecao_cidade->setMaximumSize(QSize(350, 32));

        horizontalLayout_8->addWidget(selecao_cidade);


        gridLayout_3->addLayout(horizontalLayout_8, 3, 1, 1, 1);

        graduacao = new QLabel(layoutWidget3);
        graduacao->setObjectName(QStringLiteral("graduacao"));
        graduacao->setMaximumSize(QSize(80, 16777215));

        gridLayout_3->addWidget(graduacao, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        setor = new QLabel(layoutWidget3);
        setor->setObjectName(QStringLiteral("setor"));

        horizontalLayout_6->addWidget(setor);

        campo_setor = new QLineEdit(layoutWidget3);
        campo_setor->setObjectName(QStringLiteral("campo_setor"));

        horizontalLayout_6->addWidget(campo_setor);

        horizontalSpacer_7 = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        gridLayout_3->addLayout(horizontalLayout_6, 2, 0, 1, 4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetNoConstraint);
        uf = new QLabel(layoutWidget3);
        uf->setObjectName(QStringLiteral("uf"));
        uf->setMaximumSize(QSize(20, 26));

        horizontalLayout_7->addWidget(uf);

        selecao_estado = new QComboBox(layoutWidget3);
        selecao_estado->setObjectName(QStringLiteral("selecao_estado"));
        selecao_estado->setMaximumSize(QSize(80, 32));

        horizontalLayout_7->addWidget(selecao_estado);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        gridLayout_3->addLayout(horizontalLayout_7, 3, 0, 1, 1);

        titulacao = new QLabel(layoutWidget3);
        titulacao->setObjectName(QStringLiteral("titulacao"));
        titulacao->setMaximumSize(QSize(60, 26));

        gridLayout_3->addWidget(titulacao, 5, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        email = new QLabel(layoutWidget3);
        email->setObjectName(QStringLiteral("email"));

        horizontalLayout_2->addWidget(email);

        campo_email = new QLineEdit(layoutWidget3);
        campo_email->setObjectName(QStringLiteral("campo_email"));

        horizontalLayout_2->addWidget(campo_email);

        horizontalSpacer_6 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        gridLayout_3->addLayout(horizontalLayout_2, 9, 0, 1, 4);

        aviso_cpf = new QLabel(cadastro_professor);
        aviso_cpf->setObjectName(QStringLiteral("aviso_cpf"));
        aviso_cpf->setGeometry(QRect(353, 20, 80, 16));
        inserir = new QPushButton(cadastro_professor);
        inserir->setObjectName(QStringLiteral("inserir"));
        inserir->setGeometry(QRect(368, 78, 70, 32));
        layoutWidget = new QWidget(cadastro_professor);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 480, 217, 32));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        btn_cadastrar = new QPushButton(layoutWidget);
        btn_cadastrar->setObjectName(QStringLiteral("btn_cadastrar"));
        btn_cadastrar->setStyleSheet(QStringLiteral("btn_cadastrar->setSyleSheet->rgba(0, 0, 255, 191)"));

        horizontalLayout_9->addWidget(btn_cadastrar);

        aviso_incorreto = new QLabel(cadastro_professor);
        aviso_incorreto->setObjectName(QStringLiteral("aviso_incorreto"));
        aviso_incorreto->setGeometry(QRect(356, 122, 59, 16));
        QWidget::setTabOrder(campo_cpf, inserir);
        QWidget::setTabOrder(inserir, campo_nome);
        QWidget::setTabOrder(campo_nome, campo_endereco);
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
        cadastro_professor->setWindowTitle(QApplication::translate("cadastro_professor", "Cadastro de Professor", Q_NULLPTR));
        cpf->setText(QApplication::translate("cadastro_professor", "CPF: ", Q_NULLPTR));
        campo_cpf->setInputMask(QApplication::translate("cadastro_professor", "###.###.###-##", Q_NULLPTR));
        logo_professor->setText(QApplication::translate("cadastro_professor", "TextLabel", Q_NULLPTR));
        endereco->setText(QApplication::translate("cadastro_professor", "Endere\303\247o:", Q_NULLPTR));
        nome->setText(QApplication::translate("cadastro_professor", "Nome:", Q_NULLPTR));
        celular->setText(QApplication::translate("cadastro_professor", "Celular:", Q_NULLPTR));
        campo_celular->setInputMask(QApplication::translate("cadastro_professor", "(##)#####-####", Q_NULLPTR));
        selecao_titulacao->clear();
        selecao_titulacao->insertItems(0, QStringList()
         << QApplication::translate("cadastro_professor", "Bacharelado", Q_NULLPTR)
         << QApplication::translate("cadastro_professor", "Licenciatura", Q_NULLPTR)
         << QApplication::translate("cadastro_professor", "Especializa\303\247\303\243o", Q_NULLPTR)
         << QApplication::translate("cadastro_professor", "Mestrado", Q_NULLPTR)
         << QApplication::translate("cadastro_professor", "Doutorado", Q_NULLPTR)
         << QApplication::translate("cadastro_professor", "P\303\263s-Doutorado", Q_NULLPTR)
        );
        cidade->setText(QApplication::translate("cadastro_professor", "Cidade:", Q_NULLPTR));
        graduacao->setText(QApplication::translate("cadastro_professor", "Gradua\303\247\303\243o:", Q_NULLPTR));
        setor->setText(QApplication::translate("cadastro_professor", "Setor:", Q_NULLPTR));
        uf->setText(QApplication::translate("cadastro_professor", "UF:", Q_NULLPTR));
        titulacao->setText(QApplication::translate("cadastro_professor", "Titula\303\247\303\243o:", Q_NULLPTR));
        email->setText(QApplication::translate("cadastro_professor", "E-mail:", Q_NULLPTR));
        aviso_cpf->setText(QApplication::translate("cadastro_professor", "TextLabel", Q_NULLPTR));
        inserir->setText(QApplication::translate("cadastro_professor", "Inserir", Q_NULLPTR));
        btn_cadastrar->setText(QApplication::translate("cadastro_professor", "Cadastrar", Q_NULLPTR));
        aviso_incorreto->setText(QApplication::translate("cadastro_professor", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class cadastro_professor: public Ui_cadastro_professor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_PROFESSOR_H
