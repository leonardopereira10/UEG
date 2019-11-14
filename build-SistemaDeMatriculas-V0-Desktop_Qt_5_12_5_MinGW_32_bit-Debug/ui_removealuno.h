/********************************************************************************
** Form generated from reading UI file 'removealuno.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEALUNO_H
#define UI_REMOVEALUNO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveAluno
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditMatricula;
    QPushButton *btn_remover;
    QLabel *labelMatricula;

    void setupUi(QWidget *RemoveAluno)
    {
        if (RemoveAluno->objectName().isEmpty())
            RemoveAluno->setObjectName(QString::fromUtf8("RemoveAluno"));
        RemoveAluno->resize(186, 160);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/recursos/Imagens/remover.png"), QSize(), QIcon::Normal, QIcon::Off);
        RemoveAluno->setWindowIcon(icon);
        layoutWidget = new QWidget(RemoveAluno);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 120, 92));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditMatricula = new QLineEdit(layoutWidget);
        lineEditMatricula->setObjectName(QString::fromUtf8("lineEditMatricula"));

        gridLayout->addWidget(lineEditMatricula, 2, 0, 1, 1);

        btn_remover = new QPushButton(layoutWidget);
        btn_remover->setObjectName(QString::fromUtf8("btn_remover"));

        gridLayout->addWidget(btn_remover, 3, 0, 1, 1);

        labelMatricula = new QLabel(layoutWidget);
        labelMatricula->setObjectName(QString::fromUtf8("labelMatricula"));

        gridLayout->addWidget(labelMatricula, 1, 0, 1, 1);


        retranslateUi(RemoveAluno);

        QMetaObject::connectSlotsByName(RemoveAluno);
    } // setupUi

    void retranslateUi(QWidget *RemoveAluno)
    {
        RemoveAluno->setWindowTitle(QApplication::translate("RemoveAluno", "Remover aluno", nullptr));
        lineEditMatricula->setPlaceholderText(QApplication::translate("RemoveAluno", "Digite aqui", nullptr));
        btn_remover->setText(QApplication::translate("RemoveAluno", "Remover", nullptr));
        labelMatricula->setText(QApplication::translate("RemoveAluno", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">Matricula</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveAluno: public Ui_RemoveAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEALUNO_H
