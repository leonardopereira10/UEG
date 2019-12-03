/********************************************************************************
** Form generated from reading UI file 'consultarcurso.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTARCURSO_H
#define UI_CONSULTARCURSO_H

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

class Ui_ConsultarCurso
{
public:
    QTableView *tableView;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *ConsultarCurso)
    {
        if (ConsultarCurso->objectName().isEmpty())
            ConsultarCurso->setObjectName(QStringLiteral("ConsultarCurso"));
        ConsultarCurso->resize(398, 370);
        tableView = new QTableView(ConsultarCurso);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 120, 321, 221));
        widget = new QWidget(ConsultarCurso);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 20, 137, 86));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);


        retranslateUi(ConsultarCurso);

        QMetaObject::connectSlotsByName(ConsultarCurso);
    } // setupUi

    void retranslateUi(QWidget *ConsultarCurso)
    {
        ConsultarCurso->setWindowTitle(QApplication::translate("ConsultarCurso", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ConsultarCurso", "Consultar", Q_NULLPTR));
        label->setText(QApplication::translate("ConsultarCurso", "<html><head/><body><p align=\"center\">IdCurso: </p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConsultarCurso: public Ui_ConsultarCurso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTARCURSO_H
