/********************************************************************************
** Form generated from reading UI file 'cadastroaluno.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROALUNO_H
#define UI_CADASTROALUNO_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastroAluno
{
public:
    QLabel *labelLogo;
    QLabel *labelValidCpd;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCpf;
    QLineEdit *campoCpf;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelMatricula;
    QLineEdit *campoMatricula;
    QSplitter *splitter;
    QLabel *labelAno;
    QDateEdit *dateEdit;

    void setupUi(QWidget *cadastroAluno)
    {
        if (cadastroAluno->objectName().isEmpty())
            cadastroAluno->setObjectName(QStringLiteral("cadastroAluno"));
        cadastroAluno->resize(442, 421);
        labelLogo = new QLabel(cadastroAluno);
        labelLogo->setObjectName(QStringLiteral("labelLogo"));
        labelLogo->setGeometry(QRect(0, 0, 81, 101));
        labelValidCpd = new QLabel(cadastroAluno);
        labelValidCpd->setObjectName(QStringLiteral("labelValidCpd"));
        labelValidCpd->setGeometry(QRect(280, 10, 31, 31));
        widget = new QWidget(cadastroAluno);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 10, 186, 70));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelCpf = new QLabel(widget);
        labelCpf->setObjectName(QStringLiteral("labelCpf"));

        horizontalLayout->addWidget(labelCpf);

        campoCpf = new QLineEdit(widget);
        campoCpf->setObjectName(QStringLiteral("campoCpf"));

        horizontalLayout->addWidget(campoCpf);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelMatricula = new QLabel(widget);
        labelMatricula->setObjectName(QStringLiteral("labelMatricula"));

        horizontalLayout_2->addWidget(labelMatricula);

        campoMatricula = new QLineEdit(widget);
        campoMatricula->setObjectName(QStringLiteral("campoMatricula"));
        campoMatricula->setFocusPolicy(Qt::NoFocus);
        campoMatricula->setReadOnly(true);

        horizontalLayout_2->addWidget(campoMatricula);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        splitter = new QSplitter(cadastroAluno);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(90, 80, 141, 27));
        splitter->setOrientation(Qt::Horizontal);
        labelAno = new QLabel(splitter);
        labelAno->setObjectName(QStringLiteral("labelAno"));
        splitter->addWidget(labelAno);
        dateEdit = new QDateEdit(splitter);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setMaximumDate(QDate(7999, 12, 31));
        dateEdit->setCalendarPopup(true);
        splitter->addWidget(dateEdit);

        retranslateUi(cadastroAluno);

        QMetaObject::connectSlotsByName(cadastroAluno);
    } // setupUi

    void retranslateUi(QWidget *cadastroAluno)
    {
        cadastroAluno->setWindowTitle(QApplication::translate("cadastroAluno", "Cadastro de aluno", Q_NULLPTR));
        labelLogo->setText(QApplication::translate("cadastroAluno", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/imagens/Aluno.png\" height=\"85\" width=\"85\" /></p></body></html>", Q_NULLPTR));
        labelValidCpd->setText(QString());
        labelCpf->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">CPF</span></p></body></html>", Q_NULLPTR));
        labelMatricula->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Matricula</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        campoMatricula->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        campoMatricula->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        campoMatricula->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        campoMatricula->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        campoMatricula->setText(QString());
        campoMatricula->setPlaceholderText(QString());
        labelAno->setText(QApplication::translate("cadastroAluno", "<html><head/><body><p><span style=\" font-weight:600;\">Ano</span></p></body></html>", Q_NULLPTR));
        dateEdit->setDisplayFormat(QApplication::translate("cadastroAluno", "dd/MM/yyyy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class cadastroAluno: public Ui_cadastroAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROALUNO_H
