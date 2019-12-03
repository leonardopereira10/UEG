/********************************************************************************
** Form generated from reading UI file 'removecurso.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVECURSO_H
#define UI_REMOVECURSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_removeCurso
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *removeCurso)
    {
        if (removeCurso->objectName().isEmpty())
            removeCurso->setObjectName(QStringLiteral("removeCurso"));
        removeCurso->resize(166, 129);
        layoutWidget = new QWidget(removeCurso);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 137, 86));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 0, 1, 1);

        QWidget::setTabOrder(lineEdit, pushButton);

        retranslateUi(removeCurso);

        QMetaObject::connectSlotsByName(removeCurso);
    } // setupUi

    void retranslateUi(QWidget *removeCurso)
    {
        removeCurso->setWindowTitle(QApplication::translate("removeCurso", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("removeCurso", "Remover", Q_NULLPTR));
        label->setText(QApplication::translate("removeCurso", "<html><head/><body><p align=\"center\">ID Curso </p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class removeCurso: public Ui_removeCurso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVECURSO_H
