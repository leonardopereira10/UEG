#-------------------------------------------------
#
# Project created by QtCreator 2019-10-22T00:54:07
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SistemaDeMatriculas-V0
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp \
		cadastro_professor.cpp \
		confirmacao_remover.cpp \
		consulta_professor.cpp \
		cpf.cpp \
		mainwindow.cpp \
		pessoa.cpp \
		professor.cpp \
		remove_professor.cpp


HEADERS	+= mainwindow.h \
		cadastro_professor.h \
		confirmacao_remover.h \
		consulta_professor.h \
		cpf.h \
		pessoa.h \
		professor.h \
		remove_professor.h

FORMS += mainwindow.ui \
    cadastro_professor.ui \
    confirmacao_remover.ui \
    consulta_professor.ui \
    remove_professor.ui

RESOURCES += \
    Imagens/imagens.qrc
