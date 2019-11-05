/********************************************************************************
** Form generated from reading UI file 'consultaaluno.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTAALUNO_H
#define UI_CONSULTAALUNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            ConsultaAluno->setObjectName(QStringLiteral("ConsultaAluno"));
        ConsultaAluno->resize(1152, 539);
        layoutWidget = new QWidget(ConsultaAluno);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 12, 1121, 491));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelProcurar = new QLabel(layoutWidget);
        labelProcurar->setObjectName(QStringLiteral("labelProcurar"));

        gridLayout->addWidget(labelProcurar, 0, 0, 1, 1);

        radioMatricula = new QRadioButton(layoutWidget);
        radioMatricula->setObjectName(QStringLiteral("radioMatricula"));
        radioMatricula->setCheckable(true);
        radioMatricula->setChecked(true);

        gridLayout->addWidget(radioMatricula, 0, 1, 1, 1);

        radioCpf = new QRadioButton(layoutWidget);
        radioCpf->setObjectName(QStringLiteral("radioCpf"));

        gridLayout->addWidget(radioCpf, 0, 2, 1, 1);

        radioNome = new QRadioButton(layoutWidget);
        radioNome->setObjectName(QStringLiteral("radioNome"));

        gridLayout->addWidget(radioNome, 0, 3, 1, 1);

        btnConsultar = new QPushButton(layoutWidget);
        btnConsultar->setObjectName(QStringLiteral("btnConsultar"));

        gridLayout->addWidget(btnConsultar, 1, 4, 1, 1);

        lineEditSearch = new QLineEdit(layoutWidget);
        lineEditSearch->setObjectName(QStringLiteral("lineEditSearch"));
        lineEditSearch->setMaxLength(50);

        gridLayout->addWidget(lineEditSearch, 1, 0, 1, 4);

        gridLayout->setColumnStretch(3, 2);
        gridLayout->setColumnStretch(4, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
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
        ConsultaAluno->setWindowTitle(QApplication::translate("ConsultaAluno", "Consultar Aluno", Q_NULLPTR));
        labelProcurar->setText(QApplication::translate("ConsultaAluno", "Procurar:", Q_NULLPTR));
        radioMatricula->setText(QApplication::translate("ConsultaAluno", "Matricula", Q_NULLPTR));
        radioCpf->setText(QApplication::translate("ConsultaAluno", "Cpf", Q_NULLPTR));
        radioNome->setText(QApplication::translate("ConsultaAluno", "Nome", Q_NULLPTR));
        btnConsultar->setText(QApplication::translate("ConsultaAluno", "Consultar", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        lineEditSearch->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEditSearch->setPlaceholderText(QApplication::translate("ConsultaAluno", "Digite aqui", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConsultaAluno: public Ui_ConsultaAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTAALUNO_H
