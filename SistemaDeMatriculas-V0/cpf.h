#ifndef CPF_H
#define CPF_H

#include <QDialog>
#include <QPixmap>
#include <QMessageBox>
#include <QtDebug>

namespace Ui {
class Cpf;
}

class Cpf : public QDialog
{
    Q_OBJECT

public:
    explicit Cpf(QWidget *parent = nullptr);
    ~Cpf();
    bool validCpf();

    QString getCpf() const;
    void setCpf(const QString &value);

protected:
  int *cpfToInt();
  bool knownValid(const int *);
  bool validDigitOne(const int *);
  bool validDigitTwo(const int *);

private slots:
  void on_btn_ok_clicked();

  void on_btn_cancelar_clicked();

private:
    QString cpf;
    Ui::Cpf *ui;
};

#endif // CPF_H
