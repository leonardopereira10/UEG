#ifndef CRIAMATRICULA_H
#define CRIAMATRICULA_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class CriaMatricula;
}
QT_END_NAMESPACE

class CriaMatricula : public QWidget {
  Q_OBJECT

public:
  CriaMatricula(QWidget *parent = 0);
  ~CriaMatricula();

private slots:
  void on_pushButton_2_clicked();

  void on_lineEdit_returnPressed();

  void on_lineEdit_2_returnPressed();

  void on_lineEdit_3_returnPressed();

  void on_lineEdit_4_returnPressed();

  void limpaTela();
private:
  Ui::CriaMatricula *ui;
};
#endif // CRIAMATRICULA_H
