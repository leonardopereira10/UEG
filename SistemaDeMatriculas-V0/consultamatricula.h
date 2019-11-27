#ifndef CONSULTAMATRICULA_H
#define CONSULTAMATRICULA_H

#include <QWidget>

namespace Ui {
class ConsultaMatricula;
}

class ConsultaMatricula : public QWidget {
  Q_OBJECT

public:
  explicit ConsultaMatricula(QWidget *parent = 0);
  ~ConsultaMatricula();

private slots:
  void on_pushButton_3_clicked();

  void on_lineEdit_5_returnPressed();

private:
  Ui::ConsultaMatricula *ui;
};

#endif // CONSULTAMATRICULA_H
