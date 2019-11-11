/********************************************************************************
** Form generated from reading UI file 'consultamatricula.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTAMATRICULA_H
#define UI_CONSULTAMATRICULA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsultaMatricula
{
public:
    QTableView *tableView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_3;

    void setupUi(QWidget *ConsultaMatricula)
    {
        if (ConsultaMatricula->objectName().isEmpty())
            ConsultaMatricula->setObjectName(QStringLiteral("ConsultaMatricula"));
        ConsultaMatricula->resize(390, 350);
        QIcon icon;
        icon.addFile(QStringLiteral(":/recursos/Imagens/pesquisar.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConsultaMatricula->setWindowIcon(icon);
        tableView = new QTableView(ConsultaMatricula);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 80, 321, 221));
        layoutWidget = new QWidget(ConsultaMatricula);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 227, 68));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(ConsultaMatricula);

        QMetaObject::connectSlotsByName(ConsultaMatricula);
    } // setupUi

    void retranslateUi(QWidget *ConsultaMatricula)
    {
        ConsultaMatricula->setWindowTitle(QApplication::translate("ConsultaMatricula", "Form", Q_NULLPTR));
        label_7->setText(QApplication::translate("ConsultaMatricula", "Codigo do aluno: ", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ConsultaMatricula", "Listar Matriculas vinculadas", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConsultaMatricula: public Ui_ConsultaMatricula {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTAMATRICULA_H
