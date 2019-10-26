#ifndef CPF_H
#define CPF_H

#include <QString>

class Cpf
{
public:
	void setCpf(const QString &value);
    bool validCpf();

    QString getCpf() const;

protected:
	int *cpfToInt();
	bool knownValid(const int *);
	bool validDigitOne(const int *);
	bool validDigitTwo(const int *);

private:
    QString cpf;
};

#endif // CPF_H
