/********************************************************************************
** Form generated from reading UI file 'menu_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_PRINCIPAL_H
#define UI_MENU_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu_principal
{
public:
    QWidget *centralwidget;
    QLabel *logo_cadastrar;
    QPushButton *btn_Cadastrar;
    QLabel *logo_consultar;
    QPushButton *btn_consultar;
    QLabel *logo_remover;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu_principal)
    {
        if (Menu_principal->objectName().isEmpty())
            Menu_principal->setObjectName(QStringLiteral("Menu_principal"));
        Menu_principal->resize(463, 181);
        centralwidget = new QWidget(Menu_principal);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        logo_cadastrar = new QLabel(centralwidget);
        logo_cadastrar->setObjectName(QStringLiteral("logo_cadastrar"));
        logo_cadastrar->setGeometry(QRect(50, 31, 67, 61));
        logo_cadastrar->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/Cadastrar.png")));
        logo_cadastrar->setScaledContents(true);
        btn_Cadastrar = new QPushButton(centralwidget);
        btn_Cadastrar->setObjectName(QStringLiteral("btn_Cadastrar"));
        btn_Cadastrar->setGeometry(QRect(20, 101, 113, 32));
        logo_consultar = new QLabel(centralwidget);
        logo_consultar->setObjectName(QStringLiteral("logo_consultar"));
        logo_consultar->setGeometry(QRect(190, 28, 71, 61));
        logo_consultar->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/pesquisar.png")));
        logo_consultar->setScaledContents(true);
        btn_consultar = new QPushButton(centralwidget);
        btn_consultar->setObjectName(QStringLiteral("btn_consultar"));
        btn_consultar->setGeometry(QRect(170, 100, 113, 32));
        logo_remover = new QLabel(centralwidget);
        logo_remover->setObjectName(QStringLiteral("logo_remover"));
        logo_remover->setGeometry(QRect(338, 28, 71, 61));
        logo_remover->setPixmap(QPixmap(QString::fromUtf8("../Imagens/remover.png")));
        logo_remover->setScaledContents(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(317, 99, 113, 32));
        Menu_principal->setCentralWidget(centralwidget);
        btn_Cadastrar->raise();
        btn_consultar->raise();
        pushButton_2->raise();
        logo_cadastrar->raise();
        logo_consultar->raise();
        logo_remover->raise();
        menubar = new QMenuBar(Menu_principal);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 463, 22));
        Menu_principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu_principal);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Menu_principal->setStatusBar(statusbar);

        retranslateUi(Menu_principal);

        QMetaObject::connectSlotsByName(Menu_principal);
    } // setupUi

    void retranslateUi(QMainWindow *Menu_principal)
    {
        Menu_principal->setWindowTitle(QApplication::translate("Menu_principal", "SMC - Sistema de Controle de Matr\303\255cula", Q_NULLPTR));
        logo_cadastrar->setText(QString());
        btn_Cadastrar->setText(QApplication::translate("Menu_principal", "Cadastrar", Q_NULLPTR));
        logo_consultar->setText(QString());
        btn_consultar->setText(QApplication::translate("Menu_principal", "Consultar", Q_NULLPTR));
        logo_remover->setText(QString());
        pushButton_2->setText(QApplication::translate("Menu_principal", "Remover", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Menu_principal: public Ui_Menu_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_PRINCIPAL_H
