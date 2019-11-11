/********************************************************************************
** Form generated from reading UI file 'removealuno.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEALUNO_H
#define UI_REMOVEALUNO_H

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
            RemoveAluno->setObjectName(QStringLiteral("RemoveAluno"));
        RemoveAluno->resize(186, 160);
        QIcon icon;
        icon.addFile(QStringLiteral(":/recursos/Imagens/remover.png"), QSize(), QIcon::Normal, QIcon::Off);
        RemoveAluno->setWindowIcon(icon);
        layoutWidget = new QWidget(RemoveAluno);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 120, 92));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditMatricula = new QLineEdit(layoutWidget);
        lineEditMatricula->setObjectName(QStringLiteral("lineEditMatricula"));

        gridLayout->addWidget(lineEditMatricula, 2, 0, 1, 1);

        btn_remover = new QPushButton(layoutWidget);
        btn_remover->setObjectName(QStringLiteral("btn_remover"));

        gridLayout->addWidget(btn_remover, 3, 0, 1, 1);

        labelMatricula = new QLabel(layoutWidget);
        labelMatricula->setObjectName(QStringLiteral("labelMatricula"));

        gridLayout->addWidget(labelMatricula, 1, 0, 1, 1);


        retranslateUi(RemoveAluno);

        QMetaObject::connectSlotsByName(RemoveAluno);
    } // setupUi

    void retranslateUi(QWidget *RemoveAluno)
    {
        RemoveAluno->setWindowTitle(QApplication::translate("RemoveAluno", "Remover aluno", Q_NULLPTR));
        lineEditMatricula->setPlaceholderText(QApplication::translate("RemoveAluno", "Digite aqui", Q_NULLPTR));
        btn_remover->setText(QApplication::translate("RemoveAluno", "Remover", Q_NULLPTR));
        labelMatricula->setText(QApplication::translate("RemoveAluno", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">Matricula</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RemoveAluno: public Ui_RemoveAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEALUNO_H
