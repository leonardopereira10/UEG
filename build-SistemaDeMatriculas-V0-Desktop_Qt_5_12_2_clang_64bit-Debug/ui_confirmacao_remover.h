/********************************************************************************
** Form generated from reading UI file 'confirmacao_remover.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMACAO_REMOVER_H
#define UI_CONFIRMACAO_REMOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_confirmacao_remover
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *confirmacao_remover)
    {
        if (confirmacao_remover->objectName().isEmpty())
            confirmacao_remover->setObjectName(QString::fromUtf8("confirmacao_remover"));
        confirmacao_remover->resize(269, 114);
        layoutWidget = new QWidget(confirmacao_remover);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 241, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        label = new QLabel(confirmacao_remover);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 177, 14));
        QFont font;
        font.setFamily(QString::fromUtf8("Helvetica"));
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(confirmacao_remover);

        QMetaObject::connectSlotsByName(confirmacao_remover);
    } // setupUi

    void retranslateUi(QDialog *confirmacao_remover)
    {
        confirmacao_remover->setWindowTitle(QApplication::translate("confirmacao_remover", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("confirmacao_remover", "N\303\243o", nullptr));
        pushButton_2->setText(QApplication::translate("confirmacao_remover", "Sim", nullptr));
        label->setText(QApplication::translate("confirmacao_remover", "Deseja realmente remover ?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class confirmacao_remover: public Ui_confirmacao_remover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMACAO_REMOVER_H
