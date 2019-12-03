#include "pessoa.h"
#include "persistaluno.h"
#include <QDebug>
#include <iostream>

Pessoa::Pessoa()
{

}

Pessoa::~Pessoa()
{

}

QSqlQueryModel *Pessoa::getEstados()
{
	PersistAluno Sqlite;
	return Sqlite.getEstados();
}

QSqlQueryModel *Pessoa::getCidades(int codEstado)
{
	PersistAluno Sqlite;
	return Sqlite.getCidades(codEstado);
}

int Pessoa::getCodCidades(QString nome, int estado)
{
	PersistAluno Sqlite;
	return Sqlite.getCodCidades(nome, estado);
}

QSqlQueryModel *Pessoa::getCursos()
{
	PersistAluno Sqlite;
	return Sqlite.getCursos();
}

int Pessoa::getCodCurso(QString nome)
{
	PersistAluno Sqlite;
	return Sqlite.getCodCurso(nome);
}

bool Pessoa::validCpf(QString cpf)
{
	if (cpf.length() < 14)
		return false;
	else {
		int sumDigitOne = 0;
		int restDigitOne = 0;
		int sumDigitTwo = 0;
		int restDigitTwo = 0;
		QString tmpCpf[11];
		int vetCpf[11];

		cpf.remove('.');
		cpf.remove('-');

		// Cpf to int
		for (int i = 0; i < 11; i++) {
			tmpCpf[i] = cpf.at(i);
			vetCpf[i] = tmpCpf[i].toInt();
		}

		// CPFs inválidos conhecidos (222.222.222-22)
		for (int i = 0, x = 0; i < 11; i++) {
			if(i == 11) break;
			if (vetCpf[i] == vetCpf[i+1])
				x++;
			if (x == 10)
				return false;
		}

		// Validar 1o dígito
		for (int i = 0, f = 10; i < 9; i++) {
			sumDigitOne += (vetCpf[i] * f);
			f--;
		}
		restDigitOne = ((sumDigitOne*10) % 11);
		if (restDigitOne == 10)
			restDigitOne = 0; // Se for igual a 10 considera 0

		// Validar 2o dígito
		for (int i = 0, f = 11; i < 10; i++) {
			sumDigitTwo += (vetCpf[i] * f);
			f--;
		}
		restDigitTwo = ((sumDigitTwo * 10) % 11);
		if (restDigitTwo == 10)
			restDigitTwo = 0; // Se for igual a 10 considera 0

		// Validar dígitos
		if ((restDigitOne == vetCpf[9]) && (restDigitTwo == vetCpf[10])) {
			return true;
		}
		else {
			return false;
		}
	}
}

bool Pessoa::analisaPessoa(QString cpf)
{
	PersistAluno Sqlite;
	return Sqlite.analisaPessoa(cpf);
}
