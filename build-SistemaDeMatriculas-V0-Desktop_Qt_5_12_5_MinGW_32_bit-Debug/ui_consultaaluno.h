/********************************************************************************
** Form generated from reading UI file 'consultaaluno.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTAALUNO_H
#define UI_CONSULTAALUNO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsultaAluno
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *labelProcurar;
    QRadioButton *radioMatricula;
    QRadioButton *radioCpf;
    QRadioButton *radioNome;
    QPushButton *btnConsultar;
    QLineEdit *lineEditSearch;
    QTableView *tableView;

    void setupUi(QWidget *ConsultaAluno)
    {
        if (ConsultaAluno->objectName().isEmpty())
            ConsultaAluno->setObjectName(QString::fromUtf8("ConsultaAluno"));
        ConsultaAluno->resize(1152, 539);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/recursos/Imagens/pesquisar.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConsultaAluno->setWindowIcon(icon);
        layoutWidget = new QWidget(ConsultaAluno);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 12, 1121, 491));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelProcurar = new QLabel(layoutWidget);
        labelProcurar->setObjectName(QString::fromUtf8("labelProcurar"));

        gridLayout->addWidget(labelProcurar, 0, 0, 1, 1);

        radioMatricula = new QRadioButton(layoutWidget);
        radioMatricula->setObjectName(QString::fromUtf8("radioMatricula"));
        radioMatricula->setCheckable(true);
        radioMatricula->setChecked(true);

        gridLayout->addWidget(radioMatricula, 0, 1, 1, 1);

        radioCpf = new QRadioButton(layoutWidget);
        radioCpf->setObjectName(QString::fromUtf8("radioCpf"));

        gridLayout->addWidget(radioCpf, 0, 2, 1, 1);

        radioNome = new QRadioButton(layoutWidget);
        radioNome->setObjectName(QString::fromUtf8("radioNome"));

        gridLayout->addWidget(radioNome, 0, 3, 1, 1);

        btnConsultar = new QPushButton(layoutWidget);
        btnConsultar->setObjectName(QString::fromUtf8("btnConsultar"));

        gridLayout->addWidget(btnConsultar, 1, 4, 1, 1);

        lineEditSearch = new QLineEdit(layoutWidget);
        lineEditSearch->setObjectName(QString::fromUtf8("lineEditSearch"));
        lineEditSearch->setMaxLength(50);

        gridLayout->addWidget(lineEditSearch, 1, 0, 1, 4);

        gridLayout->setColumnStretch(3, 2);
        gridLayout->setColumnStretch(4, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setFrameShape(QFrame::StyledPanel);
        tableView->setFrameShadow(QFrame::Sunken);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView->setProperty("showDropIndicator", QVariant(true));
        tableView->setAlternatingRowColors(false);

        gridLayout_2->addWidget(tableView, 1, 0, 1, 1);

        QWidget::setTabOrder(lineEditSearch, btnConsultar);
        QWidget::setTabOrder(btnConsultar, radioMatricula);
        QWidget::setTabOrder(radioMatricula, radioCpf);
        QWidget::setTabOrder(radioCpf, radioNome);
        QWidget::setTabOrder(radioNome, tableView);

        retranslateUi(ConsultaAluno);

        QMetaObject::connectSlotsByName(ConsultaAluno);
    } // setupUi

    void retranslateUi(QWidget *ConsultaAluno)
    {
        ConsultaAluno->setWindowTitle(QApplication::translate("ConsultaAluno", "Consultar Aluno", nullptr));
        labelProcurar->setText(QApplication::translate("ConsultaAluno", "Procurar:", nullptr));
        radioMatricula->setText(QApplication::translate("ConsultaAluno", "Matricula", nullptr));
        radioCpf->setText(QApplication::translate("ConsultaAluno", "Cpf", nullptr));
        radioNome->setText(QApplication::translate("ConsultaAluno", "Nome", nullptr));
        btnConsultar->setText(QApplication::translate("ConsultaAluno", "Consultar", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEditSearch->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEditSearch->setPlaceholderText(QApplication::translate("ConsultaAluno", "Digite aqui", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsultaAluno: public Ui_ConsultaAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTAALUNO_H
