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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsultaMatricula
{
public:
    QTableView *tableView;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_5;

    void setupUi(QWidget *ConsultaMatricula)
    {
        if (ConsultaMatricula->objectName().isEmpty())
            ConsultaMatricula->setObjectName(QStringLiteral("ConsultaMatricula"));
        ConsultaMatricula->resize(875, 351);
        ConsultaMatricula->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/recursos/Imagens/pesquisar.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConsultaMatricula->setWindowIcon(icon);
        tableView = new QTableView(ConsultaMatricula);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 80, 841, 221));
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setDefaultSectionSize(250);
        widget = new QWidget(ConsultaMatricula);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(31, 12, 225, 77));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 2);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout->addWidget(lineEdit_5, 0, 1, 1, 1);

        QWidget::setTabOrder(lineEdit_5, pushButton_3);
        QWidget::setTabOrder(pushButton_3, tableView);

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
