/********************************************************************************
** Form generated from reading UI file 'menu_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_PRINCIPAL_H
#define UI_MENU_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu_principal)
    {
        if (Menu_principal->objectName().isEmpty())
            Menu_principal->setObjectName(QString::fromUtf8("Menu_principal"));
        Menu_principal->resize(452, 200);
        centralwidget = new QWidget(Menu_principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        logo_cadastrar = new QLabel(centralwidget);
        logo_cadastrar->setObjectName(QString::fromUtf8("logo_cadastrar"));
        logo_cadastrar->setGeometry(QRect(50, 31, 67, 61));
        logo_cadastrar->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/kisspng-computer-icons-form-5ada07b2751db6.7275354715242382584797.png")));
        logo_cadastrar->setScaledContents(true);
        btn_Cadastrar = new QPushButton(centralwidget);
        btn_Cadastrar->setObjectName(QString::fromUtf8("btn_Cadastrar"));
        btn_Cadastrar->setGeometry(QRect(20, 101, 113, 32));
        logo_consultar = new QLabel(centralwidget);
        logo_consultar->setObjectName(QString::fromUtf8("logo_consultar"));
        logo_consultar->setGeometry(QRect(190, 28, 71, 61));
        logo_consultar->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/64e14fe0195557e3f18ea3becba3169b-lupa-de-pesquisa-by-vexels.png")));
        logo_consultar->setScaledContents(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 100, 113, 32));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(338, 28, 71, 61));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/1486564399-close_81512.png")));
        label->setScaledContents(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(317, 99, 113, 32));
        Menu_principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Menu_principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 452, 22));
        Menu_principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu_principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Menu_principal->setStatusBar(statusbar);

        retranslateUi(Menu_principal);

        QMetaObject::connectSlotsByName(Menu_principal);
    } // setupUi

    void retranslateUi(QMainWindow *Menu_principal)
    {
        Menu_principal->setWindowTitle(QApplication::translate("Menu_principal", "MainWindow", nullptr));
        logo_cadastrar->setText(QString());
        btn_Cadastrar->setText(QApplication::translate("Menu_principal", "Cadastrar", nullptr));
        logo_consultar->setText(QString());
        pushButton->setText(QApplication::translate("Menu_principal", "Consultar", nullptr));
        label->setText(QString());
        pushButton_2->setText(QApplication::translate("Menu_principal", "Remover", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu_principal: public Ui_Menu_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_PRINCIPAL_H
