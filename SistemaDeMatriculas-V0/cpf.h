#ifndef CPF_H
#define CPF_H

#include <QMainWindow>

class Cpf
{
  public:
    void setCpf(const QString &value);

    bool validCpf();

  protected:
    int *cpfToInt();
    bool knownValid(const int *);
    bool validDigitOne(const int *);
    bool validDigitTwo(const int *);

  private:
    QString cpf;
};

#endif // CPF_H
