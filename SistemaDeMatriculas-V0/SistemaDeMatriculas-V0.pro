#-------------------------------------------------
#
# Project created by QtCreator 2019-11-03T11:22:18
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
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


SOURCES += main.cpp\
	mainwindow.cpp \
	pessoa.cpp \
	aluno.cpp \
	persistaluno.cpp \
	cadastroaluno.cpp \
	consultaaluno.cpp \
    removealuno.cpp \
	listaalunos.cpp \
	matricula.cpp \
	persistmatriculas.cpp \
	criamatricula.cpp \
	consultamatricula.cpp \
	excluirmatricula.cpp \
	listartodasmatriculas.cpp

HEADERS  += mainwindow.h \
	pessoa.h \
	aluno.h \
	persistaluno.h \
	cadastroaluno.h \
	consultaaluno.h \
    removealuno.h \
	listaalunos.h \
	matricula.h \
	persistmatriculas.h \
	criamatricula.h \
	consultamatricula.h \
	excluirmatricula.h \
	listartodasmatriculas.h

FORMS += mainwindow.ui \
	cadastroaluno.ui \
	consultaaluno.ui \
    removealuno.ui \
	listaalunos.ui \
	criamatricula.ui \
	consultamatricula.ui \
	excluirmatricula.ui \
	listartodasmatriculas.ui


RESOURCES += \
		recursos.qrc

