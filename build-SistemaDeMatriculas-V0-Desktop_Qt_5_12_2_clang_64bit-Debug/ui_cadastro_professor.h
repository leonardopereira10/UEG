/********************************************************************************
** Form generated from reading UI file 'cadastro_professor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_PROFESSOR_H
#define UI_CADASTRO_PROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastro_professor
{
public:
    QLabel *logo_professor;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QFontComboBox *fontComboBox;
    QLabel *label_8;
    QComboBox *comboBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *cadastro_professor)
    {
        if (cadastro_professor->objectName().isEmpty())
            cadastro_professor->setObjectName(QString::fromUtf8("cadastro_professor"));
        cadastro_professor->resize(653, 571);
        logo_professor = new QLabel(cadastro_professor);
        logo_professor->setObjectName(QString::fromUtf8("logo_professor"));
        logo_professor->setGeometry(QRect(10, 10, 111, 91));
        label = new QLabel(cadastro_professor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 50, 59, 16));
        label_3 = new QLabel(cadastro_professor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 40, 16));
        lineEdit_2 = new QLineEdit(cadastro_professor);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(66, 130, 391, 21));
        label_4 = new QLabel(cadastro_professor);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 177, 127, 16));
        label_5 = new QLabel(cadastro_professor);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 220, 61, 16));
        lineEdit_3 = new QLineEdit(cadastro_professor);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(84, 219, 370, 21));
        label_6 = new QLabel(cadastro_professor);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 260, 37, 16));
        lineEdit_4 = new QLineEdit(cadastro_professor);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(60, 259, 220, 21));
        label_7 = new QLabel(cadastro_professor);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 300, 59, 16));
        fontComboBox = new QFontComboBox(cadastro_professor);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));
        fontComboBox->setGeometry(QRect(41, 294, 90, 32));
        label_8 = new QLabel(cadastro_professor);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(180, 300, 59, 16));
        comboBox = new QComboBox(cadastro_professor);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(230, 290, 91, 32));
        widget = new QWidget(cadastro_professor);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(240, 39, 168, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(cadastro_professor);

        QMetaObject::connectSlotsByName(cadastro_professor);
    } // setupUi

    void retranslateUi(QWidget *cadastro_professor)
    {
        cadastro_professor->setWindowTitle(QApplication::translate("cadastro_professor", "Form", nullptr));
        logo_professor->setText(QApplication::translate("cadastro_professor", "TextLabel", nullptr));
        label->setText(QString());
        label_3->setText(QApplication::translate("cadastro_professor", "Nome:", nullptr));
        label_4->setText(QApplication::translate("cadastro_professor", "Data de Nascimento:", nullptr));
        label_5->setText(QApplication::translate("cadastro_professor", "Endere\303\247o:", nullptr));
        label_6->setText(QApplication::translate("cadastro_professor", "Setor:", nullptr));
        label_7->setText(QApplication::translate("cadastro_professor", "UF:", nullptr));
        label_8->setText(QApplication::translate("cadastro_professor", "Cidade:", nullptr));
        label_2->setText(QApplication::translate("cadastro_professor", "CPF: ", nullptr));
        lineEdit->setInputMask(QApplication::translate("cadastro_professor", "###.###.###-##", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastro_professor: public Ui_cadastro_professor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_PROFESSOR_H
