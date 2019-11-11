#ifndef EXCLUIRMATRICULA_H
#define EXCLUIRMATRICULA_H

#include <QWidget>

namespace Ui {
class ExcluirMatricula;
}

class ExcluirMatricula : public QWidget {
  Q_OBJECT

public:
  explicit ExcluirMatricula(QWidget *parent = nullptr);
  ~ExcluirMatricula();

private slots:
  void on_pushButton_4_clicked();

private:
  Ui::ExcluirMatricula *ui;
};

#endif // EXCLUIRMATRICULA_H
