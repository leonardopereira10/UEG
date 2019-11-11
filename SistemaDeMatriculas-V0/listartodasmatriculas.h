#ifndef LISTARTODASMATRICULAS_H
#define LISTARTODASMATRICULAS_H

#include <QWidget>

namespace Ui {
class ListarTodasMatriculas;
}

class ListarTodasMatriculas : public QWidget {
  Q_OBJECT

public:
  explicit ListarTodasMatriculas(QWidget *parent = nullptr);
  ~ListarTodasMatriculas();

private slots:
  void on_pushButton_clicked();

private:
  Ui::ListarTodasMatriculas *ui;
};

#endif // LISTARTODASMATRICULAS_H
