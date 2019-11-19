/********************************************************************************
** Form generated from reading UI file 'cadcurso.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADCURSO_H
#define UI_CADCURSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadCurso
{
public:
    QLabel *labelIcone;
    QPushButton *btnCadastrar;
    QLabel *labelValid;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *boxDuracao;
    QLabel *labelAnos;
    QLabel *labelNome;
    QLineEdit *campoIDCurso;
    QLabel *labelDuracao;
    QLineEdit *campoNome;
    QLabel *labelIdCurso;

    void setupUi(QWidget *cadCurso)
    {
        if (cadCurso->objectName().isEmpty())
            cadCurso->setObjectName(QStringLiteral("cadCurso"));
        cadCurso->resize(400, 272);
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagens/Imagens/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        cadCurso->setWindowIcon(icon);
        labelIcone = new QLabel(cadCurso);
        labelIcone->setObjectName(QStringLiteral("labelIcone"));
        labelIcone->setGeometry(QRect(290, 20, 91, 101));
        btnCadastrar = new QPushButton(cadCurso);
        btnCadastrar->setObjectName(QStringLiteral("btnCadastrar"));
        btnCadastrar->setGeometry(QRect(150, 200, 90, 28));
        labelValid = new QLabel(cadCurso);
        labelValid->setObjectName(QStringLiteral("labelValid"));
        labelValid->setGeometry(QRect(120, 170, 151, 16));
        layoutWidget = new QWidget(cadCurso);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 256, 124));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        boxDuracao = new QDoubleSpinBox(layoutWidget);
        boxDuracao->setObjectName(QStringLiteral("boxDuracao"));
        boxDuracao->setMaximum(10);

        gridLayout->addWidget(boxDuracao, 1, 2, 1, 2);

        labelAnos = new QLabel(layoutWidget);
        labelAnos->setObjectName(QStringLiteral("labelAnos"));

        gridLayout->addWidget(labelAnos, 1, 4, 1, 1);

        labelNome = new QLabel(layoutWidget);
        labelNome->setObjectName(QStringLiteral("labelNome"));

        gridLayout->addWidget(labelNome, 0, 0, 1, 1);

        campoIDCurso = new QLineEdit(layoutWidget);
        campoIDCurso->setObjectName(QStringLiteral("campoIDCurso"));
        campoIDCurso->setFocusPolicy(Qt::StrongFocus);
        campoIDCurso->setReadOnly(false);

        gridLayout->addWidget(campoIDCurso, 2, 3, 1, 2);

        labelDuracao = new QLabel(layoutWidget);
        labelDuracao->setObjectName(QStringLiteral("labelDuracao"));

        gridLayout->addWidget(labelDuracao, 1, 0, 1, 2);

        campoNome = new QLineEdit(layoutWidget);
        campoNome->setObjectName(QStringLiteral("campoNome"));
        campoNome->setMaxLength(30);

        gridLayout->addWidget(campoNome, 0, 1, 1, 4);

        labelIdCurso = new QLabel(layoutWidget);
        labelIdCurso->setObjectName(QStringLiteral("labelIdCurso"));

        gridLayout->addWidget(labelIdCurso, 2, 0, 1, 3);

        QWidget::setTabOrder(campoNome, campoIDCurso);
        QWidget::setTabOrder(campoIDCurso, btnCadastrar);
        QWidget::setTabOrder(btnCadastrar, boxDuracao);

        retranslateUi(cadCurso);

        QMetaObject::connectSlotsByName(cadCurso);
    } // setupUi

    void retranslateUi(QWidget *cadCurso)
    {
        cadCurso->setWindowTitle(QApplication::translate("cadCurso", "Cadastro de Cursos", Q_NULLPTR));
        labelIcone->setText(QApplication::translate("cadCurso", "<html><head/><body><p><img src=\":/recursos/Imagens/Curso.png\" height=\"90\" width=\"90\" /></p></body></html>", Q_NULLPTR));
        btnCadastrar->setText(QApplication::translate("cadCurso", "Cadastrar", Q_NULLPTR));
        labelValid->setText(QString());
        labelAnos->setText(QApplication::translate("cadCurso", "anos", Q_NULLPTR));
        labelNome->setText(QApplication::translate("cadCurso", "Nome*", Q_NULLPTR));
        labelDuracao->setText(QApplication::translate("cadCurso", "Dura\303\247\303\243o*", Q_NULLPTR));
        labelIdCurso->setText(QApplication::translate("cadCurso", "ID do Curso:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class cadCurso: public Ui_cadCurso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADCURSO_H
